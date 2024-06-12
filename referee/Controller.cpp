//
// Created by Stephanie Georges on 1/26/24.
//

#include <referee/Controller.h>
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        // report version
        std::cout << argv[0] << " Version " << referee_VERSION_MAJOR << "."
                  << referee_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }
    return 0;
}

// todo: make interface for file/stage checker
// todo: make file names more intuitive and less long

/***
 * @brief Finds the most optimal overlap between reads
 * @param args
 */
void overlap(char* args[]) {
    std::cout << "overlap" << std::endl;

    // todo: what is the diff b/w OverlapSam and OverlapHash and OverlapRegion2 in Overlap.shorter.sh?

    // Overlap multiple things: Sam file, hash file, fastqD file

    // Make FASTQ: Annotate the overlaps to create {}.overlap.hashcount.fastq [#0]

    // Make BAM from FASTQ: Align contigs with bwa mem, sort + index resultant bam file
    // This generates {}.overlap.hashcount.fastq.bam [#1]
    // NOTE: this is also the file that has the contigs which SG used for pileup
    // This file is used to 1. create a bed file with sites and 2. in the interpret step

    // Run mobile element alignment check with bwa mem on #0

    // Extract sequences from the human reference for the sites listed in #1 to create a reference fastq [#3]
    // This generates {}.overlap.assembly.hash.fastq.ref.fasta [#2]

    // todo: a little more understanding needed here - do we have more hashes now because longer contigs than og reads? are we keeping the reads from the overlap hash, or the original hash?
    // Create a jelly fish hash from #0 aka proband hash
    // Filter and count kmers from the original proband hash based on the ones that are in the proband overlap/contig hash + coverage min/max

    // Create a jelly fish hash from #3 aka reference hash
    // Filter and count kmers from the original proband hash based on the ones that are in the ref overlap/contig hash + coverage min/max

    // Create a jelly fish hash from the parent/control version of #0
    // Filter and count kmers from the original parent hash based on the ones that are in the parent overlap/contig hash + coverage min/max
}

// todo: put MobRead constructor + functions in its own file

void interpret(char* args[]) {
    std::cout << "interpret" << std::endl;

    // Prior to calling RUFUSinterpret:

        // perl $AddSA: Adds SA count to each line
        // grep -v ChrUn: Filters any lines that are on unassembled chromosomes

    // Parameters for interpret:
        // -mob: {}.overlap.hashcount.fastq.MOB.sam
        // -mod: {}.Jhash.histo.7.7.dist (histogram of the Jhash)
        // -mq: 10 (minimum mapping quality)
        // -r: humanRef (ref file)
        // -hf: {}.{}k_{}c{MinCov}.HashList (hash file from model)
        // -o: {}.overlap.hashcount.fastq.bam (output file)
        // -m: max allele size (default 1000)
        // -c: {}.overlap.asembly.hash.fastq.$parent (control hash file)
        // -cR: {}.overlap.asembly.hash.fastq.Ref.$parent (control hashes in ref file)
        // -s: {}.overlap.asembly.hash.fastq.sample (sample hash file)
        // -sR: {}.overlap.asembly.hash.fastq.Ref.sample (sample hashes in ref file)
        // -e: {}.ref.RepRefHash (exclude hash file)

    // Do some stuff with dist file (distributions from model stage?)

    // Parse hash files into data structures
        // Does a bit translation for kmer string here - why?
}

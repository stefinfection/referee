# Referee

A reference-free variant calling tool for short and long-read sequencing data. And 
adaptation of the [RUFUS](https://github.com/marthlab/RUFUS) project developed by Andrew Farrell.

## Description

An in-depth paragraph about your project and overview of use.

## Getting Started

### Dependencies

Referee requires:
* [Jellyfish]() - A fast, memory-efficient counting tool for k-mers.
* [BWA]() - A software package for mapping low-divergent sequences against a large reference genome.
* [HTSLIB]() - A C library for reading/writing high-throughput sequencing data.
* [Samtools]() - Utilities for the Sequence Alignment/Map (SAM) format.
* [OpenMP]() - A shared memory multiprocessing API for C/C++.

### Installing

```bash
git clone https://github.com/stefinfection/referee.git
cd referee
mkdir build
cd build
mkdir bin lib
cmake ..
cmake --build .
```

### Executing program
```
./{path_to_referee}/build/bin/referee
```

## Help

[Email](mailto:stephanie.georges@utah.edu) with questions.
```
./{path_to_referee}/build/bin/referee --help
```

## Authors
[Stephanie Georges](https://www.linkedin.com/in/stephanie-georges-19388784/)
in the [Marth Lab](https://marthlab.org/)

## Version History

* 1.0
    * Initial Release

## License

This project is licensed under the MIT License - see the LICENSE.md file for details

## Acknowledgments

This work was conceived by and based on many years of work by [Andrew Farrell](https://www.linkedin.com/in/andrew-farrell-14634817b/). 
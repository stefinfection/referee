//
// Created by Stephanie Georges on 1/26/24.
//

#include "src/Controller.h"
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

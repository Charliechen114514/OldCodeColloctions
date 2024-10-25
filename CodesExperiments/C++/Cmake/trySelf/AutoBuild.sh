rm -r ./build/* # remove all build files and caches
cd build        # switch to the build dir and cmake it
cmake ..
make
./myMath        # run executable file

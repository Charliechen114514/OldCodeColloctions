#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
using namespace cv;
std::string path = "/home/charliechen114514/LocalGitProject/CodesExperiments/C++/Cmake_5/desktop2.png"; 


int main()
{
    Mat pic = imread(path);
    if(pic.empty())
    {
        std::cerr   << "Can not find the target pic path:> " \
                    << path << "\n";
        return -1;
    }
    std::cout << "Try to show the image:> " << path; 
    imshow("Pic", pic);
    waitKey(0);
    return 0;
}

#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>

using namespace std;

int main()
{
    std::string greeting = "Hello, World!";
    std::cout << greeting << std::endl;
    Capture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Error: Could not open camera." << std::endl;
        return -1;
    }
    cv::Mat frame;
    while (true) {
        cap >> frame;
        if (frame.empty()) {
            std::cerr << "Error: Could not read frame." << std::endl;
            break;
        }
        cv::imshow("Camera", frame);
        if (cv::waitKey(30) >= 0) break;
    }
    return 0;
}
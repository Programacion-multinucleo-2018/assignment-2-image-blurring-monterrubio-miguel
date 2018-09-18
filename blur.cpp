//compile with g++ blur.cpp -lopencv_core -lopencv_highgui -lopencv_imgproc
#include <iostream>
#include <cstdlib>
#include <chrono>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

void blur(const cv::Mat& input, cv::Mat& output)
{
    std::cout << std::endl << "Input image step: " << input.step << " rows: " << input.rows << " columns: " << input.cols << std::endl;
    for (int i = 0; i < input.cols; i++)
    {
    	for (int j = 0; j < input.rows; j++)
    	{
    		int r = 0;
    		int g = 0;
    		int b = 0;
    		int n = 0;

    		for (int k = 0; i < 5; i++)
    		{
    			for (int l = 0; i < 5; i++)
    			{
    				
    			}
    		}
    	}
    }
}

int main()
{
	std::string image = "image.jpg";

	cv::Mat input = cv::imread(imagePath, CV_LOAD_IMAGE_COLOR);
	cv::Mat output(input.rows, input.cols, input.type());

    auto stopwatchStart =  std::chrono::high_resolution_clock::now();
    blur(input, output);
    auto stopwatchStop =  std::chrono::high_resolution_clock::now();

    std::chrono::duration<float, std::milli> duration_ms = stopwatchStop - stopwatchStart;

    std::cout << std::endl << "Image blur done in: " << duration_ms.count() << " milliseconds" << std::endl;

    namedWindow("Input", cv::WINDOW_NORMAL);
    namedWindow("Output", cv::WINDOW_NORMAL);

    imshow("Input", input);
    imshow("Output", output);

    cv::waitKey();

	return 0;
}
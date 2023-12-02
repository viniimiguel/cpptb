#ifndef HE_H_INCLUDE
#define HE_H_INCLUDE

#include <iostream>
#include <Windows.h>
#include <opencv2/opencv.hpp>

class Heal {
public:
	int x;
	int y;
	void getScreen();
	void mimg();
private:
};

void Heal::getScreen() {
	int largura = GetSystemMetrics(SM_CXSCREEN);
	int altura = GetSystemMetrics(SM_CYSCREEN);

	x = largura;
	y = altura;
}

void Heal::mimg() {
	cv::Mat img = cv::imread("D:/tbt/bt/src/imgs/a.png");
	if (!img.empty()) {
		cv::imshow("Window", img);
		cv::waitKey(0);
	}
	else {
		std::cerr << "imagem nao encontrada" << std::endl;
	}
}



#endif

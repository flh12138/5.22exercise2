// dip-class-demos.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <opencv.hpp>
#include "funtion.h"

using namespace cv;
using namespace std;

int main()
{
	//��ʼ��ʱ
	double start = static_cast<double>(cvGetTickCount());

	//��demo��֤����ʾ����Ƶ�е����ػҶ�ֵ�任�Ƿ�ʸ�˹�ֲ�
	//verifyGaussian();


	//bgSub_demo();


	bgSubGaussian_demo();

	//������ʱ
	double time = ((double)cvGetTickCount() - start) / cvGetTickFrequency();
	//��ʾʱ��
	cout << "processing time:" << time / 1000 << "ms" << endl;

	//�ȴ�������Ӧ�����������������
	system("pause");
	return 0;
}
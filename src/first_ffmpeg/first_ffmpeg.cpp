#include <iostream>
extern "C"
{
#include <libavcodec/avcodec.h>
}
using namespace std;
//Ԥ����ָ����
#pragma comment(lib,"avcodec.lib")

int main(int argc, char* argv[])
{
	cout << "first ffmpeg" << endl;
	cout << avcodec_configuration() << endl;
	return 0;
}
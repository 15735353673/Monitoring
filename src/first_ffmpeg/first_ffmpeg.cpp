#include <iostream>
extern "C"
{
#include <libavcodec/avcodec.h>
}
using namespace std;
//预处理指令导入库
#pragma comment(lib,"avcodec.lib")

int main(int argc, char* argv[])
{
	cout << "first ffmpeg" << endl;
	cout << avcodec_configuration() << endl;
	return 0;
}
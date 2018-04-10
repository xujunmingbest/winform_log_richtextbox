#include "mainWnd.h"


using namespace 富文本框多样式日志;
[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew mainWnd);

}
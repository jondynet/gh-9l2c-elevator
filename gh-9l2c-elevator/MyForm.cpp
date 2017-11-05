#include "MyForm.h"

using namespace gh9l2celevator;

[STAThread]

int main(array < System::String^ > ^args) {
	Application::EnableVisualStyles(); // 启用可视化界面
	Application::Run(gcnew MyForm());
	return 0;
}
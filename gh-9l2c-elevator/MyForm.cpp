#include "MyForm.h"

using namespace gh9l2celevator;

[STAThread]

int main(array < System::String^ > ^args) {
	Application::EnableVisualStyles(); // ���ÿ��ӻ�����
	Application::Run(gcnew MyForm());
	return 0;
}
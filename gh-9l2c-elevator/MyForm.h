#pragma once
#include<math.h> 

namespace gh9l2celevator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_up_4;
	protected:
	private: System::Windows::Forms::Button^  btn_up_3;
	private: System::Windows::Forms::GroupBox^  floor5;
	private: System::Windows::Forms::Button^  btn_up_5;
	private: System::Windows::Forms::Button^  btn_down_5;
	private: System::Windows::Forms::Button^  btn_down_3;
	private: System::Windows::Forms::Button^  btn_up_2;
	private: System::Windows::Forms::GroupBox^  floor6;
	private: System::Windows::Forms::Button^  btn_up_6;
	private: System::Windows::Forms::Button^  btn_down_6;
	private: System::Windows::Forms::Button^  btn_down_2;
	private: System::Windows::Forms::Button^  btn_down_1;
	private: System::Windows::Forms::GroupBox^  floor7;
	private: System::Windows::Forms::Button^  btn_up_7;
	private: System::Windows::Forms::Button^  btn_down_7;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  btn_2_1;
	private: System::Windows::Forms::Button^  btn_2_3;
	private: System::Windows::Forms::Button^  btn_2_2;
	private: System::Windows::Forms::Button^  btn_2_5;
	private: System::Windows::Forms::Button^  btn_2_4;
	private: System::Windows::Forms::Button^  btn_2_7;
	private: System::Windows::Forms::Button^  btn_2_6;
	private: System::Windows::Forms::Button^  btn_2_9;
	private: System::Windows::Forms::Button^  btn_2_8;
	private: System::Windows::Forms::GroupBox^  floor8;
	private: System::Windows::Forms::Button^  btn_up_8;
	private: System::Windows::Forms::Button^  btn_down_8;
	private: System::Windows::Forms::GroupBox^  floor9;
	private: System::Windows::Forms::Button^  btn_up_9;
	private: System::Windows::Forms::Label^  dt1floor;

	private: System::Windows::Forms::Label^  dt1status;
	private: System::Windows::Forms::Label^  dt1fx;
	private: System::Windows::Forms::Timer^  dt1gm;
	private: System::Windows::Forms::Label^  dt2floor;
	private: System::Windows::Forms::Label^  dt2status;
	private: System::Windows::Forms::Button^  btn_down_4;
	private: System::Windows::Forms::Timer^  dt2gm;
	private: System::Windows::Forms::GroupBox^  floor4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btn_1_1;
	private: System::Windows::Forms::Button^  btn_1_3;
	private: System::Windows::Forms::Button^  btn_1_2;
	private: System::Windows::Forms::Button^  btn_1_5;
	private: System::Windows::Forms::Button^  btn_1_4;
	private: System::Windows::Forms::Button^  btn_1_7;
	private: System::Windows::Forms::Button^  btn_1_6;
	private: System::Windows::Forms::Button^  btn_1_9;
	private: System::Windows::Forms::Button^  btn_1_8;
	private: System::Windows::Forms::PictureBox^  dt2;
	private: System::Windows::Forms::PictureBox^  dt1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  floor3;
	private: System::Windows::Forms::GroupBox^  floor2;
	private: System::Windows::Forms::GroupBox^  floor1;
	private: System::Windows::Forms::Label^  dt2fx;
	private: System::Windows::Forms::TextBox^  textBox1;

	protected:


























































	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_up_4 = (gcnew System::Windows::Forms::Button());
			this->btn_up_3 = (gcnew System::Windows::Forms::Button());
			this->floor5 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_up_5 = (gcnew System::Windows::Forms::Button());
			this->btn_down_5 = (gcnew System::Windows::Forms::Button());
			this->btn_down_3 = (gcnew System::Windows::Forms::Button());
			this->btn_up_2 = (gcnew System::Windows::Forms::Button());
			this->floor6 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_up_6 = (gcnew System::Windows::Forms::Button());
			this->btn_down_6 = (gcnew System::Windows::Forms::Button());
			this->btn_down_2 = (gcnew System::Windows::Forms::Button());
			this->btn_down_1 = (gcnew System::Windows::Forms::Button());
			this->floor7 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_up_7 = (gcnew System::Windows::Forms::Button());
			this->btn_down_7 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_2_1 = (gcnew System::Windows::Forms::Button());
			this->btn_2_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2_2 = (gcnew System::Windows::Forms::Button());
			this->btn_2_5 = (gcnew System::Windows::Forms::Button());
			this->btn_2_4 = (gcnew System::Windows::Forms::Button());
			this->btn_2_7 = (gcnew System::Windows::Forms::Button());
			this->btn_2_6 = (gcnew System::Windows::Forms::Button());
			this->btn_2_9 = (gcnew System::Windows::Forms::Button());
			this->btn_2_8 = (gcnew System::Windows::Forms::Button());
			this->floor8 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_up_8 = (gcnew System::Windows::Forms::Button());
			this->btn_down_8 = (gcnew System::Windows::Forms::Button());
			this->floor9 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_up_9 = (gcnew System::Windows::Forms::Button());
			this->dt1floor = (gcnew System::Windows::Forms::Label());
			this->dt1status = (gcnew System::Windows::Forms::Label());
			this->dt1fx = (gcnew System::Windows::Forms::Label());
			this->dt1gm = (gcnew System::Windows::Forms::Timer(this->components));
			this->dt2floor = (gcnew System::Windows::Forms::Label());
			this->dt2status = (gcnew System::Windows::Forms::Label());
			this->btn_down_4 = (gcnew System::Windows::Forms::Button());
			this->dt2gm = (gcnew System::Windows::Forms::Timer(this->components));
			this->floor4 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_1_1 = (gcnew System::Windows::Forms::Button());
			this->btn_1_3 = (gcnew System::Windows::Forms::Button());
			this->btn_1_2 = (gcnew System::Windows::Forms::Button());
			this->btn_1_5 = (gcnew System::Windows::Forms::Button());
			this->btn_1_4 = (gcnew System::Windows::Forms::Button());
			this->btn_1_7 = (gcnew System::Windows::Forms::Button());
			this->btn_1_6 = (gcnew System::Windows::Forms::Button());
			this->btn_1_9 = (gcnew System::Windows::Forms::Button());
			this->btn_1_8 = (gcnew System::Windows::Forms::Button());
			this->dt2 = (gcnew System::Windows::Forms::PictureBox());
			this->dt1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->floor3 = (gcnew System::Windows::Forms::GroupBox());
			this->floor2 = (gcnew System::Windows::Forms::GroupBox());
			this->floor1 = (gcnew System::Windows::Forms::GroupBox());
			this->dt2fx = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->floor5->SuspendLayout();
			this->floor6->SuspendLayout();
			this->floor7->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->floor8->SuspendLayout();
			this->floor9->SuspendLayout();
			this->floor4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt1))->BeginInit();
			this->panel1->SuspendLayout();
			this->floor3->SuspendLayout();
			this->floor2->SuspendLayout();
			this->floor1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_up_4
			// 
			this->btn_up_4->BackColor = System::Drawing::Color::White;
			this->btn_up_4->Location = System::Drawing::Point(75, 30);
			this->btn_up_4->Name = L"btn_up_4";
			this->btn_up_4->Size = System::Drawing::Size(75, 23);
			this->btn_up_4->TabIndex = 1;
			this->btn_up_4->Text = L"上";
			this->btn_up_4->UseVisualStyleBackColor = false;
			this->btn_up_4->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_up_3
			// 
			this->btn_up_3->BackColor = System::Drawing::Color::White;
			this->btn_up_3->Location = System::Drawing::Point(75, 29);
			this->btn_up_3->Name = L"btn_up_3";
			this->btn_up_3->Size = System::Drawing::Size(75, 23);
			this->btn_up_3->TabIndex = 1;
			this->btn_up_3->Text = L"上";
			this->btn_up_3->UseVisualStyleBackColor = false;
			this->btn_up_3->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// floor5
			// 
			this->floor5->Controls->Add(this->btn_up_5);
			this->floor5->Controls->Add(this->btn_down_5);
			this->floor5->Location = System::Drawing::Point(12, 320);
			this->floor5->Name = L"floor5";
			this->floor5->Size = System::Drawing::Size(345, 70);
			this->floor5->TabIndex = 27;
			this->floor5->TabStop = false;
			this->floor5->Text = L"3楼";
			// 
			// btn_up_5
			// 
			this->btn_up_5->BackColor = System::Drawing::Color::White;
			this->btn_up_5->Location = System::Drawing::Point(75, 26);
			this->btn_up_5->Name = L"btn_up_5";
			this->btn_up_5->Size = System::Drawing::Size(75, 23);
			this->btn_up_5->TabIndex = 1;
			this->btn_up_5->Text = L"上";
			this->btn_up_5->UseVisualStyleBackColor = false;
			this->btn_up_5->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_down_5
			// 
			this->btn_down_5->BackColor = System::Drawing::Color::White;
			this->btn_down_5->Location = System::Drawing::Point(175, 26);
			this->btn_down_5->Name = L"btn_down_5";
			this->btn_down_5->Size = System::Drawing::Size(75, 23);
			this->btn_down_5->TabIndex = 0;
			this->btn_down_5->Text = L"下";
			this->btn_down_5->UseVisualStyleBackColor = false;
			this->btn_down_5->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_down_3
			// 
			this->btn_down_3->BackColor = System::Drawing::Color::White;
			this->btn_down_3->Location = System::Drawing::Point(175, 29);
			this->btn_down_3->Name = L"btn_down_3";
			this->btn_down_3->Size = System::Drawing::Size(75, 23);
			this->btn_down_3->TabIndex = 0;
			this->btn_down_3->Text = L"下";
			this->btn_down_3->UseVisualStyleBackColor = false;
			this->btn_down_3->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_up_2
			// 
			this->btn_up_2->BackColor = System::Drawing::Color::White;
			this->btn_up_2->Location = System::Drawing::Point(75, 29);
			this->btn_up_2->Name = L"btn_up_2";
			this->btn_up_2->Size = System::Drawing::Size(75, 23);
			this->btn_up_2->TabIndex = 1;
			this->btn_up_2->Text = L"上";
			this->btn_up_2->UseVisualStyleBackColor = false;
			this->btn_up_2->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// floor6
			// 
			this->floor6->Controls->Add(this->btn_up_6);
			this->floor6->Controls->Add(this->btn_down_6);
			this->floor6->Location = System::Drawing::Point(12, 244);
			this->floor6->Name = L"floor6";
			this->floor6->Size = System::Drawing::Size(345, 70);
			this->floor6->TabIndex = 32;
			this->floor6->TabStop = false;
			this->floor6->Text = L"4楼";
			// 
			// btn_up_6
			// 
			this->btn_up_6->BackColor = System::Drawing::Color::White;
			this->btn_up_6->Location = System::Drawing::Point(75, 26);
			this->btn_up_6->Name = L"btn_up_6";
			this->btn_up_6->Size = System::Drawing::Size(75, 23);
			this->btn_up_6->TabIndex = 1;
			this->btn_up_6->Text = L"上";
			this->btn_up_6->UseVisualStyleBackColor = false;
			this->btn_up_6->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_down_6
			// 
			this->btn_down_6->BackColor = System::Drawing::Color::White;
			this->btn_down_6->Location = System::Drawing::Point(175, 26);
			this->btn_down_6->Name = L"btn_down_6";
			this->btn_down_6->Size = System::Drawing::Size(75, 23);
			this->btn_down_6->TabIndex = 0;
			this->btn_down_6->Text = L"下";
			this->btn_down_6->UseVisualStyleBackColor = false;
			this->btn_down_6->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_down_2
			// 
			this->btn_down_2->BackColor = System::Drawing::Color::White;
			this->btn_down_2->Location = System::Drawing::Point(175, 29);
			this->btn_down_2->Name = L"btn_down_2";
			this->btn_down_2->Size = System::Drawing::Size(75, 23);
			this->btn_down_2->TabIndex = 0;
			this->btn_down_2->Text = L"下";
			this->btn_down_2->UseVisualStyleBackColor = false;
			this->btn_down_2->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_down_1
			// 
			this->btn_down_1->BackColor = System::Drawing::Color::White;
			this->btn_down_1->Location = System::Drawing::Point(75, 29);
			this->btn_down_1->Name = L"btn_down_1";
			this->btn_down_1->Size = System::Drawing::Size(175, 23);
			this->btn_down_1->TabIndex = 0;
			this->btn_down_1->Text = L"上";
			this->btn_down_1->UseVisualStyleBackColor = false;
			this->btn_down_1->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// floor7
			// 
			this->floor7->Controls->Add(this->btn_up_7);
			this->floor7->Controls->Add(this->btn_down_7);
			this->floor7->Location = System::Drawing::Point(12, 168);
			this->floor7->Name = L"floor7";
			this->floor7->Size = System::Drawing::Size(345, 70);
			this->floor7->TabIndex = 31;
			this->floor7->TabStop = false;
			this->floor7->Text = L"5楼";
			// 
			// btn_up_7
			// 
			this->btn_up_7->BackColor = System::Drawing::Color::White;
			this->btn_up_7->Location = System::Drawing::Point(75, 29);
			this->btn_up_7->Name = L"btn_up_7";
			this->btn_up_7->Size = System::Drawing::Size(75, 23);
			this->btn_up_7->TabIndex = 1;
			this->btn_up_7->Text = L"上";
			this->btn_up_7->UseVisualStyleBackColor = false;
			this->btn_up_7->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_down_7
			// 
			this->btn_down_7->BackColor = System::Drawing::Color::White;
			this->btn_down_7->Location = System::Drawing::Point(175, 29);
			this->btn_down_7->Name = L"btn_down_7";
			this->btn_down_7->Size = System::Drawing::Size(75, 23);
			this->btn_down_7->TabIndex = 0;
			this->btn_down_7->Text = L"下";
			this->btn_down_7->UseVisualStyleBackColor = false;
			this->btn_down_7->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btn_2_1);
			this->groupBox2->Controls->Add(this->btn_2_3);
			this->groupBox2->Controls->Add(this->btn_2_2);
			this->groupBox2->Controls->Add(this->btn_2_5);
			this->groupBox2->Controls->Add(this->btn_2_4);
			this->groupBox2->Controls->Add(this->btn_2_7);
			this->groupBox2->Controls->Add(this->btn_2_6);
			this->groupBox2->Controls->Add(this->btn_2_9);
			this->groupBox2->Controls->Add(this->btn_2_8);
			this->groupBox2->Location = System::Drawing::Point(886, 22);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(116, 347);
			this->groupBox2->TabIndex = 29;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"电梯内按钮";
			// 
			// btn_2_1
			// 
			this->btn_2_1->BackColor = System::Drawing::Color::White;
			this->btn_2_1->Location = System::Drawing::Point(19, 277);
			this->btn_2_1->Name = L"btn_2_1";
			this->btn_2_1->Size = System::Drawing::Size(80, 24);
			this->btn_2_1->TabIndex = 15;
			this->btn_2_1->Text = L"B2";
			this->btn_2_1->UseVisualStyleBackColor = false;
			this->btn_2_1->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_2_3
			// 
			this->btn_2_3->BackColor = System::Drawing::Color::White;
			this->btn_2_3->Location = System::Drawing::Point(19, 217);
			this->btn_2_3->Name = L"btn_2_3";
			this->btn_2_3->Size = System::Drawing::Size(80, 24);
			this->btn_2_3->TabIndex = 14;
			this->btn_2_3->Text = L"1";
			this->btn_2_3->UseVisualStyleBackColor = false;
			this->btn_2_3->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_2_2
			// 
			this->btn_2_2->BackColor = System::Drawing::Color::White;
			this->btn_2_2->Location = System::Drawing::Point(19, 247);
			this->btn_2_2->Name = L"btn_2_2";
			this->btn_2_2->Size = System::Drawing::Size(80, 24);
			this->btn_2_2->TabIndex = 13;
			this->btn_2_2->Text = L"B1";
			this->btn_2_2->UseVisualStyleBackColor = false;
			this->btn_2_2->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_2_5
			// 
			this->btn_2_5->BackColor = System::Drawing::Color::White;
			this->btn_2_5->Location = System::Drawing::Point(19, 157);
			this->btn_2_5->Name = L"btn_2_5";
			this->btn_2_5->Size = System::Drawing::Size(80, 24);
			this->btn_2_5->TabIndex = 12;
			this->btn_2_5->Text = L"3";
			this->btn_2_5->UseVisualStyleBackColor = false;
			this->btn_2_5->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_2_4
			// 
			this->btn_2_4->BackColor = System::Drawing::Color::White;
			this->btn_2_4->Location = System::Drawing::Point(19, 187);
			this->btn_2_4->Name = L"btn_2_4";
			this->btn_2_4->Size = System::Drawing::Size(80, 24);
			this->btn_2_4->TabIndex = 11;
			this->btn_2_4->Text = L"2";
			this->btn_2_4->UseVisualStyleBackColor = false;
			this->btn_2_4->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_2_7
			// 
			this->btn_2_7->BackColor = System::Drawing::Color::White;
			this->btn_2_7->Location = System::Drawing::Point(19, 97);
			this->btn_2_7->Name = L"btn_2_7";
			this->btn_2_7->Size = System::Drawing::Size(80, 24);
			this->btn_2_7->TabIndex = 10;
			this->btn_2_7->Text = L"5";
			this->btn_2_7->UseVisualStyleBackColor = false;
			this->btn_2_7->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_2_6
			// 
			this->btn_2_6->BackColor = System::Drawing::Color::White;
			this->btn_2_6->Location = System::Drawing::Point(19, 127);
			this->btn_2_6->Name = L"btn_2_6";
			this->btn_2_6->Size = System::Drawing::Size(80, 24);
			this->btn_2_6->TabIndex = 9;
			this->btn_2_6->Text = L"4";
			this->btn_2_6->UseVisualStyleBackColor = false;
			this->btn_2_6->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_2_9
			// 
			this->btn_2_9->BackColor = System::Drawing::Color::White;
			this->btn_2_9->Location = System::Drawing::Point(19, 37);
			this->btn_2_9->Name = L"btn_2_9";
			this->btn_2_9->Size = System::Drawing::Size(80, 24);
			this->btn_2_9->TabIndex = 8;
			this->btn_2_9->Text = L"7";
			this->btn_2_9->UseVisualStyleBackColor = false;
			this->btn_2_9->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_2_8
			// 
			this->btn_2_8->BackColor = System::Drawing::Color::White;
			this->btn_2_8->Location = System::Drawing::Point(19, 67);
			this->btn_2_8->Name = L"btn_2_8";
			this->btn_2_8->Size = System::Drawing::Size(80, 24);
			this->btn_2_8->TabIndex = 7;
			this->btn_2_8->Text = L"6";
			this->btn_2_8->UseVisualStyleBackColor = false;
			this->btn_2_8->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// floor8
			// 
			this->floor8->Controls->Add(this->btn_up_8);
			this->floor8->Controls->Add(this->btn_down_8);
			this->floor8->Location = System::Drawing::Point(12, 92);
			this->floor8->Name = L"floor8";
			this->floor8->Size = System::Drawing::Size(345, 70);
			this->floor8->TabIndex = 30;
			this->floor8->TabStop = false;
			this->floor8->Text = L"6楼";
			// 
			// btn_up_8
			// 
			this->btn_up_8->BackColor = System::Drawing::Color::White;
			this->btn_up_8->Location = System::Drawing::Point(75, 27);
			this->btn_up_8->Name = L"btn_up_8";
			this->btn_up_8->Size = System::Drawing::Size(75, 23);
			this->btn_up_8->TabIndex = 1;
			this->btn_up_8->Text = L"上";
			this->btn_up_8->UseVisualStyleBackColor = false;
			this->btn_up_8->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_down_8
			// 
			this->btn_down_8->BackColor = System::Drawing::Color::White;
			this->btn_down_8->Location = System::Drawing::Point(175, 28);
			this->btn_down_8->Name = L"btn_down_8";
			this->btn_down_8->Size = System::Drawing::Size(75, 23);
			this->btn_down_8->TabIndex = 0;
			this->btn_down_8->Text = L"下";
			this->btn_down_8->UseVisualStyleBackColor = false;
			this->btn_down_8->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// floor9
			// 
			this->floor9->Controls->Add(this->btn_up_9);
			this->floor9->Location = System::Drawing::Point(12, 12);
			this->floor9->Name = L"floor9";
			this->floor9->Size = System::Drawing::Size(345, 70);
			this->floor9->TabIndex = 33;
			this->floor9->TabStop = false;
			this->floor9->Text = L"7楼";
			// 
			// btn_up_9
			// 
			this->btn_up_9->BackColor = System::Drawing::Color::White;
			this->btn_up_9->Location = System::Drawing::Point(75, 27);
			this->btn_up_9->Name = L"btn_up_9";
			this->btn_up_9->Size = System::Drawing::Size(175, 23);
			this->btn_up_9->TabIndex = 1;
			this->btn_up_9->Text = L"下";
			this->btn_up_9->UseVisualStyleBackColor = false;
			this->btn_up_9->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// dt1floor
			// 
			this->dt1floor->BackColor = System::Drawing::Color::Black;
			this->dt1floor->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dt1floor->ForeColor = System::Drawing::Color::Lime;
			this->dt1floor->Location = System::Drawing::Point(120, 490);
			this->dt1floor->Name = L"dt1floor";
			this->dt1floor->Size = System::Drawing::Size(118, 67);
			this->dt1floor->TabIndex = 33;
			this->dt1floor->Text = L"label1";
			this->dt1floor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dt1status
			// 
			this->dt1status->AutoSize = true;
			this->dt1status->Location = System::Drawing::Point(160, 437);
			this->dt1status->Name = L"dt1status";
			this->dt1status->Size = System::Drawing::Size(35, 12);
			this->dt1status->TabIndex = 31;
			this->dt1status->Text = L"close";
			// 
			// dt1fx
			// 
			this->dt1fx->AutoSize = true;
			this->dt1fx->Location = System::Drawing::Point(160, 412);
			this->dt1fx->Name = L"dt1fx";
			this->dt1fx->Size = System::Drawing::Size(29, 12);
			this->dt1fx->TabIndex = 30;
			this->dt1fx->Text = L"stop";
			// 
			// dt1gm
			// 
			this->dt1gm->Interval = 2000;
			this->dt1gm->Tick += gcnew System::EventHandler(this, &MyForm::dt1gm_Tick);
			// 
			// dt2floor
			// 
			this->dt2floor->BackColor = System::Drawing::Color::Black;
			this->dt2floor->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->dt2floor->ForeColor = System::Drawing::Color::Lime;
			this->dt2floor->Location = System::Drawing::Point(884, 490);
			this->dt2floor->Name = L"dt2floor";
			this->dt2floor->Size = System::Drawing::Size(118, 67);
			this->dt2floor->TabIndex = 36;
			this->dt2floor->Text = L"label2";
			this->dt2floor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dt2status
			// 
			this->dt2status->AutoSize = true;
			this->dt2status->Location = System::Drawing::Point(929, 437);
			this->dt2status->Name = L"dt2status";
			this->dt2status->Size = System::Drawing::Size(35, 12);
			this->dt2status->TabIndex = 35;
			this->dt2status->Text = L"close";
			// 
			// btn_down_4
			// 
			this->btn_down_4->BackColor = System::Drawing::Color::White;
			this->btn_down_4->Location = System::Drawing::Point(175, 30);
			this->btn_down_4->Name = L"btn_down_4";
			this->btn_down_4->Size = System::Drawing::Size(75, 23);
			this->btn_down_4->TabIndex = 0;
			this->btn_down_4->Text = L"下";
			this->btn_down_4->UseVisualStyleBackColor = false;
			this->btn_down_4->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// dt2gm
			// 
			this->dt2gm->Interval = 2000;
			this->dt2gm->Tick += gcnew System::EventHandler(this, &MyForm::dt2gm_Tick);
			// 
			// floor4
			// 
			this->floor4->Controls->Add(this->btn_up_4);
			this->floor4->Controls->Add(this->btn_down_4);
			this->floor4->Location = System::Drawing::Point(12, 396);
			this->floor4->Name = L"floor4";
			this->floor4->Size = System::Drawing::Size(345, 70);
			this->floor4->TabIndex = 28;
			this->floor4->TabStop = false;
			this->floor4->Text = L"2楼";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1101, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 24;
			this->button1->Text = L"复位";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_1_1);
			this->groupBox1->Controls->Add(this->btn_1_3);
			this->groupBox1->Controls->Add(this->btn_1_2);
			this->groupBox1->Controls->Add(this->btn_1_5);
			this->groupBox1->Controls->Add(this->btn_1_4);
			this->groupBox1->Controls->Add(this->btn_1_7);
			this->groupBox1->Controls->Add(this->btn_1_6);
			this->groupBox1->Controls->Add(this->btn_1_9);
			this->groupBox1->Controls->Add(this->btn_1_8);
			this->groupBox1->Location = System::Drawing::Point(122, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(116, 347);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"电梯内按钮";
			// 
			// btn_1_1
			// 
			this->btn_1_1->BackColor = System::Drawing::Color::White;
			this->btn_1_1->Location = System::Drawing::Point(19, 277);
			this->btn_1_1->Name = L"btn_1_1";
			this->btn_1_1->Size = System::Drawing::Size(80, 24);
			this->btn_1_1->TabIndex = 15;
			this->btn_1_1->Text = L"B2";
			this->btn_1_1->UseVisualStyleBackColor = false;
			this->btn_1_1->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_1_3
			// 
			this->btn_1_3->BackColor = System::Drawing::Color::White;
			this->btn_1_3->Location = System::Drawing::Point(19, 217);
			this->btn_1_3->Name = L"btn_1_3";
			this->btn_1_3->Size = System::Drawing::Size(80, 24);
			this->btn_1_3->TabIndex = 14;
			this->btn_1_3->Text = L"1";
			this->btn_1_3->UseVisualStyleBackColor = false;
			this->btn_1_3->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_1_2
			// 
			this->btn_1_2->BackColor = System::Drawing::Color::White;
			this->btn_1_2->Location = System::Drawing::Point(19, 247);
			this->btn_1_2->Name = L"btn_1_2";
			this->btn_1_2->Size = System::Drawing::Size(80, 24);
			this->btn_1_2->TabIndex = 13;
			this->btn_1_2->Text = L"B1";
			this->btn_1_2->UseVisualStyleBackColor = false;
			this->btn_1_2->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_1_5
			// 
			this->btn_1_5->BackColor = System::Drawing::Color::White;
			this->btn_1_5->Location = System::Drawing::Point(19, 157);
			this->btn_1_5->Name = L"btn_1_5";
			this->btn_1_5->Size = System::Drawing::Size(80, 24);
			this->btn_1_5->TabIndex = 12;
			this->btn_1_5->Text = L"3";
			this->btn_1_5->UseVisualStyleBackColor = false;
			this->btn_1_5->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_1_4
			// 
			this->btn_1_4->BackColor = System::Drawing::Color::White;
			this->btn_1_4->Location = System::Drawing::Point(19, 187);
			this->btn_1_4->Name = L"btn_1_4";
			this->btn_1_4->Size = System::Drawing::Size(80, 24);
			this->btn_1_4->TabIndex = 11;
			this->btn_1_4->Text = L"2";
			this->btn_1_4->UseVisualStyleBackColor = false;
			this->btn_1_4->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_1_7
			// 
			this->btn_1_7->BackColor = System::Drawing::Color::White;
			this->btn_1_7->Location = System::Drawing::Point(19, 97);
			this->btn_1_7->Name = L"btn_1_7";
			this->btn_1_7->Size = System::Drawing::Size(80, 24);
			this->btn_1_7->TabIndex = 10;
			this->btn_1_7->Text = L"5";
			this->btn_1_7->UseVisualStyleBackColor = false;
			this->btn_1_7->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_1_6
			// 
			this->btn_1_6->BackColor = System::Drawing::Color::White;
			this->btn_1_6->Location = System::Drawing::Point(19, 127);
			this->btn_1_6->Name = L"btn_1_6";
			this->btn_1_6->Size = System::Drawing::Size(80, 24);
			this->btn_1_6->TabIndex = 9;
			this->btn_1_6->Text = L"4";
			this->btn_1_6->UseVisualStyleBackColor = false;
			this->btn_1_6->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_1_9
			// 
			this->btn_1_9->BackColor = System::Drawing::Color::White;
			this->btn_1_9->Location = System::Drawing::Point(19, 37);
			this->btn_1_9->Name = L"btn_1_9";
			this->btn_1_9->Size = System::Drawing::Size(80, 24);
			this->btn_1_9->TabIndex = 8;
			this->btn_1_9->Text = L"7";
			this->btn_1_9->UseVisualStyleBackColor = false;
			this->btn_1_9->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// btn_1_8
			// 
			this->btn_1_8->BackColor = System::Drawing::Color::White;
			this->btn_1_8->Location = System::Drawing::Point(19, 67);
			this->btn_1_8->Name = L"btn_1_8";
			this->btn_1_8->Size = System::Drawing::Size(80, 24);
			this->btn_1_8->TabIndex = 7;
			this->btn_1_8->Text = L"6";
			this->btn_1_8->UseVisualStyleBackColor = false;
			this->btn_1_8->Click += gcnew System::EventHandler(this, &MyForm::btnDtOn);
			// 
			// dt2
			// 
			this->dt2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dt2.Image")));
			this->dt2->Location = System::Drawing::Point(756, 20);
			this->dt2->Name = L"dt2";
			this->dt2->Size = System::Drawing::Size(50, 59);
			this->dt2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dt2->TabIndex = 26;
			this->dt2->TabStop = false;
			// 
			// dt1
			// 
			this->dt1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dt1.Image")));
			this->dt1->Location = System::Drawing::Point(326, 20);
			this->dt1->Name = L"dt1";
			this->dt1->Size = System::Drawing::Size(50, 59);
			this->dt1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dt1->TabIndex = 25;
			this->dt1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->floor9);
			this->panel1->Controls->Add(this->floor8);
			this->panel1->Controls->Add(this->floor7);
			this->panel1->Controls->Add(this->floor6);
			this->panel1->Controls->Add(this->floor5);
			this->panel1->Controls->Add(this->floor4);
			this->panel1->Controls->Add(this->floor3);
			this->panel1->Controls->Add(this->floor2);
			this->panel1->Controls->Add(this->floor1);
			this->panel1->Location = System::Drawing::Point(382, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(368, 711);
			this->panel1->TabIndex = 28;
			// 
			// floor3
			// 
			this->floor3->Controls->Add(this->btn_up_3);
			this->floor3->Controls->Add(this->btn_down_3);
			this->floor3->Location = System::Drawing::Point(12, 472);
			this->floor3->Name = L"floor3";
			this->floor3->Size = System::Drawing::Size(345, 70);
			this->floor3->TabIndex = 25;
			this->floor3->TabStop = false;
			this->floor3->Text = L"1楼";
			// 
			// floor2
			// 
			this->floor2->Controls->Add(this->btn_up_2);
			this->floor2->Controls->Add(this->btn_down_2);
			this->floor2->Location = System::Drawing::Point(12, 548);
			this->floor2->Name = L"floor2";
			this->floor2->Size = System::Drawing::Size(345, 70);
			this->floor2->TabIndex = 26;
			this->floor2->TabStop = false;
			this->floor2->Text = L"B1楼";
			// 
			// floor1
			// 
			this->floor1->Controls->Add(this->btn_down_1);
			this->floor1->Location = System::Drawing::Point(12, 624);
			this->floor1->Name = L"floor1";
			this->floor1->Size = System::Drawing::Size(345, 70);
			this->floor1->TabIndex = 24;
			this->floor1->TabStop = false;
			this->floor1->Text = L"B2楼";
			// 
			// dt2fx
			// 
			this->dt2fx->AutoSize = true;
			this->dt2fx->Location = System::Drawing::Point(929, 412);
			this->dt2fx->Name = L"dt2fx";
			this->dt2fx->Size = System::Drawing::Size(29, 12);
			this->dt2fx->TabIndex = 34;
			this->dt2fx->Text = L"stop";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1097, 184);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 304);
			this->textBox1->TabIndex = 37;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1213, 757);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->dt1floor);
			this->Controls->Add(this->dt1status);
			this->Controls->Add(this->dt1fx);
			this->Controls->Add(this->dt2floor);
			this->Controls->Add(this->dt2status);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dt2);
			this->Controls->Add(this->dt1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dt2fx);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->floor5->ResumeLayout(false);
			this->floor6->ResumeLayout(false);
			this->floor7->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->floor8->ResumeLayout(false);
			this->floor9->ResumeLayout(false);
			this->floor4->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dt1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->floor3->ResumeLayout(false);
			this->floor2->ResumeLayout(false);
			this->floor1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// log 用于调试
	private: System::Void log(String^ str) {
		textBox1->AppendText(">" + str + "\r\n");
	}

	// 根据名字找组件
	private: Control^ FindControl(String^ strControlName)
	{
		if (strControlName->Length == 0 || this->Controls->Find(strControlName, true)->Length == 0)
			return nullptr;

		return this->Controls->Find(strControlName, true)[0];
	}

	// 按钮变色
	private: System::Void btnDtOn(System::Object^  sender, System::EventArgs^  e) {
		Button^ button = (Button^)sender;
		button->BackColor = Color::LawnGreen;
	}
			
	// 按钮是否按下
	private: bool isbtnDtOn(Control^ btn) {
		if (btn != nullptr && btn->BackColor == Color::LawnGreen) {
			return true;
		}
		return false;
	}

	// 获取电梯位移 1 or -1
	private: int getOffset(int num) {
		// 如果电梯是静止状态，则检测方向,获得offset
		int _offset;
		Control^ dt = FindControl("dt" + num);
		Control^ dtfx = FindControl("dt" + num + "fx");
		if (dtfx->Text == "up")
		{
			_offset = -1;
		}
		else if (dtfx->Text == "down")
		{
			_offset = 1;
		}
		else {
			_offset = 0;
		}
		return _offset;
	}

	// 第几部电梯去第几层
	private: System::Void gotoFloor(int num, int target) {
		Control^ dt = FindControl("dt" + num);
		Control^ floor = FindControl("floor" + target);
		dt->Top = floor->Top + 9; // 加9是为了对齐好看；
	}

	// 电梯在第几层
	private: System::Int16 whereisDt(int num) {
		Control^ dt = FindControl("dt" + num);
		Control^ dtfloor = FindControl("dt" + num + "floor");
		for (int i = 1; i <= 9; ++i) {
			Control^ floor = FindControl("floor" + i);
			if (floor != nullptr && dtfloor) {
				if (dt->Top < floor->Top + 70 && !(dt->Top <= floor->Top))
				{
					Control^ dtfx = FindControl("dt" + num+"fx");
					// 在这更新指示牌，省得计算了
					String^ fx = "O";
					if (dtfx->Text == "up") {
						fx = "▲";
					}
					else if (dtfx->Text == "down") {
						fx = "▼";
					}
					dtfloor->Text = fx + " " + floor->Text;
					return i;
				}
			}
		}
		return 0;
	}

	// 呼叫电梯 标记方向
	// 内部按钮：静止时设置运动方向，运动时忽略
	// 外部按钮：都静止时离的近的去，一个静止一个运动时静止的去 （改进计算运动的离的近的去）
	private: System::Void callElevator(int num) {
		int current = whereisDt(num);
		Control^ dt = FindControl("dt" + num);
		Control^ dtfx = FindControl("dt" + num + "fx");
	
		// 内部按钮按下，朝按下的移动
		if (dtfx->Text == "stop") {
			for (int i = 1; i <= 9; ++i) {
				Control^ btn = FindControl("btn_"+num+"_" + i); //内部按钮

				if (btn != nullptr && isbtnDtOn(btn)) { // 内部必须得去
					Control^ floor = FindControl("floor" + i);
					if (floor->Top+9 < dt->Top) {
						dtfx->Text = "up";
					}
					else if (floor->Top > dt->Top) {
						dtfx->Text = "down";
					}
					else {
						// 快到了或者刚走
						//gotoFloor(1, i);
					}
				}
			}
		}
	}

	// 外部的单独来吧，省得重复调用
	private: System::Void callElevator2() {
		// 外部的都闲着时谁离的近谁去
		int dt1pos = whereisDt(1);
		int dt2pos = whereisDt(2);
		for (int i = 1; i <= 9; ++i) {
			Control^ btnup = FindControl("btn_up_" + i); //外部按钮
			Control^ btndown = FindControl("btn_down_" + i); //外部按钮
			if ((btnup != nullptr && isbtnDtOn(btnup))
				|| (btndown != nullptr && isbtnDtOn(btndown))) {
				Control^ floor = FindControl("floor" + i);
				// 如果都闲着，离的近的去
				if (dt1fx->Text == "stop" && dt2fx->Text == "stop") {
					Control^ dtnear = (abs(dt1pos - i) < abs(dt2pos - i)) ? dt1 : dt2;
					Control^ dtnear_fx = (abs(dt1pos - i) < abs(dt2pos - i)) ? dt1fx : dt2fx;
					if ((floor->Top + 9) < dtnear->Top) {
						dtnear_fx->Text = "up";
					}
					else if (floor->Top > dtnear->Top) {
						dtnear_fx->Text = "down";
					}
				}
				/*
				// 或者谁闲着谁去
				else if (dt1fx->Text == "stop"){
					if ((floor->Top + 9) < dt1->Top && dt2fx->Text != "up") {
						dt1fx->Text = "up";
					}
					else if (floor->Top > dt1->Top) {
						dt1fx->Text = "down";
					}
				}
				else if (dt1fx->Text == "stop" && dt1fx->Text != "up") {
					if ((floor->Top + 9) < dt1->Top) {
						dt1fx->Text = "up";
					}
					else if (floor->Top > dt1->Top) {
						dt1fx->Text = "down";
					}
				}
				*/
			}
		}
	}

	// 计算电梯到达，开门不开门
	private: System::Void elevatorArrive(int num) {
		int current = whereisDt(num);
		if (!(0 < current) && !( current < 10)) return;
		Control^ dt = FindControl("dt" + num);
		Control^ dtfx = FindControl("dt" + num + "fx");
		Control^ dtst = FindControl("dt" + num + "status");
		Control^ floor = FindControl("floor" + current);
		// 到达
		if (dt != nullptr && dtfx != nullptr && floor != nullptr && dt->Top == floor->Top + 9) {
			// 开门，关灯
			Control^ btn = FindControl("btn_" + num + "_" + current); //内部按钮
			Control^ btn_up = FindControl("btn_up_" + current); //外部按钮上
			Control^ btn_down = FindControl("btn_down_" + current); //外部按钮下
			// 关灯
			if ((btn != nullptr && btn->BackColor == Color::LawnGreen) // 内部按下的开门
				|| (dtfx->Text == "up" && btn_up != nullptr && btn_up->BackColor == Color::LawnGreen) // 外部同向的开门
				|| (dtfx->Text == "down" && btn_down != nullptr && btn_down->BackColor == Color::LawnGreen) // 外部同向的开门
				){
				// 开门
				dtst->Text = "open";
				log(dt->Top + "开门");
				btn->BackColor = Color::White; //关灯
				if (btn_up!=nullptr && dtfx->Text == "up") btn_up->BackColor = Color::White;
				if (btn_down!=nullptr && dtfx->Text == "down") btn_down->BackColor = Color::White;
				if (dtfx->Text == "stop" && btn_up != nullptr && btn_down != nullptr) {
					btn_up->BackColor = Color::White;
					btn_down->BackColor = Color::White;
				}
				// 检查还要不要走
				bool holdon = false;
				// 如果不是静止，检查同向
				if (dtfx->Text == "down") {
					for (int i = 1; i < current; i++) {
						Control^ btn = FindControl("btn_"+num+"_" + i); //内部按钮
						if (btn != nullptr && isbtnDtOn(btn)) holdon = true;
					}
				}
				else if (dtfx->Text == "up") {
					for (int i = 9; i < current; i--) {
						Control^ btn = FindControl("btn_" + num + "_" + i); //内部按钮
						if (btn != nullptr && isbtnDtOn(btn)) holdon = true;
					}
					
				}
				if (!holdon) dtfx->Text = "stop";
			
			}
			// 外部反向的，检查没有任务的时候开门
			if ((dtfx->Text == "down" && btn_up != nullptr && btn_up->BackColor == Color::LawnGreen)
				|| (dtfx->Text == "up" && btn_down != nullptr && btn_down->BackColor == Color::LawnGreen) // 外部同向的开门
				) {
				// 检查还要不要走
				bool holdon = false;
				// 如果不是静止，检查同向
				if (dtfx->Text == "down") {
					for (int i = 1; i < current; i++) {
						Control^ btn = FindControl("btn_" + num + "_" + i); //内部按钮
						if (btn != nullptr && isbtnDtOn(btn)) holdon = true;
					}
				}
				else if (dtfx->Text == "up") {
					for (int i = 9; i < current; i--) {
						Control^ btn = FindControl("btn_" + num + "_" + i); //内部按钮
						if (btn != nullptr && isbtnDtOn(btn)) holdon = true;
					}

				}
				if (!holdon) dtfx->Text = "stop";
			}
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		// gotoFloor(1, 3);
		for (int i; i <= 9; i++) {
			Control^ btn1 = FindControl("btn_1_" + i);
			Control^ btn2 = FindControl("btn_2_" + i);
			Control^ btnup = FindControl("btn_up_" + i);
			Control^ btndown = FindControl("btn_down_" + i);
			if (btn1 != nullptr) btn1->BackColor = Color::White;
			if (btn2 != nullptr) btn2->BackColor = Color::White;
			if (btnup != nullptr) btnup->BackColor = Color::White;
			if (btndown != nullptr) btndown->BackColor = Color::White;\
			dt1->Top = floor9->Top + 9;
			dt2->Top = floor3->Top + 9;
		}
	}

	// 最高和最底层到达后改变方向
	private: System::Void limit_range(int num) {
		Control^ dt = FindControl("dt" + num);
		Control^ dtfx = FindControl("dt" + num + "fx");
		if (dt!=nullptr && dtfx!=nullptr && dtfx->Text != "stop") {
			if (dt->Top < floor9->Top + 9) {
				dtfx->Text = "stop";
			}
			if (dt->Top > floor1->Top + 9) {
				dtfx->Text = "stop";
			}
		}
	}

	// 运动和开关门
	private: System::Void elerun(int num) {
		Control^ dt = FindControl("dt" + num);
		Control^ dtfx = FindControl("dt" + num + "fx");
		Control^ dtstatus = FindControl("dt" + num + "status");
		// 如果没开门并且有方向，就动
		if (dt != nullptr && dtfx != nullptr && dtstatus != nullptr) {
			if (dtstatus->Text != "open" && dtfx->Text != "stop") {
				dt->Top = dt->Top + getOffset(num);
			}
			else {
				if (num == 1) {
					dt1gm->Enabled = true; // 自动关门 秒
				}
				else {
					dt2gm->Enabled = true; // 自动关门 秒
				}
				
			}
		}
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		limit_range(1); // 到底和到顶
		limit_range(2);
		whereisDt(1); // 计算电梯位置，标记方向，标记指示牌
		whereisDt(2);
		callElevator(1);
		callElevator(2);


		//外部电梯的调用
		callElevator2();


		elevatorArrive(1);
		elevatorArrive(2);
		elerun(1);
		elerun(2);

		// 标记位置
		this->Text = ">" + dt1->Top;

	}

	private: System::Void dt1gm_Tick(System::Object^  sender, System::EventArgs^  e) {
		dt1status->Text = "close";
	}

	private: System::Void dt2gm_Tick(System::Object^  sender, System::EventArgs^  e) {
		dt2status->Text = "close";
	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		dt1->Top = floor9->Top + 9;
		dt2->Top = floor3->Top + 9;
	}
};
}

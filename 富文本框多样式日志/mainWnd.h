#pragma once

namespace ���ı������ʽ��־ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// mainWnd ժҪ
	/// </summary>
	public ref class mainWnd : public System::Windows::Forms::Form
	{
	public:
		mainWnd(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~mainWnd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox2
			// 
			this->richTextBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox2->Location = System::Drawing::Point(3, 21);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(566, 256);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &mainWnd::richTextBox2_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->richTextBox2);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox1->Location = System::Drawing::Point(0, 131);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(572, 280);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��־��ӡ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(25, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 48);
			this->button1->TabIndex = 3;
			this->button1->Text = L"��ӡ������Ϣ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainWnd::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(236, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(182, 48);
			this->button2->TabIndex = 4;
			this->button2->Text = L"��ӡ��ͨ��Ϣ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainWnd::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(25, 77);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(182, 48);
			this->button3->TabIndex = 5;
			this->button3->Text = L"��ӡ��Ҫ��Ϣ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mainWnd::button3_Click);
			// 
			// mainWnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 411);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"mainWnd";
			this->Text = L"��������־��ӡ";
			this->Load += gcnew System::EventHandler(this, &mainWnd::mainWnd_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
#define LOGDEBUG 0
#define LOGERROR 1
#define LOGIMPORTANT 2

		public : void outPut(int logleval,String^in ) {
			richTextBox2->AppendText(in + "\n");
			richTextBox2->SelectionStart = richTextBox2->TextLength - in->Length-1;
			richTextBox2->SelectionLength = in->Length;
			switch (logleval){
			case LOGDEBUG: 
				richTextBox2->SelectionFont = gcnew System::Drawing::Font("����", 12, FontStyle::Bold);
				break;
			case LOGERROR: 
				richTextBox2->SelectionFont = gcnew System::Drawing::Font("����", 12, FontStyle::Bold);
				break;
			case LOGIMPORTANT:;
				richTextBox2->SelectionFont = gcnew System::Drawing::Font("��Բ", 12, FontStyle::Bold);
				break;
			}

			richTextBox2->SelectionStart = richTextBox2->TextLength - in->Length - 1;
			richTextBox2->SelectionLength = in->Length;

			switch (logleval) {
			case LOGDEBUG:
				break;
			case LOGERROR:
				richTextBox2->SelectionColor = Color::Red;
				break;
			case LOGIMPORTANT:;
				richTextBox2->SelectionColor = Color::Blue;
				break;
			}
		}

	private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		richTextBox2->SelectionStart = richTextBox2->Text->Length;
		richTextBox2->SelectionLength = 0;
		richTextBox2->Focus();
	}
private: System::Void mainWnd_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	outPut(LOGERROR, "������Ϣ");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	outPut(LOGDEBUG, "������Ϣ");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	outPut(LOGIMPORTANT, "��Ҫ��Ϣ");
}
};
}

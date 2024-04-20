#pragma once
#include <thread>
int n = 1;
int button[10] = { 0,0,0,0,0,0,0,0,0,0 };
int kod[9];

namespace CppCLRWinFormsProject {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;


	private: System::Windows::Forms::Button^ button12;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 100);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(118, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 100);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(224, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 100);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 118);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(118, 118);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(224, 118);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 100);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(12, 224);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 100);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(118, 224);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 100);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(224, 224);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 100);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(12, 330);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(312, 57);
			this->button12->TabIndex = 13;
			this->button12->Text = L"NAVBAT - X";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(336, 406);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"X va O";
			this->ResumeLayout(false);

		}
		public:
			void yutuq() {
				int m = 1;
				while (m < 3) {
					if (kod[0] == m && kod[1] == m && kod[2] == m || kod[3] == m && kod[4] == m && kod[5] == m
						|| kod[6] == m && kod[7] == m && kod[8] == m || kod[0] == m && kod[3] == m && kod[6] == m
						|| kod[1] == m && kod[4] == m && kod[7] == m || kod[2] == m && kod[5] == m && kod[8] == m
						|| kod[0] == m && kod[4] == m && kod[8] == m || kod[2] == m && kod[4] == m && kod[6] == m) {
						button12->BackColor = System::Drawing::Color::Blue;
						button12->Text = "G'OLIB - ";
						if (m == 1) {
							button12->Text += "O";
						}
						else {
							button12->Text += "X";
							
						}
						for (int i = 0; i < 10; i++) {
							button[i] = 1;
						}

						break;
					}
					++m;
				}
			}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button[0] == 0) {
			if (n % 2 == 1) {
				button1->Text = "X";
				button12->Text = "NAVBAT - O";
				kod[0] = 2;
				
			}
			else {
				button1->Text = "O";
				button12->Text = "NAVBAT - X";
				kod[0] = 1; 
				
			}
			n += 1;
			yutuq();
		}
		
		button[0] = 1;
		button1->ForeColor = System::Drawing::Color::Red;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button[1] == 0) {
		if (n % 2 == 1) {
			button2->Text = "X";
			button12->Text = "NAVBAT - O";
			kod[1] = 2;
		}
		else {
			button2->Text = "O";
			button12->Text = "NAVBAT - X";
			kod[1] = 1;
		}
		n += 1;
		yutuq();
	}
	
	button[1] = 1;
	button2->ForeColor = System::Drawing::Color::Red;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button[2] == 0) {
		if (n % 2 == 1) {
			button3->Text = "X";
			button12->Text = "NAVBAT - O";
			kod[2] = 2;
		}
		else {
			button3->Text = "O";
			button12->Text = "NAVBAT - X";
			kod[2] = 1;
		}
		n += 1;
		yutuq();
	}
	
	button[2] = 1;
	button3->ForeColor = System::Drawing::Color::Red;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button[3] == 0) {
		if (n % 2 == 1) {
			button4->Text = "X";
			button12->Text = "NAVBAT - O";
			kod[3] = 2;
		}
		else {
			button4->Text = "O";
			button12->Text = "NAVBAT - X";
			kod[3] = 1;
		}
		n += 1;
		yutuq();
	}
	
	button[3] = 1;
	button4->ForeColor = System::Drawing::Color::Red;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button[4] == 0) {
		if (n % 2 == 1) {
			button5->Text = "X";
			button12->Text = "NAVBAT - O";
			kod[4] = 2;
		}
		else {
			button5->Text = "O";
			button12->Text = "NAVBAT - X";
			kod[4] = 1;
		}
		n += 1;
		yutuq();
	}
	
	button[4] = 1;
	button5->ForeColor = System::Drawing::Color::Red;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button[5] == 0) {
		if (n % 2 == 1) {
			button6->Text = "X";
			button12->Text = "NAVBAT - O";
			kod[5] = 2;
		}
		else {
			button6->Text = "O";
			button12->Text = "NAVBAT - X";
			kod[5] = 1;
		}
		n += 1;
		yutuq();
	}
	
	button[5] = 1;
	button6->ForeColor = System::Drawing::Color::Red;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button[6] == 0) {
		if (n % 2 == 1) {
			button7->Text = "X";
			button12->Text = "NAVBAT - O";
			kod[6] = 2;
		}
		else {
			button7->Text = "O";
			button12->Text = "NAVBAT - X";
			kod[6] = 1;
		}
		n += 1;
		yutuq();
	}
	
	button[6] = 1;
	button7->ForeColor = System::Drawing::Color::Red;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button[7] == 0) {
		if (n % 2 == 1) {
			button8->Text = "X";
			button12->Text = "NAVBAT - O";
			kod[7] = 2;
		}
		else {
			button8->Text = "O";
			button12->Text = "NAVBAT - X";
			kod[7] = 1;
		}
		n += 1;
		yutuq();
	}
	
	button[7] = 1;
	button8->ForeColor = System::Drawing::Color::Red;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button[8] == 0) {
		if (n % 2 == 1) {
			button9->Text = "X";
			button12->Text = "NAVBAT - O";
			kod[8] = 2;
		}
		else {
			button9->Text = "O";
			button12->Text = "NAVBAT - X";
			kod[8] = 1;
		}
		n += 1;
		yutuq();
	}
	
	button[8] = 1;
	button9->ForeColor = System::Drawing::Color::Red;
}
};
}


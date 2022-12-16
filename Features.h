#pragma once
#include"Tofrom.h"
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Features
	/// </summary>
	public ref class Features : public System::Windows::Forms::Form
	{
	public:
		Features(void)
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
		~Features()
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Booking";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Features::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(64, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cab Status";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(64, 177);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(181, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Customer Record";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(64, 247);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 43);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Update Cab Status";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(64, 313);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(181, 43);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Logout";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// Features
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(407, 401);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Features";
			this->Text = L"Features";
			this->Load += gcnew System::EventHandler(this, &Features::Features_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Features_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Tofrom^ tofrom = gcnew Tofrom;
		//tofrom->ShowDialog();
		Tofrom obj;
		obj.ShowDialog();
	}
};
}

#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Pomoc
	/// </summary>
	public ref class Pomoc : public System::Windows::Forms::Form
	{
	public:
		Pomoc(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Pomoc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lblInformacja;
	private: System::Windows::Forms::TextBox^ textBox1;


	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblInformacja = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(94, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"zamknij";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pomoc::button1_Click);
			// 
			// lblInformacja
			// 
			this->lblInformacja->AutoSize = true;
			this->lblInformacja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblInformacja->Location = System::Drawing::Point(58, 36);
			this->lblInformacja->Name = L"lblInformacja";
			this->lblInformacja->Size = System::Drawing::Size(46, 17);
			this->lblInformacja->TabIndex = 1;
			this->lblInformacja->Text = L"label1";
			this->lblInformacja->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(61, 95);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(157, 82);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L" Kalkulator\r\n---------------------\r\npomoc z Strefa kursow\r\n----\r\nDominiq217 \r\n\r\n";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Pomoc::textBox1_TextChanged);
			// 
			// Pomoc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblInformacja);
			this->Controls->Add(this->button1);
			this->Name = L"Pomoc";
			this->Text = L"Pomoc";
			this->Load += gcnew System::EventHandler(this, &Pomoc::Pomoc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void Pomoc_Load(System::Object^  sender, System::EventArgs^  e) {
		lblInformacja->Text = "Kalkulator \n   pomoc poradnika \n  strefa kursu";
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

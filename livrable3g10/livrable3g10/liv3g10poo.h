#pragma once 
#include "gestion du personnel.h"

namespace livrable3g10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de liv3g10poo
	/// </summary>
	public ref class liv3g10poo : public System::Windows::Forms::Form
	{
	public:
		liv3g10poo(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~liv3g10poo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Label^ label2;


	protected:


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(354, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Gestion du personnel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &liv3g10poo::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(354, 229);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(206, 49);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Gestion des clients";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &liv3g10poo::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(354, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 41);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Gestion des commandes";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(354, 331);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(208, 41);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Gestion des statistiques";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(354, 378);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(208, 41);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Gestion du stock";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(351, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 93);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Bienvenue";
			this->label2->Click += gcnew System::EventHandler(this, &liv3g10poo::label2_Click);
			// 
			// liv3g10poo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(966, 500);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Name = L"liv3g10poo";
			this->Text = L"liv3g10poo";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide(); 
		gestiondupersonnel^ GDP = gcnew gestiondupersonnel(); 
		GDP->ShowDialog();


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

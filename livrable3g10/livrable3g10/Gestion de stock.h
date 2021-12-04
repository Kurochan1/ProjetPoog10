#pragma once

namespace livrable3g10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Gestiondestock
	/// </summary>
	public ref class Gestiondestock : public System::Windows::Forms::Form
	{
	public:
		Gestiondestock(void)
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
		~Gestiondestock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(38, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(319, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestion de stock";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom de l\'article :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(131, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(112, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Catégorie :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Réference :";
			this->label4->Click += gcnew System::EventHandler(this, &Gestiondestock::label4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(95, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 191);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Quantité :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(83, 188);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 222);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(90, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Prix unitaire :";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(95, 222);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 250);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"ID :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(42, 250);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(101, 22);
			this->textBox5->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(450, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 26);
			this->button1->TabIndex = 13;
			this->button1->Text = L"supprimer";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(599, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 25);
			this->button2->TabIndex = 14;
			this->button2->Text = L"reset";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(450, 163);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 33);
			this->button3->TabIndex = 15;
			this->button3->Text = L"sauvegarder";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(599, 163);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 33);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Fermer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Gestiondestock::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 372);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(854, 181);
			this->dataGridView1->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 309);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"ID :";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(46, 309);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 22);
			this->numericUpDown2->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(197, 314);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 17);
			this->label9->TabIndex = 20;
			this->label9->Text = L"REF :";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(246, 314);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 21;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(95, 131);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(120, 24);
			this->comboBox1->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(371, 317);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 17);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Catégorie :";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(454, 317);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(102, 24);
			this->comboBox2->TabIndex = 24;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(619, 306);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 33);
			this->button5->TabIndex = 25;
			this->button5->Text = L"Recherche";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(735, 306);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(91, 35);
			this->button6->TabIndex = 26;
			this->button6->Text = L"Clear";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// Gestiondestock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 585);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Gestiondestock";
			this->Text = L"Gestiondestock";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

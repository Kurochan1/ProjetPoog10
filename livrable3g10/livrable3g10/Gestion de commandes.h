#pragma once

namespace livrable3g10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Gestiondecommandes
	/// </summary>
	public ref class Gestiondecommandes : public System::Windows::Forms::Form
	{
	public:
		Gestiondecommandes(void)
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
		~Gestiondecommandes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(216, 86);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestion de commandes";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(16, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Recherche Client";
			// 
			// Gestiondecommandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(985, 541);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Gestiondecommandes";
			this->Text = L"Gestiondecommandes";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}

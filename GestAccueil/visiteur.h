#pragma once

namespace GestAccueil {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de visiteur
	/// </summary>
	public ref class visiteur : public System::Windows::Forms::Form
	{
	public:
		visiteur(void)
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
		~visiteur()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  GroupBoxObjet;
	public: System::Windows::Forms::TextBox^  TextBoxNature;
	private: 


	protected: 


	private: System::Windows::Forms::GroupBox^  GroupBoxSociete;
	public: System::Windows::Forms::TextBox^  SocieteCorrespondant;
	private: 



	private: System::Windows::Forms::GroupBox^  GroupBoxPrenom;
	public: System::Windows::Forms::TextBox^  PrenomCorrespondant;
	private: 



	private: System::Windows::Forms::GroupBox^  GroupBoxNom;
	public: System::Windows::Forms::TextBox^  NomCorrespondant;
	public: System::Windows::Forms::Button^  AnnulerVisiteur;


	public: System::Windows::Forms::Button^  ValiderVisiteur;
	private: 






	private: System::Windows::Forms::GroupBox^  GroupBoxSortie;
	public: System::Windows::Forms::TextBox^  TextBoxSortie;
	private: 

	private: 





	private: System::Windows::Forms::GroupBox^  GroupBoxArriveé;
	public: System::Windows::Forms::TextBox^  TextBoxArriver;
	public: System::Windows::Forms::Button^  ReinitVisiteur;

	public: 
	private: 









	private: System::Windows::Forms::GroupBox^  GroupBoxDate;
	public: System::Windows::Forms::TextBox^  TextBoxDate;
	public: System::Windows::Forms::Label^  ok;

	public: 

	public: 
	private: 



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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->ok = (gcnew System::Windows::Forms::Label());
			this->GroupBoxDate = (gcnew System::Windows::Forms::GroupBox());
			this->TextBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->ReinitVisiteur = (gcnew System::Windows::Forms::Button());
			this->AnnulerVisiteur = (gcnew System::Windows::Forms::Button());
			this->ValiderVisiteur = (gcnew System::Windows::Forms::Button());
			this->GroupBoxSortie = (gcnew System::Windows::Forms::GroupBox());
			this->TextBoxSortie = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxArriveé = (gcnew System::Windows::Forms::GroupBox());
			this->TextBoxArriver = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxObjet = (gcnew System::Windows::Forms::GroupBox());
			this->TextBoxNature = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxSociete = (gcnew System::Windows::Forms::GroupBox());
			this->SocieteCorrespondant = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxPrenom = (gcnew System::Windows::Forms::GroupBox());
			this->PrenomCorrespondant = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxNom = (gcnew System::Windows::Forms::GroupBox());
			this->NomCorrespondant = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2->SuspendLayout();
			this->GroupBoxDate->SuspendLayout();
			this->GroupBoxSortie->SuspendLayout();
			this->GroupBoxArriveé->SuspendLayout();
			this->GroupBoxObjet->SuspendLayout();
			this->GroupBoxSociete->SuspendLayout();
			this->GroupBoxPrenom->SuspendLayout();
			this->GroupBoxNom->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->ok);
			this->groupBox2->Controls->Add(this->GroupBoxDate);
			this->groupBox2->Controls->Add(this->ReinitVisiteur);
			this->groupBox2->Controls->Add(this->AnnulerVisiteur);
			this->groupBox2->Controls->Add(this->ValiderVisiteur);
			this->groupBox2->Controls->Add(this->GroupBoxSortie);
			this->groupBox2->Controls->Add(this->GroupBoxArriveé);
			this->groupBox2->Controls->Add(this->GroupBoxObjet);
			this->groupBox2->Controls->Add(this->GroupBoxSociete);
			this->groupBox2->Controls->Add(this->GroupBoxPrenom);
			this->groupBox2->Controls->Add(this->GroupBoxNom);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(407, 319);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Visiteur";
			// 
			// ok
			// 
			this->ok->AutoSize = true;
			this->ok->Location = System::Drawing::Point(188, -3);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(13, 13);
			this->ok->TabIndex = 24;
			this->ok->Text = L"0";
			this->ok->Visible = false;
			// 
			// GroupBoxDate
			// 
			this->GroupBoxDate->Controls->Add(this->TextBoxDate);
			this->GroupBoxDate->Location = System::Drawing::Point(240, 134);
			this->GroupBoxDate->Name = L"GroupBoxDate";
			this->GroupBoxDate->Size = System::Drawing::Size(155, 52);
			this->GroupBoxDate->TabIndex = 20;
			this->GroupBoxDate->TabStop = false;
			this->GroupBoxDate->Text = L"Date :";
			// 
			// TextBoxDate
			// 
			this->TextBoxDate->Location = System::Drawing::Point(42, 19);
			this->TextBoxDate->MaxLength = 10;
			this->TextBoxDate->Name = L"TextBoxDate";
			this->TextBoxDate->Size = System::Drawing::Size(78, 20);
			this->TextBoxDate->TabIndex = 6;
			this->TextBoxDate->TextChanged += gcnew System::EventHandler(this, &visiteur::TextBoxDate_TextChanged);
			// 
			// ReinitVisiteur
			// 
			this->ReinitVisiteur->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->ReinitVisiteur->Location = System::Drawing::Point(266, 233);
			this->ReinitVisiteur->Name = L"ReinitVisiteur";
			this->ReinitVisiteur->Size = System::Drawing::Size(108, 35);
			this->ReinitVisiteur->TabIndex = 23;
			this->ReinitVisiteur->Text = L"Reinitialiser";
			this->ReinitVisiteur->UseVisualStyleBackColor = true;
			this->ReinitVisiteur->Click += gcnew System::EventHandler(this, &visiteur::Reinit_Click);
			// 
			// AnnulerVisiteur
			// 
			this->AnnulerVisiteur->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->AnnulerVisiteur->Location = System::Drawing::Point(266, 274);
			this->AnnulerVisiteur->Name = L"AnnulerVisiteur";
			this->AnnulerVisiteur->Size = System::Drawing::Size(108, 36);
			this->AnnulerVisiteur->TabIndex = 22;
			this->AnnulerVisiteur->Text = L"Annuler";
			this->AnnulerVisiteur->UseVisualStyleBackColor = true;
			this->AnnulerVisiteur->Click += gcnew System::EventHandler(this, &visiteur::button2_Click);
			// 
			// ValiderVisiteur
			// 
			this->ValiderVisiteur->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->ValiderVisiteur->Location = System::Drawing::Point(266, 192);
			this->ValiderVisiteur->Name = L"ValiderVisiteur";
			this->ValiderVisiteur->Size = System::Drawing::Size(108, 35);
			this->ValiderVisiteur->TabIndex = 21;
			this->ValiderVisiteur->Text = L"Valider";
			this->ValiderVisiteur->UseVisualStyleBackColor = true;
			this->ValiderVisiteur->Click += gcnew System::EventHandler(this, &visiteur::button1_Click);
			// 
			// GroupBoxSortie
			// 
			this->GroupBoxSortie->Controls->Add(this->TextBoxSortie);
			this->GroupBoxSortie->Location = System::Drawing::Point(240, 77);
			this->GroupBoxSortie->Name = L"GroupBoxSortie";
			this->GroupBoxSortie->Size = System::Drawing::Size(155, 52);
			this->GroupBoxSortie->TabIndex = 20;
			this->GroupBoxSortie->TabStop = false;
			this->GroupBoxSortie->Text = L"Heure de sortie";
			// 
			// TextBoxSortie
			// 
			this->TextBoxSortie->Location = System::Drawing::Point(42, 19);
			this->TextBoxSortie->MaxLength = 5;
			this->TextBoxSortie->Name = L"TextBoxSortie";
			this->TextBoxSortie->Size = System::Drawing::Size(78, 20);
			this->TextBoxSortie->TabIndex = 5;
			this->TextBoxSortie->TextChanged += gcnew System::EventHandler(this, &visiteur::TextBoxSortie1_TextChanged);
			// 
			// GroupBoxArriveé
			// 
			this->GroupBoxArriveé->Controls->Add(this->TextBoxArriver);
			this->GroupBoxArriveé->Location = System::Drawing::Point(240, 19);
			this->GroupBoxArriveé->Name = L"GroupBoxArriveé";
			this->GroupBoxArriveé->Size = System::Drawing::Size(155, 52);
			this->GroupBoxArriveé->TabIndex = 19;
			this->GroupBoxArriveé->TabStop = false;
			this->GroupBoxArriveé->Text = L"Heure d\'arrivée";
			// 
			// TextBoxArriver
			// 
			this->TextBoxArriver->Location = System::Drawing::Point(42, 19);
			this->TextBoxArriver->MaxLength = 5;
			this->TextBoxArriver->Name = L"TextBoxArriver";
			this->TextBoxArriver->Size = System::Drawing::Size(78, 20);
			this->TextBoxArriver->TabIndex = 4;
			this->TextBoxArriver->TextChanged += gcnew System::EventHandler(this, &visiteur::TextBoxArriver1_TextChanged);
			// 
			// GroupBoxObjet
			// 
			this->GroupBoxObjet->Controls->Add(this->TextBoxNature);
			this->GroupBoxObjet->Location = System::Drawing::Point(6, 203);
			this->GroupBoxObjet->Name = L"GroupBoxObjet";
			this->GroupBoxObjet->Size = System::Drawing::Size(228, 107);
			this->GroupBoxObjet->TabIndex = 18;
			this->GroupBoxObjet->TabStop = false;
			this->GroupBoxObjet->Text = L"Objet de la visite :";
			// 
			// TextBoxNature
			// 
			this->TextBoxNature->Location = System::Drawing::Point(6, 19);
			this->TextBoxNature->Multiline = true;
			this->TextBoxNature->Name = L"TextBoxNature";
			this->TextBoxNature->Size = System::Drawing::Size(211, 82);
			this->TextBoxNature->TabIndex = 3;
			this->TextBoxNature->TextChanged += gcnew System::EventHandler(this, &visiteur::TextBoxNature_TextChanged_1);
			// 
			// GroupBoxSociete
			// 
			this->GroupBoxSociete->Controls->Add(this->SocieteCorrespondant);
			this->GroupBoxSociete->Location = System::Drawing::Point(6, 135);
			this->GroupBoxSociete->Name = L"GroupBoxSociete";
			this->GroupBoxSociete->Size = System::Drawing::Size(228, 52);
			this->GroupBoxSociete->TabIndex = 17;
			this->GroupBoxSociete->TabStop = false;
			this->GroupBoxSociete->Text = L"Société";
			// 
			// SocieteCorrespondant
			// 
			this->SocieteCorrespondant->Location = System::Drawing::Point(6, 19);
			this->SocieteCorrespondant->Name = L"SocieteCorrespondant";
			this->SocieteCorrespondant->Size = System::Drawing::Size(211, 20);
			this->SocieteCorrespondant->TabIndex = 2;
			this->SocieteCorrespondant->TextChanged += gcnew System::EventHandler(this, &visiteur::SocieteCorrespondant_TextChanged_1);
			// 
			// GroupBoxPrenom
			// 
			this->GroupBoxPrenom->Controls->Add(this->PrenomCorrespondant);
			this->GroupBoxPrenom->Location = System::Drawing::Point(6, 77);
			this->GroupBoxPrenom->Name = L"GroupBoxPrenom";
			this->GroupBoxPrenom->Size = System::Drawing::Size(228, 52);
			this->GroupBoxPrenom->TabIndex = 16;
			this->GroupBoxPrenom->TabStop = false;
			this->GroupBoxPrenom->Text = L"Prenom";
			// 
			// PrenomCorrespondant
			// 
			this->PrenomCorrespondant->Location = System::Drawing::Point(6, 19);
			this->PrenomCorrespondant->Name = L"PrenomCorrespondant";
			this->PrenomCorrespondant->Size = System::Drawing::Size(211, 20);
			this->PrenomCorrespondant->TabIndex = 1;
			this->PrenomCorrespondant->TextChanged += gcnew System::EventHandler(this, &visiteur::PrenomCorrespondant_TextChanged_1);
			// 
			// GroupBoxNom
			// 
			this->GroupBoxNom->BackColor = System::Drawing::SystemColors::Control;
			this->GroupBoxNom->Controls->Add(this->NomCorrespondant);
			this->GroupBoxNom->ForeColor = System::Drawing::SystemColors::ControlText;
			this->GroupBoxNom->Location = System::Drawing::Point(6, 19);
			this->GroupBoxNom->Name = L"GroupBoxNom";
			this->GroupBoxNom->Size = System::Drawing::Size(228, 52);
			this->GroupBoxNom->TabIndex = 15;
			this->GroupBoxNom->TabStop = false;
			this->GroupBoxNom->Text = L"Nom";
			// 
			// NomCorrespondant
			// 
			this->NomCorrespondant->AccessibleDescription = L"";
			this->NomCorrespondant->BackColor = System::Drawing::SystemColors::Window;
			this->NomCorrespondant->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->NomCorrespondant->ForeColor = System::Drawing::SystemColors::WindowText;
			this->NomCorrespondant->Location = System::Drawing::Point(6, 19);
			this->NomCorrespondant->Name = L"NomCorrespondant";
			this->NomCorrespondant->Size = System::Drawing::Size(211, 20);
			this->NomCorrespondant->TabIndex = 0;
			this->NomCorrespondant->TextChanged += gcnew System::EventHandler(this, &visiteur::NomCorrespondant_TextChanged);
			// 
			// visiteur
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 341);
			this->Controls->Add(this->groupBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"visiteur";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->GroupBoxDate->ResumeLayout(false);
			this->GroupBoxDate->PerformLayout();
			this->GroupBoxSortie->ResumeLayout(false);
			this->GroupBoxSortie->PerformLayout();
			this->GroupBoxArriveé->ResumeLayout(false);
			this->GroupBoxArriveé->PerformLayout();
			this->GroupBoxObjet->ResumeLayout(false);
			this->GroupBoxObjet->PerformLayout();
			this->GroupBoxSociete->ResumeLayout(false);
			this->GroupBoxSociete->PerformLayout();
			this->GroupBoxPrenom->ResumeLayout(false);
			this->GroupBoxPrenom->PerformLayout();
			this->GroupBoxNom->ResumeLayout(false);
			this->GroupBoxNom->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			int erreur = 0;

			if(NomCorrespondant->Text == "") {
				erreur = 1;
				GroupBoxNom->ForeColor = System::Drawing::Color::Red;
			}
			else {
				GroupBoxNom->ForeColor = System::Drawing::Color::Black;
			}

			if(PrenomCorrespondant->Text == "") {
				erreur = 1;
				GroupBoxPrenom->ForeColor = System::Drawing::Color::Red;
			}
			else {
				GroupBoxPrenom->ForeColor = System::Drawing::Color::Black;
			}

			if(SocieteCorrespondant->Text == "") {
				erreur = 1;
				GroupBoxSociete->ForeColor = System::Drawing::Color::Red;
			}
			else {
				GroupBoxSociete->ForeColor = System::Drawing::Color::Black;
			}

			if(TextBoxNature->Text == "") {
				erreur = 1;
				GroupBoxObjet->ForeColor = System::Drawing::Color::Red;
			}
			else {
				GroupBoxObjet->ForeColor = System::Drawing::Color::Black;
			}

			if(TextBoxArriver->Text == "") {
				erreur = 1;
				GroupBoxArriveé->ForeColor = System::Drawing::Color::Red;
			}
			else {
				GroupBoxArriveé->ForeColor = System::Drawing::Color::Black;
			}
			
			if(TextBoxSortie->Text == "") {
				erreur = 1;
				GroupBoxSortie->ForeColor = System::Drawing::Color::Red;
			}
			else {
				GroupBoxSortie->ForeColor = System::Drawing::Color::Black;
			}

			if(TextBoxDate->Text == "") {
				erreur = 1;
				GroupBoxDate->ForeColor = System::Drawing::Color::Red;
			}
			else {
				GroupBoxDate->ForeColor = System::Drawing::Color::Black;
			}

			if(erreur == 1) {
				MessageBox::Show("Remplir les champs vides", "Champ vide", MessageBoxButtons::OK , MessageBoxIcon::Exclamation);
			}

			else if(erreur == 0) {
				Close();
			}

			/*
			if(erreur == 1) {
				MessageBox::Show("Remplir les champs vides", "Champ vide", MessageBoxButtons::OK , MessageBoxIcon::Exclamation);
			}

			else ok->Text = "1";
			*/
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }

private: System::Void NomCorrespondant_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 GroupBoxNom->ForeColor = System::Drawing::Color::Black;
		 }

private: System::Void PrenomCorrespondant_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			GroupBoxPrenom->ForeColor = System::Drawing::Color::Black;
		}

private: System::Void SocieteCorrespondant_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 GroupBoxSociete->ForeColor = System::Drawing::Color::Black;
		}

private: System::Void TextBoxNature_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 GroupBoxObjet->ForeColor = System::Drawing::Color::Black;
		 }

private: System::Void TextBoxArriver1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 GroupBoxArriveé->ForeColor = System::Drawing::Color::Black;
		 }

private: System::Void TextBoxArriver2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 GroupBoxArriveé->ForeColor = System::Drawing::Color::Black;
		 }

private: System::Void TextBoxSortie1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 GroupBoxSortie->ForeColor = System::Drawing::Color::Black;
		 }

private: System::Void TextBoxSortie2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 GroupBoxSortie->ForeColor = System::Drawing::Color::Black;
		 }

private: System::Void TextBoxDate_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 GroupBoxDate->ForeColor = System::Drawing::Color::Black;
		 }

private: System::Void Reinit_Click(System::Object^  sender, System::EventArgs^  e) {
			NomCorrespondant->Text = "";
			PrenomCorrespondant->Text = "";
			SocieteCorrespondant->Text = "";
			TextBoxNature->Text = "";
			TextBoxArriver->Text = "";
			TextBoxSortie->Text = "";
			TextBoxDate->Text = "";
		 }
};
}

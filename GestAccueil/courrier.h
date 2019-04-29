#pragma once

namespace GestAccueil {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de courrier
	/// </summary>
	public ref class courrier : public System::Windows::Forms::Form
	{
	public:
		courrier(void)
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
		~courrier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox2;
	protected: 

	private: 
	private: System::Windows::Forms::GroupBox^  GroupBoxDate;
	public: System::Windows::Forms::TextBox^  Date;
	public: System::Windows::Forms::Button^  ReinitCourrier;
	public: System::Windows::Forms::Button^  AnnulerCourrier;
	private: 
	public: 

	private: 


	public: System::Windows::Forms::Button^  ValiderCourrier;


	private: System::Windows::Forms::GroupBox^  GroupBoxHeure;
	public: System::Windows::Forms::TextBox^  Heure;
	private: 
	public: 

	public: 

	private: 

	public: 

	private: 

	public: 

	private: 

	public: 

	private: System::Windows::Forms::GroupBox^  GroupBoxDest;
	public: System::Windows::Forms::TextBox^  Dest1;
	private: 
	public: 
	private: 


	private: 
	public: 

	private: System::Windows::Forms::GroupBox^  GroupBoxExp;
	public: System::Windows::Forms::TextBox^  Exp;
	public: System::Windows::Forms::TextBox^  Dest3;
	public: System::Windows::Forms::TextBox^  Dest2;
	private: System::Windows::Forms::GroupBox^  GroupeBoxMode;

	private: System::Windows::Forms::RadioButton^  LivraisonPickup;
	private: System::Windows::Forms::RadioButton^  LivraisonPrivee;
	private: System::Windows::Forms::RadioButton^  LivraisonPro;
	private: System::Windows::Forms::GroupBox^  GroupBoxMessage;
	public: System::Windows::Forms::TextBox^  Message;
	private: 
	public: 
	private: 
	public: 
	private: 

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
			this->GroupBoxMessage = (gcnew System::Windows::Forms::GroupBox());
			this->Message = (gcnew System::Windows::Forms::TextBox());
			this->GroupeBoxMode = (gcnew System::Windows::Forms::GroupBox());
			this->LivraisonPickup = (gcnew System::Windows::Forms::RadioButton());
			this->LivraisonPrivee = (gcnew System::Windows::Forms::RadioButton());
			this->LivraisonPro = (gcnew System::Windows::Forms::RadioButton());
			this->GroupBoxDate = (gcnew System::Windows::Forms::GroupBox());
			this->Date = (gcnew System::Windows::Forms::TextBox());
			this->ReinitCourrier = (gcnew System::Windows::Forms::Button());
			this->AnnulerCourrier = (gcnew System::Windows::Forms::Button());
			this->ValiderCourrier = (gcnew System::Windows::Forms::Button());
			this->GroupBoxHeure = (gcnew System::Windows::Forms::GroupBox());
			this->Heure = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxDest = (gcnew System::Windows::Forms::GroupBox());
			this->Dest3 = (gcnew System::Windows::Forms::TextBox());
			this->Dest2 = (gcnew System::Windows::Forms::TextBox());
			this->Dest1 = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxExp = (gcnew System::Windows::Forms::GroupBox());
			this->Exp = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2->SuspendLayout();
			this->GroupBoxMessage->SuspendLayout();
			this->GroupeBoxMode->SuspendLayout();
			this->GroupBoxDate->SuspendLayout();
			this->GroupBoxHeure->SuspendLayout();
			this->GroupBoxDest->SuspendLayout();
			this->GroupBoxExp->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->GroupBoxMessage);
			this->groupBox2->Controls->Add(this->GroupeBoxMode);
			this->groupBox2->Controls->Add(this->GroupBoxDate);
			this->groupBox2->Controls->Add(this->ReinitCourrier);
			this->groupBox2->Controls->Add(this->AnnulerCourrier);
			this->groupBox2->Controls->Add(this->ValiderCourrier);
			this->groupBox2->Controls->Add(this->GroupBoxHeure);
			this->groupBox2->Controls->Add(this->GroupBoxDest);
			this->groupBox2->Controls->Add(this->GroupBoxExp);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(407, 382);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Visiteur";
			// 
			// GroupBoxMessage
			// 
			this->GroupBoxMessage->Controls->Add(this->Message);
			this->GroupBoxMessage->Location = System::Drawing::Point(6, 192);
			this->GroupBoxMessage->Name = L"GroupBoxMessage";
			this->GroupBoxMessage->Size = System::Drawing::Size(228, 171);
			this->GroupBoxMessage->TabIndex = 25;
			this->GroupBoxMessage->TabStop = false;
			this->GroupBoxMessage->Text = L"Message :";
			// 
			// Message
			// 
			this->Message->Location = System::Drawing::Point(6, 19);
			this->Message->Multiline = true;
			this->Message->Name = L"Message";
			this->Message->Size = System::Drawing::Size(211, 146);
			this->Message->TabIndex = 3;
			// 
			// GroupeBoxMode
			// 
			this->GroupeBoxMode->Controls->Add(this->LivraisonPickup);
			this->GroupeBoxMode->Controls->Add(this->LivraisonPrivee);
			this->GroupeBoxMode->Controls->Add(this->LivraisonPro);
			this->GroupeBoxMode->Location = System::Drawing::Point(240, 135);
			this->GroupeBoxMode->Name = L"GroupeBoxMode";
			this->GroupeBoxMode->Size = System::Drawing::Size(155, 87);
			this->GroupeBoxMode->TabIndex = 24;
			this->GroupeBoxMode->TabStop = false;
			this->GroupeBoxMode->Text = L"Mode de livraison :";
			// 
			// LivraisonPickup
			// 
			this->LivraisonPickup->AutoSize = true;
			this->LivraisonPickup->Location = System::Drawing::Point(7, 67);
			this->LivraisonPickup->Name = L"LivraisonPickup";
			this->LivraisonPickup->Size = System::Drawing::Size(144, 17);
			this->LivraisonPickup->TabIndex = 2;
			this->LivraisonPickup->Text = L"Livraison en relais pickup";
			this->LivraisonPickup->UseVisualStyleBackColor = true;
			// 
			// LivraisonPrivee
			// 
			this->LivraisonPrivee->AutoSize = true;
			this->LivraisonPrivee->Location = System::Drawing::Point(7, 44);
			this->LivraisonPrivee->Name = L"LivraisonPrivee";
			this->LivraisonPrivee->Size = System::Drawing::Size(149, 17);
			this->LivraisonPrivee->TabIndex = 1;
			this->LivraisonPrivee->Text = L"Livraison au domicile privé";
			this->LivraisonPrivee->UseVisualStyleBackColor = true;
			// 
			// LivraisonPro
			// 
			this->LivraisonPro->AutoSize = true;
			this->LivraisonPro->Checked = true;
			this->LivraisonPro->Location = System::Drawing::Point(7, 20);
			this->LivraisonPro->Name = L"LivraisonPro";
			this->LivraisonPro->Size = System::Drawing::Size(147, 17);
			this->LivraisonPro->TabIndex = 0;
			this->LivraisonPro->TabStop = true;
			this->LivraisonPro->Text = L"Livraison pro / entreprises";
			this->LivraisonPro->UseVisualStyleBackColor = true;
			// 
			// GroupBoxDate
			// 
			this->GroupBoxDate->Controls->Add(this->Date);
			this->GroupBoxDate->Location = System::Drawing::Point(240, 77);
			this->GroupBoxDate->Name = L"GroupBoxDate";
			this->GroupBoxDate->Size = System::Drawing::Size(155, 52);
			this->GroupBoxDate->TabIndex = 20;
			this->GroupBoxDate->TabStop = false;
			this->GroupBoxDate->Text = L"Date :";
			// 
			// Date
			// 
			this->Date->Location = System::Drawing::Point(42, 19);
			this->Date->MaxLength = 10;
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(78, 20);
			this->Date->TabIndex = 6;
			// 
			// ReinitCourrier
			// 
			this->ReinitCourrier->DialogResult = System::Windows::Forms::DialogResult::Abort;
			this->ReinitCourrier->Location = System::Drawing::Point(264, 286);
			this->ReinitCourrier->Name = L"ReinitCourrier";
			this->ReinitCourrier->Size = System::Drawing::Size(108, 35);
			this->ReinitCourrier->TabIndex = 23;
			this->ReinitCourrier->Text = L"Reinitialiser";
			this->ReinitCourrier->UseVisualStyleBackColor = true;
			this->ReinitCourrier->Click += gcnew System::EventHandler(this, &courrier::ReinitCourrier_Click);
			// 
			// AnnulerCourrier
			// 
			this->AnnulerCourrier->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->AnnulerCourrier->Location = System::Drawing::Point(264, 327);
			this->AnnulerCourrier->Name = L"AnnulerCourrier";
			this->AnnulerCourrier->Size = System::Drawing::Size(108, 36);
			this->AnnulerCourrier->TabIndex = 22;
			this->AnnulerCourrier->Text = L"Annuler";
			this->AnnulerCourrier->UseVisualStyleBackColor = true;
			this->AnnulerCourrier->Click += gcnew System::EventHandler(this, &courrier::AnnulerCourrier_Click);
			// 
			// ValiderCourrier
			// 
			this->ValiderCourrier->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->ValiderCourrier->Location = System::Drawing::Point(264, 245);
			this->ValiderCourrier->Name = L"ValiderCourrier";
			this->ValiderCourrier->Size = System::Drawing::Size(108, 35);
			this->ValiderCourrier->TabIndex = 21;
			this->ValiderCourrier->Text = L"Envoyer";
			this->ValiderCourrier->UseVisualStyleBackColor = true;
			this->ValiderCourrier->Click += gcnew System::EventHandler(this, &courrier::ValiderCourrier_Click);
			// 
			// GroupBoxHeure
			// 
			this->GroupBoxHeure->Controls->Add(this->Heure);
			this->GroupBoxHeure->Location = System::Drawing::Point(240, 19);
			this->GroupBoxHeure->Name = L"GroupBoxHeure";
			this->GroupBoxHeure->Size = System::Drawing::Size(155, 52);
			this->GroupBoxHeure->TabIndex = 20;
			this->GroupBoxHeure->TabStop = false;
			this->GroupBoxHeure->Text = L"Heure :";
			// 
			// Heure
			// 
			this->Heure->Location = System::Drawing::Point(42, 19);
			this->Heure->MaxLength = 5;
			this->Heure->Name = L"Heure";
			this->Heure->Size = System::Drawing::Size(78, 20);
			this->Heure->TabIndex = 5;
			// 
			// GroupBoxDest
			// 
			this->GroupBoxDest->Controls->Add(this->Dest3);
			this->GroupBoxDest->Controls->Add(this->Dest2);
			this->GroupBoxDest->Controls->Add(this->Dest1);
			this->GroupBoxDest->Location = System::Drawing::Point(6, 77);
			this->GroupBoxDest->Name = L"GroupBoxDest";
			this->GroupBoxDest->Size = System::Drawing::Size(228, 109);
			this->GroupBoxDest->TabIndex = 16;
			this->GroupBoxDest->TabStop = false;
			this->GroupBoxDest->Text = L"Destinataire :";
			// 
			// Dest3
			// 
			this->Dest3->Location = System::Drawing::Point(6, 70);
			this->Dest3->Name = L"Dest3";
			this->Dest3->Size = System::Drawing::Size(211, 20);
			this->Dest3->TabIndex = 3;
			// 
			// Dest2
			// 
			this->Dest2->Location = System::Drawing::Point(6, 44);
			this->Dest2->Name = L"Dest2";
			this->Dest2->Size = System::Drawing::Size(211, 20);
			this->Dest2->TabIndex = 2;
			// 
			// Dest1
			// 
			this->Dest1->Location = System::Drawing::Point(6, 19);
			this->Dest1->Name = L"Dest1";
			this->Dest1->Size = System::Drawing::Size(211, 20);
			this->Dest1->TabIndex = 1;
			// 
			// GroupBoxExp
			// 
			this->GroupBoxExp->BackColor = System::Drawing::SystemColors::Control;
			this->GroupBoxExp->Controls->Add(this->Exp);
			this->GroupBoxExp->ForeColor = System::Drawing::SystemColors::ControlText;
			this->GroupBoxExp->Location = System::Drawing::Point(6, 19);
			this->GroupBoxExp->Name = L"GroupBoxExp";
			this->GroupBoxExp->Size = System::Drawing::Size(228, 52);
			this->GroupBoxExp->TabIndex = 15;
			this->GroupBoxExp->TabStop = false;
			this->GroupBoxExp->Text = L"Expéditeur";
			// 
			// Exp
			// 
			this->Exp->AccessibleDescription = L"";
			this->Exp->BackColor = System::Drawing::SystemColors::Window;
			this->Exp->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Exp->Location = System::Drawing::Point(6, 19);
			this->Exp->Name = L"Exp";
			this->Exp->Size = System::Drawing::Size(211, 20);
			this->Exp->TabIndex = 0;
			this->Exp->Text = L"mail@taxi.fr";
			// 
			// courrier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 406);
			this->Controls->Add(this->groupBox2);
			this->Name = L"courrier";
			this->Text = L"courrier";
			this->Load += gcnew System::EventHandler(this, &courrier::courrier_Load);
			this->groupBox2->ResumeLayout(false);
			this->GroupBoxMessage->ResumeLayout(false);
			this->GroupBoxMessage->PerformLayout();
			this->GroupeBoxMode->ResumeLayout(false);
			this->GroupeBoxMode->PerformLayout();
			this->GroupBoxDate->ResumeLayout(false);
			this->GroupBoxDate->PerformLayout();
			this->GroupBoxHeure->ResumeLayout(false);
			this->GroupBoxHeure->PerformLayout();
			this->GroupBoxDest->ResumeLayout(false);
			this->GroupBoxDest->PerformLayout();
			this->GroupBoxExp->ResumeLayout(false);
			this->GroupBoxExp->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void courrier_Load(System::Object^  sender, System::EventArgs^  e) {
				Heure->Text = (DateTime::Now).ToShortTimeString();
				Date->Text = (DateTime::Now).ToShortDateString();
			 }

private: System::Void ValiderCourrier_Click(System::Object^  sender, System::EventArgs^  e) {
			int erreur = 0;

			if(Exp->Text == "") {
				erreur = 1;
				GroupBoxExp->ForeColor = System::Drawing::Color::Red;
			}
			else {
				//NomCorrespondant->Text != "" ;
				GroupBoxExp->ForeColor = System::Drawing::Color::Black;
			}

			if(Dest1->Text == "") {
				erreur = 1;
				GroupBoxDest->ForeColor = System::Drawing::Color::Red;
			}
			else {
				GroupBoxDest->ForeColor = System::Drawing::Color::Black;
			}

			if(Message->Text == "") {
				erreur = 1;
				GroupBoxMessage->ForeColor = System::Drawing::Color::Red;
			}
			else {
				GroupBoxMessage->ForeColor = System::Drawing::Color::Black;
			}

			if(erreur == 1) {
				MessageBox::Show("Remplir les champs vides", "Champ vide", MessageBoxButtons::OK , MessageBoxIcon::Exclamation);
			}

			else if(erreur == 0) {
				Close();
			}


		 }

private: System::Void ReinitCourrier_Click(System::Object^  sender, System::EventArgs^  e) {
			 Exp->Text = "";
			 Dest1->Text = "";
			 Dest2->Text = "";
			 Dest3->Text = "";
			 Message->Text = "";

			 Heure->Text = (DateTime::Now).ToShortTimeString();
			 Date->Text = (DateTime::Now).ToShortDateString();
		 }

private: System::Void AnnulerCourrier_Click(System::Object^  sender, System::EventArgs^  e) {
			 Exp->Text = "";
			 Dest1->Text = "";
			 Dest2->Text = "";
			 Dest3->Text = "";
			 Message->Text = "";

			 Heure->Text = "";
			 Date->Text = "";

			 Close();
		 }
};
}

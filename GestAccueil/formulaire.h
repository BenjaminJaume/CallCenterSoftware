#pragma once

namespace GestAccueil {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de formulaire
	/// </summary>
	public ref class formulaire : public System::Windows::Forms::Form
	{
	public:
		formulaire(void)
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
		~formulaire()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  NumAppel;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::TextBox^  NomCorrespondant;
	private: System::Windows::Forms::GroupBox^  GroupBoxOp;
	private: System::Windows::Forms::Label^  OpPoste;


	private: System::Windows::Forms::Label^  OpPrenom;

	private: System::Windows::Forms::Label^  OpNom;
	private: System::Windows::Forms::TextBox^  TextBoxNature;




	private: System::Windows::Forms::RadioButton^  Normal;
	private: System::Windows::Forms::RadioButton^  Urgent;
	private: System::Windows::Forms::RadioButton^  TresUrgent;
	private: System::Windows::Forms::GroupBox^  GroupBoxNature;

	private: System::Windows::Forms::GroupBox^  GroupBoxSociete;

	private: System::Windows::Forms::TextBox^  SocieteCorrespondant;
	private: System::Windows::Forms::GroupBox^  GroupBoxPrenom;


	private: System::Windows::Forms::TextBox^  PrenomCorrespondant;
	private: System::Windows::Forms::GroupBox^  GroupBoxNom;



	private: System::Windows::Forms::GroupBox^  groupBox9;



	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::GroupBox^  SiOui;
	private: System::Windows::Forms::Label^  NumRappel;





	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  PosteRappel;

	private: System::Windows::Forms::Label^  PrenomRappel;

	private: System::Windows::Forms::Label^  NomRappel;


	private: System::Windows::Forms::RadioButton^  BtNon;
	private: System::Windows::Forms::RadioButton^  BtOui;
	private: System::Windows::Forms::TextBox^  TextBoxPrenomRappel;



	private: System::Windows::Forms::TextBox^  TextBoxNomRappel;




	private: System::Windows::Forms::Button^  Annuler;
	private: System::Windows::Forms::TextBox^  TextBoxNumRappel;




	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::ComboBox^  ComboRappel;


	private: System::Windows::Forms::ComboBox^  ComboOp;



	private: System::Windows::Forms::TextBox^  TextBoxPrenomOp;

	private: System::Windows::Forms::TextBox^  TextBoxNomOp;

	private: System::Windows::Forms::Button^  Enregistrer;
private: System::Windows::Forms::TextBox^  TextBoxNumAppel;
private: System::Windows::Forms::Button^  Reinit;







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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TextBoxNumAppel = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->NumAppel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->SiOui = (gcnew System::Windows::Forms::GroupBox());
			this->ComboRappel = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->TextBoxNumRappel = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxPrenomRappel = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNomRappel = (gcnew System::Windows::Forms::TextBox());
			this->NumRappel = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->PosteRappel = (gcnew System::Windows::Forms::Label());
			this->PrenomRappel = (gcnew System::Windows::Forms::Label());
			this->NomRappel = (gcnew System::Windows::Forms::Label());
			this->BtNon = (gcnew System::Windows::Forms::RadioButton());
			this->BtOui = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->TresUrgent = (gcnew System::Windows::Forms::RadioButton());
			this->Urgent = (gcnew System::Windows::Forms::RadioButton());
			this->Normal = (gcnew System::Windows::Forms::RadioButton());
			this->GroupBoxNature = (gcnew System::Windows::Forms::GroupBox());
			this->TextBoxNature = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxSociete = (gcnew System::Windows::Forms::GroupBox());
			this->SocieteCorrespondant = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxPrenom = (gcnew System::Windows::Forms::GroupBox());
			this->PrenomCorrespondant = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxNom = (gcnew System::Windows::Forms::GroupBox());
			this->NomCorrespondant = (gcnew System::Windows::Forms::TextBox());
			this->GroupBoxOp = (gcnew System::Windows::Forms::GroupBox());
			this->ComboOp = (gcnew System::Windows::Forms::ComboBox());
			this->TextBoxPrenomOp = (gcnew System::Windows::Forms::TextBox());
			this->TextBoxNomOp = (gcnew System::Windows::Forms::TextBox());
			this->OpPoste = (gcnew System::Windows::Forms::Label());
			this->OpPrenom = (gcnew System::Windows::Forms::Label());
			this->OpNom = (gcnew System::Windows::Forms::Label());
			this->Annuler = (gcnew System::Windows::Forms::Button());
			this->Enregistrer = (gcnew System::Windows::Forms::Button());
			this->Reinit = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->SiOui->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->GroupBoxNature->SuspendLayout();
			this->GroupBoxSociete->SuspendLayout();
			this->GroupBoxPrenom->SuspendLayout();
			this->GroupBoxNom->SuspendLayout();
			this->GroupBoxOp->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->TextBoxNumAppel);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->NumAppel);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(534, 49);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Données";
			// 
			// TextBoxNumAppel
			// 
			this->TextBoxNumAppel->Location = System::Drawing::Point(419, 23);
			this->TextBoxNumAppel->MaxLength = 10;
			this->TextBoxNumAppel->Name = L"TextBoxNumAppel";
			this->TextBoxNumAppel->Size = System::Drawing::Size(100, 20);
			this->TextBoxNumAppel->TabIndex = 5;
			this->TextBoxNumAppel->TextChanged += gcnew System::EventHandler(this, &formulaire::TextBoxNumAppel_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Blue;
			this->label14->Location = System::Drawing::Point(260, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 13);
			this->label14->TabIndex = 4;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Blue;
			this->label13->Location = System::Drawing::Point(53, 26);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 13);
			this->label13->TabIndex = 3;
			// 
			// NumAppel
			// 
			this->NumAppel->AutoSize = true;
			this->NumAppel->Location = System::Drawing::Point(352, 26);
			this->NumAppel->Name = L"NumAppel";
			this->NumAppel->Size = System::Drawing::Size(62, 13);
			this->NumAppel->TabIndex = 2;
			this->NumAppel->Text = L"N° d\'appel :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Date :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(221, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Heure :";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox9);
			this->groupBox2->Controls->Add(this->groupBox8);
			this->groupBox2->Controls->Add(this->GroupBoxNature);
			this->groupBox2->Controls->Add(this->GroupBoxSociete);
			this->groupBox2->Controls->Add(this->GroupBoxPrenom);
			this->groupBox2->Controls->Add(this->GroupBoxNom);
			this->groupBox2->Location = System::Drawing::Point(13, 68);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(534, 314);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Correspondant";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->SiOui);
			this->groupBox9->Controls->Add(this->BtNon);
			this->groupBox9->Controls->Add(this->BtOui);
			this->groupBox9->Location = System::Drawing::Point(244, 77);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(284, 225);
			this->groupBox9->TabIndex = 20;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"A rappeler";
			// 
			// SiOui
			// 
			this->SiOui->Controls->Add(this->ComboRappel);
			this->SiOui->Controls->Add(this->dateTimePicker1);
			this->SiOui->Controls->Add(this->TextBoxNumRappel);
			this->SiOui->Controls->Add(this->TextBoxPrenomRappel);
			this->SiOui->Controls->Add(this->TextBoxNomRappel);
			this->SiOui->Controls->Add(this->NumRappel);
			this->SiOui->Controls->Add(this->label7);
			this->SiOui->Controls->Add(this->PosteRappel);
			this->SiOui->Controls->Add(this->PrenomRappel);
			this->SiOui->Controls->Add(this->NomRappel);
			this->SiOui->Enabled = false;
			this->SiOui->Location = System::Drawing::Point(12, 43);
			this->SiOui->Name = L"SiOui";
			this->SiOui->Size = System::Drawing::Size(263, 169);
			this->SiOui->TabIndex = 11;
			this->SiOui->TabStop = false;
			// 
			// ComboRappel
			// 
			this->ComboRappel->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->ComboRappel->FormattingEnabled = true;
			this->ComboRappel->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->ComboRappel->Location = System::Drawing::Point(65, 140);
			this->ComboRappel->Name = L"ComboRappel";
			this->ComboRappel->Size = System::Drawing::Size(113, 21);
			this->ComboRappel->TabIndex = 11;
			this->ComboRappel->Text = L"N° de poste";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(65, 19);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(187, 20);
			this->dateTimePicker1->TabIndex = 10;
			// 
			// TextBoxNumRappel
			// 
			this->TextBoxNumRappel->Location = System::Drawing::Point(65, 105);
			this->TextBoxNumRappel->Name = L"TextBoxNumRappel";
			this->TextBoxNumRappel->Size = System::Drawing::Size(187, 20);
			this->TextBoxNumRappel->TabIndex = 7;
			// 
			// TextBoxPrenomRappel
			// 
			this->TextBoxPrenomRappel->Location = System::Drawing::Point(65, 73);
			this->TextBoxPrenomRappel->Name = L"TextBoxPrenomRappel";
			this->TextBoxPrenomRappel->Size = System::Drawing::Size(187, 20);
			this->TextBoxPrenomRappel->TabIndex = 6;
			// 
			// TextBoxNomRappel
			// 
			this->TextBoxNomRappel->Location = System::Drawing::Point(65, 45);
			this->TextBoxNomRappel->Name = L"TextBoxNomRappel";
			this->TextBoxNomRappel->Size = System::Drawing::Size(187, 20);
			this->TextBoxNomRappel->TabIndex = 5;
			// 
			// NumRappel
			// 
			this->NumRappel->AutoSize = true;
			this->NumRappel->Location = System::Drawing::Point(13, 108);
			this->NumRappel->Name = L"NumRappel";
			this->NumRappel->Size = System::Drawing::Size(50, 13);
			this->NumRappel->TabIndex = 4;
			this->NumRappel->Text = L"Numéro :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Date :";
			// 
			// PosteRappel
			// 
			this->PosteRappel->AutoSize = true;
			this->PosteRappel->Location = System::Drawing::Point(13, 143);
			this->PosteRappel->Name = L"PosteRappel";
			this->PosteRappel->Size = System::Drawing::Size(40, 13);
			this->PosteRappel->TabIndex = 2;
			this->PosteRappel->Text = L"Poste :";
			// 
			// PrenomRappel
			// 
			this->PrenomRappel->AutoSize = true;
			this->PrenomRappel->Location = System::Drawing::Point(13, 76);
			this->PrenomRappel->Name = L"PrenomRappel";
			this->PrenomRappel->Size = System::Drawing::Size(49, 13);
			this->PrenomRappel->TabIndex = 1;
			this->PrenomRappel->Text = L"Prénom :";
			// 
			// NomRappel
			// 
			this->NomRappel->AutoSize = true;
			this->NomRappel->Location = System::Drawing::Point(13, 48);
			this->NomRappel->Name = L"NomRappel";
			this->NomRappel->Size = System::Drawing::Size(35, 13);
			this->NomRappel->TabIndex = 0;
			this->NomRappel->Text = L"Nom :";
			// 
			// BtNon
			// 
			this->BtNon->AutoSize = true;
			this->BtNon->Checked = true;
			this->BtNon->Location = System::Drawing::Point(12, 20);
			this->BtNon->Name = L"BtNon";
			this->BtNon->Size = System::Drawing::Size(45, 17);
			this->BtNon->TabIndex = 9;
			this->BtNon->TabStop = true;
			this->BtNon->Text = L"Non";
			this->BtNon->UseVisualStyleBackColor = true;
			this->BtNon->CheckedChanged += gcnew System::EventHandler(this, &formulaire::radioButton4_CheckedChanged);
			// 
			// BtOui
			// 
			this->BtOui->AutoSize = true;
			this->BtOui->Location = System::Drawing::Point(77, 20);
			this->BtOui->Name = L"BtOui";
			this->BtOui->Size = System::Drawing::Size(41, 17);
			this->BtOui->TabIndex = 10;
			this->BtOui->TabStop = true;
			this->BtOui->Text = L"Oui";
			this->BtOui->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->TresUrgent);
			this->groupBox8->Controls->Add(this->Urgent);
			this->groupBox8->Controls->Add(this->Normal);
			this->groupBox8->Location = System::Drawing::Point(244, 19);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(284, 52);
			this->groupBox8->TabIndex = 19;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Priorité";
			// 
			// TresUrgent
			// 
			this->TresUrgent->AutoSize = true;
			this->TresUrgent->Location = System::Drawing::Point(12, 19);
			this->TresUrgent->Name = L"TresUrgent";
			this->TresUrgent->Size = System::Drawing::Size(79, 17);
			this->TresUrgent->TabIndex = 8;
			this->TresUrgent->Text = L"Très urgent";
			this->TresUrgent->UseVisualStyleBackColor = true;
			// 
			// Urgent
			// 
			this->Urgent->AutoSize = true;
			this->Urgent->Location = System::Drawing::Point(97, 19);
			this->Urgent->Name = L"Urgent";
			this->Urgent->Size = System::Drawing::Size(57, 17);
			this->Urgent->TabIndex = 9;
			this->Urgent->Text = L"Urgent";
			this->Urgent->UseVisualStyleBackColor = true;
			// 
			// Normal
			// 
			this->Normal->AutoSize = true;
			this->Normal->Checked = true;
			this->Normal->Location = System::Drawing::Point(168, 20);
			this->Normal->Name = L"Normal";
			this->Normal->Size = System::Drawing::Size(58, 17);
			this->Normal->TabIndex = 10;
			this->Normal->TabStop = true;
			this->Normal->Text = L"Normal";
			this->Normal->UseVisualStyleBackColor = true;
			// 
			// GroupBoxNature
			// 
			this->GroupBoxNature->Controls->Add(this->TextBoxNature);
			this->GroupBoxNature->Location = System::Drawing::Point(6, 193);
			this->GroupBoxNature->Name = L"GroupBoxNature";
			this->GroupBoxNature->Size = System::Drawing::Size(228, 115);
			this->GroupBoxNature->TabIndex = 18;
			this->GroupBoxNature->TabStop = false;
			this->GroupBoxNature->Text = L"Nature de l\'appel";
			// 
			// TextBoxNature
			// 
			this->TextBoxNature->Location = System::Drawing::Point(6, 19);
			this->TextBoxNature->Multiline = true;
			this->TextBoxNature->Name = L"TextBoxNature";
			this->TextBoxNature->Size = System::Drawing::Size(211, 90);
			this->TextBoxNature->TabIndex = 12;
			this->TextBoxNature->TextChanged += gcnew System::EventHandler(this, &formulaire::TextBoxNature_TextChanged);
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
			this->SocieteCorrespondant->TabIndex = 0;
			this->SocieteCorrespondant->TextChanged += gcnew System::EventHandler(this, &formulaire::SocieteCorrespondant_TextChanged);
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
			this->PrenomCorrespondant->TabIndex = 0;
			this->PrenomCorrespondant->TextChanged += gcnew System::EventHandler(this, &formulaire::PrenomCorrespondant_TextChanged);
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
			this->NomCorrespondant->BackColor = System::Drawing::SystemColors::Window;
			this->NomCorrespondant->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->NomCorrespondant->ForeColor = System::Drawing::SystemColors::WindowText;
			this->NomCorrespondant->Location = System::Drawing::Point(6, 19);
			this->NomCorrespondant->Name = L"NomCorrespondant";
			this->NomCorrespondant->Size = System::Drawing::Size(211, 20);
			this->NomCorrespondant->TabIndex = 0;
			this->NomCorrespondant->TextChanged += gcnew System::EventHandler(this, &formulaire::NomCorrespondant_TextChanged);
			// 
			// GroupBoxOp
			// 
			this->GroupBoxOp->Controls->Add(this->ComboOp);
			this->GroupBoxOp->Controls->Add(this->TextBoxPrenomOp);
			this->GroupBoxOp->Controls->Add(this->TextBoxNomOp);
			this->GroupBoxOp->Controls->Add(this->OpPoste);
			this->GroupBoxOp->Controls->Add(this->OpPrenom);
			this->GroupBoxOp->Controls->Add(this->OpNom);
			this->GroupBoxOp->Location = System::Drawing::Point(13, 388);
			this->GroupBoxOp->Name = L"GroupBoxOp";
			this->GroupBoxOp->Size = System::Drawing::Size(380, 120);
			this->GroupBoxOp->TabIndex = 2;
			this->GroupBoxOp->TabStop = false;
			this->GroupBoxOp->Text = L"Opératrice de saisie";
			// 
			// ComboOp
			// 
			this->ComboOp->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->ComboOp->FormattingEnabled = true;
			this->ComboOp->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", 
				L"10"});
			this->ComboOp->Location = System::Drawing::Point(70, 78);
			this->ComboOp->Name = L"ComboOp";
			this->ComboOp->Size = System::Drawing::Size(113, 21);
			this->ComboOp->TabIndex = 12;
			this->ComboOp->Text = L"N° de poste";
			this->ComboOp->SelectedIndexChanged += gcnew System::EventHandler(this, &formulaire::ComboOp_SelectedIndexChanged);
			// 
			// TextBoxPrenomOp
			// 
			this->TextBoxPrenomOp->Location = System::Drawing::Point(70, 51);
			this->TextBoxPrenomOp->Name = L"TextBoxPrenomOp";
			this->TextBoxPrenomOp->Size = System::Drawing::Size(292, 20);
			this->TextBoxPrenomOp->TabIndex = 6;
			this->TextBoxPrenomOp->TextChanged += gcnew System::EventHandler(this, &formulaire::TextBoxPrenomOp_TextChanged);
			// 
			// TextBoxNomOp
			// 
			this->TextBoxNomOp->Location = System::Drawing::Point(70, 25);
			this->TextBoxNomOp->Name = L"TextBoxNomOp";
			this->TextBoxNomOp->Size = System::Drawing::Size(292, 20);
			this->TextBoxNomOp->TabIndex = 5;
			this->TextBoxNomOp->TextChanged += gcnew System::EventHandler(this, &formulaire::TextBoxNomOp_TextChanged);
			// 
			// OpPoste
			// 
			this->OpPoste->AutoSize = true;
			this->OpPoste->Location = System::Drawing::Point(11, 81);
			this->OpPoste->Name = L"OpPoste";
			this->OpPoste->Size = System::Drawing::Size(40, 13);
			this->OpPoste->TabIndex = 4;
			this->OpPoste->Text = L"Poste :";
			// 
			// OpPrenom
			// 
			this->OpPrenom->AutoSize = true;
			this->OpPrenom->Location = System::Drawing::Point(11, 54);
			this->OpPrenom->Name = L"OpPrenom";
			this->OpPrenom->Size = System::Drawing::Size(49, 13);
			this->OpPrenom->TabIndex = 3;
			this->OpPrenom->Text = L"Prénom :";
			// 
			// OpNom
			// 
			this->OpNom->AutoSize = true;
			this->OpNom->Location = System::Drawing::Point(11, 28);
			this->OpNom->Name = L"OpNom";
			this->OpNom->Size = System::Drawing::Size(35, 13);
			this->OpNom->TabIndex = 2;
			this->OpNom->Text = L"Nom :";
			// 
			// Annuler
			// 
			this->Annuler->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Annuler->Location = System::Drawing::Point(436, 431);
			this->Annuler->Name = L"Annuler";
			this->Annuler->Size = System::Drawing::Size(96, 35);
			this->Annuler->TabIndex = 4;
			this->Annuler->Text = L"Annuler";
			this->Annuler->UseVisualStyleBackColor = true;
			this->Annuler->Click += gcnew System::EventHandler(this, &formulaire::Annuler_Click);
			// 
			// Enregistrer
			// 
			this->Enregistrer->Location = System::Drawing::Point(436, 394);
			this->Enregistrer->Name = L"Enregistrer";
			this->Enregistrer->Size = System::Drawing::Size(96, 35);
			this->Enregistrer->TabIndex = 5;
			this->Enregistrer->Text = L"Enregistrer";
			this->Enregistrer->UseVisualStyleBackColor = true;
			this->Enregistrer->Click += gcnew System::EventHandler(this, &formulaire::Enregistrer_Click);
			// 
			// Reinit
			// 
			this->Reinit->Location = System::Drawing::Point(436, 469);
			this->Reinit->Name = L"Reinit";
			this->Reinit->Size = System::Drawing::Size(96, 35);
			this->Reinit->TabIndex = 6;
			this->Reinit->Text = L"Reinitialiser";
			this->Reinit->UseVisualStyleBackColor = true;
			this->Reinit->Click += gcnew System::EventHandler(this, &formulaire::Reinit_Click);
			// 
			// formulaire
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 532);
			this->Controls->Add(this->Reinit);
			this->Controls->Add(this->Enregistrer);
			this->Controls->Add(this->Annuler);
			this->Controls->Add(this->GroupBoxOp);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"formulaire";
			this->Load += gcnew System::EventHandler(this, &formulaire::formulaire_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->SiOui->ResumeLayout(false);
			this->SiOui->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->GroupBoxNature->ResumeLayout(false);
			this->GroupBoxNature->PerformLayout();
			this->GroupBoxSociete->ResumeLayout(false);
			this->GroupBoxSociete->PerformLayout();
			this->GroupBoxPrenom->ResumeLayout(false);
			this->GroupBoxPrenom->PerformLayout();
			this->GroupBoxNom->ResumeLayout(false);
			this->GroupBoxNom->PerformLayout();
			this->GroupBoxOp->ResumeLayout(false);
			this->GroupBoxOp->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if(BtOui->Checked == true) {
				SiOui->Enabled = true;
			}
			else {
				SiOui->Enabled = false;
			}
		 }

private: System::Void NomCorrespondant_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->Text = NomCorrespondant->Text + " " + PrenomCorrespondant->Text + " - " + SocieteCorrespondant->Text;
			 GroupBoxNom->ForeColor = System::Drawing::Color::Black;
		 }

private: System::Void PrenomCorrespondant_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->Text = NomCorrespondant->Text + " " + PrenomCorrespondant->Text + " - " + SocieteCorrespondant->Text;
			 GroupBoxPrenom->ForeColor = System::Drawing::Color::Black;
		 }

private: System::Void SocieteCorrespondant_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->Text = NomCorrespondant->Text + " " + PrenomCorrespondant->Text + " - " + SocieteCorrespondant->Text;
			 GroupBoxSociete->ForeColor = System::Drawing::Color::Black;
		 }

private: System::Void TextBoxNature_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 GroupBoxNature->ForeColor = System::Drawing::Color::Black;
}

private: System::Void TextBoxNumAppel_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 NumAppel->ForeColor = System::Drawing::Color::Black;
}

private: System::Void TextBoxNomOp_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 OpNom->ForeColor = System::Drawing::Color::Black;
}

private: System::Void TextBoxPrenomOp_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 OpPrenom->ForeColor = System::Drawing::Color::Black;
}

private: System::Void ComboOp_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 OpPoste->ForeColor = System::Drawing::Color::Black;
}

private: System::Void formulaire_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->label14->Text = (DateTime::Now).ToShortTimeString();
			 this->label13->Text = (DateTime::Now).ToShortDateString();

			 /*if(Form1->id->Text == "JAUME" && Form1->mdp->Text == "mdpirist") {
				TextBoxNomOp->Text = "Professeur";
				TextBoxPrenomOp->Text = Form1->id->Text;
				ComboOp->SelectedValue = 2;
			 }*/
		 }

private: System::Void Annuler_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }

private: System::Void Enregistrer_Click(System::Object^  sender, System::EventArgs^  e) {
			//System::Windows::Forms::DialogResult result;

			int erreur = 0;

			if(NomCorrespondant->Text == "") {
				erreur = 1;
				GroupBoxNom->ForeColor = System::Drawing::Color::Red;
			}
			else {
				//NomCorrespondant->Text != "" ;
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
				GroupBoxNature->ForeColor = System::Drawing::Color::Red;
			}
			else {
				GroupBoxNature->ForeColor = System::Drawing::Color::Black;
			}

			if(TextBoxNomOp->Text == "") {
				erreur = 1;
				OpNom->ForeColor = System::Drawing::Color::Red;
			}
			else {
				OpNom->ForeColor = System::Drawing::Color::Black;
			}

			if(TextBoxPrenomOp->Text == "") {
				erreur = 1;
				OpPrenom->ForeColor = System::Drawing::Color::Red;
			}
			else {
				OpPrenom->ForeColor = System::Drawing::Color::Black;
			}
			
			if(ComboOp->Text == "N° de poste") {
				erreur = 1;
				OpPoste->ForeColor = System::Drawing::Color::Red;
			}
			else {
				OpPoste->ForeColor = System::Drawing::Color::Black;
			}

			if(TextBoxNumAppel->Text == "") {
				erreur = 1;
				NumAppel->ForeColor = System::Drawing::Color::Red;
			}
			else {
				NumAppel->ForeColor = System::Drawing::Color::Black;
			}

			if(SiOui->Enabled == true) {
				if(TextBoxNomRappel->Text == "") {
					erreur = 1;
					NomRappel->ForeColor = System::Drawing::Color::Red;
				}
				else {
					NomRappel->ForeColor = System::Drawing::Color::Black;
				}

				if(TextBoxPrenomRappel->Text == "") {
					erreur = 1;
					PrenomRappel->ForeColor = System::Drawing::Color::Red;
				}
				else {
					PrenomRappel->ForeColor = System::Drawing::Color::Black;
				}

				if(TextBoxNumRappel->Text == "") {
					erreur = 1;
					NumRappel->ForeColor = System::Drawing::Color::Red;
				}
				else {
					NumRappel->ForeColor = System::Drawing::Color::Black;
				}

				if(ComboRappel->Text == "N° de poste") {
					erreur = 1;
					PosteRappel->ForeColor = System::Drawing::Color::Red;
				}
				else {
					PosteRappel->ForeColor = System::Drawing::Color::Black;
				}
			}

			if(erreur == 1) {
				MessageBox::Show("Remplir les champs vides", "Champ vide", MessageBoxButtons::OK , MessageBoxIcon::Exclamation);
			}

			else if(erreur == 0) {
				Close();
			}

			}

private: System::Void Reinit_Click(System::Object^  sender, System::EventArgs^  e) {
			//formulaire->Text = "Formulaire";
			NomCorrespondant->Text = "";
			PrenomCorrespondant->Text = "";
			SocieteCorrespondant->Text = "";
			TextBoxNature->Text = "";
			TextBoxNomOp->Text = "";
			TextBoxPrenomOp->Text = "";
			ComboOp->Text = "N° de poste";
			BtNon->Checked = true;
			BtOui->Checked = false;
			TextBoxNomRappel->Text = "";
			TextBoxPrenomRappel->Text = "";
			TextBoxNumRappel->Text = "";
			ComboRappel->Text = "N° de poste";
			TextBoxNumAppel->Text = "";
			//dateTimePicker1->ResetText();
			}
};
}
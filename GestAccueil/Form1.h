#pragma once

#include "formulaire.h"
#include "visiteur.h"
#include "accueil.h"
#include "courrier.h"

namespace GestAccueil {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			FormCourrier = gcnew courrier( ) ;
			FormFormulaire = gcnew formulaire( ) ;
			FormAcceuil = gcnew accueil( ) ;
			FormVisiteur = gcnew visiteur( ) ;

			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: courrier ^FormCourrier;
	private: formulaire ^FormFormulaire;
	private: accueil ^FormAcceuil;
	private: visiteur ^FormVisiteur;
	private: System::Windows::Forms::TabControl^  Gestion;
	protected: 
	private: System::Windows::Forms::TabPage^  Appel;
	private: System::Windows::Forms::TabPage^  Courrier;
	private: System::Windows::Forms::TabPage^  Visiteur;
	private: System::Windows::Forms::Button^  form;
	private: System::Windows::Forms::ListBox^  Normal;
	private: System::Windows::Forms::ListBox^  Urgent;
	private: System::Windows::Forms::ListBox^  TresUrgent;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  ChargerFichier;












	private: System::Windows::Forms::Button^  Quitter;
	private: System::Windows::Forms::Button^  EnregistrerFichier;
	private: System::Windows::Forms::GroupBox^  Envoi;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::ListBox^  HistoNomVisiteur;



	private: System::Windows::Forms::Button^  Supprimer;

	private: System::Windows::Forms::Button^  Modifier;
	private: System::Windows::Forms::Button^  Supp3;
	private: System::Windows::Forms::Button^  Supp2;
	private: System::Windows::Forms::Button^  Supp1;
	private: System::Windows::Forms::GroupBox^  Recherche;
	private: System::Windows::Forms::TextBox^  RechercheNom;

	private: System::Windows::Forms::TextBox^  Resultat;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  ListBoxNomRecep;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ListBox^  HistoHeureArriveeVisiteur;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListBox^  HistoDateVisiteur;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::ListBox^  HistoPrenomVisiteur;
	private: System::Windows::Forms::ListBox^  HistoHeureSortieVisiteur;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ListBox^  HistoObjetVisiteur;

	private: System::Windows::Forms::ListBox^  HistoSocieteVisiteur;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  RechercheMessage;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  RechercheAdresse;

	private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::ListBox^  ListBoxMessageRecep;

private: System::Windows::Forms::ListBox^  ListBoxAdresseRecep;



private: System::Windows::Forms::RadioButton^  ValidEnvoi;
private: System::Windows::Forms::RadioButton^  ValidRecep;
private: System::Windows::Forms::ListBox^  ListBoxMessageEnvoi;

private: System::Windows::Forms::ListBox^  ListBoxAdresseEnvoi;

private: System::Windows::Forms::ListBox^  ListBoxNomEnvoi;
private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;


private: System::Windows::Forms::Button^  EnvoiCourrier;
private: System::Windows::Forms::Button^  AjoutVisit;
private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  LabelRecherche;
private: System::Windows::Forms::Button^  BoutonResultat;
private: System::Windows::Forms::Label^  id;
private: System::Windows::Forms::Label^  mdp;














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
			this->Gestion = (gcnew System::Windows::Forms::TabControl());
			this->Appel = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Supp3 = (gcnew System::Windows::Forms::Button());
			this->Normal = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->Supp2 = (gcnew System::Windows::Forms::Button());
			this->Urgent = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Supp1 = (gcnew System::Windows::Forms::Button());
			this->TresUrgent = (gcnew System::Windows::Forms::ListBox());
			this->Courrier = (gcnew System::Windows::Forms::TabPage());
			this->LabelRecherche = (gcnew System::Windows::Forms::Label());
			this->BoutonResultat = (gcnew System::Windows::Forms::Button());
			this->Recherche = (gcnew System::Windows::Forms::GroupBox());
			this->ValidEnvoi = (gcnew System::Windows::Forms::RadioButton());
			this->ValidRecep = (gcnew System::Windows::Forms::RadioButton());
			this->RechercheMessage = (gcnew System::Windows::Forms::TextBox());
			this->Resultat = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->RechercheAdresse = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RechercheNom = (gcnew System::Windows::Forms::TextBox());
			this->Envoi = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->ListBoxMessageEnvoi = (gcnew System::Windows::Forms::ListBox());
			this->ListBoxAdresseEnvoi = (gcnew System::Windows::Forms::ListBox());
			this->ListBoxNomEnvoi = (gcnew System::Windows::Forms::ListBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->ListBoxMessageRecep = (gcnew System::Windows::Forms::ListBox());
			this->ListBoxAdresseRecep = (gcnew System::Windows::Forms::ListBox());
			this->ListBoxNomRecep = (gcnew System::Windows::Forms::ListBox());
			this->Visiteur = (gcnew System::Windows::Forms::TabPage());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->HistoHeureSortieVisiteur = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->HistoObjetVisiteur = (gcnew System::Windows::Forms::ListBox());
			this->HistoSocieteVisiteur = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->HistoHeureArriveeVisiteur = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->HistoDateVisiteur = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->HistoPrenomVisiteur = (gcnew System::Windows::Forms::ListBox());
			this->HistoNomVisiteur = (gcnew System::Windows::Forms::ListBox());
			this->form = (gcnew System::Windows::Forms::Button());
			this->Quitter = (gcnew System::Windows::Forms::Button());
			this->EnregistrerFichier = (gcnew System::Windows::Forms::Button());
			this->ChargerFichier = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->EnvoiCourrier = (gcnew System::Windows::Forms::Button());
			this->AjoutVisit = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->id = (gcnew System::Windows::Forms::Label());
			this->mdp = (gcnew System::Windows::Forms::Label());
			this->Gestion->SuspendLayout();
			this->Appel->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->Courrier->SuspendLayout();
			this->Recherche->SuspendLayout();
			this->Envoi->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->Visiteur->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// Gestion
			// 
			this->Gestion->Controls->Add(this->Appel);
			this->Gestion->Controls->Add(this->Courrier);
			this->Gestion->Controls->Add(this->Visiteur);
			this->Gestion->Location = System::Drawing::Point(12, 47);
			this->Gestion->Name = L"Gestion";
			this->Gestion->SelectedIndex = 0;
			this->Gestion->Size = System::Drawing::Size(573, 349);
			this->Gestion->TabIndex = 0;
			// 
			// Appel
			// 
			this->Appel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)), 
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->Appel->Controls->Add(this->groupBox3);
			this->Appel->Controls->Add(this->groupBox2);
			this->Appel->Controls->Add(this->groupBox1);
			this->Appel->ImageKey = L"(aucun)";
			this->Appel->Location = System::Drawing::Point(4, 22);
			this->Appel->Name = L"Appel";
			this->Appel->Padding = System::Windows::Forms::Padding(3);
			this->Appel->Size = System::Drawing::Size(565, 323);
			this->Appel->TabIndex = 0;
			this->Appel->Text = L"Historique des appels";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->Supp3);
			this->groupBox3->Controls->Add(this->Normal);
			this->groupBox3->Location = System::Drawing::Point(6, 213);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(552, 97);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Historique des appels NORMAUX";
			// 
			// Supp3
			// 
			this->Supp3->Location = System::Drawing::Point(471, 19);
			this->Supp3->Name = L"Supp3";
			this->Supp3->Size = System::Drawing::Size(75, 69);
			this->Supp3->TabIndex = 3;
			this->Supp3->Text = L"Supprimer l\'appel";
			this->Supp3->UseVisualStyleBackColor = true;
			this->Supp3->Click += gcnew System::EventHandler(this, &Form1::Supp3_Click);
			// 
			// Normal
			// 
			this->Normal->ForeColor = System::Drawing::Color::Blue;
			this->Normal->FormattingEnabled = true;
			this->Normal->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"MASSIE Florian, le 14/04/1964 à 15h20 (0607040403)", 
				L"RADULOV Lachezar, le 9/07/1994 à 12h36 (0304602020)", L"JAUME Benjamin, le 19/03/2014 à 21h03 (0605249549)", L"JAUME Benjamin, le 19/03/2014 à 21h03 (0605249549)", 
				L"RADULOV Lachezar, le 9/07/1994 à 12h36 (0304602020)", L"MASSIE Florian, le 14/04/1964 à 15h20 (0607040403)", L"JAUME Benjamin, le 19/03/2014 à 21h03 (0605249549)", 
				L"RADULOV Lachezar, le 9/07/1994 à 12h36 (0304602020)", L"MASSIE Florian, le 14/04/1964 à 15h20 (0607040403)"});
			this->Normal->Location = System::Drawing::Point(7, 19);
			this->Normal->Name = L"Normal";
			this->Normal->ScrollAlwaysVisible = true;
			this->Normal->Size = System::Drawing::Size(459, 69);
			this->Normal->TabIndex = 2;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->Supp2);
			this->groupBox2->Controls->Add(this->Urgent);
			this->groupBox2->Location = System::Drawing::Point(7, 110);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(552, 97);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Historique des appels URGENTS";
			// 
			// Supp2
			// 
			this->Supp2->Location = System::Drawing::Point(471, 19);
			this->Supp2->Name = L"Supp2";
			this->Supp2->Size = System::Drawing::Size(75, 69);
			this->Supp2->TabIndex = 2;
			this->Supp2->Text = L"Supprimer l\'appel";
			this->Supp2->UseVisualStyleBackColor = true;
			this->Supp2->Click += gcnew System::EventHandler(this, &Form1::Supp2_Click);
			// 
			// Urgent
			// 
			this->Urgent->ForeColor = System::Drawing::Color::Orange;
			this->Urgent->FormattingEnabled = true;
			this->Urgent->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"JAUME Benjamin, le 19/03/2014 à 21h03 (0605249549)", 
				L"MASSIE Florian, le 14/04/1964 à 15h20 (0607040403)", L"RADULOV Lachezar, le 9/07/1994 à 12h36 (0304602020)", L"JAUME Benjamin, le 19/03/2014 à 21h03 (0605249549)", 
				L"RADULOV Lachezar, le 9/07/1994 à 12h36 (0304602020)", L"MASSIE Florian, le 14/04/1964 à 15h20 (0607040403)", L"JAUME Benjamin, le 19/03/2014 à 21h03 (0605249549)", 
				L"RADULOV Lachezar, le 9/07/1994 à 12h36 (0304602020)", L"MASSIE Florian, le 14/04/1964 à 15h20 (0607040403)"});
			this->Urgent->Location = System::Drawing::Point(6, 19);
			this->Urgent->Name = L"Urgent";
			this->Urgent->ScrollAlwaysVisible = true;
			this->Urgent->Size = System::Drawing::Size(459, 69);
			this->Urgent->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->Supp1);
			this->groupBox1->Controls->Add(this->TresUrgent);
			this->groupBox1->Location = System::Drawing::Point(7, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(552, 97);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Historique des appels TRES URGENTS";
			// 
			// Supp1
			// 
			this->Supp1->Location = System::Drawing::Point(471, 19);
			this->Supp1->Name = L"Supp1";
			this->Supp1->Size = System::Drawing::Size(75, 69);
			this->Supp1->TabIndex = 1;
			this->Supp1->Text = L"Supprimer l\'appel";
			this->Supp1->UseVisualStyleBackColor = true;
			this->Supp1->Click += gcnew System::EventHandler(this, &Form1::Supp1_Click);
			// 
			// TresUrgent
			// 
			this->TresUrgent->ForeColor = System::Drawing::Color::Red;
			this->TresUrgent->FormattingEnabled = true;
			this->TresUrgent->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"JAUME Benjamin, le 19/03/2014 à 21h03 (0605249549)", 
				L"RADULOV Lachezar, le 9/07/1994 à 12h36 (0304602020)", L"MASSIE Florian, le 14/04/1964 à 15h20 (0607040403)", L"JAUME Benjamin, le 19/03/2014 à 21h03 (0605249549)", 
				L"RADULOV Lachezar, le 9/07/1994 à 12h36 (0304602020)", L"MASSIE Florian, le 14/04/1964 à 15h20 (0607040403)", L"JAUME Benjamin, le 19/03/2014 à 21h03 (0605249549)", 
				L"RADULOV Lachezar, le 9/07/1994 à 12h36 (0304602020)", L"MASSIE Florian, le 14/04/1964 à 15h20 (0607040403)"});
			this->TresUrgent->Location = System::Drawing::Point(6, 19);
			this->TresUrgent->Name = L"TresUrgent";
			this->TresUrgent->ScrollAlwaysVisible = true;
			this->TresUrgent->Size = System::Drawing::Size(459, 69);
			this->TresUrgent->TabIndex = 0;
			// 
			// Courrier
			// 
			this->Courrier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(238)), 
				static_cast<System::Int32>(static_cast<System::Byte>(238)));
			this->Courrier->Controls->Add(this->LabelRecherche);
			this->Courrier->Controls->Add(this->BoutonResultat);
			this->Courrier->Controls->Add(this->Recherche);
			this->Courrier->Controls->Add(this->Envoi);
			this->Courrier->Controls->Add(this->groupBox4);
			this->Courrier->Location = System::Drawing::Point(4, 22);
			this->Courrier->Name = L"Courrier";
			this->Courrier->Padding = System::Windows::Forms::Padding(3);
			this->Courrier->Size = System::Drawing::Size(565, 323);
			this->Courrier->TabIndex = 1;
			this->Courrier->Text = L"Historique des courriers";
			// 
			// LabelRecherche
			// 
			this->LabelRecherche->AutoSize = true;
			this->LabelRecherche->ForeColor = System::Drawing::Color::MediumBlue;
			this->LabelRecherche->Location = System::Drawing::Point(72, 281);
			this->LabelRecherche->Name = L"LabelRecherche";
			this->LabelRecherche->Size = System::Drawing::Size(123, 13);
			this->LabelRecherche->TabIndex = 4;
			this->LabelRecherche->Text = L"Résultat de la recherche";
			// 
			// BoutonResultat
			// 
			this->BoutonResultat->Location = System::Drawing::Point(395, 271);
			this->BoutonResultat->Name = L"BoutonResultat";
			this->BoutonResultat->Size = System::Drawing::Size(95, 23);
			this->BoutonResultat->TabIndex = 3;
			this->BoutonResultat->Text = L"Voir le résultat";
			this->BoutonResultat->UseVisualStyleBackColor = true;
			this->BoutonResultat->Visible = false;
			this->BoutonResultat->Click += gcnew System::EventHandler(this, &Form1::BoutonResultat_Click);
			// 
			// Recherche
			// 
			this->Recherche->Controls->Add(this->ValidEnvoi);
			this->Recherche->Controls->Add(this->ValidRecep);
			this->Recherche->Controls->Add(this->RechercheMessage);
			this->Recherche->Controls->Add(this->Resultat);
			this->Recherche->Controls->Add(this->label19);
			this->Recherche->Controls->Add(this->RechercheAdresse);
			this->Recherche->Controls->Add(this->label9);
			this->Recherche->Controls->Add(this->label1);
			this->Recherche->Controls->Add(this->RechercheNom);
			this->Recherche->Location = System::Drawing::Point(7, 188);
			this->Recherche->Name = L"Recherche";
			this->Recherche->Size = System::Drawing::Size(546, 67);
			this->Recherche->TabIndex = 2;
			this->Recherche->TabStop = false;
			this->Recherche->Text = L"Rechercher dans les courrier";
			// 
			// ValidEnvoi
			// 
			this->ValidEnvoi->AutoSize = true;
			this->ValidEnvoi->Location = System::Drawing::Point(282, 45);
			this->ValidEnvoi->Name = L"ValidEnvoi";
			this->ValidEnvoi->Size = System::Drawing::Size(52, 17);
			this->ValidEnvoi->TabIndex = 8;
			this->ValidEnvoi->Text = L"Envoi";
			this->ValidEnvoi->UseVisualStyleBackColor = true;
			this->ValidEnvoi->CheckedChanged += gcnew System::EventHandler(this, &Form1::ValidEnvoi_CheckedChanged);
			// 
			// ValidRecep
			// 
			this->ValidRecep->AutoSize = true;
			this->ValidRecep->Checked = true;
			this->ValidRecep->Location = System::Drawing::Point(196, 45);
			this->ValidRecep->Name = L"ValidRecep";
			this->ValidRecep->Size = System::Drawing::Size(74, 17);
			this->ValidRecep->TabIndex = 7;
			this->ValidRecep->TabStop = true;
			this->ValidRecep->Text = L"Réception";
			this->ValidRecep->UseVisualStyleBackColor = true;
			this->ValidRecep->CheckedChanged += gcnew System::EventHandler(this, &Form1::ValidRecep_CheckedChanged);
			// 
			// RechercheMessage
			// 
			this->RechercheMessage->Location = System::Drawing::Point(437, 19);
			this->RechercheMessage->Name = L"RechercheMessage";
			this->RechercheMessage->Size = System::Drawing::Size(100, 20);
			this->RechercheMessage->TabIndex = 6;
			this->RechercheMessage->TextChanged += gcnew System::EventHandler(this, &Form1::RechercheSociete_TextChanged);
			// 
			// Resultat
			// 
			this->Resultat->Location = System::Drawing::Point(88, 83);
			this->Resultat->Name = L"Resultat";
			this->Resultat->ReadOnly = true;
			this->Resultat->Size = System::Drawing::Size(356, 20);
			this->Resultat->TabIndex = 2;
			this->Resultat->Text = L"Resultat de la recherche";
			this->Resultat->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(394, 22);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(37, 13);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Sujet :";
			// 
			// RechercheAdresse
			// 
			this->RechercheAdresse->Location = System::Drawing::Point(276, 19);
			this->RechercheAdresse->Name = L"RechercheAdresse";
			this->RechercheAdresse->Size = System::Drawing::Size(100, 20);
			this->RechercheAdresse->TabIndex = 4;
			this->RechercheAdresse->TextChanged += gcnew System::EventHandler(this, &Form1::RecherchePrenom_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(209, 22);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"@adresse :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nom/Prénom :";
			// 
			// RechercheNom
			// 
			this->RechercheNom->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->RechercheNom->Location = System::Drawing::Point(88, 19);
			this->RechercheNom->Name = L"RechercheNom";
			this->RechercheNom->Size = System::Drawing::Size(100, 20);
			this->RechercheNom->TabIndex = 0;
			this->RechercheNom->TextChanged += gcnew System::EventHandler(this, &Form1::RechercheNom_TextChanged);
			// 
			// Envoi
			// 
			this->Envoi->Controls->Add(this->label13);
			this->Envoi->Controls->Add(this->label14);
			this->Envoi->Controls->Add(this->label15);
			this->Envoi->Controls->Add(this->ListBoxMessageEnvoi);
			this->Envoi->Controls->Add(this->ListBoxAdresseEnvoi);
			this->Envoi->Controls->Add(this->ListBoxNomEnvoi);
			this->Envoi->Location = System::Drawing::Point(274, 7);
			this->Envoi->Name = L"Envoi";
			this->Envoi->Size = System::Drawing::Size(279, 175);
			this->Envoi->TabIndex = 1;
			this->Envoi->TabStop = false;
			this->Envoi->Text = L"Envoi";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(168, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 13);
			this->label13->TabIndex = 8;
			this->label13->Text = L"Sujet :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(89, 16);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(55, 13);
			this->label14->TabIndex = 7;
			this->label14->Text = L"@dresse :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 16);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(76, 13);
			this->label15->TabIndex = 6;
			this->label15->Text = L"Nom/Prénom :";
			// 
			// ListBoxMessageEnvoi
			// 
			this->ListBoxMessageEnvoi->FormattingEnabled = true;
			this->ListBoxMessageEnvoi->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Salut! Ajoute moi sur Facebook, c\'est un super site !", 
				L"Bravo pour ton application mec, apparement, t\'y a passé beaucoup de temps ;)", L"Hein \? Pourquoi tu dis ça \? J\'ai pas compris ^^"});
			this->ListBoxMessageEnvoi->Location = System::Drawing::Point(170, 32);
			this->ListBoxMessageEnvoi->Name = L"ListBoxMessageEnvoi";
			this->ListBoxMessageEnvoi->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->ListBoxMessageEnvoi->Size = System::Drawing::Size(84, 134);
			this->ListBoxMessageEnvoi->TabIndex = 5;
			// 
			// ListBoxAdresseEnvoi
			// 
			this->ListBoxAdresseEnvoi->FormattingEnabled = true;
			this->ListBoxAdresseEnvoi->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"baptiste@gmail.com", L"pierrick@live.fr", 
				L"massie@laposte.net"});
			this->ListBoxAdresseEnvoi->Location = System::Drawing::Point(87, 32);
			this->ListBoxAdresseEnvoi->Name = L"ListBoxAdresseEnvoi";
			this->ListBoxAdresseEnvoi->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->ListBoxAdresseEnvoi->Size = System::Drawing::Size(77, 134);
			this->ListBoxAdresseEnvoi->TabIndex = 4;
			// 
			// ListBoxNomEnvoi
			// 
			this->ListBoxNomEnvoi->FormattingEnabled = true;
			this->ListBoxNomEnvoi->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"DESCARD", L"RUGERY", L"MASSIE"});
			this->ListBoxNomEnvoi->Location = System::Drawing::Point(6, 32);
			this->ListBoxNomEnvoi->Name = L"ListBoxNomEnvoi";
			this->ListBoxNomEnvoi->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->ListBoxNomEnvoi->Size = System::Drawing::Size(75, 134);
			this->ListBoxNomEnvoi->TabIndex = 3;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->ListBoxMessageRecep);
			this->groupBox4->Controls->Add(this->ListBoxAdresseRecep);
			this->groupBox4->Controls->Add(this->ListBoxNomRecep);
			this->groupBox4->Location = System::Drawing::Point(7, 7);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(261, 175);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Reception";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(168, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 13);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Sujet :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(89, 16);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 13);
			this->label11->TabIndex = 4;
			this->label11->Text = L"@dresse :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Nom/Prénom :";
			// 
			// ListBoxMessageRecep
			// 
			this->ListBoxMessageRecep->FormattingEnabled = true;
			this->ListBoxMessageRecep->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Re:Ceci n\'est pas une blague", L"Re:Re:Bonjour :)", 
				L"Test travaux"});
			this->ListBoxMessageRecep->Location = System::Drawing::Point(171, 32);
			this->ListBoxMessageRecep->Name = L"ListBoxMessageRecep";
			this->ListBoxMessageRecep->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->ListBoxMessageRecep->Size = System::Drawing::Size(84, 134);
			this->ListBoxMessageRecep->TabIndex = 2;
			// 
			// ListBoxAdresseRecep
			// 
			this->ListBoxAdresseRecep->FormattingEnabled = true;
			this->ListBoxAdresseRecep->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"bjaume@laposte.net", L"cha.coene@laposte.net", 
				L"r.lachezar@gmail.com"});
			this->ListBoxAdresseRecep->Location = System::Drawing::Point(88, 32);
			this->ListBoxAdresseRecep->Name = L"ListBoxAdresseRecep";
			this->ListBoxAdresseRecep->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->ListBoxAdresseRecep->Size = System::Drawing::Size(77, 134);
			this->ListBoxAdresseRecep->TabIndex = 1;
			// 
			// ListBoxNomRecep
			// 
			this->ListBoxNomRecep->FormattingEnabled = true;
			this->ListBoxNomRecep->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"JAUME", L"COËNE", L"RADULOV"});
			this->ListBoxNomRecep->Location = System::Drawing::Point(7, 32);
			this->ListBoxNomRecep->Name = L"ListBoxNomRecep";
			this->ListBoxNomRecep->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->ListBoxNomRecep->Size = System::Drawing::Size(75, 134);
			this->ListBoxNomRecep->TabIndex = 0;
			// 
			// Visiteur
			// 
			this->Visiteur->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(231)), 
				static_cast<System::Int32>(static_cast<System::Byte>(231)));
			this->Visiteur->Controls->Add(this->Supprimer);
			this->Visiteur->Controls->Add(this->Modifier);
			this->Visiteur->Controls->Add(this->groupBox5);
			this->Visiteur->Location = System::Drawing::Point(4, 22);
			this->Visiteur->Name = L"Visiteur";
			this->Visiteur->Size = System::Drawing::Size(565, 323);
			this->Visiteur->TabIndex = 2;
			this->Visiteur->Text = L"Historique des visiteurs";
			// 
			// Supprimer
			// 
			this->Supprimer->Location = System::Drawing::Point(328, 279);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(223, 30);
			this->Supprimer->TabIndex = 3;
			this->Supprimer->Text = L"Supprimer un visiteur";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->Click += gcnew System::EventHandler(this, &Form1::Supprimer_Click);
			// 
			// Modifier
			// 
			this->Modifier->Location = System::Drawing::Point(25, 279);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(219, 30);
			this->Modifier->TabIndex = 2;
			this->Modifier->Text = L"Modifier un visiteur";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &Form1::Modifier_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Controls->Add(this->HistoHeureSortieVisiteur);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->HistoObjetVisiteur);
			this->groupBox5->Controls->Add(this->HistoSocieteVisiteur);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->HistoHeureArriveeVisiteur);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->HistoDateVisiteur);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->HistoPrenomVisiteur);
			this->groupBox5->Controls->Add(this->HistoNomVisiteur);
			this->groupBox5->Location = System::Drawing::Point(12, 15);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(539, 247);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Historique des visiteurs";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(313, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Départ";
			// 
			// HistoHeureSortieVisiteur
			// 
			this->HistoHeureSortieVisiteur->FormattingEnabled = true;
			this->HistoHeureSortieVisiteur->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"13:00", L"14:00", L"11:00", L"46:00"});
			this->HistoHeureSortieVisiteur->Location = System::Drawing::Point(316, 48);
			this->HistoHeureSortieVisiteur->Name = L"HistoHeureSortieVisiteur";
			this->HistoHeureSortieVisiteur->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->HistoHeureSortieVisiteur->Size = System::Drawing::Size(39, 186);
			this->HistoHeureSortieVisiteur->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(442, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Objet :";
			// 
			// HistoObjetVisiteur
			// 
			this->HistoObjetVisiteur->FormattingEnabled = true;
			this->HistoObjetVisiteur->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Rien du tout", L"J\'en sais rien", L"Il ne sais pas", 
				L"Demain pas de contrôle"});
			this->HistoObjetVisiteur->Location = System::Drawing::Point(448, 48);
			this->HistoObjetVisiteur->Name = L"HistoObjetVisiteur";
			this->HistoObjetVisiteur->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->HistoObjetVisiteur->Size = System::Drawing::Size(81, 186);
			this->HistoObjetVisiteur->TabIndex = 11;
			// 
			// HistoSocieteVisiteur
			// 
			this->HistoSocieteVisiteur->FormattingEnabled = true;
			this->HistoSocieteVisiteur->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Actemium", L"Copine", L"BTS", L"Pote"});
			this->HistoSocieteVisiteur->Location = System::Drawing::Point(187, 48);
			this->HistoSocieteVisiteur->Name = L"HistoSocieteVisiteur";
			this->HistoSocieteVisiteur->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->HistoSocieteVisiteur->Size = System::Drawing::Size(81, 186);
			this->HistoSocieteVisiteur->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(271, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Arrivée";
			// 
			// HistoHeureArriveeVisiteur
			// 
			this->HistoHeureArriveeVisiteur->FormattingEnabled = true;
			this->HistoHeureArriveeVisiteur->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"12:13", L"13:12", L"10:45", L"45:20"});
			this->HistoHeureArriveeVisiteur->Location = System::Drawing::Point(274, 48);
			this->HistoHeureArriveeVisiteur->Name = L"HistoHeureArriveeVisiteur";
			this->HistoHeureArriveeVisiteur->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->HistoHeureArriveeVisiteur->Size = System::Drawing::Size(39, 186);
			this->HistoHeureArriveeVisiteur->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(358, 32);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Date :";
			// 
			// HistoDateVisiteur
			// 
			this->HistoDateVisiteur->FormattingEnabled = true;
			this->HistoDateVisiteur->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"27/06/1995", L"05/09/1995", L"18/05/1345", 
				L"90/12/1999"});
			this->HistoDateVisiteur->Location = System::Drawing::Point(361, 48);
			this->HistoDateVisiteur->Name = L"HistoDateVisiteur";
			this->HistoDateVisiteur->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->HistoDateVisiteur->Size = System::Drawing::Size(81, 186);
			this->HistoDateVisiteur->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(184, 32);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Société :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(97, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Prénom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nom :";
			// 
			// HistoPrenomVisiteur
			// 
			this->HistoPrenomVisiteur->FormattingEnabled = true;
			this->HistoPrenomVisiteur->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Benjamin", L"Charlotte", L"Florian", 
				L"Ludovic"});
			this->HistoPrenomVisiteur->Location = System::Drawing::Point(100, 48);
			this->HistoPrenomVisiteur->Name = L"HistoPrenomVisiteur";
			this->HistoPrenomVisiteur->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->HistoPrenomVisiteur->Size = System::Drawing::Size(81, 186);
			this->HistoPrenomVisiteur->TabIndex = 1;
			// 
			// HistoNomVisiteur
			// 
			this->HistoNomVisiteur->ForeColor = System::Drawing::Color::LimeGreen;
			this->HistoNomVisiteur->FormattingEnabled = true;
			this->HistoNomVisiteur->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"JAUME", L"COËNE", L"MASSIE", L"TINET"});
			this->HistoNomVisiteur->Location = System::Drawing::Point(13, 48);
			this->HistoNomVisiteur->Name = L"HistoNomVisiteur";
			this->HistoNomVisiteur->Size = System::Drawing::Size(81, 186);
			this->HistoNomVisiteur->TabIndex = 0;
			// 
			// form
			// 
			this->form->Location = System::Drawing::Point(12, 12);
			this->form->Name = L"form";
			this->form->Size = System::Drawing::Size(187, 26);
			this->form->TabIndex = 1;
			this->form->Text = L"Saisir un nouveau formulaire d\'appel";
			this->form->UseVisualStyleBackColor = true;
			this->form->Click += gcnew System::EventHandler(this, &Form1::form_Click);
			// 
			// Quitter
			// 
			this->Quitter->Location = System::Drawing::Point(473, 412);
			this->Quitter->Name = L"Quitter";
			this->Quitter->Size = System::Drawing::Size(108, 29);
			this->Quitter->TabIndex = 3;
			this->Quitter->Text = L"Quitter";
			this->Quitter->UseVisualStyleBackColor = true;
			this->Quitter->Click += gcnew System::EventHandler(this, &Form1::Quitter_Click);
			// 
			// EnregistrerFichier
			// 
			this->EnregistrerFichier->Location = System::Drawing::Point(152, 412);
			this->EnregistrerFichier->Name = L"EnregistrerFichier";
			this->EnregistrerFichier->Size = System::Drawing::Size(108, 29);
			this->EnregistrerFichier->TabIndex = 4;
			this->EnregistrerFichier->Text = L"Enregistrer le fichier";
			this->EnregistrerFichier->UseVisualStyleBackColor = true;
			this->EnregistrerFichier->Click += gcnew System::EventHandler(this, &Form1::EnregistrerFichier_Click);
			// 
			// ChargerFichier
			// 
			this->ChargerFichier->Location = System::Drawing::Point(16, 412);
			this->ChargerFichier->Name = L"ChargerFichier";
			this->ChargerFichier->Size = System::Drawing::Size(106, 29);
			this->ChargerFichier->TabIndex = 2;
			this->ChargerFichier->Text = L"Charger le fichier";
			this->ChargerFichier->UseVisualStyleBackColor = true;
			this->ChargerFichier->Click += gcnew System::EventHandler(this, &Form1::ChargerFichier_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->DefaultExt = L"csv";
			this->openFileDialog1->FileName = L"FichierSauvegarde";
			this->openFileDialog1->Filter = L"csv|*.csv";
			// 
			// EnvoiCourrier
			// 
			this->EnvoiCourrier->Location = System::Drawing::Point(205, 12);
			this->EnvoiCourrier->Name = L"EnvoiCourrier";
			this->EnvoiCourrier->Size = System::Drawing::Size(187, 26);
			this->EnvoiCourrier->TabIndex = 7;
			this->EnvoiCourrier->Text = L"Envoyer un courrier";
			this->EnvoiCourrier->UseVisualStyleBackColor = true;
			this->EnvoiCourrier->Click += gcnew System::EventHandler(this, &Form1::EnvoiCourrier_Click);
			// 
			// AjoutVisit
			// 
			this->AjoutVisit->Location = System::Drawing::Point(398, 12);
			this->AjoutVisit->Name = L"AjoutVisit";
			this->AjoutVisit->Size = System::Drawing::Size(187, 26);
			this->AjoutVisit->TabIndex = 8;
			this->AjoutVisit->Text = L"Ajouter un visiteur";
			this->AjoutVisit->UseVisualStyleBackColor = true;
			this->AjoutVisit->Click += gcnew System::EventHandler(this, &Form1::AjoutVisit_Click_1);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"csv";
			this->saveFileDialog1->FileName = L"FichierSauvegarde";
			this->saveFileDialog1->Filter = L"csv|*.csv";
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->Location = System::Drawing::Point(302, 420);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(0, 13);
			this->id->TabIndex = 9;
			this->id->Visible = false;
			// 
			// mdp
			// 
			this->mdp->AutoSize = true;
			this->mdp->Location = System::Drawing::Point(351, 420);
			this->mdp->Name = L"mdp";
			this->mdp->Size = System::Drawing::Size(0, 13);
			this->mdp->TabIndex = 10;
			this->mdp->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(597, 459);
			this->Controls->Add(this->mdp);
			this->Controls->Add(this->id);
			this->Controls->Add(this->AjoutVisit);
			this->Controls->Add(this->EnvoiCourrier);
			this->Controls->Add(this->Quitter);
			this->Controls->Add(this->Gestion);
			this->Controls->Add(this->form);
			this->Controls->Add(this->EnregistrerFichier);
			this->Controls->Add(this->ChargerFichier);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"Gestionnaire d\'acceuil";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Gestion->ResumeLayout(false);
			this->Appel->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->Courrier->ResumeLayout(false);
			this->Courrier->PerformLayout();
			this->Recherche->ResumeLayout(false);
			this->Recherche->PerformLayout();
			this->Envoi->ResumeLayout(false);
			this->Envoi->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->Visiteur->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			 
private: System::Void form_Click(System::Object^  sender, System::EventArgs^  e) {
			 Gestion->SelectedIndex = 0;

			 formulaire ^FormF = gcnew formulaire ();
			 FormF->Text = "Formulaire" /*+ (i++).ToString()*/;
			 FormF->Show();

			 /*if(FormF->Show() == System::Windows::Forms::DialogResult::Cancel) {
				 i--;
			 }*/
		 }

private: System::Void Quitter_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult result;

			 result = MessageBox::Show(
				 "Voulez vous vraiment quitter l'application ?",
				 "Fermeture de l'application",
				 MessageBoxButtons::OKCancel , MessageBoxIcon::Exclamation);

			 if(result == System::Windows::Forms::DialogResult::OK)
				 Close();
			 }

private: System::Void ChargerFichier_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->ShowDialog();
		 }

private: System::Void EnregistrerFichier_Click(System::Object^  sender, System::EventArgs^  e) {
			 saveFileDialog1->ShowDialog();
		 }

private: System::Void Quitter1_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult result1;

			 result1 = MessageBox::Show(
				 "Voulez vous vraiment quitter l'application ?",
				 "Fermeture de l'application",
				 MessageBoxButtons::OKCancel , MessageBoxIcon::Exclamation);

			 if(result1 == System::Windows::Forms::DialogResult::OK) {
				 Close();
			 }
		 }

private: System::Void AjoutVisit_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 Gestion->SelectedIndex = 2;

			 System::Windows::Forms::DialogResult resultat;

			 visiteur ^FormV = gcnew visiteur ();
			 FormV->Text = "Nouveau visiteur";
			 resultat = FormV->ShowDialog();

			 if(resultat == System::Windows::Forms::DialogResult::OK && FormV->ok->Text == "1") {
				 HistoNomVisiteur->Items->Insert(0, FormV->NomCorrespondant->Text);
				 HistoPrenomVisiteur->Items->Insert(0, FormV->PrenomCorrespondant->Text);
				 HistoSocieteVisiteur->Items->Insert(0, FormV->SocieteCorrespondant->Text);
				 HistoHeureArriveeVisiteur->Items->Insert(0, FormV->TextBoxArriver->Text);
				 HistoHeureSortieVisiteur->Items->Insert(0, FormV->TextBoxSortie->Text);
				 HistoDateVisiteur->Items->Insert(0, FormV->TextBoxDate->Text);
				 HistoObjetVisiteur->Items->Insert(0, FormV->TextBoxNature->Text);
			 }
		 }

private: System::Void Modifier_Click(System::Object^  sender, System::EventArgs^  e) {

			 System::Windows::Forms::DialogResult result;

			 if(HistoNomVisiteur->SelectedIndex == -1) {
				System::Windows::Forms::DialogResult result1;

				result1 = MessageBox::Show(
				"Aucun visiteur n'est sélectionné",
				"Selectionner un visiteur",
				MessageBoxButtons::OK , MessageBoxIcon::Exclamation);
			 }
			 else {
				visiteur ^FormV = gcnew visiteur ();
				FormV->Text = "Modification du visiteur : " + HistoNomVisiteur->Items[HistoNomVisiteur->SelectedIndex] + " " + HistoPrenomVisiteur->Items[HistoNomVisiteur->SelectedIndex] + " - " + HistoSocieteVisiteur->Items[HistoNomVisiteur->SelectedIndex];

				FormV->NomCorrespondant->Text = HistoNomVisiteur->Items[HistoNomVisiteur->SelectedIndex]->ToString();
				FormV->PrenomCorrespondant->Text = HistoPrenomVisiteur->Items[HistoNomVisiteur->SelectedIndex]->ToString();
				FormV->SocieteCorrespondant->Text = HistoSocieteVisiteur->Items[HistoNomVisiteur->SelectedIndex]->ToString();
				FormV->TextBoxDate->Text = HistoDateVisiteur->Items[HistoNomVisiteur->SelectedIndex]->ToString();
				FormV->TextBoxArriver->Text = HistoHeureArriveeVisiteur->Items[HistoNomVisiteur->SelectedIndex]->ToString();
				FormV->TextBoxSortie->Text = HistoHeureSortieVisiteur->Items[HistoNomVisiteur->SelectedIndex]->ToString();
				FormV->TextBoxNature->Text = HistoObjetVisiteur->Items[HistoNomVisiteur->SelectedIndex]->ToString();

				result = FormV->ShowDialog();

				if(result == System::Windows::Forms::DialogResult::OK) {
					HistoNomVisiteur->Items[HistoNomVisiteur->SelectedIndex] = FormV->NomCorrespondant->Text;
					HistoPrenomVisiteur->Items[HistoNomVisiteur->SelectedIndex] = FormV->PrenomCorrespondant->Text;
					HistoSocieteVisiteur->Items[HistoNomVisiteur->SelectedIndex] = FormV->SocieteCorrespondant->Text;
					HistoHeureArriveeVisiteur->Items[HistoNomVisiteur->SelectedIndex] = FormV->TextBoxArriver->Text;
					HistoHeureSortieVisiteur->Items[HistoNomVisiteur->SelectedIndex] = FormV->TextBoxSortie->Text;
					HistoDateVisiteur->Items[HistoNomVisiteur->SelectedIndex] = FormV->TextBoxDate->Text;
					HistoObjetVisiteur->Items[HistoNomVisiteur->SelectedIndex] = FormV->TextBoxNature->Text;
				}
			 }
		}

private: System::Void Supprimer_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(HistoNomVisiteur->SelectedIndex == -1) {
				System::Windows::Forms::DialogResult result1;

				result1 = MessageBox::Show(
				"Aucun visiteur n'est sélectionné",
				"Selectionner un visiteur",
				MessageBoxButtons::OK , MessageBoxIcon::Exclamation);
			 }
			 else {
				System::Windows::Forms::DialogResult result1;

				result1 = MessageBox::Show(
				"Êtes - vous sûr de vouloir supprimer ce visiteur ?",
				"Supprimer un appel",
				MessageBoxButtons::OKCancel , MessageBoxIcon::Exclamation);

				if(result1 == System::Windows::Forms::DialogResult::OK) {
					int i = HistoNomVisiteur->SelectedIndex;
				 HistoNomVisiteur->Items->RemoveAt(i);
				 HistoPrenomVisiteur->Items->RemoveAt(i);
				 HistoSocieteVisiteur->Items->RemoveAt(i);
				 HistoHeureArriveeVisiteur->Items->RemoveAt(i);
				 HistoHeureSortieVisiteur->Items->RemoveAt(i);
				 HistoDateVisiteur->Items->RemoveAt(i);
				 HistoObjetVisiteur->Items->RemoveAt(i);
				}
				 
			 }
		 }

private: System::Void Supp1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(TresUrgent->SelectedIndex == -1) {
				System::Windows::Forms::DialogResult result1;

				result1 = MessageBox::Show(
				"Aucun appel n'est sélectionné",
				"Selectionner un visiteur",
				MessageBoxButtons::OK , MessageBoxIcon::Exclamation);
			 }
			 else {
				System::Windows::Forms::DialogResult result1;

				result1 = MessageBox::Show(
				"Êtes - vous sûr de vouloir supprimer cet appel ?",
				"Supprimer un appel",
				MessageBoxButtons::OKCancel , MessageBoxIcon::Exclamation);

				if(result1 == System::Windows::Forms::DialogResult::OK) {
				 TresUrgent->Items->RemoveAt(TresUrgent->SelectedIndex);
				}
				
			 }
		 }

private: System::Void Supp2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(Urgent->SelectedIndex == -1) {
				System::Windows::Forms::DialogResult result1;

				result1 = MessageBox::Show(
				"Aucun appel n'est sélectionné",
				"Selectionner un visiteur",
				MessageBoxButtons::OK , MessageBoxIcon::Exclamation);
			 }
			 else {
				System::Windows::Forms::DialogResult result1;

				result1 = MessageBox::Show(
				"Êtes - vous sûr de vouloir supprimer cet appel ?",
				"Supprimer un appel",
				MessageBoxButtons::OKCancel , MessageBoxIcon::Exclamation);

				if(result1 == System::Windows::Forms::DialogResult::OK) {
					Urgent->Items->RemoveAt(Urgent->SelectedIndex);
				}
			 }
		 }

private: System::Void Supp3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(Normal->SelectedIndex == -1) {
				System::Windows::Forms::DialogResult result1;

				result1 = MessageBox::Show(
				"Aucun appel n'est sélectionné",
				"Selectionner un visiteur",
				MessageBoxButtons::OK , MessageBoxIcon::Exclamation);
			 }
			 else {
				System::Windows::Forms::DialogResult result1;

				result1 = MessageBox::Show(
				"Êtes - vous sûr de vouloir supprimer cet appel ?",
				"Supprimer un appel",
				MessageBoxButtons::OKCancel , MessageBoxIcon::Exclamation);

				if(result1 == System::Windows::Forms::DialogResult::OK) {
					Normal->Items->RemoveAt(Normal->SelectedIndex);
				}
			 }
		 }

private: System::Void RechercheNom_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		if(ValidRecep->Checked == true) {

				int i = ListBoxNomRecep->Items->IndexOf(RechercheNom->Text);

				if(RechercheNom->Text == "") {
					LabelRecherche->Text = "Résultat de la recherche";
					BoutonResultat->Visible = false;
				}
				else if(i != -1) {
					LabelRecherche->Text = "Trouvé : " + ListBoxNomRecep->Items[i]->ToString() + " (" + ListBoxAdresseRecep->Items[i]->ToString() + " )";
					BoutonResultat->Visible = true;
				}
				else {
					LabelRecherche->Text = "Aucun résultat pour " + RechercheNom->Text;
					BoutonResultat->Visible = false;
				}
			}

			else if(ValidEnvoi->Checked == true) {
				int j = ListBoxNomEnvoi->Items->IndexOf(RechercheNom->Text);

				if(RechercheNom->Text == "") {
					LabelRecherche->Text = "Résultat de la recherche";
					BoutonResultat->Visible = false;
				}
				else if(j != -1) {
					LabelRecherche->Text = "Trouvé : " + ListBoxNomEnvoi->Items[j]->ToString() + " ( " + ListBoxAdresseEnvoi->Items[j]->ToString() + " )";
					BoutonResultat->Visible = true;
				}
				else {
					LabelRecherche->Text = "Aucun résultat pour " + RechercheNom->Text;
					BoutonResultat->Visible = false;
				}
			}

			RechercheAdresse->ResetText();
			RechercheMessage->ResetText();
		 }


private: System::Void RecherchePrenom_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(ValidRecep->Checked == true) {

				int i = ListBoxAdresseRecep->Items->IndexOf(RechercheAdresse->Text);

				if(RechercheAdresse->Text == "") {
					LabelRecherche->Text = "Résultat de la recherche";
					BoutonResultat->Visible = false;
				}
				else if(i != -1) {
					LabelRecherche->Text = "Trouvé : " + ListBoxNomRecep->Items[i]->ToString() + " (" + ListBoxAdresseRecep->Items[i]->ToString() + " )";
					BoutonResultat->Visible = true;
				}
				else {
					LabelRecherche->Text = "Aucun résultat pour " + RechercheAdresse->Text;
					BoutonResultat->Visible = false;
				}
			}

			else if(ValidEnvoi->Checked == true) {
				int j = ListBoxAdresseEnvoi->Items->IndexOf(RechercheAdresse->Text);

				if(RechercheAdresse->Text == "") {
					LabelRecherche->Text = "Résultat de la recherche";
					BoutonResultat->Visible = false;
				}
				else if(j != -1) {
					LabelRecherche->Text = "Trouvé : " + ListBoxNomEnvoi->Items[j]->ToString() + " ( " + ListBoxAdresseEnvoi->Items[j]->ToString() + " )";
					BoutonResultat->Visible = true;
				}
				else {
					LabelRecherche->Text = "Aucun résultat pour " + RechercheAdresse->Text;
					BoutonResultat->Visible = false;
				}
			}

			RechercheNom->ResetText();
			RechercheMessage->ResetText();
		 }

private: System::Void RechercheSociete_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(ValidRecep->Checked == true) {

				int i = ListBoxMessageRecep->Items->IndexOf(RechercheMessage->Text);

				if(RechercheMessage->Text == "") {
					LabelRecherche->Text = "Résultat de la recherche";
					BoutonResultat->Visible = false;
				}
				else if(i != -1) {
					LabelRecherche->Text = "Trouvé : " + ListBoxNomRecep->Items[i]->ToString() + " (" + ListBoxAdresseRecep->Items[i]->ToString() + " )";
					BoutonResultat->Visible = true;
				}
				else {
					LabelRecherche->Text = "Aucun résultat pour " + RechercheMessage->Text;
					BoutonResultat->Visible = false;
				}
			}

			else if(ValidEnvoi->Checked == true) {
				int j = ListBoxMessageEnvoi->Items->IndexOf(RechercheMessage->Text);

				if(RechercheMessage->Text == "") {
					LabelRecherche->Text = "Résultat de la recherche";
					BoutonResultat->Visible = false;
				}
				else if(j != -1) {
					LabelRecherche->Text = "Trouvé : " + ListBoxNomEnvoi->Items[j]->ToString() + " ( " + ListBoxAdresseEnvoi->Items[j]->ToString() + " )";
					BoutonResultat->Visible = true;
				}
				else {
					LabelRecherche->Text = "Aucun résultat pour " + RechercheMessage->Text;
					BoutonResultat->Visible = false;
				}
			}

			RechercheNom->ResetText();
			RechercheAdresse->ResetText();
}


private: System::Void ValidEnvoi_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Resultat->Text = "Résultat de la recherche";
			 RechercheNom->Text = "";
			 RechercheAdresse->Text = "";
			 RechercheMessage->Text = "";
		 }

private: System::Void ValidRecep_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Resultat->Text = "Résultat de la recherche";
			 RechercheNom->Text = "";
			 RechercheAdresse->Text = "";
			 RechercheMessage->Text = "";
		 }

private: System::Void EnvoiCourrier_Click(System::Object^  sender, System::EventArgs^  e) {
			 Gestion->SelectedIndex = 1;

			 //System::Windows::Forms::DialogResult choixCourrier;

			 courrier ^FormC = gcnew courrier ();
			 FormC->Text = "Nouveau courrier";
			 FormC->Show();

		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 System::Windows::Forms::DialogResult choix;

			 accueil ^FormA = gcnew accueil ();
			 FormA->Text = "GestAccueil";
			 choix = FormA->ShowDialog();

			 if(choix == System::Windows::Forms::DialogResult::OK && FormA->labelOk->Text == "0") {
				 FormA->NomOp->Text = "";
				 FormA->Mdp->Text = "";
				 choix = FormA->ShowDialog();
			 }

			 id->Text = FormA->NomOp->Text;
			 mdp->Text = FormA->Mdp->Text;
		 }

private: System::Void BoutonResultat_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(ValidRecep->Checked == true) {
				 if(RechercheNom->Text != "") {
					 fonctionAfficher(ListBoxNomRecep, RechercheNom);
				 }
				 else if(RechercheAdresse->Text != "") {
					 fonctionAfficher(ListBoxAdresseRecep, RechercheAdresse);
				 }
				 else if(RechercheMessage->Text != "") {
					 fonctionAfficher(ListBoxMessageRecep, RechercheMessage);
				 }
			 }
			 else if(ValidEnvoi->Checked == true) {
				 if(RechercheNom->Text != "") {
					 fonctionAfficher(ListBoxNomEnvoi, RechercheNom);
				 }
				 else if(RechercheAdresse->Text != "") {
					 fonctionAfficher(ListBoxAdresseEnvoi, RechercheAdresse);
				 }
				 else if(RechercheMessage->Text != "") {
					 fonctionAfficher(ListBoxMessageEnvoi, RechercheMessage);
				 }
			 }
		}

void fonctionAfficher(ListBox ^lbox, TextBox ^tbox) {
			if(ValidRecep->Checked == true) {
				 int i = lbox->Items->IndexOf(tbox->Text);

				MessageBox::Show("Message de " + ListBoxNomRecep->Items[i]->ToString() +
					 " (" + ListBoxAdresseRecep->Items[i]->ToString() +
					 ") :\n" + ListBoxMessageRecep->Items[i]->ToString(),
					 "Message de " + ListBoxNomRecep->Items[i]->ToString());
			}

			 else if(ValidEnvoi->Checked == true) {
				 int j = lbox->Items->IndexOf(tbox->Text);

				 MessageBox::Show("Message de " + ListBoxNomEnvoi->Items[j]->ToString() +
					 " (" + ListBoxAdresseEnvoi->Items[j]->ToString() +
					 ") :\n" + ListBoxMessageEnvoi->Items[j]->ToString(),
					 "Message de " + ListBoxNomEnvoi->Items[j]->ToString());
			}
}

};
}        


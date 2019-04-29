#pragma once

namespace GestAccueil {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de accueil
	/// </summary>
	public ref class accueil : public System::Windows::Forms::Form
	{
	public:
		accueil(void)
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
		~accueil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  BoutonAide;
	private: System::Windows::Forms::Button^  BoutonValid;
	private: System::Windows::Forms::Button^  BoutonApropos;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::TextBox^  NomOp;
	private: 
	public: System::Windows::Forms::TextBox^  Mdp;
	private: System::Windows::Forms::Button^  id;
	public: System::Windows::Forms::Label^  labelOk;
	private: System::Windows::Forms::Button^  Gestion;
	public: 
	private: 

	public: 



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(accueil::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BoutonAide = (gcnew System::Windows::Forms::Button());
			this->BoutonValid = (gcnew System::Windows::Forms::Button());
			this->BoutonApropos = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NomOp = (gcnew System::Windows::Forms::TextBox());
			this->Mdp = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::Button());
			this->labelOk = (gcnew System::Windows::Forms::Label());
			this->Gestion = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(79, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(445, 141);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(184, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bonjour et bienvenur sur le logiciel GestAccueil";
			// 
			// BoutonAide
			// 
			this->BoutonAide->Location = System::Drawing::Point(416, 357);
			this->BoutonAide->Name = L"BoutonAide";
			this->BoutonAide->Size = System::Drawing::Size(140, 35);
			this->BoutonAide->TabIndex = 2;
			this->BoutonAide->Text = L"Aide sur le logiciel";
			this->BoutonAide->UseVisualStyleBackColor = true;
			this->BoutonAide->Click += gcnew System::EventHandler(this, &accueil::BoutonAide_Click);
			// 
			// BoutonValid
			// 
			this->BoutonValid->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->BoutonValid->Location = System::Drawing::Point(229, 357);
			this->BoutonValid->Name = L"BoutonValid";
			this->BoutonValid->Size = System::Drawing::Size(140, 35);
			this->BoutonValid->TabIndex = 3;
			this->BoutonValid->Text = L"Commencer";
			this->BoutonValid->UseVisualStyleBackColor = true;
			this->BoutonValid->Click += gcnew System::EventHandler(this, &accueil::BoutonValid_Click);
			// 
			// BoutonApropos
			// 
			this->BoutonApropos->Location = System::Drawing::Point(42, 357);
			this->BoutonApropos->Name = L"BoutonApropos";
			this->BoutonApropos->Size = System::Drawing::Size(140, 35);
			this->BoutonApropos->TabIndex = 4;
			this->BoutonApropos->Text = L"A propos";
			this->BoutonApropos->UseVisualStyleBackColor = true;
			this->BoutonApropos->Click += gcnew System::EventHandler(this, &accueil::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(142, 221);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Nom opérateur/opératrice de saisie :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(142, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Mot de passe :";
			// 
			// NomOp
			// 
			this->NomOp->BackColor = System::Drawing::SystemColors::Control;
			this->NomOp->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->NomOp->Location = System::Drawing::Point(346, 218);
			this->NomOp->Name = L"NomOp";
			this->NomOp->Size = System::Drawing::Size(100, 20);
			this->NomOp->TabIndex = 7;
			// 
			// Mdp
			// 
			this->Mdp->BackColor = System::Drawing::SystemColors::Control;
			this->Mdp->Location = System::Drawing::Point(346, 258);
			this->Mdp->Name = L"Mdp";
			this->Mdp->PasswordChar = '*';
			this->Mdp->Size = System::Drawing::Size(100, 20);
			this->Mdp->TabIndex = 8;
			// 
			// id
			// 
			this->id->Location = System::Drawing::Point(145, 286);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(129, 23);
			this->id->TabIndex = 9;
			this->id->Text = L"Aide pour les identifiants";
			this->id->UseVisualStyleBackColor = true;
			this->id->Click += gcnew System::EventHandler(this, &accueil::id_Click);
			// 
			// labelOk
			// 
			this->labelOk->AutoSize = true;
			this->labelOk->Location = System::Drawing::Point(413, 319);
			this->labelOk->Name = L"labelOk";
			this->labelOk->Size = System::Drawing::Size(13, 13);
			this->labelOk->TabIndex = 10;
			this->labelOk->Text = L"0";
			this->labelOk->Visible = false;
			// 
			// Gestion
			// 
			this->Gestion->Location = System::Drawing::Point(229, 420);
			this->Gestion->Name = L"Gestion";
			this->Gestion->Size = System::Drawing::Size(140, 23);
			this->Gestion->TabIndex = 11;
			this->Gestion->Text = L"* Gestion des comptes *";
			this->Gestion->UseVisualStyleBackColor = true;
			this->Gestion->Click += gcnew System::EventHandler(this, &accueil::Gestion_Click);
			// 
			// accueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(597, 455);
			this->Controls->Add(this->Gestion);
			this->Controls->Add(this->labelOk);
			this->Controls->Add(this->id);
			this->Controls->Add(this->Mdp);
			this->Controls->Add(this->NomOp);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->BoutonApropos);
			this->Controls->Add(this->BoutonValid);
			this->Controls->Add(this->BoutonAide);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"accueil";
			this->Text = L"accueil";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void BoutonValid_Click(System::Object^  sender, System::EventArgs^  e) {

			if(NomOp->Text == "JAUME" && Mdp->Text == "mdpirist") {
				MessageBox::Show("Bienvenue JAUME", "Bonjour et bienvenue", MessageBoxButtons::OK);
				labelOk->Text = "1";
				Close();
			}
			else if(NomOp->Text == "PROF" && Mdp->Text == "mdpprof") {
				MessageBox::Show("Bienvenue PROF", "Bonjour et bienvenu", MessageBoxButtons::OK);
				labelOk->Text = "1";
				Close();
			}
			else {
				labelOk->Text = "0";
				MessageBox::Show("Mauvais identifiant ou mot de passe", "Erreur", MessageBoxButtons::OK);
			}
}

private: System::Void id_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("ID : JAUME - MDP : mdpirist \nID : PROF - MDP : mdpprof", "Aide au identifiants", MessageBoxButtons::OK);
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Application développée par :\n\nJAUME Benjamin (bjaume33@gmail.com)\nRADULOV Lachezar (r.lachezar@gmail.com)", "A propos", MessageBoxButtons::OK);
		 }

private: System::Void BoutonAide_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Voir le manuel d'utilisateur fournis avec le logiciel", "Aide", MessageBoxButtons::OK);
		 }

private: System::Void Gestion_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Vous devez etre administrateur pour gérer les identifiants", "Gestion", MessageBoxButtons::OK);
		 }
};
}

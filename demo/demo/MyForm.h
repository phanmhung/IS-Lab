#pragma once
#include<string>

namespace demo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonRecommend;
	private: System::Windows::Forms::Label^ labelSel;
	private: System::Windows::Forms::Label^ labelPrice;
	private: System::Windows::Forms::Label^ labelFirma;

	private: System::Windows::Forms::TextBox^ textBoxPrice;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::ComboBox^ comboBoxSel;


	public: System::Windows::Forms::ComboBox^ comboBoxSel2;
	private: System::Windows::Forms::ComboBox^ comboBoxFirma;
	private: System::Windows::Forms::Label^ labelSel2;
	private: System::Windows::Forms::Label^ labelKind;
	private: System::Windows::Forms::ComboBox^ comboBoxKind;
	private: System::Windows::Forms::Label^ labelSpeed;
	private: System::Windows::Forms::ComboBox^ comboBoxSpeed;
	private: System::Windows::Forms::Button^ buttonReset;


	private: System::Windows::Forms::Button^ buttonCheckPrice;

	public:

	public:
	private:
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->buttonRecommend = (gcnew System::Windows::Forms::Button());
			this->labelSel = (gcnew System::Windows::Forms::Label());
			this->labelPrice = (gcnew System::Windows::Forms::Label());
			this->labelFirma = (gcnew System::Windows::Forms::Label());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->comboBoxSel = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSel2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxFirma = (gcnew System::Windows::Forms::ComboBox());
			this->labelSel2 = (gcnew System::Windows::Forms::Label());
			this->labelKind = (gcnew System::Windows::Forms::Label());
			this->comboBoxKind = (gcnew System::Windows::Forms::ComboBox());
			this->labelSpeed = (gcnew System::Windows::Forms::Label());
			this->comboBoxSpeed = (gcnew System::Windows::Forms::ComboBox());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->buttonCheckPrice = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonRecommend
			// 
			this->buttonRecommend->Location = System::Drawing::Point(468, 430);
			this->buttonRecommend->Name = L"buttonRecommend";
			this->buttonRecommend->Size = System::Drawing::Size(96, 27);
			this->buttonRecommend->TabIndex = 0;
			this->buttonRecommend->Text = L"������������";
			this->buttonRecommend->UseVisualStyleBackColor = true;
			this->buttonRecommend->Click += gcnew System::EventHandler(this, &MyForm::buttonRecommend_Click);
			// 
			// labelSel
			// 
			this->labelSel->AutoSize = true;
			this->labelSel->BackColor = System::Drawing::Color::Transparent;
			this->labelSel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSel->ForeColor = System::Drawing::SystemColors::Info;
			this->labelSel->Location = System::Drawing::Point(22, 20);
			this->labelSel->Name = L"labelSel";
			this->labelSel->Size = System::Drawing::Size(173, 20);
			this->labelSel->TabIndex = 1;
			this->labelSel->Text = L"���� �������������:";
			// 
			// labelPrice
			// 
			this->labelPrice->AutoSize = true;
			this->labelPrice->BackColor = System::Drawing::Color::Transparent;
			this->labelPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPrice->ForeColor = System::Drawing::SystemColors::Info;
			this->labelPrice->Location = System::Drawing::Point(22, 129);
			this->labelPrice->Name = L"labelPrice";
			this->labelPrice->Size = System::Drawing::Size(97, 20);
			this->labelPrice->TabIndex = 2;
			this->labelPrice->Text = L"���������:";
			this->labelPrice->Visible = false;
			// 
			// labelFirma
			// 
			this->labelFirma->AutoSize = true;
			this->labelFirma->BackColor = System::Drawing::Color::Transparent;
			this->labelFirma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelFirma->ForeColor = System::Drawing::SystemColors::Info;
			this->labelFirma->Location = System::Drawing::Point(20, 168);
			this->labelFirma->Name = L"labelFirma";
			this->labelFirma->Size = System::Drawing::Size(177, 20);
			this->labelFirma->TabIndex = 3;
			this->labelFirma->Text = L"�����-������������:";
			this->labelFirma->Visible = false;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->BackColor = System::Drawing::Color::Lavender;
			this->textBoxPrice->Location = System::Drawing::Point(161, 131);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(142, 20);
			this->textBoxPrice->TabIndex = 5;
			this->textBoxPrice->Visible = false;
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(12, 430);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(103, 27);
			this->buttonExit->TabIndex = 6;
			this->buttonExit->Text = L"�����";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// comboBoxSel
			// 
			this->comboBoxSel->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxSel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxSel->FormattingEnabled = true;
			this->comboBoxSel->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"C����������������� ������", L"������� ������",
					L"����", L"������ + ����"
			});
			this->comboBoxSel->Location = System::Drawing::Point(201, 22);
			this->comboBoxSel->Name = L"comboBoxSel";
			this->comboBoxSel->Size = System::Drawing::Size(169, 24);
			this->comboBoxSel->TabIndex = 7;
			this->comboBoxSel->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxSel_SelectedIndexChanged);
			// 
			// comboBoxSel2
			// 
			this->comboBoxSel2->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxSel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxSel2->FormattingEnabled = true;
			this->comboBoxSel2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"����������� �������", L"������� ������" });
			this->comboBoxSel2->Location = System::Drawing::Point(26, 73);
			this->comboBoxSel2->Name = L"comboBoxSel2";
			this->comboBoxSel2->Size = System::Drawing::Size(142, 24);
			this->comboBoxSel2->TabIndex = 10;
			this->comboBoxSel2->Visible = false;
			this->comboBoxSel2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxSel2_SelectedIndexChanged);
			// 
			// comboBoxFirma
			// 
			this->comboBoxFirma->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxFirma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxFirma->FormattingEnabled = true;
			this->comboBoxFirma->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"GPU and CPU AMD", L"GPU AMD and CPU INTEL",
					L"GPU NVIDIA and CPU AMD", L"GPU NVIDIA and CPU INTEL"
			});
			this->comboBoxFirma->Location = System::Drawing::Point(219, 170);
			this->comboBoxFirma->Name = L"comboBoxFirma";
			this->comboBoxFirma->Size = System::Drawing::Size(140, 24);
			this->comboBoxFirma->TabIndex = 11;
			this->comboBoxFirma->Visible = false;
			this->comboBoxFirma->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxFirma_SelectedIndexChanged);
			// 
			// labelSel2
			// 
			this->labelSel2->AutoSize = true;
			this->labelSel2->BackColor = System::Drawing::Color::Transparent;
			this->labelSel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSel2->ForeColor = System::Drawing::SystemColors::Info;
			this->labelSel2->Location = System::Drawing::Point(22, 50);
			this->labelSel2->Name = L"labelSel2";
			this->labelSel2->Size = System::Drawing::Size(377, 20);
			this->labelSel2->TabIndex = 12;
			this->labelSel2->Text = L"� ����� ������ �������� ��������� ��������\?";
			this->labelSel2->Visible = false;
			// 
			// labelKind
			// 
			this->labelKind->AutoSize = true;
			this->labelKind->BackColor = System::Drawing::Color::Transparent;
			this->labelKind->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelKind->ForeColor = System::Drawing::SystemColors::Info;
			this->labelKind->Location = System::Drawing::Point(22, 97);
			this->labelKind->Name = L"labelKind";
			this->labelKind->Size = System::Drawing::Size(234, 20);
			this->labelKind->TabIndex = 13;
			this->labelKind->Text = L"�������� ��� ������������:";
			this->labelKind->Visible = false;
			// 
			// comboBoxKind
			// 
			this->comboBoxKind->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxKind->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxKind->FormattingEnabled = true;
			this->comboBoxKind->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"������", L"����" });
			this->comboBoxKind->Location = System::Drawing::Point(282, 98);
			this->comboBoxKind->Name = L"comboBoxKind";
			this->comboBoxKind->Size = System::Drawing::Size(140, 24);
			this->comboBoxKind->TabIndex = 14;
			this->comboBoxKind->Visible = false;
			this->comboBoxKind->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxKind_SelectedIndexChanged);
			// 
			// labelSpeed
			// 
			this->labelSpeed->AutoSize = true;
			this->labelSpeed->BackColor = System::Drawing::Color::Transparent;
			this->labelSpeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSpeed->ForeColor = System::Drawing::SystemColors::Info;
			this->labelSpeed->Location = System::Drawing::Point(20, 211);
			this->labelSpeed->Name = L"labelSpeed";
			this->labelSpeed->Size = System::Drawing::Size(253, 20);
			this->labelSpeed->TabIndex = 15;
			this->labelSpeed->Text = L"�������� ������� �������� ��\?";
			this->labelSpeed->Visible = false;
			// 
			// comboBoxSpeed
			// 
			this->comboBoxSpeed->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxSpeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxSpeed->FormattingEnabled = true;
			this->comboBoxSpeed->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"��", L"���" });
			this->comboBoxSpeed->Location = System::Drawing::Point(289, 207);
			this->comboBoxSpeed->Name = L"comboBoxSpeed";
			this->comboBoxSpeed->Size = System::Drawing::Size(130, 24);
			this->comboBoxSpeed->TabIndex = 16;
			this->comboBoxSpeed->Visible = false;
			this->comboBoxSpeed->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxSpeed_SelectedIndexChanged);
			// 
			// buttonReset
			// 
			this->buttonReset->Location = System::Drawing::Point(246, 432);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(96, 25);
			this->buttonReset->TabIndex = 17;
			this->buttonReset->Text = L"��������";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &MyForm::buttonReset_Click);
			// 
			// buttonCheckPrice
			// 
			this->buttonCheckPrice->Location = System::Drawing::Point(335, 129);
			this->buttonCheckPrice->Name = L"buttonCheckPrice";
			this->buttonCheckPrice->Size = System::Drawing::Size(144, 22);
			this->buttonCheckPrice->TabIndex = 20;
			this->buttonCheckPrice->Text = L"Check available price";
			this->buttonCheckPrice->UseVisualStyleBackColor = true;
			this->buttonCheckPrice->Visible = false;
			this->buttonCheckPrice->Click += gcnew System::EventHandler(this, &MyForm::buttonCheckPrice_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(576, 469);
			this->Controls->Add(this->buttonCheckPrice);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->comboBoxSpeed);
			this->Controls->Add(this->labelSpeed);
			this->Controls->Add(this->comboBoxKind);
			this->Controls->Add(this->labelKind);
			this->Controls->Add(this->labelSel2);
			this->Controls->Add(this->comboBoxFirma);
			this->Controls->Add(this->comboBoxSel2);
			this->Controls->Add(this->comboBoxSel);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->textBoxPrice);
			this->Controls->Add(this->labelFirma);
			this->Controls->Add(this->labelPrice);
			this->Controls->Add(this->labelSel);
			this->Controls->Add(this->buttonRecommend);
			this->Name = L"MyForm";
			this->Text = L"Demo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonRecommend_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBoxSel2->Text == "����������� �������")
		    MessageBox::Show("���������� ������ Nvidia Titan Rtx; ��������� ������ Amd Ryzen 7 3700� ��� ����; ����� ����������� ������: �� ����� 64�� ������� �� ����� 4���; ����������� �����, �������������� ��������� ������������ �������������; �� ������� � ��� ������ Bronze 1000��; ��������� SSD ������������ ������");
		if (this->comboBoxSel2->Text == "������� ������")
			MessageBox::Show("���������� ������ Nvidia ge force gtx 1060 6gb ��� ����; ��������� ������ Amd Ryzen 9 3900� ��� ����; ����� ����������� ������: �� ����� 128�� ������� �� ����� 4���; ����������� �����, �������������� ��������� ������������ �������������; �� ������� � ��� ������ Bronze 600��; ��������� SSD �������� ������");
		if (this->comboBoxSel->Text == "������� ������")
			MessageBox::Show("��������� �� ���������� �������� ������ AMD �8-9600 ��� ����; ����� ����������� ������: �� ����� 4-8�� ���� DDR4; ����������� �����, �������������� ��������� ������������ �������������; �� 300��; ��������� HDD ������������ ������");
		if (this->comboBoxSel->Text == "����") {
			if (System::Convert::ToInt32(this->textBoxPrice->Text) <= 35000)
				MessageBox::Show("���������� ������ AMD Radeon RX550; ��������� ������ Intel Core i3-10100F; ����� ����������� ������: 8�� ���� DDR4, 2 ������; ����������� �����, �������������� ��������� ������������ �������������; �� 400��; ��������� HDD ������ 1TB)");
			else if (System::Convert::ToInt32(this->textBoxPrice->Text) > 100000)
				MessageBox::Show("���������� ������ Nvidia ge force rtx 3090; ��������� ������ Intel Core i9-10940X ��� ����; ����� ����������� ������: �� ����� 64�� ������� �� ����� 4���; ����������� �����, �������������� ��������� ������������ �������������; �� � ��� ������ Gold 1000��; ��������� SSD ������������ ������");
			else {
				if(this->comboBoxFirma->Text=="GPU and CPU AMD")
				    MessageBox::Show("���������� ������ AMD Radeon RX590 - AMD Radeon RX 5500XT; ��������� ������ Amd Ryzen 5 1600 - Amd Ryzen 7 3700x; ����� ����������� ������: �� ����� 16-32�� ������� �� ����� 2.5���; ����������� �����, �������������� ��������� ������������ �������������; �� ������� � ��� ������ Bronze 600��; ��������� HDD ������ �� 1TB, SSD �� 120��");
				if (this->comboBoxFirma->Text == "GPU AMD and CPU INTEL")
					MessageBox::Show("���������� ������ Nvidia ge force gtx 1050Ti -1060 6gb; ��������� ������ Amd Ryzen 5 1600 - Amd Ryzen 7 3700x; ����� ����������� ������: �� ����� 16-32�� ������� �� ����� 2.5���; ����������� �����, �������������� ��������� ������������ �������������; �� ������� � ��� ������ Bronze 600��; ��������� HDD ������ �� 1TB, SSD �� 120��");
				if (this->comboBoxFirma->Text == "GPU NVIDIA and CPU AMD")
					MessageBox::Show("���������� ������ AMD Radeon RX590 - AMD Radeon RX 5500XT; ��������� ������ Intel Core i5-9400F - Intel Core i7-9700K; ����� ����������� ������: �� ����� 16-32�� ������� �� ����� 2.5���; ����������� �����, �������������� ��������� ������������ �������������; �� ������� � ��� ������ Bronze 600��; ��������� HDD ������ �� 1TB, SSD �� 120��");
				if (this->comboBoxFirma->Text == "GPU NVIDIA and CPU INTEL")
					MessageBox::Show("���������� ������ Nvidia ge force gtx 1050Ti -1060 6gb; ��������� ������ Intel Core i5-9400F - Intel Core i7-9700K; ����� ����������� ������: �� ����� 16-32�� ������� �� ����� 2.5���; ����������� �����, �������������� ��������� ������������ �������������; �� ������� � ��� ������ Bronze 600��; ��������� HDD ������ �� 1TB, SSD �� 120��");
			}
		}
		
		if (this->comboBoxSel->Text == "������ + ����") {
			if (System::Convert::ToInt32(this->textBoxPrice->Text) < 50000) {
				if (this->comboBoxSpeed->Text == "Yes")
					MessageBox::Show("���������� ������ Nvidia ge force gtx 1050Ti; ��������� ������ Amd Ryzen 5 1600 � Amd Ryzen 5 2600; ����� ����������� ������: 16�� ���� DDR4; ����������� �����, �������������� ��������� ������������ �������������; �� 500��; ��������� HDD ������ 500GB, SSD 120 - 250��");
				else MessageBox::Show("���������� ������ Nvidia ge force gtx 1050Ti; ��������� ������ Amd Ryzen 5 1600 � Amd Ryzen 5 2600; ����� ����������� ������: 16�� ���� DDR4; ����������� �����, �������������� ��������� ������������ �������������; �� 500��; ��������� HDD ������ 1TB");
			}
			else {
				if (this->comboBoxKind->Text == "������")
					MessageBox::Show("���������� ������ Nvidia ge force rtx 2060 ��� ����; ��������� ������� AMD ������ Amd Ryzen 7 3700x ��� ����; ����� ����������� ������: �� ����� 16�� ������� �� ����� 3���; ����������� �����, �������������� ��������� ������������ �������������; �� � ��� ������ Silver 700��; ��������� SSD ������������ ������, HDD ��� �������������");
				else MessageBox::Show("���������� ������ Nvidia ge force rtx 2070 ��� ����; ��������� ������� Intel ������ Intel Core i7-9700K ��� ����; ����� ����������� ������: �� ����� 16�� ������� �� ����� 3���; ����������� �����, �������������� ��������� ������������ �������������; �� � ��� ������ Silver 700��; ��������� SSD ������������ ������, HDD ��� �������������");
			}
		}
	
	
	}
	
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do u want to exit?", "Exit Prompt",
			MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
			Application::Exit();
	}
    
    private: System::Void comboBoxSel_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		if (this->comboBoxSel->Text == "C����������������� ������") {
			this->labelSel2->Visible = true;
			this->comboBoxSel2->Visible = true;
		}

		//if (this->comboBoxSel->Text == "������� ������") {	}

		if (this->comboBoxSel->Text == "������ + ����") {
			this->labelPrice->Visible = true;
			this->textBoxPrice->Visible = true;
			buttonCheckPrice->Visible = true;
			labelKind->Visible = true;
			comboBoxKind->Visible = true;
		}

		if (this->comboBoxSel->Text == "����") {
			this->labelPrice->Visible = true;
			this->textBoxPrice->Visible = true;
			buttonCheckPrice->Visible = true;
		}
		this->comboBoxSel->Enabled = false;
    }
    private: System::Void comboBoxSel2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->comboBoxSel2->Enabled = false;
    }
    private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e) {
		 this->Controls->Clear();
		 this->InitializeComponent();
	}

    private: System::Void comboBoxSpeed_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	     comboBoxSpeed->Enabled = false;
    }
    private: System::Void comboBoxFirma_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	     comboBoxFirma->Enabled = false;
     }
    private: System::Void comboBoxKind_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	     comboBoxKind->Enabled = false;
     }
    private: System::Void buttonCheckPrice_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxPrice->Enabled = false;
		if (this->comboBoxSel->Text == "������ + ����") {
			if (System::Convert::ToInt32(this->textBoxPrice->Text) <= 50000) {
				this->labelSpeed->Visible = true;
				this->comboBoxSpeed->Visible = true;
			}
			/*else if (System::Convert::ToInt32(this->textBoxPrice->Text) <= 20000)
				MessageBox::Show("Are u fking kidding me?");*/
			else {
				this->labelKind->Visible = true;
				this->comboBoxKind->Visible = true;
			}
		}

		if (this->comboBoxSel->Text == "����" && System::Convert::ToInt32(this->textBoxPrice->Text) < 100000 && 35000 < System::Convert::ToInt32(this->textBoxPrice->Text)) {
			this->labelFirma->Visible = true;
			this->comboBoxFirma->Visible = true;
			
		}
    }
};
}

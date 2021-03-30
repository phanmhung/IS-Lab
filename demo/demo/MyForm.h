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




	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::ComboBox^ comboBoxSel;


	public: System::Windows::Forms::ComboBox^ comboBoxSel2;

	private: System::Windows::Forms::Label^ labelSel2;




	private: System::Windows::Forms::Button^ buttonReset;



	private: System::Windows::Forms::Label^ labelTypeGraphic;
	private: System::Windows::Forms::ComboBox^ comboBoxTypeGraphic;
	private: System::Windows::Forms::Label^ labelGrapgicLevel;
	private: System::Windows::Forms::ComboBox^ comboBoxGraphicLevel;

	private: System::Windows::Forms::Label^ labelYesNoFirma;
	private: System::Windows::Forms::ComboBox^ comboBoxYesNoFirma;
	private: System::Windows::Forms::Label^ labelProcessor;
	private: System::Windows::Forms::ComboBox^ comboBoxProcessor;
	private: System::Windows::Forms::Label^ labelHDD;
	private: System::Windows::Forms::Label^ labelSSD;
	private: System::Windows::Forms::ComboBox^ comboBoxHDD;


	private: System::Windows::Forms::ComboBox^ comboBoxSSD;
	private: System::Windows::Forms::Label^ labelRAM;
	private: System::Windows::Forms::ComboBox^ comboBoxRAM;
	private: System::Windows::Forms::Label^ labelCPU;
	private: System::Windows::Forms::Label^ labelCPUout;
	private: System::Windows::Forms::Label^ labelMainboard;
	private: System::Windows::Forms::Label^ labelGPU;
	private: System::Windows::Forms::Label^ labelRAMout;
	private: System::Windows::Forms::Label^ labelHDDout;
	private: System::Windows::Forms::Label^ labelSSDout;
	private: System::Windows::Forms::Label^ labelPSU;
	private: System::Windows::Forms::Label^ labelCPUcooler;
	private: System::Windows::Forms::Label^ labelMainboardOutput;
	private: System::Windows::Forms::Label^ labelCoolerOutput;
	private: System::Windows::Forms::Label^ labelGPUOutput;
	private: System::Windows::Forms::Label^ labelRAMOutput;
	private: System::Windows::Forms::Label^ labelHDDOutput;
	private: System::Windows::Forms::Label^ labelSSDOutput;
	private: System::Windows::Forms::Label^ labelPSUOutput;
	private: System::Windows::Forms::Label^ labelKorpus;
	private: System::Windows::Forms::Label^ labelKorpusOutput;
	private: System::Windows::Forms::Label^ labelPriceLevel;

	private: System::Windows::Forms::ComboBox^ comboBoxPriceLevel;
	private: System::Windows::Forms::Label^ labelSoundcard;
	private: System::Windows::Forms::Label^ labelSoundCardOutput;
	private: System::Windows::Forms::Label^ labelOficeProgram;
	private: System::Windows::Forms::ComboBox^ comboBoxOfficeProgram;
	private: System::Windows::Forms::Label^ labelWindow;
	private: System::Windows::Forms::ComboBox^ comboBoxWindows;
	private: System::Windows::Forms::Label^ labelSpeed;
	private: System::Windows::Forms::ComboBox^ comboBoxSpeed;
	private: System::Windows::Forms::Label^ labelSum;
	private: System::Windows::Forms::Label^ labelSumOutput;
	private: System::Windows::Forms::Label^ labelOfficeSSD;
	private: System::Windows::Forms::ComboBox^ comboBoxOfficeSSD;
	private: System::Windows::Forms::Label^ labelGamePrice;
	private: System::Windows::Forms::ComboBox^ comboBoxGamePrice;

	private: System::Windows::Forms::Label^ labelGameWork;
	private: System::Windows::Forms::ComboBox^ comboBoxGameWork;
	private: System::Windows::Forms::Label^ labelCPUGPU;
	private: System::Windows::Forms::ComboBox^ comboBoxCPUGPU;
	private: System::Windows::Forms::Label^ labelGPUGame;
	private: System::Windows::Forms::ComboBox^ comboBoxGPUGame;
private: System::Windows::Forms::Label^ labelRecommend;








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
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->comboBoxSel = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSel2 = (gcnew System::Windows::Forms::ComboBox());
			this->labelSel2 = (gcnew System::Windows::Forms::Label());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->labelTypeGraphic = (gcnew System::Windows::Forms::Label());
			this->comboBoxTypeGraphic = (gcnew System::Windows::Forms::ComboBox());
			this->labelGrapgicLevel = (gcnew System::Windows::Forms::Label());
			this->comboBoxGraphicLevel = (gcnew System::Windows::Forms::ComboBox());
			this->labelYesNoFirma = (gcnew System::Windows::Forms::Label());
			this->comboBoxYesNoFirma = (gcnew System::Windows::Forms::ComboBox());
			this->labelProcessor = (gcnew System::Windows::Forms::Label());
			this->comboBoxProcessor = (gcnew System::Windows::Forms::ComboBox());
			this->labelHDD = (gcnew System::Windows::Forms::Label());
			this->labelSSD = (gcnew System::Windows::Forms::Label());
			this->comboBoxHDD = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSSD = (gcnew System::Windows::Forms::ComboBox());
			this->labelRAM = (gcnew System::Windows::Forms::Label());
			this->comboBoxRAM = (gcnew System::Windows::Forms::ComboBox());
			this->labelCPU = (gcnew System::Windows::Forms::Label());
			this->labelCPUout = (gcnew System::Windows::Forms::Label());
			this->labelMainboard = (gcnew System::Windows::Forms::Label());
			this->labelGPU = (gcnew System::Windows::Forms::Label());
			this->labelRAMout = (gcnew System::Windows::Forms::Label());
			this->labelHDDout = (gcnew System::Windows::Forms::Label());
			this->labelSSDout = (gcnew System::Windows::Forms::Label());
			this->labelPSU = (gcnew System::Windows::Forms::Label());
			this->labelCPUcooler = (gcnew System::Windows::Forms::Label());
			this->labelMainboardOutput = (gcnew System::Windows::Forms::Label());
			this->labelCoolerOutput = (gcnew System::Windows::Forms::Label());
			this->labelGPUOutput = (gcnew System::Windows::Forms::Label());
			this->labelRAMOutput = (gcnew System::Windows::Forms::Label());
			this->labelHDDOutput = (gcnew System::Windows::Forms::Label());
			this->labelSSDOutput = (gcnew System::Windows::Forms::Label());
			this->labelPSUOutput = (gcnew System::Windows::Forms::Label());
			this->labelKorpus = (gcnew System::Windows::Forms::Label());
			this->labelKorpusOutput = (gcnew System::Windows::Forms::Label());
			this->labelPriceLevel = (gcnew System::Windows::Forms::Label());
			this->comboBoxPriceLevel = (gcnew System::Windows::Forms::ComboBox());
			this->labelSoundcard = (gcnew System::Windows::Forms::Label());
			this->labelSoundCardOutput = (gcnew System::Windows::Forms::Label());
			this->labelOficeProgram = (gcnew System::Windows::Forms::Label());
			this->comboBoxOfficeProgram = (gcnew System::Windows::Forms::ComboBox());
			this->labelWindow = (gcnew System::Windows::Forms::Label());
			this->comboBoxWindows = (gcnew System::Windows::Forms::ComboBox());
			this->labelSpeed = (gcnew System::Windows::Forms::Label());
			this->comboBoxSpeed = (gcnew System::Windows::Forms::ComboBox());
			this->labelSum = (gcnew System::Windows::Forms::Label());
			this->labelSumOutput = (gcnew System::Windows::Forms::Label());
			this->labelOfficeSSD = (gcnew System::Windows::Forms::Label());
			this->comboBoxOfficeSSD = (gcnew System::Windows::Forms::ComboBox());
			this->labelGamePrice = (gcnew System::Windows::Forms::Label());
			this->comboBoxGamePrice = (gcnew System::Windows::Forms::ComboBox());
			this->labelGameWork = (gcnew System::Windows::Forms::Label());
			this->comboBoxGameWork = (gcnew System::Windows::Forms::ComboBox());
			this->labelCPUGPU = (gcnew System::Windows::Forms::Label());
			this->comboBoxCPUGPU = (gcnew System::Windows::Forms::ComboBox());
			this->labelGPUGame = (gcnew System::Windows::Forms::Label());
			this->comboBoxGPUGame = (gcnew System::Windows::Forms::ComboBox());
			this->labelRecommend = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonRecommend
			// 
			this->buttonRecommend->Location = System::Drawing::Point(434, 384);
			this->buttonRecommend->Name = L"buttonRecommend";
			this->buttonRecommend->Size = System::Drawing::Size(96, 27);
			this->buttonRecommend->TabIndex = 0;
			this->buttonRecommend->Text = L"Рекомендация";
			this->buttonRecommend->UseVisualStyleBackColor = true;
			this->buttonRecommend->Visible = false;
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
			this->labelSel->Size = System::Drawing::Size(502, 20);
			this->labelSel->TabIndex = 1;
			this->labelSel->Text = L"Для какого рода деятельности подбирается конфигурация ПК\?";
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(1040, 444);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(103, 27);
			this->buttonExit->TabIndex = 6;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MyForm::buttonExit_Click);
			// 
			// comboBoxSel
			// 
			this->comboBoxSel->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxSel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxSel->FormattingEnabled = true;
			this->comboBoxSel->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Cпециализированная работа", L"Офисная работа",
					L"Игры"
			});
			this->comboBoxSel->Location = System::Drawing::Point(48, 43);
			this->comboBoxSel->Name = L"comboBoxSel";
			this->comboBoxSel->Size = System::Drawing::Size(288, 24);
			this->comboBoxSel->TabIndex = 7;
			this->comboBoxSel->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxSel_SelectedIndexChanged);
			// 
			// comboBoxSel2
			// 
			this->comboBoxSel2->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxSel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxSel2->FormattingEnabled = true;
			this->comboBoxSel2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Работа с графикой", L"Машинное обучение",
					L"Работа с музыкой", L"Ведение стримов"
			});
			this->comboBoxSel2->Location = System::Drawing::Point(364, 70);
			this->comboBoxSel2->Name = L"comboBoxSel2";
			this->comboBoxSel2->Size = System::Drawing::Size(169, 24);
			this->comboBoxSel2->TabIndex = 10;
			this->comboBoxSel2->Visible = false;
			this->comboBoxSel2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxSel2_SelectedIndexChanged);
			// 
			// labelSel2
			// 
			this->labelSel2->AutoSize = true;
			this->labelSel2->BackColor = System::Drawing::Color::Transparent;
			this->labelSel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSel2->ForeColor = System::Drawing::SystemColors::Info;
			this->labelSel2->Location = System::Drawing::Point(20, 70);
			this->labelSel2->Name = L"labelSel2";
			this->labelSel2->Size = System::Drawing::Size(343, 20);
			this->labelSel2->TabIndex = 12;
			this->labelSel2->Text = L"Какой работой Вы планируете заниматься\?";
			this->labelSel2->Visible = false;
			// 
			// buttonReset
			// 
			this->buttonReset->Location = System::Drawing::Point(24, 446);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(96, 25);
			this->buttonReset->TabIndex = 17;
			this->buttonReset->Text = L"Сбросить";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &MyForm::buttonReset_Click);
			// 
			// labelTypeGraphic
			// 
			this->labelTypeGraphic->AutoSize = true;
			this->labelTypeGraphic->BackColor = System::Drawing::Color::Transparent;
			this->labelTypeGraphic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTypeGraphic->ForeColor = System::Drawing::SystemColors::Info;
			this->labelTypeGraphic->Location = System::Drawing::Point(20, 99);
			this->labelTypeGraphic->Name = L"labelTypeGraphic";
			this->labelTypeGraphic->Size = System::Drawing::Size(220, 20);
			this->labelTypeGraphic->TabIndex = 21;
			this->labelTypeGraphic->Text = L"Тип графического объекта:";
			this->labelTypeGraphic->Visible = false;
			// 
			// comboBoxTypeGraphic
			// 
			this->comboBoxTypeGraphic->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxTypeGraphic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxTypeGraphic->FormattingEnabled = true;
			this->comboBoxTypeGraphic->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Фотография", L"3D-объекты", L"Видео" });
			this->comboBoxTypeGraphic->Location = System::Drawing::Point(242, 99);
			this->comboBoxTypeGraphic->Name = L"comboBoxTypeGraphic";
			this->comboBoxTypeGraphic->Size = System::Drawing::Size(153, 24);
			this->comboBoxTypeGraphic->TabIndex = 22;
			this->comboBoxTypeGraphic->Visible = false;
			this->comboBoxTypeGraphic->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxTypeGraphic_SelectedIndexChanged);
			// 
			// labelGrapgicLevel
			// 
			this->labelGrapgicLevel->AutoSize = true;
			this->labelGrapgicLevel->BackColor = System::Drawing::Color::Transparent;
			this->labelGrapgicLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelGrapgicLevel->ForeColor = System::Drawing::SystemColors::Info;
			this->labelGrapgicLevel->Location = System::Drawing::Point(20, 130);
			this->labelGrapgicLevel->Name = L"labelGrapgicLevel";
			this->labelGrapgicLevel->Size = System::Drawing::Size(616, 20);
			this->labelGrapgicLevel->TabIndex = 23;
			this->labelGrapgicLevel->Text = L"На каком уровне Вы планируете организовывать свою рабочую деятельность\?";
			this->labelGrapgicLevel->Visible = false;
			// 
			// comboBoxGraphicLevel
			// 
			this->comboBoxGraphicLevel->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxGraphicLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxGraphicLevel->FormattingEnabled = true;
			this->comboBoxGraphicLevel->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Начальный-средний", L"Профессиональный",
					L"Профессиональный с учётом работы с тяжёлыми объектами"
			});
			this->comboBoxGraphicLevel->Location = System::Drawing::Point(46, 153);
			this->comboBoxGraphicLevel->Name = L"comboBoxGraphicLevel";
			this->comboBoxGraphicLevel->Size = System::Drawing::Size(169, 24);
			this->comboBoxGraphicLevel->TabIndex = 24;
			this->comboBoxGraphicLevel->Visible = false;
			// 
			// labelYesNoFirma
			// 
			this->labelYesNoFirma->BackColor = System::Drawing::Color::Transparent;
			this->labelYesNoFirma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelYesNoFirma->ForeColor = System::Drawing::SystemColors::Info;
			this->labelYesNoFirma->Location = System::Drawing::Point(20, 180);
			this->labelYesNoFirma->Name = L"labelYesNoFirma";
			this->labelYesNoFirma->Size = System::Drawing::Size(598, 47);
			this->labelYesNoFirma->TabIndex = 25;
			this->labelYesNoFirma->Text = L"Вы имеете какие-либо представления о характеристиках/производителях комплектующих"
				L"\?";
			// 
			// comboBoxYesNoFirma
			// 
			this->comboBoxYesNoFirma->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxYesNoFirma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxYesNoFirma->FormattingEnabled = true;
			this->comboBoxYesNoFirma->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да", L"Нет" });
			this->comboBoxYesNoFirma->Location = System::Drawing::Point(160, 199);
			this->comboBoxYesNoFirma->Name = L"comboBoxYesNoFirma";
			this->comboBoxYesNoFirma->Size = System::Drawing::Size(93, 24);
			this->comboBoxYesNoFirma->TabIndex = 26;
			this->comboBoxYesNoFirma->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxYesNoFirma_SelectedIndexChanged);
			// 
			// labelProcessor
			// 
			this->labelProcessor->AutoSize = true;
			this->labelProcessor->BackColor = System::Drawing::Color::Transparent;
			this->labelProcessor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelProcessor->ForeColor = System::Drawing::SystemColors::Info;
			this->labelProcessor->Location = System::Drawing::Point(20, 230);
			this->labelProcessor->Name = L"labelProcessor";
			this->labelProcessor->Size = System::Drawing::Size(502, 20);
			this->labelProcessor->TabIndex = 27;
			this->labelProcessor->Text = L"Имеются ли некоторые предпочтения при подборе процессора\?";
			this->labelProcessor->Visible = false;
			// 
			// comboBoxProcessor
			// 
			this->comboBoxProcessor->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxProcessor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxProcessor->FormattingEnabled = true;
			this->comboBoxProcessor->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AMD", L"Intel(Нет)" });
			this->comboBoxProcessor->Location = System::Drawing::Point(522, 227);
			this->comboBoxProcessor->Name = L"comboBoxProcessor";
			this->comboBoxProcessor->Size = System::Drawing::Size(120, 24);
			this->comboBoxProcessor->TabIndex = 28;
			this->comboBoxProcessor->Visible = false;
			// 
			// labelHDD
			// 
			this->labelHDD->AutoSize = true;
			this->labelHDD->BackColor = System::Drawing::Color::Transparent;
			this->labelHDD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHDD->ForeColor = System::Drawing::SystemColors::Info;
			this->labelHDD->Location = System::Drawing::Point(22, 283);
			this->labelHDD->Name = L"labelHDD";
			this->labelHDD->Size = System::Drawing::Size(233, 20);
			this->labelHDD->TabIndex = 29;
			this->labelHDD->Text = L"Желаемый объём HDD-диска";
			this->labelHDD->Visible = false;
			// 
			// labelSSD
			// 
			this->labelSSD->AutoSize = true;
			this->labelSSD->BackColor = System::Drawing::Color::Transparent;
			this->labelSSD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSSD->ForeColor = System::Drawing::SystemColors::Info;
			this->labelSSD->Location = System::Drawing::Point(22, 312);
			this->labelSSD->Name = L"labelSSD";
			this->labelSSD->Size = System::Drawing::Size(231, 20);
			this->labelSSD->TabIndex = 30;
			this->labelSSD->Text = L"Желаемый объём SSD-диска";
			this->labelSSD->Visible = false;
			// 
			// comboBoxHDD
			// 
			this->comboBoxHDD->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxHDD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxHDD->FormattingEnabled = true;
			this->comboBoxHDD->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"500ГБ", L"1ТБ", L"2ТБ", L"4ТБ", L"6ТБ", L"8ТБ",
					L"10ТБ"
			});
			this->comboBoxHDD->Location = System::Drawing::Point(253, 284);
			this->comboBoxHDD->Name = L"comboBoxHDD";
			this->comboBoxHDD->Size = System::Drawing::Size(121, 24);
			this->comboBoxHDD->TabIndex = 31;
			this->comboBoxHDD->Visible = false;
			this->comboBoxHDD->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxHDD_SelectedIndexChanged_1);
			// 
			// comboBoxSSD
			// 
			this->comboBoxSSD->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxSSD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxSSD->FormattingEnabled = true;
			this->comboBoxSSD->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"не нужен", L"120ГБ", L"250ГБ", L"500ГБ", L"1ТБ",
					L"2ТБ"
			});
			this->comboBoxSSD->Location = System::Drawing::Point(254, 313);
			this->comboBoxSSD->Name = L"comboBoxSSD";
			this->comboBoxSSD->Size = System::Drawing::Size(121, 24);
			this->comboBoxSSD->TabIndex = 32;
			this->comboBoxSSD->Visible = false;
			this->comboBoxSSD->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxSSD_SelectedIndexChanged);
			// 
			// labelRAM
			// 
			this->labelRAM->AutoSize = true;
			this->labelRAM->BackColor = System::Drawing::Color::Transparent;
			this->labelRAM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelRAM->ForeColor = System::Drawing::SystemColors::Info;
			this->labelRAM->Location = System::Drawing::Point(22, 255);
			this->labelRAM->Name = L"labelRAM";
			this->labelRAM->Size = System::Drawing::Size(180, 20);
			this->labelRAM->TabIndex = 33;
			this->labelRAM->Text = L"Желаемый объём ОЗУ";
			this->labelRAM->Visible = false;
			// 
			// comboBoxRAM
			// 
			this->comboBoxRAM->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxRAM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxRAM->ForeColor = System::Drawing::SystemColors::WindowText;
			this->comboBoxRAM->FormattingEnabled = true;
			this->comboBoxRAM->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"8 ГБ", L"16 ГБ", L"32 ГБ", L"64 ГБ", L"128 ГБ" });
			this->comboBoxRAM->Location = System::Drawing::Point(253, 255);
			this->comboBoxRAM->Name = L"comboBoxRAM";
			this->comboBoxRAM->Size = System::Drawing::Size(121, 24);
			this->comboBoxRAM->TabIndex = 34;
			this->comboBoxRAM->Visible = false;
			// 
			// labelCPU
			// 
			this->labelCPU->AutoSize = true;
			this->labelCPU->BackColor = System::Drawing::Color::Transparent;
			this->labelCPU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCPU->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->labelCPU->Location = System::Drawing::Point(666, 43);
			this->labelCPU->Name = L"labelCPU";
			this->labelCPU->Size = System::Drawing::Size(138, 20);
			this->labelCPU->TabIndex = 35;
			this->labelCPU->Text = L"Процессор(CPU):\r\n";
			// 
			// labelCPUout
			// 
			this->labelCPUout->AutoSize = true;
			this->labelCPUout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCPUout->Location = System::Drawing::Point(799, 45);
			this->labelCPUout->Name = L"labelCPUout";
			this->labelCPUout->Size = System::Drawing::Size(16, 17);
			this->labelCPUout->TabIndex = 36;
			this->labelCPUout->Text = L"0\r\n";
			// 
			// labelMainboard
			// 
			this->labelMainboard->AutoSize = true;
			this->labelMainboard->BackColor = System::Drawing::Color::Transparent;
			this->labelMainboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMainboard->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->labelMainboard->Location = System::Drawing::Point(667, 65);
			this->labelMainboard->Name = L"labelMainboard";
			this->labelMainboard->Size = System::Drawing::Size(164, 20);
			this->labelMainboard->TabIndex = 37;
			this->labelMainboard->Text = L"Материнская плата:";
			// 
			// labelGPU
			// 
			this->labelGPU->AutoSize = true;
			this->labelGPU->BackColor = System::Drawing::Color::Transparent;
			this->labelGPU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelGPU->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->labelGPU->Location = System::Drawing::Point(667, 108);
			this->labelGPU->Name = L"labelGPU";
			this->labelGPU->Size = System::Drawing::Size(151, 20);
			this->labelGPU->TabIndex = 38;
			this->labelGPU->Text = L"Видеокарта(GPU):";
			// 
			// labelRAMout
			// 
			this->labelRAMout->AutoSize = true;
			this->labelRAMout->BackColor = System::Drawing::Color::Transparent;
			this->labelRAMout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelRAMout->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->labelRAMout->Location = System::Drawing::Point(667, 128);
			this->labelRAMout->Name = L"labelRAMout";
			this->labelRAMout->Size = System::Drawing::Size(175, 20);
			this->labelRAMout->TabIndex = 39;
			this->labelRAMout->Text = L"Оперативная память:";
			// 
			// labelHDDout
			// 
			this->labelHDDout->AutoSize = true;
			this->labelHDDout->BackColor = System::Drawing::Color::Transparent;
			this->labelHDDout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHDDout->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->labelHDDout->Location = System::Drawing::Point(666, 150);
			this->labelHDDout->Name = L"labelHDDout";
			this->labelHDDout->Size = System::Drawing::Size(168, 20);
			this->labelHDDout->TabIndex = 40;
			this->labelHDDout->Text = L"Жесткий диск(HDD): ";
			// 
			// labelSSDout
			// 
			this->labelSSDout->AutoSize = true;
			this->labelSSDout->BackColor = System::Drawing::Color::Transparent;
			this->labelSSDout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSSDout->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->labelSSDout->Location = System::Drawing::Point(667, 172);
			this->labelSSDout->Name = L"labelSSDout";
			this->labelSSDout->Size = System::Drawing::Size(142, 20);
			this->labelSSDout->TabIndex = 41;
			this->labelSSDout->Text = L"SSD-накопитель:";
			// 
			// labelPSU
			// 
			this->labelPSU->AutoSize = true;
			this->labelPSU->BackColor = System::Drawing::Color::Transparent;
			this->labelPSU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPSU->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->labelPSU->Location = System::Drawing::Point(667, 195);
			this->labelPSU->Name = L"labelPSU";
			this->labelPSU->Size = System::Drawing::Size(165, 20);
			this->labelPSU->TabIndex = 42;
			this->labelPSU->Text = L"Блок питания(PSU): ";
			// 
			// labelCPUcooler
			// 
			this->labelCPUcooler->AutoSize = true;
			this->labelCPUcooler->BackColor = System::Drawing::Color::Transparent;
			this->labelCPUcooler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCPUcooler->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->labelCPUcooler->Location = System::Drawing::Point(667, 86);
			this->labelCPUcooler->Name = L"labelCPUcooler";
			this->labelCPUcooler->Size = System::Drawing::Size(184, 20);
			this->labelCPUcooler->TabIndex = 43;
			this->labelCPUcooler->Text = L"Кулер для процессора:";
			// 
			// labelMainboardOutput
			// 
			this->labelMainboardOutput->AutoSize = true;
			this->labelMainboardOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelMainboardOutput->Location = System::Drawing::Point(827, 68);
			this->labelMainboardOutput->Name = L"labelMainboardOutput";
			this->labelMainboardOutput->Size = System::Drawing::Size(16, 17);
			this->labelMainboardOutput->TabIndex = 44;
			this->labelMainboardOutput->Text = L"0";
			// 
			// labelCoolerOutput
			// 
			this->labelCoolerOutput->AutoSize = true;
			this->labelCoolerOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCoolerOutput->Location = System::Drawing::Point(846, 89);
			this->labelCoolerOutput->Name = L"labelCoolerOutput";
			this->labelCoolerOutput->Size = System::Drawing::Size(16, 17);
			this->labelCoolerOutput->TabIndex = 45;
			this->labelCoolerOutput->Text = L"0";
			// 
			// labelGPUOutput
			// 
			this->labelGPUOutput->AutoSize = true;
			this->labelGPUOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelGPUOutput->Location = System::Drawing::Point(813, 110);
			this->labelGPUOutput->Name = L"labelGPUOutput";
			this->labelGPUOutput->Size = System::Drawing::Size(16, 17);
			this->labelGPUOutput->TabIndex = 46;
			this->labelGPUOutput->Text = L"0";
			// 
			// labelRAMOutput
			// 
			this->labelRAMOutput->AutoSize = true;
			this->labelRAMOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelRAMOutput->Location = System::Drawing::Point(838, 129);
			this->labelRAMOutput->Name = L"labelRAMOutput";
			this->labelRAMOutput->Size = System::Drawing::Size(16, 17);
			this->labelRAMOutput->TabIndex = 47;
			this->labelRAMOutput->Text = L"0";
			// 
			// labelHDDOutput
			// 
			this->labelHDDOutput->AutoSize = true;
			this->labelHDDOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelHDDOutput->Location = System::Drawing::Point(825, 151);
			this->labelHDDOutput->Name = L"labelHDDOutput";
			this->labelHDDOutput->Size = System::Drawing::Size(16, 17);
			this->labelHDDOutput->TabIndex = 48;
			this->labelHDDOutput->Text = L"0";
			// 
			// labelSSDOutput
			// 
			this->labelSSDOutput->AutoSize = true;
			this->labelSSDOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSSDOutput->Location = System::Drawing::Point(805, 175);
			this->labelSSDOutput->Name = L"labelSSDOutput";
			this->labelSSDOutput->Size = System::Drawing::Size(16, 17);
			this->labelSSDOutput->TabIndex = 49;
			this->labelSSDOutput->Text = L"0";
			// 
			// labelPSUOutput
			// 
			this->labelPSUOutput->AutoSize = true;
			this->labelPSUOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPSUOutput->Location = System::Drawing::Point(823, 198);
			this->labelPSUOutput->Name = L"labelPSUOutput";
			this->labelPSUOutput->Size = System::Drawing::Size(16, 17);
			this->labelPSUOutput->TabIndex = 50;
			this->labelPSUOutput->Text = L"0";
			// 
			// labelKorpus
			// 
			this->labelKorpus->AutoSize = true;
			this->labelKorpus->BackColor = System::Drawing::Color::Transparent;
			this->labelKorpus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelKorpus->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->labelKorpus->Location = System::Drawing::Point(668, 219);
			this->labelKorpus->Name = L"labelKorpus";
			this->labelKorpus->Size = System::Drawing::Size(65, 20);
			this->labelKorpus->TabIndex = 51;
			this->labelKorpus->Text = L"Корпус:";
			// 
			// labelKorpusOutput
			// 
			this->labelKorpusOutput->AutoSize = true;
			this->labelKorpusOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelKorpusOutput->Location = System::Drawing::Point(729, 221);
			this->labelKorpusOutput->Name = L"labelKorpusOutput";
			this->labelKorpusOutput->Size = System::Drawing::Size(16, 17);
			this->labelKorpusOutput->TabIndex = 52;
			this->labelKorpusOutput->Text = L"0";
			// 
			// labelPriceLevel
			// 
			this->labelPriceLevel->AutoSize = true;
			this->labelPriceLevel->BackColor = System::Drawing::Color::Transparent;
			this->labelPriceLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPriceLevel->ForeColor = System::Drawing::SystemColors::Info;
			this->labelPriceLevel->Location = System::Drawing::Point(20, 133);
			this->labelPriceLevel->Name = L"labelPriceLevel";
			this->labelPriceLevel->Size = System::Drawing::Size(367, 20);
			this->labelPriceLevel->TabIndex = 53;
			this->labelPriceLevel->Text = L"Какую по цене сборку Вы желали бы получить\?";
			this->labelPriceLevel->Visible = false;
			// 
			// comboBoxPriceLevel
			// 
			this->comboBoxPriceLevel->BackColor = System::Drawing::Color::Lavender;
			this->comboBoxPriceLevel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxPriceLevel->FormattingEnabled = true;
			this->comboBoxPriceLevel->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Бюджетная", L"Оптимальная", L"Профессиональная" });
			this->comboBoxPriceLevel->Location = System::Drawing::Point(396, 129);
			this->comboBoxPriceLevel->Name = L"comboBoxPriceLevel";
			this->comboBoxPriceLevel->Size = System::Drawing::Size(196, 24);
			this->comboBoxPriceLevel->TabIndex = 54;
			this->comboBoxPriceLevel->Visible = false;
			this->comboBoxPriceLevel->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxPriceLevel_SelectedIndexChanged);
			// 
			// labelSoundcard
			// 
			this->labelSoundcard->AutoSize = true;
			this->labelSoundcard->BackColor = System::Drawing::Color::Transparent;
			this->labelSoundcard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSoundcard->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->labelSoundcard->Location = System::Drawing::Point(668, 239);
			this->labelSoundcard->Name = L"labelSoundcard";
			this->labelSoundcard->Size = System::Drawing::Size(230, 20);
			this->labelSoundcard->TabIndex = 55;
			this->labelSoundcard->Text = L"Звуковая плата PCI-Express: ";
			this->labelSoundcard->Visible = false;
			// 
			// labelSoundCardOutput
			// 
			this->labelSoundCardOutput->AutoSize = true;
			this->labelSoundCardOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelSoundCardOutput->Location = System::Drawing::Point(674, 262);
			this->labelSoundCardOutput->Name = L"labelSoundCardOutput";
			this->labelSoundCardOutput->Size = System::Drawing::Size(16, 17);
			this->labelSoundCardOutput->TabIndex = 56;
			this->labelSoundCardOutput->Text = L"0";
			this->labelSoundCardOutput->Visible = false;
			// 
			// labelOficeProgram
			// 
			this->labelOficeProgram->AutoSize = true;
			this->labelOficeProgram->BackColor = System::Drawing::Color::Transparent;
			this->labelOficeProgram->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelOficeProgram->ForeColor = System::Drawing::Color::Aquamarine;
			this->labelOficeProgram->Location = System::Drawing::Point(22, 70);
			this->labelOficeProgram->Name = L"labelOficeProgram";
			this->labelOficeProgram->Size = System::Drawing::Size(358, 20);
			this->labelOficeProgram->TabIndex = 57;
			this->labelOficeProgram->Text = L"Нужна ли предустановка офисных программ\?";
			this->labelOficeProgram->Visible = false;
			// 
			// comboBoxOfficeProgram
			// 
			this->comboBoxOfficeProgram->BackColor = System::Drawing::Color::MediumAquamarine;
			this->comboBoxOfficeProgram->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxOfficeProgram->FormattingEnabled = true;
			this->comboBoxOfficeProgram->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да(+6000р)", L"нет" });
			this->comboBoxOfficeProgram->Location = System::Drawing::Point(396, 70);
			this->comboBoxOfficeProgram->Name = L"comboBoxOfficeProgram";
			this->comboBoxOfficeProgram->Size = System::Drawing::Size(126, 24);
			this->comboBoxOfficeProgram->TabIndex = 58;
			this->comboBoxOfficeProgram->Visible = false;
			// 
			// labelWindow
			// 
			this->labelWindow->AutoSize = true;
			this->labelWindow->BackColor = System::Drawing::Color::Transparent;
			this->labelWindow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelWindow->ForeColor = System::Drawing::Color::Aquamarine;
			this->labelWindow->Location = System::Drawing::Point(22, 100);
			this->labelWindow->Name = L"labelWindow";
			this->labelWindow->Size = System::Drawing::Size(357, 20);
			this->labelWindow->TabIndex = 59;
			this->labelWindow->Text = L"Нужна ли предустановка ОС Windows 10 Pro\? ";
			this->labelWindow->Visible = false;
			// 
			// comboBoxWindows
			// 
			this->comboBoxWindows->BackColor = System::Drawing::Color::MediumAquamarine;
			this->comboBoxWindows->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxWindows->FormattingEnabled = true;
			this->comboBoxWindows->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да(+10000р)", L"нет" });
			this->comboBoxWindows->Location = System::Drawing::Point(401, 100);
			this->comboBoxWindows->Name = L"comboBoxWindows";
			this->comboBoxWindows->Size = System::Drawing::Size(123, 24);
			this->comboBoxWindows->TabIndex = 60;
			this->comboBoxWindows->Visible = false;
			// 
			// labelSpeed
			// 
			this->labelSpeed->AutoSize = true;
			this->labelSpeed->BackColor = System::Drawing::Color::Transparent;
			this->labelSpeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSpeed->ForeColor = System::Drawing::Color::Aquamarine;
			this->labelSpeed->Location = System::Drawing::Point(22, 230);
			this->labelSpeed->Name = L"labelSpeed";
			this->labelSpeed->Size = System::Drawing::Size(108, 20);
			this->labelSpeed->TabIndex = 61;
			this->labelSpeed->Text = L"Что важнее\?";
			this->labelSpeed->Visible = false;
			// 
			// comboBoxSpeed
			// 
			this->comboBoxSpeed->BackColor = System::Drawing::Color::MediumAquamarine;
			this->comboBoxSpeed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxSpeed->FormattingEnabled = true;
			this->comboBoxSpeed->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Меньше цена", L"Больше производительность" });
			this->comboBoxSpeed->Location = System::Drawing::Point(141, 229);
			this->comboBoxSpeed->Name = L"comboBoxSpeed";
			this->comboBoxSpeed->Size = System::Drawing::Size(222, 24);
			this->comboBoxSpeed->TabIndex = 62;
			this->comboBoxSpeed->Visible = false;
			// 
			// labelSum
			// 
			this->labelSum->AutoSize = true;
			this->labelSum->BackColor = System::Drawing::Color::Transparent;
			this->labelSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSum->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->labelSum->Location = System::Drawing::Point(670, 282);
			this->labelSum->Name = L"labelSum";
			this->labelSum->Size = System::Drawing::Size(226, 20);
			this->labelSum->TabIndex = 63;
			this->labelSum->Text = L"Итоговая стоимость сборки:";
			// 
			// labelSumOutput
			// 
			this->labelSumOutput->AutoSize = true;
			this->labelSumOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelSumOutput->Location = System::Drawing::Point(674, 302);
			this->labelSumOutput->Name = L"labelSumOutput";
			this->labelSumOutput->Size = System::Drawing::Size(16, 17);
			this->labelSumOutput->TabIndex = 64;
			this->labelSumOutput->Text = L"0";
			// 
			// labelOfficeSSD
			// 
			this->labelOfficeSSD->AutoSize = true;
			this->labelOfficeSSD->BackColor = System::Drawing::Color::Transparent;
			this->labelOfficeSSD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelOfficeSSD->ForeColor = System::Drawing::Color::Aquamarine;
			this->labelOfficeSSD->Location = System::Drawing::Point(22, 312);
			this->labelOfficeSSD->Name = L"labelOfficeSSD";
			this->labelOfficeSSD->Size = System::Drawing::Size(404, 20);
			this->labelOfficeSSD->TabIndex = 65;
			this->labelOfficeSSD->Text = L"Нужен ли Вам SSD-диск для быстрой работы с ОС\?";
			this->labelOfficeSSD->Visible = false;
			// 
			// comboBoxOfficeSSD
			// 
			this->comboBoxOfficeSSD->BackColor = System::Drawing::Color::Aquamarine;
			this->comboBoxOfficeSSD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxOfficeSSD->FormattingEnabled = true;
			this->comboBoxOfficeSSD->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да", L"Нет" });
			this->comboBoxOfficeSSD->Location = System::Drawing::Point(432, 312);
			this->comboBoxOfficeSSD->Name = L"comboBoxOfficeSSD";
			this->comboBoxOfficeSSD->Size = System::Drawing::Size(78, 24);
			this->comboBoxOfficeSSD->TabIndex = 66;
			this->comboBoxOfficeSSD->Visible = false;
			this->comboBoxOfficeSSD->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxOfficeSSD_SelectedIndexChanged);
			// 
			// labelGamePrice
			// 
			this->labelGamePrice->AutoSize = true;
			this->labelGamePrice->BackColor = System::Drawing::Color::Transparent;
			this->labelGamePrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelGamePrice->ForeColor = System::Drawing::Color::Wheat;
			this->labelGamePrice->Location = System::Drawing::Point(22, 70);
			this->labelGamePrice->Name = L"labelGamePrice";
			this->labelGamePrice->Size = System::Drawing::Size(373, 20);
			this->labelGamePrice->TabIndex = 67;
			this->labelGamePrice->Text = L"Желаемая приблизительная стоимость сборки:";
			this->labelGamePrice->Visible = false;
			// 
			// comboBoxGamePrice
			// 
			this->comboBoxGamePrice->BackColor = System::Drawing::Color::Wheat;
			this->comboBoxGamePrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxGamePrice->FormattingEnabled = true;
			this->comboBoxGamePrice->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"20000", L"30000", L"48000", L"60000",
					L"80000", L"100000"
			});
			this->comboBoxGamePrice->Location = System::Drawing::Point(396, 70);
			this->comboBoxGamePrice->Name = L"comboBoxGamePrice";
			this->comboBoxGamePrice->Size = System::Drawing::Size(121, 24);
			this->comboBoxGamePrice->TabIndex = 68;
			this->comboBoxGamePrice->Visible = false;
			// 
			// labelGameWork
			// 
			this->labelGameWork->AutoSize = true;
			this->labelGameWork->BackColor = System::Drawing::Color::Transparent;
			this->labelGameWork->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelGameWork->ForeColor = System::Drawing::Color::Wheat;
			this->labelGameWork->Location = System::Drawing::Point(22, 130);
			this->labelGameWork->Name = L"labelGameWork";
			this->labelGameWork->Size = System::Drawing::Size(488, 20);
			this->labelGameWork->TabIndex = 69;
			this->labelGameWork->Text = L"Планируете ли вы дополнительно работать за компьютером\?";
			this->labelGameWork->Visible = false;
			// 
			// comboBoxGameWork
			// 
			this->comboBoxGameWork->BackColor = System::Drawing::Color::Wheat;
			this->comboBoxGameWork->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBoxGameWork->FormattingEnabled = true;
			this->comboBoxGameWork->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Да", L"нет" });
			this->comboBoxGameWork->Location = System::Drawing::Point(522, 129);
			this->comboBoxGameWork->Name = L"comboBoxGameWork";
			this->comboBoxGameWork->Size = System::Drawing::Size(121, 24);
			this->comboBoxGameWork->TabIndex = 70;
			this->comboBoxGameWork->Visible = false;
			// 
			// labelCPUGPU
			// 
			this->labelCPUGPU->AutoSize = true;
			this->labelCPUGPU->BackColor = System::Drawing::Color::Transparent;
			this->labelCPUGPU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCPUGPU->ForeColor = System::Drawing::Color::Wheat;
			this->labelCPUGPU->Location = System::Drawing::Point(20, 227);
			this->labelCPUGPU->Name = L"labelCPUGPU";
			this->labelCPUGPU->Size = System::Drawing::Size(529, 20);
			this->labelCPUGPU->TabIndex = 71;
			this->labelCPUGPU->Text = L"Имеются ли некоторые предпочтения при подборе пары CPU-GPU\?";
			this->labelCPUGPU->Visible = false;
			// 
			// comboBoxCPUGPU
			// 
			this->comboBoxCPUGPU->BackColor = System::Drawing::Color::Wheat;
			this->comboBoxCPUGPU->FormattingEnabled = true;
			this->comboBoxCPUGPU->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Intel-NVIDIA", L"Intel-AMD", L"AMD-NVIDIA",
					L"AMD-AMD"
			});
			this->comboBoxCPUGPU->Location = System::Drawing::Point(254, 253);
			this->comboBoxCPUGPU->Name = L"comboBoxCPUGPU";
			this->comboBoxCPUGPU->Size = System::Drawing::Size(91, 21);
			this->comboBoxCPUGPU->TabIndex = 72;
			this->comboBoxCPUGPU->Visible = false;
			this->comboBoxCPUGPU->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxCPUGPU_SelectedIndexChanged);
			// 
			// labelGPUGame
			// 
			this->labelGPUGame->AutoSize = true;
			this->labelGPUGame->BackColor = System::Drawing::Color::Transparent;
			this->labelGPUGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelGPUGame->ForeColor = System::Drawing::Color::Wheat;
			this->labelGPUGame->Location = System::Drawing::Point(22, 282);
			this->labelGPUGame->Name = L"labelGPUGame";
			this->labelGPUGame->Size = System::Drawing::Size(507, 20);
			this->labelGPUGame->TabIndex = 73;
			this->labelGPUGame->Text = L"Имеются ли некоторые предпочтения при подборе видеокарты\?";
			this->labelGPUGame->Visible = false;
			// 
			// comboBoxGPUGame
			// 
			this->comboBoxGPUGame->BackColor = System::Drawing::Color::Wheat;
			this->comboBoxGPUGame->FormattingEnabled = true;
			this->comboBoxGPUGame->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AMD", L"NVIDIA" });
			this->comboBoxGPUGame->Location = System::Drawing::Point(253, 306);
			this->comboBoxGPUGame->Name = L"comboBoxGPUGame";
			this->comboBoxGPUGame->Size = System::Drawing::Size(99, 21);
			this->comboBoxGPUGame->TabIndex = 74;
			this->comboBoxGPUGame->Text = L".";
			this->comboBoxGPUGame->Visible = false;
			this->comboBoxGPUGame->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxGPUGame_SelectedIndexChanged);
			// 
			// labelRecommend
			// 
			this->labelRecommend->AutoSize = true;
			this->labelRecommend->BackColor = System::Drawing::Color::Transparent;
			this->labelRecommend->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelRecommend->ForeColor = System::Drawing::SystemColors::Window;
			this->labelRecommend->Location = System::Drawing::Point(22, 390);
			this->labelRecommend->Name = L"labelRecommend";
			this->labelRecommend->Size = System::Drawing::Size(530, 40);
			this->labelRecommend->TabIndex = 75;
			this->labelRecommend->Text = L"Экспертная система закончила сбор информации.\r\nНажмите на кнопку для вывода подоб"
				L"ранной Вам конфигурации ПК";
			this->labelRecommend->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1155, 483);
			this->Controls->Add(this->comboBoxGPUGame);
			this->Controls->Add(this->labelGPUGame);
			this->Controls->Add(this->comboBoxCPUGPU);
			this->Controls->Add(this->labelCPUGPU);
			this->Controls->Add(this->comboBoxGameWork);
			this->Controls->Add(this->labelGameWork);
			this->Controls->Add(this->comboBoxGamePrice);
			this->Controls->Add(this->labelGamePrice);
			this->Controls->Add(this->comboBoxOfficeSSD);
			this->Controls->Add(this->labelOfficeSSD);
			this->Controls->Add(this->labelSumOutput);
			this->Controls->Add(this->labelSum);
			this->Controls->Add(this->comboBoxSpeed);
			this->Controls->Add(this->labelSpeed);
			this->Controls->Add(this->comboBoxWindows);
			this->Controls->Add(this->labelWindow);
			this->Controls->Add(this->comboBoxOfficeProgram);
			this->Controls->Add(this->labelOficeProgram);
			this->Controls->Add(this->labelSoundCardOutput);
			this->Controls->Add(this->labelSoundcard);
			this->Controls->Add(this->comboBoxPriceLevel);
			this->Controls->Add(this->labelPriceLevel);
			this->Controls->Add(this->labelKorpusOutput);
			this->Controls->Add(this->labelKorpus);
			this->Controls->Add(this->labelPSUOutput);
			this->Controls->Add(this->labelSSDOutput);
			this->Controls->Add(this->labelHDDOutput);
			this->Controls->Add(this->labelRAMOutput);
			this->Controls->Add(this->labelGPUOutput);
			this->Controls->Add(this->labelCoolerOutput);
			this->Controls->Add(this->labelMainboardOutput);
			this->Controls->Add(this->labelCPUcooler);
			this->Controls->Add(this->labelPSU);
			this->Controls->Add(this->labelSSDout);
			this->Controls->Add(this->labelHDDout);
			this->Controls->Add(this->labelRAMout);
			this->Controls->Add(this->labelGPU);
			this->Controls->Add(this->labelMainboard);
			this->Controls->Add(this->labelCPUout);
			this->Controls->Add(this->labelCPU);
			this->Controls->Add(this->comboBoxRAM);
			this->Controls->Add(this->labelRAM);
			this->Controls->Add(this->comboBoxSSD);
			this->Controls->Add(this->comboBoxHDD);
			this->Controls->Add(this->labelSSD);
			this->Controls->Add(this->labelHDD);
			this->Controls->Add(this->comboBoxProcessor);
			this->Controls->Add(this->labelProcessor);
			this->Controls->Add(this->comboBoxYesNoFirma);
			this->Controls->Add(this->labelYesNoFirma);
			this->Controls->Add(this->comboBoxGraphicLevel);
			this->Controls->Add(this->labelGrapgicLevel);
			this->Controls->Add(this->comboBoxTypeGraphic);
			this->Controls->Add(this->labelTypeGraphic);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->labelSel2);
			this->Controls->Add(this->comboBoxSel2);
			this->Controls->Add(this->comboBoxSel);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->labelSel);
			this->Controls->Add(this->buttonRecommend);
			this->Controls->Add(this->labelRecommend);
			this->Name = L"MyForm";
			this->Text = L"Demo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonRecommend_Click(System::Object^ sender, System::EventArgs^ e) {
		int price = 0;
		if (this->comboBoxTypeGraphic->Text == "Фотография") {
			if (this->comboBoxProcessor->Text == "AMD") {
				labelCPUout->Text = "AMD Ryzen 5 2600";
				labelMainboardOutput->Text = "ASRock A320M-HDV R4.0";
			}
			else {
				labelCPUout->Text = "Intel Core i5-9400F OEM";
				labelMainboardOutput->Text = "GIGABYTE H310M H 2.0";
			}
			if (this->comboBoxYesNoFirma->Text == "Да") {
				labelRAMOutput->Text = "Patriot Viper Elite " + comboBoxRAM->Text;
				labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
				labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
			}
			else {
				labelRAMOutput->Text = "Patriot Viper Elite 8 ГБ";
				labelHDDOutput->Text = "1 ТБ Seagate 7200 BarraCuda";
				labelSSDOutput->Text = "120 ГБ A-Data SU650";
			}
			labelGPUOutput->Text = "GeForce GT 1030 [GV-N1030D5-2GL]";
			labelCoolerOutput->Text = "DEEPCOOL Theta 15 PWM [DP-ICAS-T15P]";
			labelPSUOutput->Text = "Aerocool ECO 500W";
			labelKorpusOutput->Text = "Zalman Z3 Plus";
			price = 38000;
		}
		//3D - объекты
		if (this->comboBoxGraphicLevel->Text == "Начальный-средний") {
			if (this->comboBoxProcessor->Text == "AMD") {
				labelCPUout->Text = "AMD Ryzen 5 2600 OEM";
				labelMainboardOutput->Text = "GIGABYTE GA-A320M-S2H";
			}
			else {
				labelCPUout->Text = "Intel Core i3-10100F OEM";
				labelMainboardOutput->Text = "ASRock H410M-HVS";
			}
			if (this->comboBoxYesNoFirma->Text == "Да") {
				labelRAMOutput->Text = "AMD Radeon R9 Gamer Series " + comboBoxRAM->Text;
				labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
				labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
			}
			else {
				labelRAMOutput->Text = "AMD Radeon R9 Gamer Series 16 ГБ";
				labelHDDOutput->Text = "1 ТБ Seagate 7200 BarraCuda";
				labelSSDOutput->Text = "120 ГБ A-Data SU650";
			}
			labelGPUOutput->Text = "GIGABYTE GeForce GTX 1660 OC";
			labelCoolerOutput->Text = "DEEPCOOL Theta 15 PWM";
			labelPSUOutput->Text = "Aerocool VX PLUS 600W";
			labelKorpusOutput->Text = "DEXP DC-101B";
			price = 75000;
		}
		if (this->comboBoxGraphicLevel->Text == "Профессиональный") {
			if (this->comboBoxProcessor->Text == "AMD") {
				labelCPUout->Text = "AMD Ryzen 5 3600X OEM";
				labelMainboardOutput->Text = "ASUS PRIME B450M-K";
			}
			else {
				labelCPUout->Text = "Intel Core i5-10600K OEM";
				labelMainboardOutput->Text = "MSI B460M-A PRO";
			}
			if (this->comboBoxYesNoFirma->Text == "Да") {
				labelRAMOutput->Text = "A-Data XPG Gammix D10 " + comboBoxRAM->Text;
				labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
				labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
			}
			else {
				labelRAMOutput->Text = "A-Data XPG Gammix D10 16 ГБ";
				labelHDDOutput->Text = "2 ТБ Seagate 7200 BarraCuda";
				labelSSDOutput->Text = "480 ГБ A-Data SU650";
			}
			labelGPUOutput->Text = "PALIT NVIDIA GeForce RTX 2060SUPER DUAL";
			labelCoolerOutput->Text = "PCCooler GI-X4S";
			labelPSUOutput->Text = "Aerocool VX PLUS 700W";
			labelKorpusOutput->Text = "Zalman Z1 NEO";
			price = 140000;
		}
		if (this->comboBoxGraphicLevel->Text == "Профессиональный с учётом работы с тяжёлыми объектами") {
			if (this->comboBoxProcessor->Text == "AMD") {
				labelCPUout->Text = "AMD Ryzen 5 3600X OEM";
				labelMainboardOutput->Text = "ASUS PRIME B450M-K";
			}
			else {
				labelCPUout->Text = "Intel Core i9-10900K OEM";
				labelMainboardOutput->Text = "GIGABYTE B460 HD3";
			}
			if (this->comboBoxYesNoFirma->Text == "Да") {
				labelRAMOutput->Text = "G.Skill TRIDENT Z RGB " + comboBoxRAM->Text;
				labelHDDOutput->Text = comboBoxHDD->Text + " Toshiba X300";
				labelSSDOutput->Text = comboBoxSSD->Text + " SSD M.2 накопитель A-Data XPG SX8200 Pro";
			}
			else {
				labelRAMOutput->Text = "G.Skill TRIDENT Z RGB 64 ГБ";
				labelHDDOutput->Text = "6 ТБ Toshiba X300";
				labelSSDOutput->Text = "2048 ГБ SSD M.2 накопитель A-Data XPG SX8200 Pro";
			}
			labelGPUOutput->Text = "PNY Quadro RTX 6000";
			labelCoolerOutput->Text = "Xilence M504D";
			labelPSUOutput->Text = "Deepcool DQ ST 800W";
			labelKorpusOutput->Text = "Zalman Z1 NEO";
			price = 450000;
		}
		//Работа с музыкой
		if (comboBoxSel2->Text == "Работа с музыкой") {
			if (this->comboBoxPriceLevel->Text == "Бюджетная") {
				if (this->comboBoxProcessor->Text == "AMD") {
					labelCPUout->Text = "AMD Ryzen 5 3350G OEM";
					labelMainboardOutput->Text = "GIGABYTE B450M-H";
				}
				else {
					labelCPUout->Text = "Intel Core i5-10400 OEM";
					labelMainboardOutput->Text = "ASRock H410M-HVS";
				}
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "Crucial DDR4 " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "Crucial DDR4 16 ГБ";
					labelHDDOutput->Text = "2 ТБ Seagate 7200 BarraCuda";
					labelSSDOutput->Text = "250 ГБ A-Data SU650";
				}
				labelGPUOutput->Text = "не требуется";
				labelCoolerOutput->Text = "PCCooler GI-X3B [GI-X3B]";
				labelPSUOutput->Text = "Seasonic 620W";
				labelKorpusOutput->Text = "DeepCool Tesseract";
				labelSoundCardOutput->Text = "ASUS Xonar DGX GX2.5";
			}
			if (this->comboBoxPriceLevel->Text == "Оптимальная") {
				if (this->comboBoxProcessor->Text == "AMD") {
					labelCPUout->Text = "AMD Ryzen 7 3700X";
					labelMainboardOutput->Text = "MSI X470 Gaming Pro";
				}
				else {
					labelCPUout->Text = "Intel i7-9700K";
					labelMainboardOutput->Text = "MSI Z370 PC Pro";
				}
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "Crucial DDR4 " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "Crucial DDR4 16 ГБ";
					labelHDDOutput->Text = "2 ТБ Seagate 7200 BarraCuda";
					labelSSDOutput->Text = "512 ГБ A-Data SU650";
				}
				labelGPUOutput->Text = "GigaByte GTX-1050 Ti";
				labelCoolerOutput->Text = "be quiet! Pure Rock";
				labelPSUOutput->Text = "EVGA 850W";
				labelKorpusOutput->Text = "Corsair 750D";
				labelSoundCardOutput->Text = "Creative Sound Blaster Audigy RX";
			}
			if (this->comboBoxPriceLevel->Text == "Профессиональная") {
				if (this->comboBoxProcessor->Text == "AMD") {
					labelCPUout->Text = "AMD Ryzen 9 3950X";
					labelMainboardOutput->Text = "MSI X470 Gaming Pro";
				}
				else {
					labelCPUout->Text = "Intel Core i9-10900K OEM";
					labelMainboardOutput->Text = "GIGABYTE B460 HD3";
				}
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "Corsair Vengeance LPX DDR4-3200 " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate Exos";
					labelSSDOutput->Text = comboBoxSSD->Text + " Samsung 970 EVO";
				}
				else {
					labelRAMOutput->Text = "Corsair Vengeance LPX DDR4-3200 16 ГБ";
					labelHDDOutput->Text = "4 ТБ Seagate Exos";
					labelSSDOutput->Text = "512 ГБ Samsung 970 EVO";
				}
				labelGPUOutput->Text = "Gigabyte NVIDIA GeForce GTX 2060 Super";
				labelCoolerOutput->Text = "Xilence M504D";
				labelPSUOutput->Text = "SeaSonic 1000W";
				labelKorpusOutput->Text = "Corsair 760T";
				labelSoundCardOutput->Text = "Asus Essence STX II";
			}	
		}
		//Видео
		if (this->comboBoxTypeGraphic->Text == "Видео") {
			if (this->comboBoxPriceLevel->Text == "Бюджетная") {
					labelCPUout->Text = "AMD Ryzen 7 2700X";
					labelMainboardOutput->Text = "MSI X470 Gaming Pro";
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "HyperX Fury Red DDR4-2666 " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "Crucial DDR4 16 ГБ";
					labelHDDOutput->Text = "1 ТБ Seagate 7200 BarraCuda";
					labelSSDOutput->Text = "120 ГБ A-Data SU650";
				}
				labelGPUOutput->Text = "INNO3D GeForce GTX1060 Compact 6GB";
				labelCoolerOutput->Text = "be quiet! Pure Rock";
				labelPSUOutput->Text = "Seasonic 620W";
				labelKorpusOutput->Text = "Fractal Design Meshify C Black TG";
			}
			if (this->comboBoxPriceLevel->Text == "Оптимальная") {
	
					labelCPUout->Text = "AMD Ryzen 7 3800X";
					labelMainboardOutput->Text = "MSI X470 Gaming Pro";
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "Crucial DDR4 " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "Crucial DDR4 16 ГБ";
					labelHDDOutput->Text = "2 ТБ Seagate 7200 BarraCuda";
					labelSSDOutput->Text = "512 ГБ A-Data SU650";
				}
				labelGPUOutput->Text = "PALIT NVIDIA GeForce RTX 2060SUPER DUALi";
				labelCoolerOutput->Text = "be quiet! Pure Rock";
				labelPSUOutput->Text = "EVGA 850W";
				labelKorpusOutput->Text = "Fractal Design Meshify C Black TG";
			}
			if (this->comboBoxPriceLevel->Text == "Профессиональная") {
					labelCPUout->Text = "AMD Ryzen 9 3950X";
					labelMainboardOutput->Text = "MSI X570 Gaming Pro";
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "Corsair Vengeance LPX DDR4-3200 " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate Exos";
					labelSSDOutput->Text = comboBoxSSD->Text + " Samsung 970 EVO";
				}
				else {
					labelRAMOutput->Text = "Corsair Vengeance LPX DDR4-3200 16 ГБ";
					labelHDDOutput->Text = "4 ТБ Seagate Exos";
					labelSSDOutput->Text = "512 ГБ Samsung 970 EVO";
				}
				labelGPUOutput->Text = "NVIDIA GeForce RTX 3090 Open air";
				labelCoolerOutput->Text = "be quiet! Pure Rock";
				labelPSUOutput->Text = "SeaSonic 1000W";
				labelKorpusOutput->Text = "Fractal Design Meshify C Black TG";
			}
		}
		//Ведение стримов
		if (comboBoxSel2->Text == "Ведение стримов") {
			if (this->comboBoxPriceLevel->Text == "Бюджетная") {
				labelCPUout->Text = "AMD Ryzen 3 3500 BOX";
				labelMainboardOutput->Text = "MSI B450M-A PRO MAX";
				labelRAMOutput->Text = "Patriot Viper Elite [PVE48G266C6KGY] 8 ГБ (2х4Гб)";
				labelHDDOutput->Text = "2 ТБ Seagate 7200 BarraCuda";
				labelSSDOutput->Text = "250 ГБ A-Data SU650";
				labelGPUOutput->Text = "PowerColor AMD Radeon RX 580 Red Dragon";
				labelCoolerOutput->Text = "в комплекте с процессором";
				labelPSUOutput->Text = "Aerocool ECO 500W";
				labelKorpusOutput->Text = "DeepCool Tesseract";
			}
			if (this->comboBoxPriceLevel->Text == "Средний") {
				if (this->comboBoxProcessor->Text == "AMD") {
					labelCPUout->Text = "AMD Ryzen 5 3600 OEM";
					labelMainboardOutput->Text = "MSI B450M-A PRO MAX";
				}
				else {
					labelCPUout->Text = "Intel Core i5-10400 OEM";
					labelMainboardOutput->Text = "ASRock H410M-HDV/M.2";
				}
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "AMD Radeon R9 Gamer Series " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "AMD Radeon R9 Gamer Series 16 ГБ";
					labelHDDOutput->Text = "2 ТБ Seagate 7200 BarraCuda";
					labelSSDOutput->Text = "512 ГБ A-Data SU650";
				}
				labelGPUOutput->Text = "Palit GeForce GTX 1650 Gaming Pro";
				labelCoolerOutput->Text = "PCCooler GI-X3B";
				labelPSUOutput->Text = "Aerocool VX PLUS 700W";
				labelKorpusOutput->Text = "Zalman Z3 Plus";
			}
			if (this->comboBoxPriceLevel->Text == "Оптимальная") {
				if (this->comboBoxProcessor->Text == "AMD") {
					labelCPUout->Text = "AMD Ryzen 7 3700X";
					labelMainboardOutput->Text = "MSI B450-A PRO MAX";
				}
				else {
					labelCPUout->Text = "Intel i7-9700K";
					labelMainboardOutput->Text = "GIGABYTE Z390 D";
				}
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "AMD Radeon R9 Gamer Series " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "AMD Radeon R9 Gamer Series 16 ГБ";
					labelHDDOutput->Text = "2 ТБ Seagate 7200 BarraCuda";
					labelSSDOutput->Text = "512 ГБ A-Data SU650";
				}
				labelGPUOutput->Text = "PALIT NVIDIA GeForce RTX 2060SUPER DUAL";
				labelCoolerOutput->Text = "DEEPCOOL GAMMAXX 400 V2";
				labelPSUOutput->Text = "Aerocool VX PLUS 700W";
				labelKorpusOutput->Text = "ZALMAN i3 Edge";
			}
			if (this->comboBoxPriceLevel->Text == "Профессиональная") {
				if (this->comboBoxProcessor->Text == "AMD") {
					labelCPUout->Text = "AMD Ryzen 9 3950X";
					labelMainboardOutput->Text = "ASUS PRIME X570-P";
					labelGPUOutput->Text = "PowerColor AMD Radeon RX 6900 XT Red Devil";
				}
				else {
					labelCPUout->Text = "Intel Core i9-9900K OEM";
					labelMainboardOutput->Text = "MSI Z390 MPG GAMING PLUS";
					labelGPUOutput->Text = "MSI GeForce RTX 2080 Ti GAMING X TRIO";
				}
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "Kingston HyperX FURY Black " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate Exos";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "Kingston HyperX FURY Black 32 ГБ";
					labelHDDOutput->Text = "4 ТБ Seagate Exos";
					labelSSDOutput->Text = "512 ГБ A-Data SU650";
				}

				labelCoolerOutput->Text = "Xilence M504D";
				labelPSUOutput->Text = "Cougar GEX750";
				labelKorpusOutput->Text = "DEEPCOOL MATREXX 50 ADD-RGB 3F";
				labelSoundCardOutput->Text = "Asus Essence STX II";
			}
			if (this->comboBoxPriceLevel->Text == "Сверхпроизводительный") {
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "Crucial REG ECC " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "Crucial 128Gb REG ECC (4x32Gb)";
					labelHDDOutput->Text = "5 ТБ Seagate 7200 BarraCuda";
					labelSSDOutput->Text = "512 ГБ A-Data SU650";
				}
				labelCPUout->Text = "Intel Xeon W-2255";
				labelMainboardOutput->Text = "Asus WS C422 SAGE/10G";
				labelGPUOutput->Text = "NVIDIA GeForce RTX 3090 Open air";
				labelCoolerOutput->Text = "Noctua NH-U12DX i4 Socket Cooler";
				labelPSUOutput->Text = "Super Flower Leadex Platinum 1600W";
				labelKorpusOutput->Text = "Fractal Design Define XL R2";
			}
		}
		//Машинное обучение
		if (comboBoxSel2->Text == "Машинное обучение") {
			if (this->comboBoxPriceLevel->Text == "Бюджетная") {
				if (this->comboBoxProcessor->Text == "AMD") {
					labelCPUout->Text = "AMD Ryzen 7 3700X OEM";
					labelMainboardOutput->Text = "GIGABYTE B550M S2H";
				}
				else {
					labelCPUout->Text = "Intel Core i7-10700F OEM";
					labelMainboardOutput->Text = "ASRock B460 Pro4";
				}
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "G.Skill AEGIS " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "G.Skill AEGIS 16 ГБ";
					labelHDDOutput->Text = "2 ТБ Seagate 7200 BarraCuda";
					labelSSDOutput->Text = "250 ГБ A-Data SU650";
				}
				labelGPUOutput->Text = "Palit GeForce GTX 1650 Gaming Pro";
				labelCoolerOutput->Text = "DEEPCOOL GAMMAXX 400";
				labelPSUOutput->Text = "Deepcool DA 500W";
				labelKorpusOutput->Text = "Zalman Z3 Plus";
			}
			if (this->comboBoxPriceLevel->Text == "Оптимальная") {
				if (this->comboBoxProcessor->Text == "AMD") {
					labelCPUout->Text = "AMD Ryzen Threadripper 2950X";
					labelMainboardOutput->Text = "ASUS PRIME X399-A";
				}
				else {
					labelCPUout->Text = "Intel Core i9-10920X OEM";
					labelMainboardOutput->Text = "ASUS ROG STRIX X299-E GAMING II";
				}
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "Kingston HyperX FURY Black " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "Kingston HyperX FURY Black 64 ГБ";
					labelHDDOutput->Text = "2 ТБ Seagate 7200 BarraCuda";
					labelSSDOutput->Text = "512 ГБ A-Data SU650";
				}
				labelGPUOutput->Text = "MSI GeForce RTX 3070 GAMING X TRIO";
				labelCoolerOutput->Text = "Gamer Storm Fryzen";
				labelPSUOutput->Text = "Блок питания 850W Chieftec (APS-850CB)";
				labelKorpusOutput->Text = "DeepCool MATREXX 55";
			}
			if (this->comboBoxPriceLevel->Text == "Профессиональная") {
				if (this->comboBoxProcessor->Text == "AMD") {
					labelCPUout->Text = "AMD Ryzen 9 3950X";
					labelMainboardOutput->Text = "ASUS PRIME X570-P";
					labelGPUOutput->Text = "PowerColor AMD Radeon RX 6900 XT Red Devil";
				}
				else {
					labelCPUout->Text = "Intel Core i9-9900K OEM";
					labelMainboardOutput->Text = "MSI Z390 MPG GAMING PLUS";
					labelGPUOutput->Text = "MSI GeForce RTX 2080 Ti GAMING X TRIO";
				}
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "Kingston HyperX FURY Black " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate Exos";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "Kingston HyperX FURY Black 32 ГБ";
					labelHDDOutput->Text = "4 ТБ Seagate Exos";
					labelSSDOutput->Text = "512 ГБ A-Data SU650";
				}

				labelCoolerOutput->Text = "Xilence M504D";
				labelPSUOutput->Text = "Cougar GEX750";
				labelKorpusOutput->Text = "DEEPCOOL MATREXX 50 ADD-RGB 3F";
				labelSoundCardOutput->Text = "Asus Essence STX II";
			}
			if (this->comboBoxPriceLevel->Text == "Сверхпроизводительный") {
				if (this->comboBoxYesNoFirma->Text == "Да") {
					labelRAMOutput->Text = "G.Skill TRIDENT Z RGB " + comboBoxRAM->Text;
					labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
					labelSSDOutput->Text = comboBoxSSD->Text + " A-Data SU650";
				}
				else {
					labelRAMOutput->Text = "G.Skill TRIDENT Z RGB [F4-3200C16D-64GTZR] 64 ГБ (4х16Гб)";
					labelHDDOutput->Text = "2 ТБ Seagate 7200 BarraCuda";
					labelSSDOutput->Text = "512 ГБ A-Data SU650";
				}
				labelCPUout->Text = "AMD Ryzen Threadripper 3970X";
				labelMainboardOutput->Text = "AsRock TRX40 Taichi";
				labelGPUOutput->Text = "Palit GeForce RTX 3090 GamingPro";
				labelCoolerOutput->Text = "Be Quiet Dark Rock Pro TR4";
				labelPSUOutput->Text = "CHIEFTEC A-135 1000W";
				labelKorpusOutput->Text = "Cooler Master Cosmos C700M ARGB Curved Tempered Glass";
			}
		}

		if (this->comboBoxSel->Text == "Офисная работа") {
			labelCPUout->Text = "AMD A8-9600 OEM";
			labelMainboardOutput->Text = "ASRock A320M-HDV R4.0";
			labelRAMOutput->Text = "AMD Radeon R7 Performance Series 8 ГБ";
			labelGPUOutput->Text = "не требуется";
			labelHDDOutput->Text = "1 ТБ Seagate 7200 BarraCuda";
			labelCoolerOutput->Text = "Xilence A250 PWM ";
			labelPSUOutput->Text = "Aerocool VX PLUS 350W ";
			labelKorpusOutput->Text = "DEXP DC-101B черный ";
			//price = 11650;
			if (this->comboBoxSpeed->Text == "Меньше цена") {
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series 4 ГБ";
				price = 13550;
			}
			if (this->comboBoxSpeed->Text == "Больше производительность") {
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series 8 ГБ";
				labelSSDOutput->Text ="120 ГБ  A-Data SU650";
				price = 16750;
			}
			if (this->comboBoxYesNoFirma->Text == "Да") {
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series " + comboBoxRAM->Text;
				labelHDDOutput->Text = comboBoxHDD->Text + " Seagate 7200 BarraCuda";
				if (comboBoxOfficeSSD->Text == "Да") {
					labelSSDOutput->Text = "120 ГБ A-Data SU650";
					price = 13550;
				}
				else price = 11650;
				
			}
		}

		if (comboBoxCPUGPU->Text =="Intel-NVIDIA" || comboBoxYesNoFirma->Text == "Нет" && this->comboBoxSel->Text == "Игры") {
			if(comboBoxGamePrice->Text == "20000"){
				labelCPUout->Text = "Intel Celeron G5905 OEM";
				labelMainboardOutput->Text = "ASRock H470M-HDV";
				labelKorpusOutput->Text = "DEXP DC-202M";
				labelGPUOutput->Text = "INNO3D GeForce GT 710 Silent LP";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "Goodram[GR2666D464L19S/4G] (1х4ГБ)";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 350W ";
				price = 21793;
			}
			if (comboBoxGamePrice->Text == "30000") {
				labelCPUout->Text = "Intel Core i3-10100 F OEM";
				labelMainboardOutput->Text = "ASRock H470M-HDV";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "ASUS GeForce GT 1030 PHOENIX ";
				labelCoolerOutput->Text = "ID-Cooling DK-01S";
				labelRAMOutput->Text = "Goodram[GR2666D464L19S/4G] (1х4ГБ)";
				labelHDDOutput->Text = "1 ТБ WD Blue [WD10EZEX]";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 350W ";
				price = 32293;
			}
			if (comboBoxGamePrice->Text == "48000") {
				labelCPUout->Text = "Intel Core i3-10100 F OEM";
				labelMainboardOutput->Text = "ASRock H470M-HDV";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "KFA2 GeForce GTX 1050 Ti 1-Click OC";
				labelCoolerOutput->Text = "ID-Cooling DK-01S";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 Гб WD Blue [WD5000AZLX]";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 350W ";
				price = 45992;
			}
			if (comboBoxGamePrice->Text == "60000") {
				labelCPUout->Text = "Intel Core i5-10400 F OEM";
				labelMainboardOutput->Text = "ASRock H470M-HDV";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "MSI GeForce GTX 1650 D6 GAMING X";
				labelCoolerOutput->Text = "ID-Cooling DK-01S";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "1 ТБ WD Blue [WD10EZEX]";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 400W ";
				price = 58190;
			}
			if (comboBoxGamePrice->Text == "80000") {
				labelCPUout->Text = "Intel Core i5-10400 OEM";
				labelMainboardOutput->Text = "ASRock H470M-HDV";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "PALIT GeForce GTX 1660 SUPER Gaming Pro OC ";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 ГБ Seagate BarraCuda ";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Dexp DPS-450 ";
				price = 83741;
			}
			if (comboBoxGamePrice->Text == "100000") {
				labelCPUout->Text = "Intel Core i7-10700 OEM";
				labelMainboardOutput->Text = "MSI B460M PRO-VDH";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "MSI GeForce RTX 3070 VENTUS 2X OC Кулер для процессора: Xilence I404T";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (4х8ГБ) ";
				labelHDDOutput->Text = "2 ТБ Toshiba P300";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 700W";
				price = 185639;
			}
		}
		if (comboBoxCPUGPU->Text == "Intel-AMD") {
			if (comboBoxGamePrice->Text == "20000") {
				labelCPUout->Text = "Intel Celeron G5905 OEM";
				labelMainboardOutput->Text = "ASRock H470M-HDV";
				labelKorpusOutput->Text = "DEXP DC-202M";
				labelGPUOutput->Text = "ASUS AMD Radeon 470 Phoenix";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "Goodram[GR2666D464L19S/4G] (1х4ГБ)";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 350W ";
				price = 25293;
			}
			if (comboBoxGamePrice->Text == "30000") {
				labelCPUout->Text = "Intel Pentium Gold G6500 OEM";
				labelMainboardOutput->Text = "ASRock H470M-HDV";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "ASUS GeForce GT 1030 PHOENIX ";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "Goodram[GR2666D464L19S/4G] (2х4ГБ)";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 350W ";
				price = 34443;
			}
			if (comboBoxGamePrice->Text == "48000") {
				labelCPUout->Text = "Intel Core i5-10600 OEM";
				labelMainboardOutput->Text = "ASRock H470M-HDV";
				labelKorpusOutput->Text = "DEXP DC-201M ";
				labelGPUOutput->Text = "MSI AMD Radeon RX 550 AERO ITX OC ";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 Гб WD Blue [WD5000AZLX]";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "DEXP DPS-450 ";
				price = 52041;
			}
			if (comboBoxGamePrice->Text == "60000") {
				labelCPUout->Text = "Intel Core i5-10600 OEM";
				labelMainboardOutput->Text = "ASRock H470M-HDV";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "MSI AMD Radeon RX 590 AERO ITX OC ";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 400W ";
				price = 62763;
			}
			if (comboBoxGamePrice->Text == "80000") {
				labelCPUout->Text = "Intel Core i5-10600 OEM";
				labelMainboardOutput->Text = "ASRock H470M-HDV";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "MSI AMD Radeon RX 5500 XT GAMING X";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 400W ";
				price = 89741;
			}
			if (comboBoxGamePrice->Text == "100000") {
				labelCPUout->Text = "Intel Core i7-10700 OEM";
				labelMainboardOutput->Text = "MSI B460M PRO-VDH";
				labelKorpusOutput->Text = "DEXP DC-201M ";
				labelGPUOutput->Text = "MSI AMD Radeon RX 5500 XT GAMING X";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 400W ";
				price = 105239;
			}
		}
		if (comboBoxCPUGPU->Text == "AMD-AMD" || comboBoxGPUGame->Text=="AMD") {
			if (comboBoxGamePrice->Text == "20000") {
				labelCPUout->Text = "AMD Athlon X4 840 OEM";
				labelMainboardOutput->Text = "Biostar A68MHE";
				labelKorpusOutput->Text = "DEXP DC-201M ";
				labelGPUOutput->Text = "ASUS AMD Radeon 550 Phoenix [PH-550-2G] ";
				labelCoolerOutput->Text = "ID-Cooling DK-01T ";
				labelRAMOutput->Text = "AMD Radeon R3 Value Series [R334G1339U1S-U] (2x4 ГБ)";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 350W ";
				price = 26941;
			}
			if (comboBoxGamePrice->Text == "30000") {
				labelCPUout->Text = "AMD Ryzen 3 3100 OEM ";
				labelMainboardOutput->Text = "MSI A320M PRO-E";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "MSI AMD Radeon RX 550 AERO ITX OC";
				labelCoolerOutput->Text = "AeroCool Verkho A-3P";
				labelRAMOutput->Text = "Kingston ValueRAM [KVR26N19S6/4] (2x4 ГБ)";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 350W ";
				price = 36392;
			}
			if (comboBoxGamePrice->Text == "48000") {
				labelCPUout->Text = "AMD Ryzen 7 PRO 2700 OEM";
				labelMainboardOutput->Text = "ASRock A320M PRO4-F";
				labelKorpusOutput->Text = "DEXP DC-201M ";
				labelGPUOutput->Text = "MSI AMD Radeon RX 550 AERO ITX OC ";
				labelCoolerOutput->Text = "AeroCool Verkho A-3P ";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 Гб WD Blue [WD5000AZLX]";
				labelSSDOutput->Text = "240 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 400W ";
				price = 46792;
			}
			if (comboBoxGamePrice->Text == "60000") {
				labelCPUout->Text = "AMD Ryzen 5 3600Х OEM";
				labelMainboardOutput->Text = "GIGABYTE B450M H";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "MSI AMD Radeon RX 590 AERO ITX OC ";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 Гб WD Blue";
				labelSSDOutput->Text = "240 ГБ A-Data SU650 ";
				labelPSUOutput->Text = "Zalman Z3 Plus ";
				price = 64547;
			}
			if (comboBoxGamePrice->Text == "80000") {
				labelCPUout->Text = "AMD Ryzen 7 PRO 2700 OEM ";
				labelMainboardOutput->Text = "GIGABYTE B450M H";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "MSI AMD Radeon RX 5500 XT GAMING X";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "DEXP DPS-450 ";
				price = 86792;
			}
			if (comboBoxGamePrice->Text == "100000") {
				labelCPUout->Text = "AMD Ryzen 9 3900 OEM";
				labelMainboardOutput->Text = "ASRock A320M PRO4-F";
				labelKorpusOutput->Text = "DEXP DC-201M ";
				labelGPUOutput->Text = "MSI AMD Radeon RX 5500 XT GAMING X";
				labelCoolerOutput->Text = "AeroCool Verkho A-3P ";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "DEXP DPS-450";
				price = 113488;
			}
		}
		if (comboBoxCPUGPU->Text == "AMD-NVIDIA" || comboBoxGPUGame->Text == "NVIDIA" || comboBoxGameWork->Text=="Да") {
			if (comboBoxGamePrice->Text == "20000") {
				labelCPUout->Text = "AMD A8-9600 OEM ";
				labelMainboardOutput->Text = "MSI A320M PRO-E";
				labelKorpusOutput->Text = "DEXP DC-201M ";
				labelGPUOutput->Text = "INNO3D GeForce GT 710 Silent LP  ";
				labelCoolerOutput->Text = "AeroCool Verkho A-3P  ";
				labelRAMOutput->Text = "Goodram [GR2666D464L19S/4G] (1x4 ГБ)";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 350W ";
				price = 21242;
			}
			if (comboBoxGamePrice->Text == "30000") {
				labelCPUout->Text = "AMD Athlon 200GE OEM ";
				labelMainboardOutput->Text = "MSI A320M PRO-E";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "Asus GeForce GT 1030 PHOENIX [PH-GT1030-O2G]";
				labelCoolerOutput->Text = "AeroCool Verkho A-3P";
				labelRAMOutput->Text = "Goodram [GR2666D464L19S/4G] (2x4 ГБ)";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 350W ";
				price = 29143;
			}
			if (comboBoxGamePrice->Text == "48000") {
				labelCPUout->Text = "AMD Ryzen 5 1600 OEM ";
				labelMainboardOutput->Text = "MSI A320M PRO-E";
				labelKorpusOutput->Text = "DEXP DC-201M ";
				labelGPUOutput->Text = "MSI GeForce GTX 1650 D6 GAMING X ";
				labelCoolerOutput->Text = "AeroCool Verkho A-3P ";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 Гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 400W ";
				price = 54290;
			}
			if (comboBoxGamePrice->Text == "60000") {
				labelCPUout->Text = "AMD Ryzen 7 PRO 3700 OEM";
				labelMainboardOutput->Text = "MSI A320M PRO-E";
				labelKorpusOutput->Text = "DEXP DC-202M ";
				labelGPUOutput->Text = "MSI GeForce GTX 1650 D6 GAMING X";
				labelCoolerOutput->Text = "CoolerMaster I50";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ A-Data SU650 ";
				labelPSUOutput->Text = "Aerocool VX PLUS 400W  ";
				price = 67990;
			}
			if (comboBoxGamePrice->Text == "80000") {
				labelCPUout->Text = "AMD Ryzen 5 3600Х OEM ";
				labelMainboardOutput->Text = "GIGABYTE B450M H";
				labelKorpusOutput->Text = "DEXP DC-201M ";
				labelGPUOutput->Text = "GIGABYTE GeForce GTX 1660 SUPER OC ";
				labelCoolerOutput->Text = "AeroCool Verkho A-3P ";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (2х8ГБ) ";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "DEXP DPS-450 ";
				price = 87288;
			}
			if (comboBoxGamePrice->Text == "100000") {
				labelCPUout->Text = "AMD Ryzen 9 3900 OEM";
				labelMainboardOutput->Text = "ASRock A320M PRO4-F";
				labelKorpusOutput->Text = "DEXP DC-201M ";
				labelGPUOutput->Text = "MSI GeForce RTX 3070 GAMING X TRIO  ";
				labelCoolerOutput->Text = "AeroCool Verkho A-3P ";
				labelRAMOutput->Text = "AMD Radeon R7 Performance Series (4х8ГБ) ";
				labelHDDOutput->Text = "500 гб Seagate BarraCuda";
				labelSSDOutput->Text = "120 ГБ  A-Data SU650";
				labelPSUOutput->Text = "Aerocool VX PLUS 650W ";
				price = 194488;
			}
		}
		int ramprice = 0, hddprice=0, ssdprice = 0;

		if (comboBoxRAM->Text == "8 ГБ") ramprice = 3000;
		if (comboBoxRAM->Text == "16 ГБ") ramprice = 5500;
		if (comboBoxRAM->Text == "32 ГБ") ramprice = 7500;
		if (comboBoxRAM->Text == "48 ГБ") ramprice = 7500;
		if (comboBoxRAM->Text == "128 ГБ") ramprice = 7500;

		if (comboBoxHDD->Text == "500ГБ") hddprice = 2900;
		if (comboBoxHDD->Text == "1ТБ") hddprice = 3200;
		if (comboBoxHDD->Text == "2ТБ") hddprice = 4700;
		if (comboBoxHDD->Text == "4ТБ") hddprice = 13000;
		if (comboBoxHDD->Text == "6ТБ") hddprice = 19000;
		if (comboBoxHDD->Text == "8ТБ") hddprice = 25000;
		if (comboBoxHDD->Text == "10ТБ") hddprice = 32000;

		if (comboBoxSSD->Text == "120ГБ") ssdprice = 1900;
		if (comboBoxSSD->Text == "250ГБ") ssdprice = 3500;
		if (comboBoxSSD->Text == "500ГБ") ssdprice = 8000;
		if (comboBoxSSD->Text == "1ТБ") ssdprice = 14000;
		if (comboBoxSSD->Text == "2ТБ") ssdprice = 25000;

		if (this->comboBoxPriceLevel->Text == "Бюджетная") price = 37000;
		if (this->comboBoxPriceLevel->Text == "Средний") price = 68000;
		if (this->comboBoxPriceLevel->Text == "Оптимальная") price = 130000;
		if (this->comboBoxPriceLevel->Text == "Профессиональная") price = 190000;
		if (this->comboBoxPriceLevel->Text == "Сверхпроизводительный") price = 325000;

		if (this->comboBoxOfficeProgram->Text == "Да(+6000р)") price += 6000;
		if (this->comboBoxWindows->Text == "Да(+10000р)") price += 10000;
		
		price +=ramprice+ hddprice + ssdprice;
		labelSumOutput->Text = price.ToString();

	}
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do u want to exit?", "Exit Prompt",
			MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
			Application::Exit();
	}
    
    private: System::Void comboBoxSel_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		if (this->comboBoxSel->Text == "Cпециализированная работа") {
			this->labelSel2->Visible = true;
			this->comboBoxSel2->Visible = true;
		}

		if (this->comboBoxSel->Text == "Офисная работа") {
			
			labelWindow->Visible = true;
			comboBoxWindows->Visible = true;
			labelOficeProgram->Visible = true;
			comboBoxOfficeProgram->Visible = true;
		}

		if (this->comboBoxSel->Text == "Игры") {
			labelGamePrice->Visible = true;
			labelGameWork->Visible = true;
			comboBoxGamePrice->Visible = true;
			comboBoxGameWork->Visible = true;
		}
		this->comboBoxSel->Enabled = false;
    }
    private: System::Void comboBoxSel2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBoxSel2->Text == "Работа с графикой") {
			labelTypeGraphic->Visible = true;
			comboBoxTypeGraphic->Visible = true;
		}
		else {
			labelPriceLevel->Visible = true;
			comboBoxPriceLevel->Visible = true;
		}
		if (comboBoxSel2->Text == "Ведение стримов" || comboBoxSel2->Text == "Машинное обучение") 
		    comboBoxPriceLevel->Items->Add("Сверхпроизводительный");
		if (comboBoxSel2->Text == "Ведение стримов")
			comboBoxPriceLevel->Items->Add("Средний");

		if (comboBoxSel2->Text == "Работа с музыкой") {
			labelSoundcard->Visible = true;
			labelSoundCardOutput->Visible = true;
		}
		this->comboBoxSel2->Enabled = false;
    }
    private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e) {
		 this->Controls->Clear();
		 this->InitializeComponent();
	}
    private: System::Void comboBoxTypeGraphic_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBoxTypeGraphic->Text == "3D-объекты") {
			labelGrapgicLevel->Visible = true;
			comboBoxGraphicLevel->Visible = true;
		}
		if (this->comboBoxTypeGraphic->Text == "Видео") {
			labelPriceLevel->Visible = true;
			comboBoxPriceLevel->Visible = true;
		}
		comboBoxTypeGraphic->Enabled = false;
    }
    private: System::Void comboBoxYesNoFirma_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBoxYesNoFirma->Text == "Да" && this->comboBoxSel->Text != "Офисная работа" && this->comboBoxSel->Text != "Игры") {
			if (this->comboBoxPriceLevel->Text != "Сверхпроизводительный" || this->comboBoxPriceLevel->Text == "Профессиональная") {
				labelProcessor->Visible = true;
				comboBoxProcessor->Visible = true;
			}
			labelRAM->Visible = true;
			comboBoxRAM->Visible = true;
			labelHDD->Visible = true;
			comboBoxHDD->Visible = true;
			labelSSD->Visible = true;
			comboBoxSSD->Visible = true;
		}
		if (this->comboBoxSel->Text == "Офисная работа") {
			labelHDD->Visible = true;
			comboBoxHDD->Visible = true;
		}
		if (this->comboBoxSel->Text == "Офисная работа" && comboBoxYesNoFirma->Text == "Нет") {
			comboBoxSpeed->Visible = true;
			labelSpeed->Visible = true;
		}
		if (this->comboBoxSel->Text == "Офисная работа" && comboBoxYesNoFirma->Text == "Да") {
			labelRAM->Visible = true;
			comboBoxRAM->Visible = true;
			comboBoxRAM->Items->Clear();
			comboBoxRAM->Items->Add("4 ГБ");
			comboBoxRAM->Items->Add("8 ГБ");
			labelOfficeSSD->Visible = true;
			comboBoxOfficeSSD->Visible = true;
		}
		
		if (this->comboBoxGameWork->Text == "Да") {
			if (comboBoxYesNoFirma->Text == "Да") {
				labelGPUGame->Visible = true;
				comboBoxGPUGame->Visible = true;
			}
		}
		if (this->comboBoxGameWork->Text == "нет") {
			if (comboBoxYesNoFirma->Text == "Да") {
				labelCPUGPU->Visible = true;
				comboBoxCPUGPU->Visible = true;
			}
		}
		if (comboBoxYesNoFirma->Text == "Нет" && this->comboBoxSel->Text != "Офисная работа") {
			labelRecommend->Visible = true;
			buttonRecommend->Visible = true;
		}
		
		comboBoxYesNoFirma->Enabled = false;
	}
    
    private: System::Void comboBoxPriceLevel_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		comboBoxPriceLevel->Enabled = false;
	}



    private: System::Void comboBoxOfficeSSD_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		labelRecommend->Visible = true;
		buttonRecommend->Visible = true;
    }
    private: System::Void comboBoxGPUGame_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		buttonRecommend->Visible = true;
		labelRecommend->Visible = true;
	}
    private: System::Void comboBoxSSD_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		buttonRecommend->Visible = true;
		labelRecommend->Visible = true;
	}
	private: System::Void comboBoxHDD_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		buttonRecommend->Visible = true;
		labelRecommend->Visible = true;
	}
private: System::Void comboBoxCPUGPU_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	buttonRecommend->Visible = true;
	labelRecommend->Visible = true;
	comboBoxCPUGPU->Enabled = false;
}
    private: System::Void comboBoxHDD_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
		buttonRecommend->Visible = true;
		labelRecommend->Visible = true;
		comboBoxHDD->Enabled = false;
    }
};
}

#pragma once
#include "MyForm3.h"

namespace skibidih {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class anjayy : public System::Windows::Forms::Form
    {
    public:
        int hargaPerTiket = 100000;
        property String^ namapemesan;
        anjayy(String^ namaaa)
        {
            namapemesan = namaaa;
            InitializeComponent();

        }

        property int jumlahTiketDipilih;
        property String^ tanggalKeberangkatan;
        property String^ jamKeberangkatan;
        property String^ rutekeberangkatan;
    
    protected:
        ~anjayy()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::DateTimePicker^ dateTimePicker2;
        System::Windows::Forms::ComboBox^ comboBox3;
        System::Windows::Forms::ComboBox^ comboBox4;
        System::Windows::Forms::Button^ buttonPilihKursi;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Label^ label5;
           System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
            this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
            this->buttonPilihKursi = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // dateTimePicker2
            // 
            this->dateTimePicker2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dateTimePicker2->Location = System::Drawing::Point(369, 225);
            this->dateTimePicker2->Name = L"dateTimePicker2";
            this->dateTimePicker2->Size = System::Drawing::Size(200, 26);
            this->dateTimePicker2->TabIndex = 0;
            // 
            // comboBox3
            // 
            this->comboBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->comboBox3->FormattingEnabled = true;
            this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"07:00 WIB", L"10:00 WIB", L"17:00 WIB", L"20:00 WIB" });
            this->comboBox3->Location = System::Drawing::Point(369, 281);
            this->comboBox3->Name = L"comboBox3";
            this->comboBox3->Size = System::Drawing::Size(200, 28);
            this->comboBox3->TabIndex = 1;
            // 
            // comboBox4
            // 
            this->comboBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->comboBox4->FormattingEnabled = true;
            this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"3", L"4" });
            this->comboBox4->Location = System::Drawing::Point(369, 341);
            this->comboBox4->Name = L"comboBox4";
            this->comboBox4->Size = System::Drawing::Size(200, 28);
            this->comboBox4->TabIndex = 2;
            // 
            // buttonPilihKursi
            // 
            this->buttonPilihKursi->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->buttonPilihKursi->Location = System::Drawing::Point(454, 411);
            this->buttonPilihKursi->Name = L"buttonPilihKursi";
            this->buttonPilihKursi->Size = System::Drawing::Size(115, 39);
            this->buttonPilihKursi->TabIndex = 3;
            this->buttonPilihKursi->Text = L"Pilih Kursi";
            this->buttonPilihKursi->UseVisualStyleBackColor = true;
            this->buttonPilihKursi->Click += gcnew System::EventHandler(this, &anjayy::buttonPilihKursi_Click);
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(214, 230);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(107, 20);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Pilih tanggal";
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(214, 284);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(75, 20);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Pilih jam";
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(214, 344);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(109, 20);
            this->label3->TabIndex = 6;
            this->label3->Text = L"Jumlah kursi";
            // 
            // label4
            // 
            this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(214, 183);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(79, 20);
            this->label4->TabIndex = 7;
            this->label4->Text = L"Pilih rute";
            // 
            // comboBox1
            // 
            this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Jakarta - Semarang", L"Semarang - Jakarta" });
            this->comboBox1->Location = System::Drawing::Point(369, 180);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(200, 28);
            this->comboBox1->TabIndex = 8;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(166, 111);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(468, 29);
            this->label5->TabIndex = 9;
            this->label5->Text = L"MASUKKAN INFORMASI PEMESANAN";
            this->label5->Click += gcnew System::EventHandler(this, &anjayy::label5_Click);
            // 
            // anjayy
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(144, 144);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(796, 559);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->dateTimePicker2);
            this->Controls->Add(this->comboBox3);
            this->Controls->Add(this->comboBox4);
            this->Controls->Add(this->buttonPilihKursi);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Name = L"anjayy";
            this->ShowInTaskbar = false;
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"INFORMASI PEMESANAN";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void buttonPilihKursi_Click(System::Object^ sender, System::EventArgs^ e)
        {

            this->tanggalKeberangkatan = dateTimePicker2->Value.ToShortDateString();
            this->jamKeberangkatan = comboBox3->Text;
            this->rutekeberangkatan = comboBox1->Text;
            
            String^ jumlahTiketText = comboBox4->Text;
            if (String::IsNullOrWhiteSpace(jamKeberangkatan) || String::IsNullOrWhiteSpace(jumlahTiketText))
            {
                MessageBox::Show("Tolong lengkapi informasi pemesanan sebelum melanjutkan.",
                    "Informasi Tidak Lengkap", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }

            try
            {
                jumlahTiketDipilih = Int32::Parse(jumlahTiketText);
            }
            catch (FormatException^)
            {
                MessageBox::Show("Jumlah tiket harus berupa angka yang valid.",
                    "Format Tidak Valid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }
            this->Hide();
            MyForm3^ formKursi = gcnew MyForm3(jumlahTiketDipilih, tanggalKeberangkatan, jamKeberangkatan, rutekeberangkatan, namapemesan);
            formKursi->ShowDialog();
        }
    private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}

#pragma once

#include <cliext/list> // Untuk mendukung List
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

using namespace System::Drawing;

namespace skibidih {

    public ref class MyForm3 : public Form
    {
    private:
        int jumlahTiket;
        String^ rutekeberangkatan;
        String^ tanggalKeberangkatan;
        String^ jamKeberangkatan;
        String^ namapemesaan;
        List<String^>^ kursiDipilih;
        Button^ btnCheckout;

    public:
        MyForm3(int tiket, String^ tanggal, String^ waktu,String^ rute, String^ namapemesan)
        {
            jumlahTiket = tiket;
            tanggalKeberangkatan = tanggal;
            jamKeberangkatan = waktu;
            rutekeberangkatan = rute;
            kursiDipilih = gcnew List<String^>();
            namapemesaan = namapemesan;
            InitializeComponent();
        }

    protected:
        ~MyForm3()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        void InitializeComponent(void)
        {
            this->SuspendLayout();
            // 
            // MyForm3
            // 
            this->ClientSize = System::Drawing::Size(703, 668);
            this->Name = L"MyForm3";
            this->Text = L"Pilih Tempat Duduk";
            this->Size = System::Drawing::Size(680, 880);
            this->StartPosition = FormStartPosition::CenterScreen;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
   

            
            btnCheckout = gcnew Button();
            btnCheckout->Text = L"Checkout";
            btnCheckout->Size = System::Drawing::Size(100, 40);
            btnCheckout->Location = System::Drawing::Point(500, 780);
            btnCheckout->BackColor = System::Drawing::Color::Azure;
            btnCheckout->Click += gcnew EventHandler(this, &MyForm3::btnCheckout_Click);
            this->Controls->Add(btnCheckout);

            
            int seatWidth = 80;
            int seatHeight = 40;
            int paddingX = 30;
            int paddingY = 20;
            int startX = 100;
            int startY = 70;

            for (int i = 0; i < 12; ++i) 
            {
                for (int j = 0; j < 2; ++j) 
                {
                    Button^ btnSeat = gcnew Button();
                    btnSeat->Size = System::Drawing::Size(seatWidth, seatHeight);
                    btnSeat->Location = System::Drawing::Point(startX + j * (seatWidth + paddingX), startY + i * (seatHeight + paddingY));
                    btnSeat->Text = L"K" + (i * 2 + j + 1).ToString();
                    btnSeat->BackColor = System::Drawing::Color::Azure;
                    btnSeat->Click += gcnew EventHandler(this, &MyForm3::btnSeat_Click);
                    this->Controls->Add(btnSeat);
                }

                for (int j = 0; j < 2; ++j) 
                {
                    Button^ btnSeat = gcnew Button();
                    btnSeat->Size = System::Drawing::Size(seatWidth, seatHeight);
                    btnSeat->Location = System::Drawing::Point(startX + 300 + j * (seatWidth + paddingX), startY + i * (seatHeight + paddingY));
                    btnSeat->Text = L"K" + (i * 2 + j + 25).ToString();
                    btnSeat->BackColor = System::Drawing::Color::Azure;
                    btnSeat->Click += gcnew EventHandler(this, &MyForm3::btnSeat_Click);
                    this->Controls->Add(btnSeat);
                }
            }
            this->ResumeLayout(false);

        }
  

        void btnSeat_Click(Object^ sender, EventArgs^ e)
        {
            Button^ btn = safe_cast<Button^>(sender);

            if (kursiDipilih->Count >= jumlahTiket && !kursiDipilih->Contains(btn->Text))
            {
                MessageBox::Show(L"Kursi yang dipilih melebihi jumlah tiket.", L"Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }

            if (kursiDipilih->Contains(btn->Text))
            {
                kursiDipilih->Remove(btn->Text);
                btn->BackColor = System::Drawing::Color::Azure;
            }
            else
            {
                kursiDipilih->Add(btn->Text);
                btn->BackColor = System::Drawing::Color::Green;
            }
        }

        void btnCheckout_Click(Object^ sender, EventArgs^ e)
        {
            if (kursiDipilih->Count < jumlahTiket)
            {
                MessageBox::Show(L"Jumlah kursi yang dipilih belum mencukupi.", L"Peringatan", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }
            
            array<String^>^ kursiArray = kursiDipilih->ToArray();

            String^ pesan =
                "Rute keberangkatan " + rutekeberangkatan + "\n" +
                "Tanggal Keberangkatan: " + tanggalKeberangkatan + "\n" +
                "Jam Keberangkatan: " + jamKeberangkatan + "\n" +
                "Kursi yang Dipilih: " + String::Join(", ", kursiArray)+ "\n"+
                "Nama Pemesan: " + namapemesaan;


            MessageBox::Show(pesan, "Informasi Checkout", MessageBoxButtons::OK, MessageBoxIcon::Information);
            this->Close();
        }
    };
}

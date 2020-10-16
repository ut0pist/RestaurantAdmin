#pragma once

namespace BDproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Сводка для Bron_Menu
	/// </summary>
	public ref class Bron_Menu : public System::Windows::Forms::Form
	{
	public:
		Bron_Menu(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Bron_Menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::TextBox^ clientname_textBox;
	private: System::Windows::Forms::TextBox^ brondate_textBox;
	private: System::Windows::Forms::TextBox^ brontime_textBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ tableid_textBox;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button3;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->clientname_textBox = (gcnew System::Windows::Forms::TextBox());
			this->brondate_textBox = (gcnew System::Windows::Forms::TextBox());
			this->brontime_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableid_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(252, 63);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(529, 256);
			this->dataGridView1->TabIndex = 0;
			// 
			// clientname_textBox
			// 
			this->clientname_textBox->Location = System::Drawing::Point(43, 63);
			this->clientname_textBox->Name = L"clientname_textBox";
			this->clientname_textBox->Size = System::Drawing::Size(148, 20);
			this->clientname_textBox->TabIndex = 1;
			// 
			// brondate_textBox
			// 
			this->brondate_textBox->Location = System::Drawing::Point(43, 141);
			this->brondate_textBox->Name = L"brondate_textBox";
			this->brondate_textBox->Size = System::Drawing::Size(148, 20);
			this->brondate_textBox->TabIndex = 2;
			// 
			// brontime_textBox
			// 
			this->brontime_textBox->Location = System::Drawing::Point(43, 178);
			this->brontime_textBox->Name = L"brontime_textBox";
			this->brontime_textBox->Size = System::Drawing::Size(148, 20);
			this->brontime_textBox->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Имя клиента";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Бронь на (дата)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Бронь на (время)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(43, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 34);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Добавить бронь";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Bron_Menu::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(43, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 34);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Удалить бронь";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Bron_Menu::button2_Click);
			// 
			// tableid_textBox
			// 
			this->tableid_textBox->Location = System::Drawing::Point(43, 102);
			this->tableid_textBox->Name = L"tableid_textBox";
			this->tableid_textBox->Size = System::Drawing::Size(148, 20);
			this->tableid_textBox->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(40, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Номер столика";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(43, 205);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 34);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Отобразить все брони";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Bron_Menu::button3_Click);
			// 
			// Bron_Menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tableid_textBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->brontime_textBox);
			this->Controls->Add(this->brondate_textBox);
			this->Controls->Add(this->clientname_textBox);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Bron_Menu";
			this->Text = L"Bron_Menu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void searchfunc(String^ cmd) {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=restaurant";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter(cmd, con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;

		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=restaurant";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		String^ name = clientname_textBox->Text;
		String^ date = brondate_textBox->Text;
		String^ time = brontime_textBox->Text;
		String^ table_id = tableid_textBox->Text;
		try {
			MySqlCommand^ cmd = gcnew MySqlCommand("insert clients(name, table_id, bron_date, bron_time) values('" + name +"', '" + table_id + "', '" + date + "', '" + time + "')", con);

			MySqlDataReader^ dr;
			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (...) {
			MessageBox::Show("Неправильно введены данные. \nПопробуйте снова");
		}
		//textBox1->Text = "insert clients(name, table_id, bron_date, bron_time) values('" + name + "', '" + date + "', '" + time + "', '" + table_id + "')";
		searchfunc("select * from clients");
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=restaurant";
	MySqlConnection^ con = gcnew MySqlConnection(constr);

	String^ name = clientname_textBox->Text;
	MySqlCommand^ cmd = gcnew MySqlCommand("delete from clients where name = '" + name + "'", con);

	MySqlDataReader^ dr;
	con->Open();
	dr = cmd->ExecuteReader();
	con->Close();
	searchfunc("select * from clients");

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	searchfunc("select * from clients");
}
};
}

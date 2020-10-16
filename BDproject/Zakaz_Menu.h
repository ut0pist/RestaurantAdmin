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
	/// Сводка для Zakaz_Menu
	/// </summary>
	public ref class Zakaz_Menu : public System::Windows::Forms::Form
	{
	public:
		Zakaz_Menu(void)
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
		~Zakaz_Menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ sklad_button;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::CheckBox^ productname_checkbox;
	private: System::Windows::Forms::CheckBox^ producttype_checkbox;
	private: System::Windows::Forms::CheckBox^ productamount_checkbox;
	private: System::Windows::Forms::CheckBox^ productsupplier_checkbox;
	private: System::Windows::Forms::TextBox^ productname_textBox;
	private: System::Windows::Forms::TextBox^ producttype_textBox;
	private: System::Windows::Forms::TextBox^ productamount_textBox;
	private: System::Windows::Forms::TextBox^ productsupplier_textBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ zakazat_product;

	private: System::Windows::Forms::Button^ button3;

	private: System::ComponentModel::IContainer^ components;

	protected:

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
			this->sklad_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->productname_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->producttype_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->productamount_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->productsupplier_checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->productname_textBox = (gcnew System::Windows::Forms::TextBox());
			this->producttype_textBox = (gcnew System::Windows::Forms::TextBox());
			this->productamount_textBox = (gcnew System::Windows::Forms::TextBox());
			this->productsupplier_textBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->zakazat_product = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// sklad_button
			// 
			this->sklad_button->Location = System::Drawing::Point(12, 12);
			this->sklad_button->Name = L"sklad_button";
			this->sklad_button->Size = System::Drawing::Size(154, 87);
			this->sklad_button->TabIndex = 0;
			this->sklad_button->Text = L"Состояние склада";
			this->sklad_button->UseVisualStyleBackColor = true;
			this->sklad_button->Click += gcnew System::EventHandler(this, &Zakaz_Menu::sklad_button_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(113, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Изменить данные склада";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Zakaz_Menu::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(600, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(585, 558);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Zakaz_Menu::dataGridView1_CellContentClick);
			// 
			// productname_checkbox
			// 
			this->productname_checkbox->AutoSize = true;
			this->productname_checkbox->Location = System::Drawing::Point(172, 13);
			this->productname_checkbox->Name = L"productname_checkbox";
			this->productname_checkbox->Size = System::Drawing::Size(48, 17);
			this->productname_checkbox->TabIndex = 3;
			this->productname_checkbox->Text = L"Имя";
			this->productname_checkbox->UseVisualStyleBackColor = true;
			this->productname_checkbox->CheckedChanged += gcnew System::EventHandler(this, &Zakaz_Menu::productname_checkbox_CheckedChanged);
			// 
			// producttype_checkbox
			// 
			this->producttype_checkbox->AutoSize = true;
			this->producttype_checkbox->Location = System::Drawing::Point(172, 36);
			this->producttype_checkbox->Name = L"producttype_checkbox";
			this->producttype_checkbox->Size = System::Drawing::Size(94, 17);
			this->producttype_checkbox->TabIndex = 4;
			this->producttype_checkbox->Text = L"Тип продукта";
			this->producttype_checkbox->UseVisualStyleBackColor = true;
			// 
			// productamount_checkbox
			// 
			this->productamount_checkbox->AutoSize = true;
			this->productamount_checkbox->Location = System::Drawing::Point(172, 59);
			this->productamount_checkbox->Name = L"productamount_checkbox";
			this->productamount_checkbox->Size = System::Drawing::Size(134, 17);
			this->productamount_checkbox->TabIndex = 5;
			this->productamount_checkbox->Text = L"Количество продукта";
			this->productamount_checkbox->UseVisualStyleBackColor = true;
			// 
			// productsupplier_checkbox
			// 
			this->productsupplier_checkbox->AutoSize = true;
			this->productsupplier_checkbox->Location = System::Drawing::Point(172, 82);
			this->productsupplier_checkbox->Name = L"productsupplier_checkbox";
			this->productsupplier_checkbox->Size = System::Drawing::Size(133, 17);
			this->productsupplier_checkbox->TabIndex = 6;
			this->productsupplier_checkbox->Text = L"Поставщик продукта";
			this->productsupplier_checkbox->UseVisualStyleBackColor = true;
			// 
			// productname_textBox
			// 
			this->productname_textBox->Location = System::Drawing::Point(12, 214);
			this->productname_textBox->Name = L"productname_textBox";
			this->productname_textBox->Size = System::Drawing::Size(423, 20);
			this->productname_textBox->TabIndex = 7;
			// 
			// producttype_textBox
			// 
			this->producttype_textBox->Location = System::Drawing::Point(12, 255);
			this->producttype_textBox->Name = L"producttype_textBox";
			this->producttype_textBox->Size = System::Drawing::Size(423, 20);
			this->producttype_textBox->TabIndex = 8;
			// 
			// productamount_textBox
			// 
			this->productamount_textBox->Location = System::Drawing::Point(12, 298);
			this->productamount_textBox->Name = L"productamount_textBox";
			this->productamount_textBox->Size = System::Drawing::Size(423, 20);
			this->productamount_textBox->TabIndex = 9;
			// 
			// productsupplier_textBox
			// 
			this->productsupplier_textBox->Location = System::Drawing::Point(15, 340);
			this->productsupplier_textBox->Name = L"productsupplier_textBox";
			this->productsupplier_textBox->Size = System::Drawing::Size(420, 20);
			this->productsupplier_textBox->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 198);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Имя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Тип продукта";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Количество";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 324);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Поставщик";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 157);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 38);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Заполнить информацию";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Zakaz_Menu::button2_Click);
			// 
			// zakazat_product
			// 
			this->zakazat_product->Location = System::Drawing::Point(219, 157);
			this->zakazat_product->Name = L"zakazat_product";
			this->zakazat_product->Size = System::Drawing::Size(100, 38);
			this->zakazat_product->TabIndex = 16;
			this->zakazat_product->Text = L"Заказать продукты";
			this->zakazat_product->UseVisualStyleBackColor = true;
			this->zakazat_product->Click += gcnew System::EventHandler(this, &Zakaz_Menu::zakazat_product_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(325, 157);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 38);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Удалить продукт из заказа";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Zakaz_Menu::button3_Click);
			// 
			// Zakaz_Menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(1184, 561);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->zakazat_product);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->productsupplier_textBox);
			this->Controls->Add(this->productamount_textBox);
			this->Controls->Add(this->producttype_textBox);
			this->Controls->Add(this->productname_textBox);
			this->Controls->Add(this->productsupplier_checkbox);
			this->Controls->Add(this->productamount_checkbox);
			this->Controls->Add(this->producttype_checkbox);
			this->Controls->Add(this->productname_checkbox);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->sklad_button);
			this->Name = L"Zakaz_Menu";
			this->Text = L"Zakaz_Menu";
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
		

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
		   
	private: System::Void sklad_button_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ bufstr("");
		
		if (productname_checkbox->Checked) {
			bufstr += "name, ";
		}
		if (producttype_checkbox->Checked) {
			bufstr += "product_type, ";
		}
		if (productamount_checkbox->Checked) {
			bufstr += "amount, ";
		}
		if (productsupplier_checkbox->Checked) {
			bufstr += "supplier";
		}
		
		if (bufstr->EndsWith(", ")) {
			bufstr = bufstr->Remove(bufstr->Length - 2);
			searchfunc("select " + bufstr + " from products");
		}
		else if (bufstr->Empty) {
			searchfunc("select * from products");
		}
		
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}

private: System::Void productname_checkbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=restaurant";
	MySqlConnection^ con = gcnew MySqlConnection(constr);

	String^ name = productname_textBox->Text;
	String^ type = producttype_textBox->Text;
	String^ amount = productamount_textBox->Text;
	String^ supplier = productsupplier_textBox->Text;

	MySqlCommand^ cmd = gcnew MySqlCommand("update products set product_type='" + type + "',amount='" + amount + "',supplier='" + 
		supplier + "' where name ='" + name + "' ", con);

	MySqlDataReader^ dr;
	con->Open();
	dr = cmd->ExecuteReader();
	MessageBox::Show("Item updated in database.");
	con->Close();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=restaurant";
	MySqlConnection^ con = gcnew MySqlConnection(constr);

	String^ name = productname_textBox->Text;
	MySqlCommand^ cmd = gcnew MySqlCommand("select * from products where name = '" + name + "'", con);
	con->Open();
	MySqlDataReader^ dr = cmd->ExecuteReader();
	while (dr->Read())
	{
		producttype_textBox->Text = dr->GetString(1);
		productamount_textBox->Text = dr->GetString(2);
		productsupplier_textBox->Text = dr->GetString(3);
		
	}
	con->Close();

}
private: System::Void zakazat_product_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=restaurant";
	MySqlConnection^ con = gcnew MySqlConnection(constr);

	String^ name = productname_textBox->Text;
	String^ type = producttype_textBox->Text;
	String^ amount = productamount_textBox->Text;
	String^ supplier = productsupplier_textBox->Text;
	
	MySqlCommand^ cmd = gcnew MySqlCommand("insert products_for_order(name, product_type, amount, supplier) values('" + name + "', '" + type + "', " + amount + ", '" + supplier + "')", con);
	
	MySqlDataReader^ dr;
	con->Open();
	dr = cmd->ExecuteReader();
	con->Close();
	searchfunc("select * from products_for_order");

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=root;Database=restaurant";
	MySqlConnection^ con = gcnew MySqlConnection(constr);

	String^ name = productname_textBox->Text;
	MySqlCommand^ cmd = gcnew MySqlCommand("delete from products_for_order where name = '" + name + "'",con);

	MySqlDataReader^ dr;
	con->Open();
	dr = cmd->ExecuteReader();
	con->Close();

}
};
}

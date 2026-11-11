#pragma once
#include "SistemaPrincipal.h"
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormPaises
	/// </summary>
	public ref class FormPaises : public System::Windows::Forms::Form
	{
	private: SistemaHospitalario* sistema;
		   void CargarTablaPaises() {
			   dgvPaises->Rows->Clear();
			   NodoPais* lista[100];
			   int cantidad = 0;
			   sistema->Paises.ObtenerTodos(lista, cantidad);
			   for (int i = 0; i < cantidad; i++) {
				   dgvPaises->Rows->Add(lista[i]->CodPais, gcnew String(lista[i]->Nombre.c_str()));
			   }
		   }
	public:
		FormPaises(SistemaHospitalario* sistemaCompartido)
		{
			InitializeComponent();
			sistema = sistemaCompartido;
			CargarTablaPaises();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormPaises()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnInsertar;
	private: System::Windows::Forms::Button^ BtnBuscar;
	private: System::Windows::Forms::Button^ BtnModificar;
	private: System::Windows::Forms::Button^ BtnEliminar;
	protected:

	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TxtCodigo;
	private: System::Windows::Forms::TextBox^ TxtNombre;


	private: System::Windows::Forms::DataGridView^ dgvPaises;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombre;

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
			this->BtnInsertar = (gcnew System::Windows::Forms::Button());
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->BtnModificar = (gcnew System::Windows::Forms::Button());
			this->BtnEliminar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxtCodigo = (gcnew System::Windows::Forms::TextBox());
			this->TxtNombre = (gcnew System::Windows::Forms::TextBox());
			this->dgvPaises = (gcnew System::Windows::Forms::DataGridView());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPaises))->BeginInit();
			this->SuspendLayout();
			// 
			// BtnInsertar
			// 
			this->BtnInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInsertar->Location = System::Drawing::Point(15, 293);
			this->BtnInsertar->Name = L"BtnInsertar";
			this->BtnInsertar->Size = System::Drawing::Size(291, 78);
			this->BtnInsertar->TabIndex = 0;
			this->BtnInsertar->Text = L"Insertar";
			this->BtnInsertar->UseVisualStyleBackColor = true;
			this->BtnInsertar->Click += gcnew System::EventHandler(this, &FormPaises::BtnInsertar_Click);
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnBuscar->Location = System::Drawing::Point(382, 293);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(291, 78);
			this->BtnBuscar->TabIndex = 1;
			this->BtnBuscar->Text = L"Buscar";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &FormPaises::BtnBuscar_Click);
			// 
			// BtnModificar
			// 
			this->BtnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnModificar->Location = System::Drawing::Point(15, 395);
			this->BtnModificar->Name = L"BtnModificar";
			this->BtnModificar->Size = System::Drawing::Size(291, 78);
			this->BtnModificar->TabIndex = 2;
			this->BtnModificar->Text = L"Modificar";
			this->BtnModificar->UseVisualStyleBackColor = true;
			this->BtnModificar->Click += gcnew System::EventHandler(this, &FormPaises::BtnModificar_Click);
			// 
			// BtnEliminar
			// 
			this->BtnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEliminar->Location = System::Drawing::Point(382, 395);
			this->BtnEliminar->Name = L"BtnEliminar";
			this->BtnEliminar->Size = System::Drawing::Size(291, 78);
			this->BtnEliminar->TabIndex = 3;
			this->BtnEliminar->Text = L"Eliminar";
			this->BtnEliminar->UseVisualStyleBackColor = true;
			this->BtnEliminar->Click += gcnew System::EventHandler(this, &FormPaises::BtnEliminar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(196, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(340, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Mantenimiento de Paises";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Codigo del pais";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Nombre del pais";
			// 
			// TxtCodigo
			// 
			this->TxtCodigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtCodigo->Location = System::Drawing::Point(15, 118);
			this->TxtCodigo->Name = L"TxtCodigo";
			this->TxtCodigo->Size = System::Drawing::Size(224, 26);
			this->TxtCodigo->TabIndex = 7;
			// 
			// TxtNombre
			// 
			this->TxtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtNombre->Location = System::Drawing::Point(15, 202);
			this->TxtNombre->Name = L"TxtNombre";
			this->TxtNombre->Size = System::Drawing::Size(224, 26);
			this->TxtNombre->TabIndex = 8;
			// 
			// dgvPaises
			// 
			this->dgvPaises->AllowUserToAddRows = false;
			this->dgvPaises->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvPaises->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPaises->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->colCodigo,
					this->colNombre
			});
			this->dgvPaises->Location = System::Drawing::Point(307, 76);
			this->dgvPaises->MultiSelect = false;
			this->dgvPaises->Name = L"dgvPaises";
			this->dgvPaises->ReadOnly = true;
			this->dgvPaises->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvPaises->Size = System::Drawing::Size(391, 195);
			this->dgvPaises->TabIndex = 9;
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Codigo";
			this->colCodigo->Name = L"colCodigo";
			this->colCodigo->ReadOnly = true;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre";
			this->colNombre->Name = L"colNombre";
			this->colNombre->ReadOnly = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(304, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Paises registrados:";
			// 
			// FormPaises
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(710, 510);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvPaises);
			this->Controls->Add(this->TxtNombre);
			this->Controls->Add(this->TxtCodigo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnEliminar);
			this->Controls->Add(this->BtnModificar);
			this->Controls->Add(this->BtnBuscar);
			this->Controls->Add(this->BtnInsertar);
			this->Name = L"FormPaises";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mantenimiento de Paises";
			this->Load += gcnew System::EventHandler(this, &FormPaises::FormPaises_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPaises))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormPaises_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BtnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigo;

	if (!Int32::TryParse(TxtCodigo->Text, codigo)) {
		MessageBox::Show("Ingrese un código válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	string nombre;
	for(int i = 0; i < TxtNombre->Text->Length; i++) {
		nombre += (char)TxtNombre->Text[i];
	}
	if (nombre.empty()) {
		MessageBox::Show("Ingrese un nombre válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (sistema->Paises.Insertar(codigo, nombre)) {
		MessageBox::Show("País insertado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		CargarTablaPaises();
		TxtCodigo->Clear();
		TxtNombre->Clear();
	}
	else {
		MessageBox::Show("El país ya existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {

	int codigo;

	if (!Int32::TryParse(TxtCodigo->Text, codigo))
	{
		MessageBox::Show("Ingrese un código válido.");
		return;
	}

	NodoPais* encontrado = sistema->Paises.ObtenerPais(codigo);

	if (!sistema->Paises.Existe(codigo))
	{
		MessageBox::Show("El país no existe.");
		TxtNombre->Clear();
		return;
	}

	string nombre = encontrado->Nombre;
	
	System::String^ nombrePais = "";
	for(int i = 0; i < nombre.length(); i++)
	{
		nombrePais += (wchar_t)nombre[i];
	}
	MessageBox::Show("País encontrado:\nCódigo: " + codigo + "\nNombre: " + nombrePais);

}
private: System::Void BtnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigo;

	if (!Int32::TryParse(TxtCodigo->Text, codigo))
	{
		MessageBox::Show("Ingrese un código válido.");
		return;
	}

	string nombre;
	for (int i = 0; i < TxtNombre->Text->Length; i++)
	{
		nombre += (char)TxtNombre->Text[i];
	}

	if (nombre.empty())
	{
		MessageBox::Show("Ingrese el nuevo nombre.");
		return;
	}

	if (!sistema->Paises.Existe(codigo))
	{
		MessageBox::Show("El país no existe.");
		return;
	}

	sistema->Paises.Modificar(codigo, nombre);
	CargarTablaPaises();
	TxtCodigo->Clear();
	TxtNombre->Clear();
	MessageBox::Show("País modificado correctamente.");
}
private: System::Void BtnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigo;

	if (!Int32::TryParse(TxtCodigo->Text, codigo))
	{
		MessageBox::Show("Ingrese un código válido.");
		return;
	}

	if (!sistema->Paises.Existe(codigo))
	{
		MessageBox::Show("El país no existe.");
		return;
	}

	sistema->Paises.Eliminar(codigo);

	CargarTablaPaises();

	TxtCodigo->Clear();
	TxtNombre->Clear();

	MessageBox::Show("País eliminado correctamente.");

}
};
}

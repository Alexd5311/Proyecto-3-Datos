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
	/// Summary for FormCiudades
	/// </summary>
	public ref class FormCiudades : public System::Windows::Forms::Form
	{
	private:
		SistemaHospitalario* sistema;
		void CargarTablaCiudades() {
			dgvCiudades->Rows->Clear();
			NodoCiudad* lista[100];
			int cantidad = 0;
			sistema->Ciudades.ObtenerTodos(lista, cantidad);
			for (int i = 0; i < cantidad; i++) {
				dgvCiudades->Rows->Add(lista[i]->CodPais, lista[i]->CodCiudad, gcnew String(lista[i]->Nombre.c_str()));
			}
		}
	public:
		FormCiudades(SistemaHospitalario* sistemaCompartido)
		{
			InitializeComponent();
			sistema = sistemaCompartido;
			CargarTablaCiudades();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormCiudades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dgvCiudades;
	protected:



	private: System::Windows::Forms::TextBox^ TxtCodCiudad;
	private: System::Windows::Forms::TextBox^ TxtCodPais;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BtnEliminar;
	private: System::Windows::Forms::Button^ BtnModificar;
	private: System::Windows::Forms::Button^ BtnBuscar;
	private: System::Windows::Forms::Button^ BtnInsertar;
	private: System::Windows::Forms::TextBox^ TxtNombreCiudad;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCodigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColC;
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvCiudades = (gcnew System::Windows::Forms::DataGridView());
			this->colCodigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxtCodCiudad = (gcnew System::Windows::Forms::TextBox());
			this->TxtCodPais = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnEliminar = (gcnew System::Windows::Forms::Button());
			this->BtnModificar = (gcnew System::Windows::Forms::Button());
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->BtnInsertar = (gcnew System::Windows::Forms::Button());
			this->TxtNombreCiudad = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCiudades))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(330, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Ciudades registradas:";
			// 
			// dgvCiudades
			// 
			this->dgvCiudades->AllowUserToAddRows = false;
			this->dgvCiudades->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvCiudades->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCiudades->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->colCodigo,
					this->ColC, this->colNombre
			});
			this->dgvCiudades->Location = System::Drawing::Point(333, 84);
			this->dgvCiudades->MultiSelect = false;
			this->dgvCiudades->Name = L"dgvCiudades";
			this->dgvCiudades->ReadOnly = true;
			this->dgvCiudades->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvCiudades->Size = System::Drawing::Size(391, 289);
			this->dgvCiudades->TabIndex = 20;
			this->dgvCiudades->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormCiudades::dgvCiudades_CellContentClick);
			// 
			// colCodigo
			// 
			this->colCodigo->HeaderText = L"Codigo pais";
			this->colCodigo->Name = L"colCodigo";
			this->colCodigo->ReadOnly = true;
			// 
			// ColC
			// 
			this->ColC->HeaderText = L"CodCiudad";
			this->ColC->Name = L"ColC";
			this->ColC->ReadOnly = true;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre Ciudad";
			this->colNombre->Name = L"colNombre";
			this->colNombre->ReadOnly = true;
			// 
			// TxtCodCiudad
			// 
			this->TxtCodCiudad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtCodCiudad->Location = System::Drawing::Point(41, 220);
			this->TxtCodCiudad->Name = L"TxtCodCiudad";
			this->TxtCodCiudad->Size = System::Drawing::Size(224, 26);
			this->TxtCodCiudad->TabIndex = 19;
			// 
			// TxtCodPais
			// 
			this->TxtCodPais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtCodPais->Location = System::Drawing::Point(41, 136);
			this->TxtCodPais->Name = L"TxtCodPais";
			this->TxtCodPais->Size = System::Drawing::Size(224, 26);
			this->TxtCodPais->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Codigo de la ciudad";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Codigo del pais";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(222, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 31);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Mantenimiento de Ciudades";
			// 
			// BtnEliminar
			// 
			this->BtnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEliminar->Location = System::Drawing::Point(407, 504);
			this->BtnEliminar->Name = L"BtnEliminar";
			this->BtnEliminar->Size = System::Drawing::Size(291, 78);
			this->BtnEliminar->TabIndex = 14;
			this->BtnEliminar->Text = L"Eliminar";
			this->BtnEliminar->UseVisualStyleBackColor = true;
			this->BtnEliminar->Click += gcnew System::EventHandler(this, &FormCiudades::BtnEliminar_Click);
			// 
			// BtnModificar
			// 
			this->BtnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnModificar->Location = System::Drawing::Point(40, 504);
			this->BtnModificar->Name = L"BtnModificar";
			this->BtnModificar->Size = System::Drawing::Size(291, 78);
			this->BtnModificar->TabIndex = 13;
			this->BtnModificar->Text = L"Modificar";
			this->BtnModificar->UseVisualStyleBackColor = true;
			this->BtnModificar->Click += gcnew System::EventHandler(this, &FormCiudades::BtnModificar_Click);
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnBuscar->Location = System::Drawing::Point(407, 402);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(291, 78);
			this->BtnBuscar->TabIndex = 12;
			this->BtnBuscar->Text = L"Buscar";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &FormCiudades::BtnBuscar_Click);
			// 
			// BtnInsertar
			// 
			this->BtnInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInsertar->Location = System::Drawing::Point(40, 402);
			this->BtnInsertar->Name = L"BtnInsertar";
			this->BtnInsertar->Size = System::Drawing::Size(291, 78);
			this->BtnInsertar->TabIndex = 11;
			this->BtnInsertar->Text = L"Insertar";
			this->BtnInsertar->UseVisualStyleBackColor = true;
			this->BtnInsertar->Click += gcnew System::EventHandler(this, &FormCiudades::BtnInsertar_Click);
			// 
			// TxtNombreCiudad
			// 
			this->TxtNombreCiudad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtNombreCiudad->Location = System::Drawing::Point(40, 308);
			this->TxtNombreCiudad->Name = L"TxtNombreCiudad";
			this->TxtNombreCiudad->Size = System::Drawing::Size(224, 26);
			this->TxtNombreCiudad->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(37, 281);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Nombre de la ciudad";
			// 
			// FormCiudades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(770, 624);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TxtNombreCiudad);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvCiudades);
			this->Controls->Add(this->TxtCodCiudad);
			this->Controls->Add(this->TxtCodPais);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnEliminar);
			this->Controls->Add(this->BtnModificar);
			this->Controls->Add(this->BtnBuscar);
			this->Controls->Add(this->BtnInsertar);
			this->Name = L"FormCiudades";
			this->Text = L"Mantenimiento de Ciudades";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCiudades))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dgvCiudades_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void BtnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		int codPais, codCiudad;
		if (!Int32::TryParse(TxtCodPais->Text, codPais))
		{
			MessageBox::Show("Ingrese un código de país válido.");
			return;
		}

		if (!Int32::TryParse(TxtCodCiudad->Text, codCiudad))
		{
			MessageBox::Show("Ingrese un código de ciudad válido.");
			return;
		}

		string nombreCiudad;
		for (int i = 0; i < TxtNombreCiudad->Text->Length; i++)
		{
			nombreCiudad += (char)TxtNombreCiudad->Text[i];
		}
		if (nombreCiudad.empty())
		{
			MessageBox::Show("Ingrese un nombre de ciudad válido.");
			return;
		}
		if (!sistema->Paises.Existe(codPais) || sistema->Ciudades.Existe(codPais, codCiudad))
		{
			MessageBox::Show("El país no existe o la ciudad ya existe.");
			return;
		}
		if (sistema->Ciudades.Insertar(codPais, codCiudad, nombreCiudad))
		{
			MessageBox::Show("Ciudad insertada correctamente.");
			CargarTablaCiudades();
			TxtCodPais->Clear();
			TxtCodCiudad->Clear();
			TxtNombreCiudad->Clear();
		}
		else
		{
			MessageBox::Show("Error al insertar la ciudad.");
		}
	}
private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	int codPais, codCiudad;
	if (!Int32::TryParse(TxtCodPais->Text, codPais))
	{
		MessageBox::Show("Ingrese un código de país válido.");
		return;
	}
	if (!Int32::TryParse(TxtCodCiudad->Text, codCiudad))
	{
		MessageBox::Show("Ingrese un código de ciudad válido.");
		return;
	}
	NodoCiudad* encontrado = sistema->Ciudades.ObtenerCiudad(codPais, codCiudad);
	if (encontrado == nullptr)
	{
		MessageBox::Show("La ciudad no existe.");
		TxtNombreCiudad->Clear();
		return;
	}
	else if (!sistema->Paises.Existe(codPais))
	{
		MessageBox::Show("El país no existe.");
		TxtNombreCiudad->Clear();
		return;
	}
	else
	{
		string nombreCiudad = encontrado->Nombre;
		System::String^ nombreCiudadManaged = gcnew System::String(nombreCiudad.c_str());
		MessageBox::Show("Ciudad encontrada:\nCódigo de país: " + codPais + "\nCódigo de ciudad: " + codCiudad + "\nNombre: " + nombreCiudadManaged);
	}
}
private: System::Void BtnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int codPais, codCiudad;
	if (!Int32::TryParse(TxtCodPais->Text, codPais))
	{
		MessageBox::Show("Ingrese un código de país válido.");
		return;
	}

	if (!Int32::TryParse(TxtCodCiudad->Text, codCiudad))
	{
		MessageBox::Show("Ingrese un código de ciudad válido.");
		return;
	}
	
	string nombreCiudad;
	for (int i = 0; i < TxtNombreCiudad->Text->Length; i++)
	{
		nombreCiudad += (char)TxtNombreCiudad->Text[i];
	}
	if (nombreCiudad.empty())
	{
		MessageBox::Show("Ingrese un nombre de ciudad válido.");
		return;
	}
	if (sistema->Ciudades.Modificar(codPais, codCiudad, nombreCiudad))
	{
		MessageBox::Show("Ciudad modificada correctamente.");
		CargarTablaCiudades();
		TxtCodPais->Clear();
		TxtCodCiudad->Clear();
		TxtNombreCiudad->Clear();
	}
	else
	{
		MessageBox::Show("Error al modificar la ciudad. Asegúrese de que el país y la ciudad existan.");
	}
}
private: System::Void BtnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int codPais, codCiudad;
	if (!Int32::TryParse(TxtCodPais->Text, codPais))
	{
		MessageBox::Show("Ingrese un código de país válido.");
		return;
	}
	if (!Int32::TryParse(TxtCodCiudad->Text, codCiudad))
	{
		MessageBox::Show("Ingrese un código de ciudad válido.");
		return;
	}
	if (sistema->Ciudades.Eliminar(codPais, codCiudad))
	{
		MessageBox::Show("Ciudad eliminada correctamente.");
		CargarTablaCiudades();
		TxtCodPais->Clear();
		TxtCodCiudad->Clear();
		TxtNombreCiudad->Clear();
	}
	else
	{
		MessageBox::Show("Error al eliminar la ciudad. Asegúrese de que el país y la ciudad existan.");
	}
}
};
}

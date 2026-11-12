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
	/// Summary for FormTratamiento
	/// </summary>
	public ref class FormTratamiento : public System::Windows::Forms::Form
	{
	private:
		SistemaHospitalario* sistema;

		void CargarTablaTratamientos()
		{
			dgvTratamientos->Rows->Clear();

			int cantidad = 0;
			NodoTratamiento* lista[100];
			sistema->Tratamientos.ObtenerTodos(lista, cantidad);

			for (int i = 0; i < cantidad; i++)
			{
				dgvTratamientos->Rows->Add(
					lista[i]->IdTratamiento,
					gcnew System::String(lista[i]->Nombre.c_str()),
					gcnew System::String(lista[i]->Descripcion.c_str()),
					lista[i]->Costo
				);
			}
		}
	public:
		FormTratamiento(SistemaHospitalario* sistemaCompartido)
		{
			InitializeComponent();
			sistema = sistemaCompartido;
			CargarTablaTratamientos();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormTratamiento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::DataGridView^ dgvTratamientos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::TextBox^ TxtNombre;
	private: System::Windows::Forms::TextBox^ TxtID;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BtnEliminar;
	private: System::Windows::Forms::Button^ BtnModificar;
	private: System::Windows::Forms::Button^ BtnBuscar;
	private: System::Windows::Forms::Button^ BtnInsertar;
	private: System::Windows::Forms::TextBox^ TxtDescripcion;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TxtCosto;

	private: System::Windows::Forms::Label^ label6;

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
			this->dgvTratamientos = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxtNombre = (gcnew System::Windows::Forms::TextBox());
			this->TxtID = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnEliminar = (gcnew System::Windows::Forms::Button());
			this->BtnModificar = (gcnew System::Windows::Forms::Button());
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->BtnInsertar = (gcnew System::Windows::Forms::Button());
			this->TxtDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TxtCosto = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTratamientos))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(301, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Tratamientos registrados:";
			// 
			// dgvTratamientos
			// 
			this->dgvTratamientos->AllowUserToAddRows = false;
			this->dgvTratamientos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvTratamientos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTratamientos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dgvTratamientos->Location = System::Drawing::Point(304, 134);
			this->dgvTratamientos->MultiSelect = false;
			this->dgvTratamientos->Name = L"dgvTratamientos";
			this->dgvTratamientos->ReadOnly = true;
			this->dgvTratamientos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvTratamientos->Size = System::Drawing::Size(391, 195);
			this->dgvTratamientos->TabIndex = 20;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Descripcion";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Costo";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// TxtNombre
			// 
			this->TxtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtNombre->Location = System::Drawing::Point(12, 184);
			this->TxtNombre->Name = L"TxtNombre";
			this->TxtNombre->Size = System::Drawing::Size(224, 26);
			this->TxtNombre->TabIndex = 19;
			// 
			// TxtID
			// 
			this->TxtID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtID->Location = System::Drawing::Point(12, 134);
			this->TxtID->Name = L"TxtID";
			this->TxtID->Size = System::Drawing::Size(224, 26);
			this->TxtID->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Nombre del tratamiento";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"ID del Tratamiento";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(147, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(423, 31);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Mantenimiento de Tratamientos";
			// 
			// BtnEliminar
			// 
			this->BtnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEliminar->Location = System::Drawing::Point(379, 453);
			this->BtnEliminar->Name = L"BtnEliminar";
			this->BtnEliminar->Size = System::Drawing::Size(291, 78);
			this->BtnEliminar->TabIndex = 14;
			this->BtnEliminar->Text = L"Eliminar";
			this->BtnEliminar->UseVisualStyleBackColor = true;
			this->BtnEliminar->Click += gcnew System::EventHandler(this, &FormTratamiento::BtnEliminar_Click);
			// 
			// BtnModificar
			// 
			this->BtnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnModificar->Location = System::Drawing::Point(12, 453);
			this->BtnModificar->Name = L"BtnModificar";
			this->BtnModificar->Size = System::Drawing::Size(291, 78);
			this->BtnModificar->TabIndex = 13;
			this->BtnModificar->Text = L"Modificar";
			this->BtnModificar->UseVisualStyleBackColor = true;
			this->BtnModificar->Click += gcnew System::EventHandler(this, &FormTratamiento::BtnModificar_Click);
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnBuscar->Location = System::Drawing::Point(379, 351);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(291, 78);
			this->BtnBuscar->TabIndex = 12;
			this->BtnBuscar->Text = L"Buscar";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &FormTratamiento::BtnBuscar_Click);
			// 
			// BtnInsertar
			// 
			this->BtnInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInsertar->Location = System::Drawing::Point(12, 351);
			this->BtnInsertar->Name = L"BtnInsertar";
			this->BtnInsertar->Size = System::Drawing::Size(291, 78);
			this->BtnInsertar->TabIndex = 11;
			this->BtnInsertar->Text = L"Insertar";
			this->BtnInsertar->UseVisualStyleBackColor = true;
			this->BtnInsertar->Click += gcnew System::EventHandler(this, &FormTratamiento::BtnInsertar_Click);
			// 
			// TxtDescripcion
			// 
			this->TxtDescripcion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtDescripcion->Location = System::Drawing::Point(12, 238);
			this->TxtDescripcion->Name = L"TxtDescripcion";
			this->TxtDescripcion->Size = System::Drawing::Size(224, 26);
			this->TxtDescripcion->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 222);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Descripcion";
			// 
			// TxtCosto
			// 
			this->TxtCosto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtCosto->Location = System::Drawing::Point(12, 285);
			this->TxtCosto->Name = L"TxtCosto";
			this->TxtCosto->Size = System::Drawing::Size(224, 26);
			this->TxtCosto->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Costo";
			// 
			// FormTratamiento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(721, 610);
			this->Controls->Add(this->TxtCosto);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TxtDescripcion);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvTratamientos);
			this->Controls->Add(this->TxtNombre);
			this->Controls->Add(this->TxtID);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnEliminar);
			this->Controls->Add(this->BtnModificar);
			this->Controls->Add(this->BtnBuscar);
			this->Controls->Add(this->BtnInsertar);
			this->Name = L"FormTratamiento";
			this->Text = L"Mantenimiento de Tratamientos";
			this->Load += gcnew System::EventHandler(this, &FormTratamiento::FormTratamiento_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTratamientos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		int id;
		double costo;

		if (!Int32::TryParse(TxtID->Text, id))
		{
			MessageBox::Show("Ingrese un ID válido.");
			return;
		}

		if (!Double::TryParse(TxtCosto->Text, costo))
		{
			MessageBox::Show("Ingrese un costo válido.");
			return;
		}
		string nombre, descripcion;
		for (int i = 0; i < TxtNombre->Text->Length; i++)
			nombre += (char)TxtNombre->Text[i];

		for (int i = 0; i < TxtDescripcion->Text->Length; i++)
			descripcion += (char)TxtDescripcion->Text[i];

		if (nombre == "" || descripcion == "")
		{
			MessageBox::Show("Complete todos los campos.");
			return;
		}

		if (!sistema->Tratamientos.Insertar(
			id, nombre, descripcion, costo))
		{
			MessageBox::Show("El tratamiento ya existe.");
			return;
		}
		CargarTablaTratamientos();

		TxtID->Clear();
		TxtNombre->Clear();
		TxtDescripcion->Clear();
		TxtCosto->Clear();

		MessageBox::Show("Tratamiento insertado correctamente.");
	}
private: System::Void FormTratamiento_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {

	int id;
	if (!Int32::TryParse(TxtID->Text, id))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}

	NodoTratamiento* encontrado =
		sistema->Tratamientos.ObtenerTratamiento(id);

	if (encontrado == nullptr)
	{
		MessageBox::Show("El tratamiento no existe.");
		return;
	}

	TxtNombre->Text =
		gcnew System::String(encontrado->Nombre.c_str());

	TxtDescripcion->Text =
		gcnew System::String(encontrado->Descripcion.c_str());

	TxtCosto->Text =
		encontrado->Costo.ToString("F2");

	MessageBox::Show("Tratamiento encontrado correctamente.");
}
private: System::Void BtnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;
	double costo;

	if (!Int32::TryParse(TxtID->Text, id))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}

	if (!Double::TryParse(TxtCosto->Text, costo))
	{
		MessageBox::Show("Ingrese un costo válido.");
		return;
	}

	string nombre, descripcion;

	for (int i = 0; i < TxtNombre->Text->Length; i++)
		nombre += (char)TxtNombre->Text[i];

	for (int i = 0; i < TxtDescripcion->Text->Length; i++)
		descripcion += (char)TxtDescripcion->Text[i];

	if (nombre == "" || descripcion == "")
	{
		MessageBox::Show("Complete todos los campos.");
		return;
	}

	if (!sistema->Tratamientos.Modificar(
		id, nombre, descripcion, costo))
	{
		MessageBox::Show("El tratamiento no existe.");
		return;
	}

	CargarTablaTratamientos();

	TxtID->Clear();
	TxtNombre->Clear();
	TxtDescripcion->Clear();
	TxtCosto->Clear();

	MessageBox::Show("Tratamiento modificado correctamente.");
}
private: System::Void BtnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;

	if (!Int32::TryParse(TxtID->Text, id))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}

	if (!sistema->Tratamientos.Eliminar(id))
	{
		MessageBox::Show("El tratamiento no existe.");
		return;
	}

	CargarTablaTratamientos();

	TxtID->Clear();
	TxtNombre->Clear();
	TxtDescripcion->Clear();
	TxtCosto->Clear();

	MessageBox::Show("Tratamiento eliminado correctamente.");
}
};
}

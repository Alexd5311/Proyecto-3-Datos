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
	/// Summary for FormEspecialidades
	/// </summary>
	public ref class FormEspecialidades : public System::Windows::Forms::Form
	{
		SistemaHospitalario* sistema;

		void CargarTablaEspecialidades()
		{
			dgvEspecialidades->Rows->Clear();
			int cantidad = 0;
			NodoEspecialidad* lista[100];
			sistema->Especialidades.ObtenerTodos(lista, cantidad);

			for (int i = 0; i < cantidad; i++)
			{
				dgvEspecialidades->Rows->Add(
					lista[i]->IdEspecialidad,
					gcnew System::String(lista[i]->Nombre.c_str()),
					gcnew System::String(lista[i]->Descripcion.c_str())
				);
			}
		}

	public:
		FormEspecialidades(SistemaHospitalario* sistemaCompartido)
		{
			InitializeComponent();
			sistema = sistemaCompartido;
			CargarTablaEspecialidades();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormEspecialidades()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::TextBox^ TxtDescripcion;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dgvEspecialidades;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::TextBox^ TxtNombre;
	private: System::Windows::Forms::TextBox^ TxtID;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BtnEliminar;
	private: System::Windows::Forms::Button^ BtnModificar;
	private: System::Windows::Forms::Button^ BtnBuscar;
	private: System::Windows::Forms::Button^ BtnInsertar;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TxtDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvEspecialidades = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxtNombre = (gcnew System::Windows::Forms::TextBox());
			this->TxtID = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnEliminar = (gcnew System::Windows::Forms::Button());
			this->BtnModificar = (gcnew System::Windows::Forms::Button());
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->BtnInsertar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEspecialidades))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(57, 282);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Descripción breve";
			// 
			// TxtDescripcion
			// 
			this->TxtDescripcion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtDescripcion->Location = System::Drawing::Point(60, 309);
			this->TxtDescripcion->Name = L"TxtDescripcion";
			this->TxtDescripcion->Size = System::Drawing::Size(224, 26);
			this->TxtDescripcion->TabIndex = 35;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(350, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Especialidades";
			// 
			// dgvEspecialidades
			// 
			this->dgvEspecialidades->AllowUserToAddRows = false;
			this->dgvEspecialidades->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvEspecialidades->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEspecialidades->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dgvEspecialidades->Location = System::Drawing::Point(353, 85);
			this->dgvEspecialidades->MultiSelect = false;
			this->dgvEspecialidades->Name = L"dgvEspecialidades";
			this->dgvEspecialidades->ReadOnly = true;
			this->dgvEspecialidades->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvEspecialidades->Size = System::Drawing::Size(420, 289);
			this->dgvEspecialidades->TabIndex = 33;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
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
			// TxtNombre
			// 
			this->TxtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtNombre->Location = System::Drawing::Point(61, 221);
			this->TxtNombre->Name = L"TxtNombre";
			this->TxtNombre->Size = System::Drawing::Size(224, 26);
			this->TxtNombre->TabIndex = 32;
			// 
			// TxtID
			// 
			this->TxtID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtID->Location = System::Drawing::Point(61, 137);
			this->TxtID->Name = L"TxtID";
			this->TxtID->Size = System::Drawing::Size(224, 26);
			this->TxtID->TabIndex = 31;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Nombre de la especialidad";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Codigo de la especialidad";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(184, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(449, 31);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Mantenimiento de Especialidades";
			// 
			// BtnEliminar
			// 
			this->BtnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEliminar->Location = System::Drawing::Point(427, 505);
			this->BtnEliminar->Name = L"BtnEliminar";
			this->BtnEliminar->Size = System::Drawing::Size(291, 78);
			this->BtnEliminar->TabIndex = 27;
			this->BtnEliminar->Text = L"Eliminar";
			this->BtnEliminar->UseVisualStyleBackColor = true;
			this->BtnEliminar->Click += gcnew System::EventHandler(this, &FormEspecialidades::BtnEliminar_Click);
			// 
			// BtnModificar
			// 
			this->BtnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnModificar->Location = System::Drawing::Point(60, 505);
			this->BtnModificar->Name = L"BtnModificar";
			this->BtnModificar->Size = System::Drawing::Size(291, 78);
			this->BtnModificar->TabIndex = 26;
			this->BtnModificar->Text = L"Modificar";
			this->BtnModificar->UseVisualStyleBackColor = true;
			this->BtnModificar->Click += gcnew System::EventHandler(this, &FormEspecialidades::BtnModificar_Click);
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnBuscar->Location = System::Drawing::Point(427, 403);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(291, 78);
			this->BtnBuscar->TabIndex = 25;
			this->BtnBuscar->Text = L"Buscar";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &FormEspecialidades::BtnBuscar_Click);
			// 
			// BtnInsertar
			// 
			this->BtnInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInsertar->Location = System::Drawing::Point(60, 403);
			this->BtnInsertar->Name = L"BtnInsertar";
			this->BtnInsertar->Size = System::Drawing::Size(291, 78);
			this->BtnInsertar->TabIndex = 24;
			this->BtnInsertar->Text = L"Insertar";
			this->BtnInsertar->UseVisualStyleBackColor = true;
			this->BtnInsertar->Click += gcnew System::EventHandler(this, &FormEspecialidades::BtnInsertar_Click);
			// 
			// FormEspecialidades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(801, 610);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TxtDescripcion);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvEspecialidades);
			this->Controls->Add(this->TxtNombre);
			this->Controls->Add(this->TxtID);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnEliminar);
			this->Controls->Add(this->BtnModificar);
			this->Controls->Add(this->BtnBuscar);
			this->Controls->Add(this->BtnInsertar);
			this->Name = L"FormEspecialidades";
			this->Text = L"Mantenimiento de Especialidades";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvEspecialidades))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		int id;
		if (!Int32::TryParse(TxtID->Text, id))
		{
			MessageBox::Show("Ingrese un ID válido.");
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

		if (!sistema->Especialidades.Insertar(id, nombre, descripcion))
		{
			MessageBox::Show("La especialidad ya existe.");
			return;
		}
		CargarTablaEspecialidades();
		TxtID->Clear();
		TxtNombre->Clear();
		TxtDescripcion->Clear();
		MessageBox::Show("Especialidad insertada correctamente.");
	}
private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;
	if (!Int32::TryParse(TxtID->Text, id))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}

	NodoEspecialidad* especialidad =
		sistema->Especialidades.ObtenerEspecialidad(id);

	if (especialidad == nullptr)
	{
		MessageBox::Show("La especialidad no existe.");
		return;
	}
	System::String^ datos =
		"Código: " + especialidad->IdEspecialidad +
		"\nNombre: " +
		gcnew System::String(especialidad->Nombre.c_str()) +
		"\nDescripción: " +
		gcnew System::String(especialidad->Descripcion.c_str());

	MessageBox::Show(datos, "Especialidad encontrada");
}

private: System::Void BtnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;
	if (!Int32::TryParse(TxtID->Text, id))
	{
		MessageBox::Show("Ingrese un ID válido.");
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
	if (!sistema->Especialidades.Modificar(id, nombre, descripcion))
	{
		MessageBox::Show("La especialidad no existe.");
		return;
	}
	CargarTablaEspecialidades();
	TxtID->Clear();
	TxtNombre->Clear();
	TxtDescripcion->Clear();
	MessageBox::Show("Especialidad modificada correctamente.");
}
private: System::Void BtnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;
	if (!Int32::TryParse(TxtID->Text, id))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}
	if (!sistema->Especialidades.Eliminar(id))
	{
		MessageBox::Show("La especialidad no existe.");
		return;
	}
	CargarTablaEspecialidades();
	TxtID->Clear();
	TxtNombre->Clear();
	TxtDescripcion->Clear();
	MessageBox::Show("Especialidad eliminada correctamente.");
}
};
}

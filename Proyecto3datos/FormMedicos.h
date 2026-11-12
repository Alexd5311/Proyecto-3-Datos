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
	/// Summary for FormMedicos
	/// </summary>
	public ref class FormMedicos : public System::Windows::Forms::Form
	{
	private:
		SistemaHospitalario* sistema;

		void CargarTablaMedicos()
		{
			dgvMedicos->Rows->Clear();

			vector<RegistroMedico> registros =
				sistema->Medicos.ObtenerTodos();

			for (int i = 0; i < registros.size(); i++)
			{
				NodoEspecialidad* especialidad =
					sistema->Especialidades.ObtenerEspecialidad(
						registros[i].IdEspecialidad
					);
				string nombreEspecialidad = "Sin especialidad";
				if (especialidad != nullptr)
					nombreEspecialidad = especialidad->Nombre;
				dgvMedicos->Rows->Add(
					registros[i].IdMedico,
					gcnew System::String(registros[i].Nombre.c_str()),
					gcnew System::String(registros[i].Telefono.c_str()),
					gcnew System::String(registros[i].Correo.c_str()),
					gcnew System::String(nombreEspecialidad.c_str())
				);
			}
		}
	public:
		FormMedicos(SistemaHospitalario* sistemaCompartido)
		{
			InitializeComponent();
			sistema = sistemaCompartido;
			CargarTablaMedicos();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormMedicos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TxtTelefono;
	protected:

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dgvMedicos;




	private: System::Windows::Forms::TextBox^ TxtNombre;

	private: System::Windows::Forms::TextBox^ TxtIDMed;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BtnEliminar;
	private: System::Windows::Forms::Button^ BtnModificar;
	private: System::Windows::Forms::Button^ BtnBuscar;
	private: System::Windows::Forms::Button^ BtnInsertar;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TxtCorreo;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TxtIDEspecialidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;


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
			this->TxtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvMedicos = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxtNombre = (gcnew System::Windows::Forms::TextBox());
			this->TxtIDMed = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnEliminar = (gcnew System::Windows::Forms::Button());
			this->BtnModificar = (gcnew System::Windows::Forms::Button());
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->BtnInsertar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TxtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TxtIDEspecialidad = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMedicos))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 221);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Telefono";
			// 
			// TxtTelefono
			// 
			this->TxtTelefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtTelefono->Location = System::Drawing::Point(60, 246);
			this->TxtTelefono->Name = L"TxtTelefono";
			this->TxtTelefono->Size = System::Drawing::Size(224, 26);
			this->TxtTelefono->TabIndex = 35;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(314, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 13);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Medicos registrados";
			// 
			// dgvMedicos
			// 
			this->dgvMedicos->AllowUserToAddRows = false;
			this->dgvMedicos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvMedicos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMedicos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5
			});
			this->dgvMedicos->Location = System::Drawing::Point(317, 125);
			this->dgvMedicos->MultiSelect = false;
			this->dgvMedicos->Name = L"dgvMedicos";
			this->dgvMedicos->ReadOnly = true;
			this->dgvMedicos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvMedicos->Size = System::Drawing::Size(477, 289);
			this->dgvMedicos->TabIndex = 33;
			this->dgvMedicos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormMedicos::dgvCiudades_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID Medico";
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
			this->Column3->HeaderText = L"Telefono";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Correo";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Especialidad";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// TxtNombre
			// 
			this->TxtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtNombre->Location = System::Drawing::Point(61, 182);
			this->TxtNombre->Name = L"TxtNombre";
			this->TxtNombre->Size = System::Drawing::Size(224, 26);
			this->TxtNombre->TabIndex = 32;
			// 
			// TxtIDMed
			// 
			this->TxtIDMed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtIDMed->Location = System::Drawing::Point(62, 128);
			this->TxtIDMed->Name = L"TxtIDMed";
			this->TxtIDMed->Size = System::Drawing::Size(224, 26);
			this->TxtIDMed->TabIndex = 31;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 13);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Nombre del medico";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 29;
			this->label2->Text = L"ID del Medico";
			this->label2->Click += gcnew System::EventHandler(this, &FormMedicos::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(272, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(360, 31);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Mantenimiento de Medicos";
			// 
			// BtnEliminar
			// 
			this->BtnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEliminar->Location = System::Drawing::Point(471, 557);
			this->BtnEliminar->Name = L"BtnEliminar";
			this->BtnEliminar->Size = System::Drawing::Size(291, 78);
			this->BtnEliminar->TabIndex = 27;
			this->BtnEliminar->Text = L"Eliminar";
			this->BtnEliminar->UseVisualStyleBackColor = true;
			this->BtnEliminar->Click += gcnew System::EventHandler(this, &FormMedicos::BtnEliminar_Click);
			// 
			// BtnModificar
			// 
			this->BtnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnModificar->Location = System::Drawing::Point(63, 557);
			this->BtnModificar->Name = L"BtnModificar";
			this->BtnModificar->Size = System::Drawing::Size(291, 78);
			this->BtnModificar->TabIndex = 26;
			this->BtnModificar->Text = L"Modificar";
			this->BtnModificar->UseVisualStyleBackColor = true;
			this->BtnModificar->Click += gcnew System::EventHandler(this, &FormMedicos::BtnModificar_Click);
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnBuscar->Location = System::Drawing::Point(471, 455);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(291, 78);
			this->BtnBuscar->TabIndex = 25;
			this->BtnBuscar->Text = L"Buscar";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &FormMedicos::BtnBuscar_Click);
			// 
			// BtnInsertar
			// 
			this->BtnInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInsertar->Location = System::Drawing::Point(63, 455);
			this->BtnInsertar->Name = L"BtnInsertar";
			this->BtnInsertar->Size = System::Drawing::Size(291, 78);
			this->BtnInsertar->TabIndex = 24;
			this->BtnInsertar->Text = L"Insertar";
			this->BtnInsertar->UseVisualStyleBackColor = true;
			this->BtnInsertar->Click += gcnew System::EventHandler(this, &FormMedicos::BtnInsertar_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(60, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Correo";
			// 
			// TxtCorreo
			// 
			this->TxtCorreo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtCorreo->Location = System::Drawing::Point(63, 302);
			this->TxtCorreo->Name = L"TxtCorreo";
			this->TxtCorreo->Size = System::Drawing::Size(224, 26);
			this->TxtCorreo->TabIndex = 37;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(60, 343);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 13);
			this->label7->TabIndex = 40;
			this->label7->Text = L"ID de especialidad";
			// 
			// TxtIDEspecialidad
			// 
			this->TxtIDEspecialidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtIDEspecialidad->Location = System::Drawing::Point(63, 359);
			this->TxtIDEspecialidad->Name = L"TxtIDEspecialidad";
			this->TxtIDEspecialidad->Size = System::Drawing::Size(224, 26);
			this->TxtIDEspecialidad->TabIndex = 39;
			// 
			// FormMedicos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(834, 690);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TxtIDEspecialidad);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TxtCorreo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TxtTelefono);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvMedicos);
			this->Controls->Add(this->TxtNombre);
			this->Controls->Add(this->TxtIDMed);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnEliminar);
			this->Controls->Add(this->BtnModificar);
			this->Controls->Add(this->BtnBuscar);
			this->Controls->Add(this->BtnInsertar);
			this->Name = L"FormMedicos";
			this->Text = L"FormMedicos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMedicos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dgvCiudades_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	private: System::Void BtnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		int IdMedico, IdEspecialidad;
		if (!Int32::TryParse(TxtIDMed->Text, IdMedico))
		{
			MessageBox::Show("El ID del medico debe ser un número entero.");
			return;
		}
		if (!Int32::TryParse(TxtIDEspecialidad->Text, IdEspecialidad))
		{
			MessageBox::Show("El ID de la especialidad debe ser un número entero.");
			return;
		}
		string nombre, telefono, correo;
		for (int i = 0; i < TxtNombre->Text->Length; i++)
		{
			nombre += (char)TxtNombre->Text[i];
		}
		for (int i = 0; i < TxtTelefono->Text->Length; i++)
		{
			telefono += (char)TxtTelefono->Text[i];
		}
		for (int i = 0; i < TxtCorreo->Text->Length; i++)
		{
			correo += (char)TxtCorreo->Text[i];
		}
		if (nombre.empty() || telefono.empty() || correo.empty())
		{
			MessageBox::Show("Todos los campos deben ser llenados.");
			return;
		}
		if (!sistema->Especialidades.Existe(IdEspecialidad) || sistema->Medicos.Existe(IdMedico))
		{
			MessageBox::Show("La especialidad no existe o el medico ya existe.");
			return;
		}
		if (sistema->Medicos.Insertar(IdMedico, nombre, telefono, correo, IdEspecialidad))
		{
			MessageBox::Show("Medico insertado correctamente.");
			CargarTablaMedicos();
			TxtIDMed->Clear();
			TxtNombre->Clear();
			TxtTelefono->Clear();
			TxtCorreo->Clear();
			TxtIDEspecialidad->Clear();
		}
		else
		{
			MessageBox::Show("Error al insertar el medico.");
		}
	}
private: System::Void BtnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int IdMedico, IdEspecialidad;
	if (!Int32::TryParse(TxtIDMed->Text, IdMedico))
	{
		MessageBox::Show("El ID del medico debe ser un número entero.");
		return;
	}
	if (!Int32::TryParse(TxtIDEspecialidad->Text, IdEspecialidad))
	{
		MessageBox::Show("El ID de la especialidad debe ser un número entero.");
		return;
	}
	string nombre, telefono, correo;

	for (int i = 0; i < TxtNombre->Text->Length; i++)
	{
		nombre += (char)TxtNombre->Text[i];
	}
	for (int i = 0; i < TxtTelefono->Text->Length; i++)
	{
		telefono += (char)TxtTelefono->Text[i];
	}
	for (int i = 0; i < TxtCorreo->Text->Length; i++)
	{
		correo += (char)TxtCorreo->Text[i];
	}
	if (nombre.empty() || telefono.empty() || correo.empty())
	{
		MessageBox::Show("Todos los campos deben ser llenados.");
		return;
	}
	if (!sistema->Especialidades.Existe(IdEspecialidad) || !sistema->Medicos.Existe(IdMedico))
	{
		MessageBox::Show("La especialidad o el medico no existen.");
		return;
	}
	if (sistema->Medicos.Modificar(IdMedico, nombre, telefono, correo, IdEspecialidad))
	{
		MessageBox::Show("Medico modificado correctamente.");
		CargarTablaMedicos();
		TxtIDMed->Clear();
		TxtNombre->Clear();
		TxtTelefono->Clear();
		TxtCorreo->Clear();
		TxtIDEspecialidad->Clear();
	}
	else
	{
		MessageBox::Show("Error al modificar el medico.");
	}
}
private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	int IdMedico;
	if (!Int32::TryParse(TxtIDMed->Text, IdMedico))
	{
		MessageBox::Show("El ID del medico debe ser un número entero.");
		return;
	}
	RegistroMedico* encontrado = sistema->Medicos.ObtenerMedico(IdMedico);
	if (encontrado == nullptr)
	{
		MessageBox::Show("El medico no existe.");
		TxtNombre->Clear();
		TxtTelefono->Clear();
		TxtCorreo->Clear();
		TxtIDEspecialidad->Clear();
		return;
	}
	else
	{
		string nombre = encontrado->Nombre;
		string telefono = encontrado->Telefono;
		string correo = encontrado->Correo;
		int idEspecialidad = encontrado->IdEspecialidad;
		System::String^ nombreManaged = gcnew System::String(nombre.c_str());
		System::String^ telefonoManaged = gcnew System::String(telefono.c_str());
		System::String^ correoManaged = gcnew System::String(correo.c_str());
		TxtNombre->Text = nombreManaged;
		TxtTelefono->Text = telefonoManaged;
		TxtCorreo->Text = correoManaged;
		TxtIDEspecialidad->Text = idEspecialidad.ToString();
	}
}
private: System::Void BtnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int IdMedico;
	if (!Int32::TryParse(TxtIDMed->Text, IdMedico))
	{
		MessageBox::Show("El ID del medico debe ser un número entero.");
		return;
	}
	if (!sistema->Medicos.Existe(IdMedico))
	{
		MessageBox::Show("El medico no existe.");
		return;
	}
	if (sistema->Medicos.Eliminar(IdMedico))
	{
		MessageBox::Show("Medico eliminado correctamente.");
		CargarTablaMedicos();
		TxtIDMed->Clear();
		TxtNombre->Clear();
		TxtTelefono->Clear();
		TxtCorreo->Clear();
		TxtIDEspecialidad->Clear();
	}
	else
	{
		MessageBox::Show("Error al eliminar el medico.");
	}
}
};
}

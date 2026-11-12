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
	/// Summary for FormPacientes
	/// </summary>
	public ref class FormPacientes : public System::Windows::Forms::Form
	{
	private:
		SistemaHospitalario* sistema;

		void CargarTablaPacientes()
		{
			dgvPacientes->Rows->Clear();
			vector<RegistroPaciente> registros =
				sistema->Pacientes.ObtenerTodos();

			for (int i = 0; i < registros.size(); i++)
			{
				dgvPacientes->Rows->Add(
					registros[i].IdPaciente,
					gcnew System::String(registros[i].Nombre.c_str()),
					gcnew System::String(registros[i].FechaNacimiento.c_str()),
					gcnew System::String(registros[i].Telefono.c_str()),
					registros[i].CodPais,
					registros[i].CodCiudad,
					gcnew System::String(registros[i].Correo.c_str())
				);
			}
		}
	public:
		FormPacientes(SistemaHospitalario* sistemaCompartido)
		{
			InitializeComponent();
			sistema = sistemaCompartido;
			CargarTablaPacientes();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormPacientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label7;
	protected:
	private: System::Windows::Forms::TextBox^ TxtFecha;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TxtCodPais;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TxtTelefono;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dgvPacientes;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::TextBox^ TxtNombre;
	private: System::Windows::Forms::TextBox^ TxtID;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BtnEliminar;
	private: System::Windows::Forms::Button^ BtnModificar;
	private: System::Windows::Forms::Button^ BtnBuscar;
	private: System::Windows::Forms::Button^ BtnInsertar;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ TxtCorreo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ TxtCodCiudad;

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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TxtFecha = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TxtCodPais = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TxtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvPacientes = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxtNombre = (gcnew System::Windows::Forms::TextBox());
			this->TxtID = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnEliminar = (gcnew System::Windows::Forms::Button());
			this->BtnModificar = (gcnew System::Windows::Forms::Button());
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->BtnInsertar = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TxtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TxtCodCiudad = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPacientes))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(40, 216);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(170, 13);
			this->label7->TabIndex = 57;
			this->label7->Text = L"Fecha Nacimiento (AAAA-MM-DD)";
			// 
			// TxtFecha
			// 
			this->TxtFecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtFecha->Location = System::Drawing::Point(45, 232);
			this->TxtFecha->Name = L"TxtFecha";
			this->TxtFecha->Size = System::Drawing::Size(224, 26);
			this->TxtFecha->TabIndex = 56;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(42, 326);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 55;
			this->label6->Text = L"CodPais";
			// 
			// TxtCodPais
			// 
			this->TxtCodPais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtCodPais->Location = System::Drawing::Point(45, 342);
			this->TxtCodPais->Name = L"TxtCodPais";
			this->TxtCodPais->Size = System::Drawing::Size(224, 26);
			this->TxtCodPais->TabIndex = 54;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 270);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 53;
			this->label5->Text = L"Telefono";
			// 
			// TxtTelefono
			// 
			this->TxtTelefono->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtTelefono->Location = System::Drawing::Point(45, 286);
			this->TxtTelefono->Name = L"TxtTelefono";
			this->TxtTelefono->Size = System::Drawing::Size(224, 26);
			this->TxtTelefono->TabIndex = 52;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(285, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 13);
			this->label4->TabIndex = 51;
			this->label4->Text = L"Pacientes registrados";
			// 
			// dgvPacientes
			// 
			this->dgvPacientes->AllowUserToAddRows = false;
			this->dgvPacientes->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvPacientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPacientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dgvPacientes->Location = System::Drawing::Point(288, 123);
			this->dgvPacientes->MultiSelect = false;
			this->dgvPacientes->Name = L"dgvPacientes";
			this->dgvPacientes->ReadOnly = true;
			this->dgvPacientes->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvPacientes->Size = System::Drawing::Size(599, 345);
			this->dgvPacientes->TabIndex = 50;
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
			this->Column3->HeaderText = L"Fecha de Nacimiento";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Telefono";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Codigo de pais";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Codigo de Ciudad";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Correo";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// TxtNombre
			// 
			this->TxtNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtNombre->Location = System::Drawing::Point(43, 180);
			this->TxtNombre->Name = L"TxtNombre";
			this->TxtNombre->Size = System::Drawing::Size(224, 26);
			this->TxtNombre->TabIndex = 49;
			// 
			// TxtID
			// 
			this->TxtID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtID->Location = System::Drawing::Point(44, 126);
			this->TxtID->Name = L"TxtID";
			this->TxtID->Size = System::Drawing::Size(224, 26);
			this->TxtID->TabIndex = 48;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 46;
			this->label2->Text = L"ID del Paciente";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(235, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 31);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Mantenimiento de Pacientes";
			// 
			// BtnEliminar
			// 
			this->BtnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEliminar->Location = System::Drawing::Point(476, 596);
			this->BtnEliminar->Name = L"BtnEliminar";
			this->BtnEliminar->Size = System::Drawing::Size(369, 78);
			this->BtnEliminar->TabIndex = 44;
			this->BtnEliminar->Text = L"Eliminar";
			this->BtnEliminar->UseVisualStyleBackColor = true;
			this->BtnEliminar->Click += gcnew System::EventHandler(this, &FormPacientes::BtnEliminar_Click);
			// 
			// BtnModificar
			// 
			this->BtnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnModificar->Location = System::Drawing::Point(68, 596);
			this->BtnModificar->Name = L"BtnModificar";
			this->BtnModificar->Size = System::Drawing::Size(369, 78);
			this->BtnModificar->TabIndex = 43;
			this->BtnModificar->Text = L"Modificar";
			this->BtnModificar->UseVisualStyleBackColor = true;
			this->BtnModificar->Click += gcnew System::EventHandler(this, &FormPacientes::BtnModificar_Click);
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnBuscar->Location = System::Drawing::Point(476, 494);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(369, 78);
			this->BtnBuscar->TabIndex = 42;
			this->BtnBuscar->Text = L"Buscar";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &FormPacientes::BtnBuscar_Click);
			// 
			// BtnInsertar
			// 
			this->BtnInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInsertar->Location = System::Drawing::Point(68, 494);
			this->BtnInsertar->Name = L"BtnInsertar";
			this->BtnInsertar->Size = System::Drawing::Size(369, 78);
			this->BtnInsertar->TabIndex = 41;
			this->BtnInsertar->Text = L"Insertar";
			this->BtnInsertar->UseVisualStyleBackColor = true;
			this->BtnInsertar->Click += gcnew System::EventHandler(this, &FormPacientes::BtnInsertar_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(42, 426);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 13);
			this->label8->TabIndex = 61;
			this->label8->Text = L"Correo";
			// 
			// TxtCorreo
			// 
			this->TxtCorreo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtCorreo->Location = System::Drawing::Point(45, 442);
			this->TxtCorreo->Name = L"TxtCorreo";
			this->TxtCorreo->Size = System::Drawing::Size(224, 26);
			this->TxtCorreo->TabIndex = 60;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(40, 370);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 13);
			this->label9->TabIndex = 59;
			this->label9->Text = L"CodCiudad";
			// 
			// TxtCodCiudad
			// 
			this->TxtCodCiudad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtCodCiudad->Location = System::Drawing::Point(45, 386);
			this->TxtCodCiudad->Name = L"TxtCodCiudad";
			this->TxtCodCiudad->Size = System::Drawing::Size(224, 26);
			this->TxtCodCiudad->TabIndex = 58;
			// 
			// FormPacientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(899, 710);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TxtCorreo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->TxtCodCiudad);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TxtFecha);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TxtCodPais);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TxtTelefono);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvPacientes);
			this->Controls->Add(this->TxtNombre);
			this->Controls->Add(this->TxtID);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnEliminar);
			this->Controls->Add(this->BtnModificar);
			this->Controls->Add(this->BtnBuscar);
			this->Controls->Add(this->BtnInsertar);
			this->Name = L"FormPacientes";
			this->Text = L"Mantenimiento de Pacientes";
			this->Load += gcnew System::EventHandler(this, &FormPacientes::FormPacientes_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPacientes))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormPacientes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BtnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id, codPais, codCiudad;
	if (!Int32::TryParse(TxtID->Text, id))
	{
		MessageBox::Show("El ID debe ser un número entero.");
		return;
	}
	if (!Int32::TryParse(TxtCodPais->Text, codPais))
	{
		MessageBox::Show("El código de país debe ser un número entero.");
		return;
	}
	if (!Int32::TryParse(TxtCodCiudad->Text, codCiudad))
	{
		MessageBox::Show("El código de ciudad debe ser un número entero.");
		return;
	}
	string nombre, fechaNacimiento, telefono, correo;
	for (int i = 0; i < TxtNombre->Text->Length; i++)
	{
		nombre += (char)TxtNombre->Text[i];
	}
	for (int i = 0; i < TxtFecha->Text->Length; i++)
	{
		fechaNacimiento += (char)TxtFecha->Text[i];
	}
	for (int i = 0; i < TxtTelefono->Text->Length; i++)
	{
		telefono += (char)TxtTelefono->Text[i];
	}
	for (int i = 0; i < TxtCorreo->Text->Length; i++)
	{
		correo += (char)TxtCorreo->Text[i];
	}
	if (nombre.empty() || fechaNacimiento.empty() || telefono.empty() || correo.empty())
	{
		MessageBox::Show("Todos los campos deben ser llenados.");
		return;
	}
	if (sistema->Pacientes.Existe(id) || !sistema->Paises.Existe(codPais) || !sistema->Ciudades.Existe(codPais, codCiudad))
	{
		MessageBox::Show("El paciente ya existe o el país/ciudad no existe.");
		return;
	}

	if (sistema->Pacientes.Insertar(id, nombre, fechaNacimiento, telefono, codPais, codCiudad, correo))
	{
		MessageBox::Show("Paciente insertado correctamente.");
		CargarTablaPacientes();
		TxtID->Clear();
		TxtNombre->Clear();
		TxtFecha->Clear();
		TxtTelefono->Clear();
		TxtCodPais->Clear();
		TxtCodCiudad->Clear();
		TxtCorreo->Clear();
	}
	else
	{
		MessageBox::Show("Error al insertar el paciente.");
	}

}
private: System::Void BtnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id, codPais, codCiudad;

	if (!Int32::TryParse(TxtID->Text, id) ||
		!Int32::TryParse(TxtCodPais->Text, codPais) ||
		!Int32::TryParse(TxtCodCiudad->Text, codCiudad))
	{
		MessageBox::Show("Ingrese códigos válidos.");
		return;
	}

	string nombre, fecha, telefono, correo;

	for (int i = 0; i < TxtNombre->Text->Length; i++)
		nombre += (char)TxtNombre->Text[i];

	for (int i = 0; i < TxtFecha->Text->Length; i++)
		fecha += (char)TxtFecha->Text[i];

	for (int i = 0; i < TxtTelefono->Text->Length; i++)
		telefono += (char)TxtTelefono->Text[i];

	for (int i = 0; i < TxtCorreo->Text->Length; i++)
		correo += (char)TxtCorreo->Text[i];

	if (nombre == "" || fecha == "" ||
		telefono == "" || correo == "")
	{
		MessageBox::Show("Complete todos los campos.");
		return;
	}

	if (!sistema->Paises.Existe(codPais))
	{
		MessageBox::Show("El país no existe.");
		return;
	}

	if (!sistema->Ciudades.Existe(codPais, codCiudad))
	{
		MessageBox::Show("La ciudad no existe en ese país.");
		return;
	}

	if (!sistema->Pacientes.Modificar(
		id, nombre, fecha, telefono,
		codCiudad, codPais, correo))
	{
		MessageBox::Show("El paciente no existe.");
		return;
	}

	CargarTablaPacientes();

	TxtID->Clear();
	TxtNombre->Clear();
	TxtFecha->Clear();
	TxtTelefono->Clear();
	TxtCodPais->Clear();
	TxtCodCiudad->Clear();
	TxtCorreo->Clear();

	MessageBox::Show("Paciente modificado correctamente.");

}
private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;

	if (!Int32::TryParse(TxtID->Text, id))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}

	RegistroPaciente* encontrado =
		sistema->Pacientes.ObtenerPaciente(id);

	if (encontrado == nullptr)
	{
		MessageBox::Show("El paciente no existe.");
		return;
	}

	TxtNombre->Text = gcnew System::String(encontrado->Nombre.c_str());
	TxtFecha->Text = gcnew System::String(encontrado->FechaNacimiento.c_str());
	TxtTelefono->Text = gcnew System::String(encontrado->Telefono.c_str());
	TxtCodPais->Text = encontrado->CodPais.ToString();
	TxtCodCiudad->Text = encontrado->CodCiudad.ToString();
	TxtCorreo->Text = gcnew System::String(encontrado->Correo.c_str());

	MessageBox::Show("Paciente encontrado correctamente.");
}
private: System::Void BtnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;

	if (!Int32::TryParse(TxtID->Text, id))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}
	if (!sistema->Pacientes.Eliminar(id))
	{
		MessageBox::Show("El paciente no existe.");
		return;
	}

	CargarTablaPacientes();

	TxtID->Clear();
	TxtNombre->Clear();
	TxtFecha->Clear();
	TxtTelefono->Clear();
	TxtCodPais->Clear();
	TxtCodCiudad->Clear();
	TxtCorreo->Clear();

	MessageBox::Show("Paciente eliminado correctamente.");
	
}
};
}

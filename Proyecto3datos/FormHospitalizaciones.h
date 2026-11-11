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
	/// Summary for FormHospitalizaciones
	/// </summary>
	public ref class FormHospitalizaciones : public System::Windows::Forms::Form
	{
		SistemaHospitalario* sistema;
		void CargarTablaHospitalizaciones()
		{
			dgvHospitalizaciones->Rows->Clear();
			int cantidad = 0;
			NodoHospitalizacion* lista[100];
			sistema->Hospitalizaciones.ObtenerTodos(lista, cantidad);

			for (int i = 0; i < cantidad; i++)
			{
				dgvHospitalizaciones->Rows->Add(
					lista[i]->IdHospitalizacion,
					lista[i]->IdPaciente,
					lista[i]->IdHabitacion,
					lista[i]->IdMedico,
					gcnew System::String(lista[i]->FechaIngreso.c_str()),
					gcnew System::String(lista[i]->FechaSalida.c_str()),
					gcnew System::String(lista[i]->Motivo.c_str())
				);
			}
		}

	public:
		FormHospitalizaciones(SistemaHospitalario* sistemaCompartido)
		{
			InitializeComponent();
			sistema = sistemaCompartido;
			CargarTablaHospitalizaciones();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormHospitalizaciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label8;
	protected:
	private: System::Windows::Forms::TextBox^ TxtMotivo;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ TxtSalida;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TxtHabitacion;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TxtIngreso;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TxtMedico;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dgvHospitalizaciones;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::TextBox^ TxtPaciente;
	private: System::Windows::Forms::TextBox^ TxtHospitalizacion;
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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TxtMotivo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TxtSalida = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TxtHabitacion = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TxtIngreso = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TxtMedico = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvHospitalizaciones = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxtPaciente = (gcnew System::Windows::Forms::TextBox());
			this->TxtHospitalizacion = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnEliminar = (gcnew System::Windows::Forms::Button());
			this->BtnModificar = (gcnew System::Windows::Forms::Button());
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->BtnInsertar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHospitalizaciones))->BeginInit();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 394);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 82;
			this->label8->Text = L"Morivo";
			// 
			// TxtMotivo
			// 
			this->TxtMotivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtMotivo->Location = System::Drawing::Point(19, 410);
			this->TxtMotivo->Name = L"TxtMotivo";
			this->TxtMotivo->Size = System::Drawing::Size(224, 26);
			this->TxtMotivo->TabIndex = 81;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 338);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(159, 13);
			this->label9->TabIndex = 80;
			this->label9->Text = L"Fecha de salida (AAAA-MM-DD)";
			// 
			// TxtSalida
			// 
			this->TxtSalida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtSalida->Location = System::Drawing::Point(19, 354);
			this->TxtSalida->Name = L"TxtSalida";
			this->TxtSalida->Size = System::Drawing::Size(224, 26);
			this->TxtSalida->TabIndex = 79;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 184);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 13);
			this->label7->TabIndex = 78;
			this->label7->Text = L"ID de Habitacion";
			// 
			// TxtHabitacion
			// 
			this->TxtHabitacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtHabitacion->Location = System::Drawing::Point(19, 200);
			this->TxtHabitacion->Name = L"TxtHabitacion";
			this->TxtHabitacion->Size = System::Drawing::Size(224, 26);
			this->TxtHabitacion->TabIndex = 77;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 294);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(166, 13);
			this->label6->TabIndex = 76;
			this->label6->Text = L"Fecha de ingreso (AAAA-MM-DD)";
			// 
			// TxtIngreso
			// 
			this->TxtIngreso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtIngreso->Location = System::Drawing::Point(19, 310);
			this->TxtIngreso->Name = L"TxtIngreso";
			this->TxtIngreso->Size = System::Drawing::Size(224, 26);
			this->TxtIngreso->TabIndex = 75;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 74;
			this->label5->Text = L"ID de Medico";
			// 
			// TxtMedico
			// 
			this->TxtMedico->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtMedico->Location = System::Drawing::Point(19, 254);
			this->TxtMedico->Name = L"TxtMedico";
			this->TxtMedico->Size = System::Drawing::Size(224, 26);
			this->TxtMedico->TabIndex = 73;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(259, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 13);
			this->label4->TabIndex = 72;
			this->label4->Text = L"Hospitalizaciones registradas";
			// 
			// dgvHospitalizaciones
			// 
			this->dgvHospitalizaciones->AllowUserToAddRows = false;
			this->dgvHospitalizaciones->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvHospitalizaciones->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvHospitalizaciones->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dgvHospitalizaciones->Location = System::Drawing::Point(262, 91);
			this->dgvHospitalizaciones->MultiSelect = false;
			this->dgvHospitalizaciones->Name = L"dgvHospitalizaciones";
			this->dgvHospitalizaciones->ReadOnly = true;
			this->dgvHospitalizaciones->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvHospitalizaciones->Size = System::Drawing::Size(599, 345);
			this->dgvHospitalizaciones->TabIndex = 71;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID hospitalizacion";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ID paciente";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"ID Habitacion";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ID Medico";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha ingreso";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Fecha salida";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Motivo";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// TxtPaciente
			// 
			this->TxtPaciente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtPaciente->Location = System::Drawing::Point(17, 148);
			this->TxtPaciente->Name = L"TxtPaciente";
			this->TxtPaciente->Size = System::Drawing::Size(224, 26);
			this->TxtPaciente->TabIndex = 70;
			// 
			// TxtHospitalizacion
			// 
			this->TxtHospitalizacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtHospitalizacion->Location = System::Drawing::Point(18, 94);
			this->TxtHospitalizacion->Name = L"TxtHospitalizacion";
			this->TxtHospitalizacion->Size = System::Drawing::Size(224, 26);
			this->TxtHospitalizacion->TabIndex = 69;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 68;
			this->label3->Text = L"ID de Paciente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 67;
			this->label2->Text = L"ID de Hospitalizacion";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(185, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(482, 31);
			this->label1->TabIndex = 66;
			this->label1->Text = L"Mantenimiento de Hospitalizaciones";
			// 
			// BtnEliminar
			// 
			this->BtnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEliminar->Location = System::Drawing::Point(450, 564);
			this->BtnEliminar->Name = L"BtnEliminar";
			this->BtnEliminar->Size = System::Drawing::Size(369, 78);
			this->BtnEliminar->TabIndex = 65;
			this->BtnEliminar->Text = L"Eliminar";
			this->BtnEliminar->UseVisualStyleBackColor = true;
			this->BtnEliminar->Click += gcnew System::EventHandler(this, &FormHospitalizaciones::BtnEliminar_Click);
			// 
			// BtnModificar
			// 
			this->BtnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnModificar->Location = System::Drawing::Point(42, 564);
			this->BtnModificar->Name = L"BtnModificar";
			this->BtnModificar->Size = System::Drawing::Size(369, 78);
			this->BtnModificar->TabIndex = 64;
			this->BtnModificar->Text = L"Modificar";
			this->BtnModificar->UseVisualStyleBackColor = true;
			this->BtnModificar->Click += gcnew System::EventHandler(this, &FormHospitalizaciones::BtnModificar_Click);
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnBuscar->Location = System::Drawing::Point(450, 462);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(369, 78);
			this->BtnBuscar->TabIndex = 63;
			this->BtnBuscar->Text = L"Buscar";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &FormHospitalizaciones::BtnBuscar_Click);
			// 
			// BtnInsertar
			// 
			this->BtnInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInsertar->Location = System::Drawing::Point(42, 462);
			this->BtnInsertar->Name = L"BtnInsertar";
			this->BtnInsertar->Size = System::Drawing::Size(369, 78);
			this->BtnInsertar->TabIndex = 62;
			this->BtnInsertar->Text = L"Insertar";
			this->BtnInsertar->UseVisualStyleBackColor = true;
			this->BtnInsertar->Click += gcnew System::EventHandler(this, &FormHospitalizaciones::BtnInsertar_Click);
			// 
			// FormHospitalizaciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(874, 661);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TxtMotivo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->TxtSalida);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TxtHabitacion);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TxtIngreso);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TxtMedico);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvHospitalizaciones);
			this->Controls->Add(this->TxtPaciente);
			this->Controls->Add(this->TxtHospitalizacion);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnEliminar);
			this->Controls->Add(this->BtnModificar);
			this->Controls->Add(this->BtnBuscar);
			this->Controls->Add(this->BtnInsertar);
			this->Name = L"FormHospitalizaciones";
			this->Text = L"Mantenimiento de Hospitalizaciones";
			this->Load += gcnew System::EventHandler(this, &FormHospitalizaciones::FormHospitalizaciones_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHospitalizaciones))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormHospitalizaciones_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BtnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	int idHospitalizacion, idPaciente, idHabitacion, idMedico;

	if (!Int32::TryParse(TxtHospitalizacion->Text, idHospitalizacion) ||
		!Int32::TryParse(TxtPaciente->Text, idPaciente) ||
		!Int32::TryParse(TxtHabitacion->Text, idHabitacion) ||
		!Int32::TryParse(TxtMedico->Text, idMedico))
	{
		MessageBox::Show("Ingrese identificadores válidos.");
		return;
	}

	string fechaIngreso, fechaSalida, motivo;

	for (int i = 0; i < TxtIngreso->Text->Length; i++)
		fechaIngreso += (char)TxtIngreso->Text[i];

	for (int i = 0; i < TxtSalida->Text->Length; i++)
		fechaSalida += (char)TxtSalida->Text[i];

	for (int i = 0; i < TxtMotivo->Text->Length; i++)
		motivo += (char)TxtMotivo->Text[i];

	if (fechaIngreso == "" || fechaSalida == "" || motivo == "")
	{
		MessageBox::Show("Complete todos los campos.");
		return;
	}

	if (!sistema->Pacientes.Existe(idPaciente))
	{
		MessageBox::Show("El paciente no existe.");
		return;
	}

	if (!sistema->Habitaciones.Existe(idHabitacion))
	{
		MessageBox::Show("La habitación no existe.");
		return;
	}

	if (!sistema->Medicos.Existe(idMedico))
	{
		MessageBox::Show("El médico no existe.");
		return;
	}

	if (!sistema->Hospitalizaciones.InsertarHospitalizacion(
		idHospitalizacion, idPaciente, idHabitacion, idMedico,
		fechaIngreso, fechaSalida, motivo))
	{
		MessageBox::Show("La hospitalización ya existe.");
		return;
	}

	CargarTablaHospitalizaciones();

	TxtHospitalizacion->Clear();
	TxtPaciente->Clear();
	TxtHabitacion->Clear();
	TxtMedico->Clear();
	TxtIngreso->Clear();
	TxtSalida->Clear();
	TxtMotivo->Clear();

	MessageBox::Show("Hospitalización insertada correctamente.");
}
private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	int idHospitalizacion;

	if (!Int32::TryParse(TxtHospitalizacion->Text, idHospitalizacion))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}
	NodoHospitalizacion* encontrada =
		sistema->Hospitalizaciones.Buscar(idHospitalizacion);

	if (encontrada == NULL)
	{
		MessageBox::Show("La hospitalización no existe.");
		return;
	}
	TxtPaciente->Text =
		encontrada->IdPaciente.ToString();

	TxtHabitacion->Text =
		encontrada->IdHabitacion.ToString();

	TxtMedico->Text =
		encontrada->IdMedico.ToString();

	TxtIngreso->Text =
		gcnew System::String(encontrada->FechaIngreso.c_str());

	TxtSalida->Text =
		gcnew System::String(encontrada->FechaSalida.c_str());

	TxtMotivo->Text =
		gcnew System::String(encontrada->Motivo.c_str());

	MessageBox::Show("Hospitalización encontrada.");
}
private: System::Void BtnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int idHospitalizacion, idPaciente, idHabitacion, idMedico;
	if (!Int32::TryParse(TxtHospitalizacion->Text, idHospitalizacion) ||
		!Int32::TryParse(TxtPaciente->Text, idPaciente) ||
		!Int32::TryParse(TxtHabitacion->Text, idHabitacion) ||
		!Int32::TryParse(TxtMedico->Text, idMedico))
	{
		MessageBox::Show("Ingrese identificadores válidos.");
		return;
	}
	string fechaIngreso, fechaSalida, motivo;
	for (int i = 0; i < TxtIngreso->Text->Length; i++)
		fechaIngreso += (char)TxtIngreso->Text[i];
	for (int i = 0; i < TxtSalida->Text->Length; i++)
		fechaSalida += (char)TxtSalida->Text[i];
	for (int i = 0; i < TxtMotivo->Text->Length; i++)
		motivo += (char)TxtMotivo->Text[i];
	if (fechaIngreso == "" || fechaSalida == "" || motivo == "")
	{
		MessageBox::Show("Complete todos los campos.");
	}
	if (!sistema->Pacientes.Existe(idPaciente))
	{
		MessageBox::Show("El paciente no existe.");
		return;
	}
	if (!sistema->Habitaciones.Existe(idHabitacion))
	{
		MessageBox::Show("La habitación no existe.");
		return;
	}
	if (!sistema->Medicos.Existe(idMedico))
	{
		MessageBox::Show("El médico no existe.");
		return;
	}
	if (!sistema->Hospitalizaciones.Modificar(idHospitalizacion, idPaciente, idHabitacion, idMedico,fechaIngreso, fechaSalida, motivo))
	{
		MessageBox::Show("La hospitalización no existe.");
		return;
	}
	CargarTablaHospitalizaciones();
	TxtHospitalizacion->Clear();
	TxtPaciente->Clear();
	TxtHabitacion->Clear();
	TxtMedico->Clear();
	TxtIngreso->Clear();
	TxtSalida->Clear();
	TxtMotivo->Clear();
	MessageBox::Show("Hospitalización modificada correctamente.");
}
private: System::Void BtnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int idHospitalizacion;

	if (!Int32::TryParse(TxtHospitalizacion->Text, idHospitalizacion))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}

	if (!sistema->Hospitalizaciones.Eliminar(idHospitalizacion))
	{
		MessageBox::Show("La hospitalización no existe.");
		return;
	}

	CargarTablaHospitalizaciones();

	TxtHospitalizacion->Clear();
	TxtPaciente->Clear();
	TxtHabitacion->Clear();
	TxtMedico->Clear();
	TxtIngreso->Clear();
	TxtSalida->Clear();
	TxtMotivo->Clear();

	MessageBox::Show("Hospitalización eliminada correctamente.");
}
};
}

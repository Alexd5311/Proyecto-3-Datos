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
	/// Summary for FormCitas
	/// </summary>
	public ref class FormCitas : public System::Windows::Forms::Form
	{
	private:
		SistemaHospitalario* sistema;

		void CargarTablaCitas()
		{
			dgvCitas->Rows->Clear();
			int cantidad = 0;
			NodoCita* lista[100];
			sistema->Citas.ObtenerTodos(lista, cantidad);
			for (int i = 0; i < cantidad; i++)
			{
				dgvCitas->Rows->Add(
					lista[i]->IdCita,
					lista[i]->IdPaciente,
					lista[i]->IdMedico,
					lista[i]->IdEspecialidad,
					gcnew System::String(lista[i]->Fecha.c_str()),
					gcnew System::String(lista[i]->Hora.c_str()),
					gcnew System::String(lista[i]->Motivo.c_str()),
					gcnew System::String(lista[i]->Estado.c_str())
				);
			}
		}
	public:
		FormCitas(SistemaHospitalario* sistemaCompartido)
		{
			InitializeComponent();
			sistema = sistemaCompartido;
			CargarTablaCitas();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormCitas()
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
	private: System::Windows::Forms::TextBox^ TxtHora;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TxtIDMedico;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TxtFecha;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TxtIDEspecialidad;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dgvCitas;








	private: System::Windows::Forms::TextBox^ TxtIDPaciente;
	private: System::Windows::Forms::TextBox^ TxtIDCita;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BtnEliminar;
	private: System::Windows::Forms::Button^ BtnModificar;
	private: System::Windows::Forms::Button^ BtnBuscar;
	private: System::Windows::Forms::Button^ BtnInsertar;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ TxtEstado;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;

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
			this->TxtHora = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TxtIDMedico = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TxtFecha = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TxtIDEspecialidad = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvCitas = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxtIDPaciente = (gcnew System::Windows::Forms::TextBox());
			this->TxtIDCita = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnEliminar = (gcnew System::Windows::Forms::Button());
			this->BtnModificar = (gcnew System::Windows::Forms::Button());
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->BtnInsertar = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TxtEstado = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCitas))->BeginInit();
			this->SuspendLayout();
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(31, 373);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 82;
			this->label8->Text = L"Motivo";
			// 
			// TxtMotivo
			// 
			this->TxtMotivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtMotivo->Location = System::Drawing::Point(34, 389);
			this->TxtMotivo->Name = L"TxtMotivo";
			this->TxtMotivo->Size = System::Drawing::Size(224, 26);
			this->TxtMotivo->TabIndex = 81;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 317);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(66, 13);
			this->label9->TabIndex = 80;
			this->label9->Text = L"Hora (00:00)";
			// 
			// TxtHora
			// 
			this->TxtHora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtHora->Location = System::Drawing::Point(34, 333);
			this->TxtHora->Name = L"TxtHora";
			this->TxtHora->Size = System::Drawing::Size(224, 26);
			this->TxtHora->TabIndex = 79;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(29, 163);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 78;
			this->label7->Text = L"ID del medico";
			// 
			// TxtIDMedico
			// 
			this->TxtIDMedico->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtIDMedico->Location = System::Drawing::Point(34, 179);
			this->TxtIDMedico->Name = L"TxtIDMedico";
			this->TxtIDMedico->Size = System::Drawing::Size(224, 26);
			this->TxtIDMedico->TabIndex = 77;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 273);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 13);
			this->label6->TabIndex = 76;
			this->label6->Text = L"Fecha (AAAA-MM-DD)";
			// 
			// TxtFecha
			// 
			this->TxtFecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtFecha->Location = System::Drawing::Point(34, 289);
			this->TxtFecha->Name = L"TxtFecha";
			this->TxtFecha->Size = System::Drawing::Size(224, 26);
			this->TxtFecha->TabIndex = 75;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 217);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 13);
			this->label5->TabIndex = 74;
			this->label5->Text = L"ID especialidad";
			// 
			// TxtIDEspecialidad
			// 
			this->TxtIDEspecialidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtIDEspecialidad->Location = System::Drawing::Point(34, 233);
			this->TxtIDEspecialidad->Name = L"TxtIDEspecialidad";
			this->TxtIDEspecialidad->Size = System::Drawing::Size(224, 26);
			this->TxtIDEspecialidad->TabIndex = 73;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(274, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 13);
			this->label4->TabIndex = 72;
			this->label4->Text = L"Pacientes registrados";
			// 
			// dgvCitas
			// 
			this->dgvCitas->AllowUserToAddRows = false;
			this->dgvCitas->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvCitas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCitas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dgvCitas->Location = System::Drawing::Point(277, 73);
			this->dgvCitas->MultiSelect = false;
			this->dgvCitas->Name = L"dgvCitas";
			this->dgvCitas->ReadOnly = true;
			this->dgvCitas->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvCitas->Size = System::Drawing::Size(683, 397);
			this->dgvCitas->TabIndex = 71;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID cita";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"ID Paciente";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"ID Medico";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"ID Especialidad";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Hora";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Motivo";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Estado";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// TxtIDPaciente
			// 
			this->TxtIDPaciente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtIDPaciente->Location = System::Drawing::Point(32, 127);
			this->TxtIDPaciente->Name = L"TxtIDPaciente";
			this->TxtIDPaciente->Size = System::Drawing::Size(224, 26);
			this->TxtIDPaciente->TabIndex = 70;
			// 
			// TxtIDCita
			// 
			this->TxtIDCita->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtIDCita->Location = System::Drawing::Point(33, 73);
			this->TxtIDCita->Name = L"TxtIDCita";
			this->TxtIDCita->Size = System::Drawing::Size(224, 26);
			this->TxtIDCita->TabIndex = 69;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 13);
			this->label3->TabIndex = 68;
			this->label3->Text = L"ID del paciente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 67;
			this->label2->Text = L"ID de la cita";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(224, -23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 31);
			this->label1->TabIndex = 66;
			this->label1->Text = L"Mantenimiento de Pacientes";
			// 
			// BtnEliminar
			// 
			this->BtnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEliminar->Location = System::Drawing::Point(484, 608);
			this->BtnEliminar->Name = L"BtnEliminar";
			this->BtnEliminar->Size = System::Drawing::Size(388, 78);
			this->BtnEliminar->TabIndex = 65;
			this->BtnEliminar->Text = L"Eliminar";
			this->BtnEliminar->UseVisualStyleBackColor = true;
			this->BtnEliminar->Click += gcnew System::EventHandler(this, &FormCitas::BtnEliminar_Click);
			// 
			// BtnModificar
			// 
			this->BtnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnModificar->Location = System::Drawing::Point(76, 608);
			this->BtnModificar->Name = L"BtnModificar";
			this->BtnModificar->Size = System::Drawing::Size(388, 78);
			this->BtnModificar->TabIndex = 64;
			this->BtnModificar->Text = L"Modificar";
			this->BtnModificar->UseVisualStyleBackColor = true;
			this->BtnModificar->Click += gcnew System::EventHandler(this, &FormCitas::BtnModificar_Click);
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnBuscar->Location = System::Drawing::Point(484, 506);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(388, 78);
			this->BtnBuscar->TabIndex = 63;
			this->BtnBuscar->Text = L"Buscar";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &FormCitas::BtnBuscar_Click);
			// 
			// BtnInsertar
			// 
			this->BtnInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInsertar->Location = System::Drawing::Point(76, 506);
			this->BtnInsertar->Name = L"BtnInsertar";
			this->BtnInsertar->Size = System::Drawing::Size(388, 78);
			this->BtnInsertar->TabIndex = 62;
			this->BtnInsertar->Text = L"Insertar";
			this->BtnInsertar->UseVisualStyleBackColor = true;
			this->BtnInsertar->Click += gcnew System::EventHandler(this, &FormCitas::BtnInsertar_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 428);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(181, 13);
			this->label10->TabIndex = 84;
			this->label10->Text = L"Estado (0: pendiente.  1: confirmada)";
			// 
			// TxtEstado
			// 
			this->TxtEstado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtEstado->Location = System::Drawing::Point(32, 444);
			this->TxtEstado->Name = L"TxtEstado";
			this->TxtEstado->Size = System::Drawing::Size(224, 26);
			this->TxtEstado->TabIndex = 83;
			// 
			// FormCitas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(972, 720);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->TxtEstado);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->TxtMotivo);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->TxtHora);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TxtIDMedico);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TxtFecha);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TxtIDEspecialidad);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvCitas);
			this->Controls->Add(this->TxtIDPaciente);
			this->Controls->Add(this->TxtIDCita);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnEliminar);
			this->Controls->Add(this->BtnModificar);
			this->Controls->Add(this->BtnBuscar);
			this->Controls->Add(this->BtnInsertar);
			this->Name = L"FormCitas";
			this->Text = L"FormCitas";
			this->Load += gcnew System::EventHandler(this, &FormCitas::FormCitas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCitas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormCitas_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BtnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	int idCita, idPaciente, idMedico, idEspecialidad;

	if (!Int32::TryParse(TxtIDCita->Text, idCita) ||
		!Int32::TryParse(TxtIDPaciente->Text, idPaciente) ||
		!Int32::TryParse(TxtIDMedico->Text, idMedico) ||
		!Int32::TryParse(TxtIDEspecialidad->Text, idEspecialidad))
	{
		MessageBox::Show("Ingrese identificadores válidos.");
		return;
	}

	string fecha, hora, motivo, estado;

	for (int i = 0; i < TxtFecha->Text->Length; i++)
		fecha += (char)TxtFecha->Text[i];
	for (int i = 0; i < TxtHora->Text->Length; i++)
		hora += (char)TxtHora->Text[i];
	for (int i = 0; i < TxtMotivo->Text->Length; i++)
		motivo += (char)TxtMotivo->Text[i];
	for (int i = 0; i < TxtEstado->Text->Length; i++)
		estado += (char)TxtEstado->Text[i];
	if (fecha == "" || hora == "" || motivo == "")
	{
		MessageBox::Show("Complete todos los campos.");
		return;
	}

	if (!sistema->Pacientes.Existe(idPaciente))
	{
		MessageBox::Show("El paciente no existe.");
		return;
	}

	if (!sistema->Medicos.Existe(idMedico))
	{
		MessageBox::Show("El médico no existe.");
		return;
	}

	if (!sistema->Especialidades.Existe(idEspecialidad))
	{
		MessageBox::Show("La especialidad no existe.");
		return;
	}

	if (estado != "0" && estado != "1")
	{
		MessageBox::Show("Estado inválido. Utilice 0 o 1.");
		return;
	}

	if (!sistema->Citas.Insertar(
		idCita, idPaciente, idMedico, idEspecialidad,
		fecha, hora, motivo, estado))
	{
		MessageBox::Show("La cita ya existe.");
		return;
	}

	CargarTablaCitas();

	TxtIDCita->Clear();
	TxtIDPaciente->Clear();
	TxtIDMedico->Clear();
	TxtIDEspecialidad->Clear();
	TxtFecha->Clear();
	TxtHora->Clear();
	TxtMotivo->Clear();
	TxtEstado->Clear();

	MessageBox::Show("Cita insertada correctamente.");
}

private: System::Void BtnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int idCita, idPaciente, idMedico, idEspecialidad;

	if (!Int32::TryParse(TxtIDCita->Text, idCita) ||
		!Int32::TryParse(TxtIDPaciente->Text, idPaciente) ||
		!Int32::TryParse(TxtIDMedico->Text, idMedico) ||
		!Int32::TryParse(TxtIDEspecialidad->Text, idEspecialidad))
	{
		MessageBox::Show("Ingrese identificadores válidos.");
		return;
	}

	string fecha, hora, motivo, estado;

	for (int i = 0; i < TxtFecha->Text->Length; i++)
		fecha += (char)TxtFecha->Text[i];

	for (int i = 0; i < TxtHora->Text->Length; i++)
		hora += (char)TxtHora->Text[i];
	for (int i = 0; i < TxtMotivo->Text->Length; i++)
		motivo += (char)TxtMotivo->Text[i];
	for (int i = 0; i < TxtEstado->Text->Length; i++)
		estado += (char)TxtEstado->Text[i];
	if (fecha == "" || hora == "" || motivo == "")
	{
		MessageBox::Show("Complete todos los campos.");
		return;
	}

	if (!sistema->Pacientes.Existe(idPaciente) ||
		!sistema->Medicos.Existe(idMedico) ||
		!sistema->Especialidades.Existe(idEspecialidad))
	{
		MessageBox::Show("Verifique los identificadores relacionados.");
		return;
	}

	if (estado != "0" && estado != "1")
	{
		MessageBox::Show("Estado inválido. Utilice 0 o 1.");
		return;
	}

	if (!sistema->Citas.Modificar(
		idCita, idPaciente, idMedico, idEspecialidad,
		fecha, hora, motivo, estado))
	{
		MessageBox::Show("La cita no existe.");
		return;
	}

	CargarTablaCitas();

	TxtIDCita->Clear();
	TxtIDPaciente->Clear();
	TxtIDMedico->Clear();
	TxtIDEspecialidad->Clear();
	TxtFecha->Clear();
	TxtHora->Clear();
	TxtMotivo->Clear();
	TxtEstado->Clear();

	MessageBox::Show("Cita modificada correctamente.");
}

private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	int idCita;

	if (!Int32::TryParse(TxtIDCita->Text, idCita))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}

	NodoCita* encontrada =
		sistema->Citas.ObtenerCita(idCita);

	if (encontrada == nullptr)
	{
		MessageBox::Show("La cita no existe.");
		return;
	}

	TxtIDPaciente->Text =
		encontrada->IdPaciente.ToString();

	TxtIDMedico->Text =
		encontrada->IdMedico.ToString();

	TxtIDEspecialidad->Text =
		encontrada->IdEspecialidad.ToString();

	TxtFecha->Text =
		gcnew System::String(encontrada->Fecha.c_str());

	TxtHora->Text =
		gcnew System::String(encontrada->Hora.c_str());

	TxtMotivo->Text =
		gcnew System::String(encontrada->Motivo.c_str());

	TxtEstado->Text =
		gcnew System::String(encontrada->Estado.c_str());

	MessageBox::Show("Cita encontrada correctamente.");
}
private: System::Void BtnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int idCita;

	if (!Int32::TryParse(TxtIDCita->Text, idCita))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}

	if (!sistema->Citas.Eliminar(idCita))
	{
		MessageBox::Show("La cita no existe.");
		return;
	}

	CargarTablaCitas();

	TxtIDCita->Clear();
	TxtIDPaciente->Clear();
	TxtIDMedico->Clear();
	TxtIDEspecialidad->Clear();
	TxtFecha->Clear();
	TxtHora->Clear();
	TxtMotivo->Clear();
	TxtEstado->Clear();

	MessageBox::Show("Cita eliminada correctamente.");
}
};
}

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
	/// Summary for FormHabitaciones
	/// </summary>
	public ref class FormHabitaciones : public System::Windows::Forms::Form
	{
	private:
		SistemaHospitalario* sistema;
		void CargarTablaHabitaciones()
		{
			dgvHabitaciones->Rows->Clear();
			int cantidad = 0;
			NodoHabitacion* lista[100];
			sistema->Habitaciones.ObtenerTodos(lista, cantidad);

			for (int i = 0; i < cantidad; i++)
			{
				dgvHabitaciones->Rows->Add(
					lista[i]->IdHabitacion,
					lista[i]->Numero,
					lista[i]->Piso,
					lista[i]->Tipo,
					lista[i]->Estado
				);
			}
		}
	public:
		FormHabitaciones(SistemaHospitalario* sistemaCompartido)
		{
			InitializeComponent();
			sistema = sistemaCompartido;
			CargarTablaHabitaciones();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormHabitaciones()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ TxtPiso;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ TxtEstado;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ TxtTipo;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dgvHabitaciones;
	private: System::Windows::Forms::TextBox^ TxtNumHabitacion;









	private: System::Windows::Forms::TextBox^ TxtIDHabitacion;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BtnEliminar;
	private: System::Windows::Forms::Button^ BtnModificar;
	private: System::Windows::Forms::Button^ BtnBuscar;
	private: System::Windows::Forms::Button^ BtnInsertar;
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TxtPiso = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TxtEstado = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TxtTipo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dgvHabitaciones = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TxtNumHabitacion = (gcnew System::Windows::Forms::TextBox());
			this->TxtIDHabitacion = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnEliminar = (gcnew System::Windows::Forms::Button());
			this->BtnModificar = (gcnew System::Windows::Forms::Button());
			this->BtnBuscar = (gcnew System::Windows::Forms::Button());
			this->BtnInsertar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHabitaciones))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(27, 13);
			this->label7->TabIndex = 99;
			this->label7->Text = L"Piso";
			// 
			// TxtPiso
			// 
			this->TxtPiso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtPiso->Location = System::Drawing::Point(17, 197);
			this->TxtPiso->Name = L"TxtPiso";
			this->TxtPiso->Size = System::Drawing::Size(224, 26);
			this->TxtPiso->TabIndex = 98;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(172, 13);
			this->label6->TabIndex = 97;
			this->label6->Text = L"Estado (0: Disponible. 1: Ocupada)";
			// 
			// TxtEstado
			// 
			this->TxtEstado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtEstado->Location = System::Drawing::Point(17, 307);
			this->TxtEstado->Name = L"TxtEstado";
			this->TxtEstado->Size = System::Drawing::Size(224, 26);
			this->TxtEstado->TabIndex = 96;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 235);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 13);
			this->label5->TabIndex = 95;
			this->label5->Text = L"Tipo (1 individual. 2: compartida. 3: UCI)";
			// 
			// TxtTipo
			// 
			this->TxtTipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtTipo->Location = System::Drawing::Point(17, 251);
			this->TxtTipo->Name = L"TxtTipo";
			this->TxtTipo->Size = System::Drawing::Size(224, 26);
			this->TxtTipo->TabIndex = 94;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(257, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 13);
			this->label4->TabIndex = 93;
			this->label4->Text = L"Habitaciones registradas";
			// 
			// dgvHabitaciones
			// 
			this->dgvHabitaciones->AllowUserToAddRows = false;
			this->dgvHabitaciones->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvHabitaciones->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvHabitaciones->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dgvHabitaciones->Location = System::Drawing::Point(260, 88);
			this->dgvHabitaciones->MultiSelect = false;
			this->dgvHabitaciones->Name = L"dgvHabitaciones";
			this->dgvHabitaciones->ReadOnly = true;
			this->dgvHabitaciones->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvHabitaciones->Size = System::Drawing::Size(599, 345);
			this->dgvHabitaciones->TabIndex = 92;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID habitacion";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Numero de habitacion";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Piso";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// TxtNumHabitacion
			// 
			this->TxtNumHabitacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtNumHabitacion->Location = System::Drawing::Point(15, 145);
			this->TxtNumHabitacion->Name = L"TxtNumHabitacion";
			this->TxtNumHabitacion->Size = System::Drawing::Size(224, 26);
			this->TxtNumHabitacion->TabIndex = 91;
			// 
			// TxtIDHabitacion
			// 
			this->TxtIDHabitacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtIDHabitacion->Location = System::Drawing::Point(16, 91);
			this->TxtIDHabitacion->Name = L"TxtIDHabitacion";
			this->TxtIDHabitacion->Size = System::Drawing::Size(224, 26);
			this->TxtIDHabitacion->TabIndex = 90;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 13);
			this->label3->TabIndex = 89;
			this->label3->Text = L"Numero de habitacion";
			this->label3->Click += gcnew System::EventHandler(this, &FormHabitaciones::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 13);
			this->label2->TabIndex = 88;
			this->label2->Text = L"ID de Habitacion";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(223, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(422, 31);
			this->label1->TabIndex = 87;
			this->label1->Text = L"Mantenimiento de Habitaciones";
			// 
			// BtnEliminar
			// 
			this->BtnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEliminar->Location = System::Drawing::Point(448, 561);
			this->BtnEliminar->Name = L"BtnEliminar";
			this->BtnEliminar->Size = System::Drawing::Size(369, 78);
			this->BtnEliminar->TabIndex = 86;
			this->BtnEliminar->Text = L"Eliminar";
			this->BtnEliminar->UseVisualStyleBackColor = true;
			this->BtnEliminar->Click += gcnew System::EventHandler(this, &FormHabitaciones::BtnEliminar_Click);
			// 
			// BtnModificar
			// 
			this->BtnModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnModificar->Location = System::Drawing::Point(40, 561);
			this->BtnModificar->Name = L"BtnModificar";
			this->BtnModificar->Size = System::Drawing::Size(369, 78);
			this->BtnModificar->TabIndex = 85;
			this->BtnModificar->Text = L"Modificar";
			this->BtnModificar->UseVisualStyleBackColor = true;
			this->BtnModificar->Click += gcnew System::EventHandler(this, &FormHabitaciones::BtnModificar_Click);
			// 
			// BtnBuscar
			// 
			this->BtnBuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnBuscar->Location = System::Drawing::Point(448, 459);
			this->BtnBuscar->Name = L"BtnBuscar";
			this->BtnBuscar->Size = System::Drawing::Size(369, 78);
			this->BtnBuscar->TabIndex = 84;
			this->BtnBuscar->Text = L"Buscar";
			this->BtnBuscar->UseVisualStyleBackColor = true;
			this->BtnBuscar->Click += gcnew System::EventHandler(this, &FormHabitaciones::BtnBuscar_Click);
			// 
			// BtnInsertar
			// 
			this->BtnInsertar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnInsertar->Location = System::Drawing::Point(40, 459);
			this->BtnInsertar->Name = L"BtnInsertar";
			this->BtnInsertar->Size = System::Drawing::Size(369, 78);
			this->BtnInsertar->TabIndex = 83;
			this->BtnInsertar->Text = L"Insertar";
			this->BtnInsertar->UseVisualStyleBackColor = true;
			this->BtnInsertar->Click += gcnew System::EventHandler(this, &FormHabitaciones::BtnInsertar_Click);
			// 
			// FormHabitaciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(871, 650);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TxtPiso);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->TxtEstado);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TxtTipo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dgvHabitaciones);
			this->Controls->Add(this->TxtNumHabitacion);
			this->Controls->Add(this->TxtIDHabitacion);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnEliminar);
			this->Controls->Add(this->BtnModificar);
			this->Controls->Add(this->BtnBuscar);
			this->Controls->Add(this->BtnInsertar);
			this->Name = L"FormHabitaciones";
			this->Text = L"Mantenimiento de Habitaciones";
			this->Load += gcnew System::EventHandler(this, &FormHabitaciones::FormHabitaciones_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHabitaciones))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormHabitaciones_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BtnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id, numero, piso, tipo, estado;

	if (!Int32::TryParse(TxtIDHabitacion->Text, id) ||
		!Int32::TryParse(TxtNumHabitacion->Text, numero) ||
		!Int32::TryParse(TxtPiso->Text, piso) ||
		!Int32::TryParse(TxtTipo->Text, tipo) ||
		!Int32::TryParse(TxtEstado->Text, estado))
	{
		MessageBox::Show("Ingrese valores numéricos válidos.");
		return;
	}

	if (tipo < 1 || tipo > 3)
	{
		MessageBox::Show("El tipo debe estar entre 1 y 3.");
		return;
	}

	if (estado != 0 && estado != 1)
	{
		MessageBox::Show("El estado debe ser 0 o 1.");
		return;
	}

	if (!sistema->Habitaciones.Insertar(
		id, numero, piso, tipo, estado))
	{
		MessageBox::Show("La habitación ya existe.");
		return;
	}

	CargarTablaHabitaciones();

	TxtIDHabitacion->Clear();
	TxtNumHabitacion->Clear();
	TxtPiso->Clear();
	TxtTipo->Clear();
	TxtEstado->Clear();

	MessageBox::Show("Habitación insertada correctamente.");
}
private: System::Void BtnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id, numero, piso, tipo, estado;

	if (!Int32::TryParse(TxtIDHabitacion->Text, id) ||
		!Int32::TryParse(TxtNumHabitacion->Text, numero) ||
		!Int32::TryParse(TxtPiso->Text, piso) ||
		!Int32::TryParse(TxtTipo->Text, tipo) ||
		!Int32::TryParse(TxtEstado->Text, estado))
	{
		MessageBox::Show("Ingrese valores numéricos válidos.");
		return;
	}

	if (tipo < 1 || tipo > 3)
	{
		MessageBox::Show("El tipo debe estar entre 1 y 3.");
		return;
	}

	if (estado != 0 && estado != 1)
	{
		MessageBox::Show("El estado debe ser 0 o 1.");
		return;
	}

	if (!sistema->Habitaciones.Modificar(
		id, numero, piso, tipo, estado))
	{
		MessageBox::Show("La habitación no existe.");
		return;
	}

	CargarTablaHabitaciones();

	TxtIDHabitacion->Clear();
	TxtNumHabitacion->Clear();
	TxtPiso->Clear();
	TxtTipo->Clear();
	TxtEstado->Clear();

	MessageBox::Show("Habitación modificada correctamente.");
}
private: System::Void BtnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;

	if (!Int32::TryParse(TxtIDHabitacion->Text, id))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}
	NodoHabitacion* encontrada =
		sistema->Habitaciones.ObtenerHabitacion(id);

	if (encontrada == nullptr)
	{
		MessageBox::Show("La habitación no existe.");
		return;
	}

	TxtNumHabitacion->Text = encontrada->Numero.ToString();
	TxtPiso->Text = encontrada->Piso.ToString();
	TxtTipo->Text = encontrada->Tipo.ToString();
	TxtEstado->Text = encontrada->Estado.ToString();

	MessageBox::Show("Habitación encontrada correctamente.");
}
private: System::Void BtnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;

	if (!Int32::TryParse(TxtIDHabitacion->Text, id))
	{
		MessageBox::Show("Ingrese un ID válido.");
		return;
	}

	if (!sistema->Habitaciones.Eliminar(id))
	{
		MessageBox::Show("La habitación no existe.");
		return;
	}

	CargarTablaHabitaciones();

	TxtIDHabitacion->Clear();
	TxtNumHabitacion->Clear();
	TxtPiso->Clear();
	TxtTipo->Clear();
	TxtEstado->Clear();

	MessageBox::Show("Habitación eliminada correctamente.");
}
};
}

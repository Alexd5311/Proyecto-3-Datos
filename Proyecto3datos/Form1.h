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
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		SistemaHospitalario* sistema;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			sistema = new SistemaHospitalario();
			sistema->CargarDatos();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inserciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paisesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ medicosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pacientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ habitacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ hospitalizacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ diagnosticosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paisesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ medicosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ pacientesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ habitacionesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ hospitalizacionesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ diagnósticosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ búsquedasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ paisesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ciudadesToolStripMenuItem2;

	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ medicosToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ pacientesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ habitacionesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ hospitalizacionesToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientosToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ diagnósticosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel1;
	private: System::Windows::Forms::ToolStripLabel^ LblUsuario;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripLabel^ LblHora;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ BtnPaises;
	private: System::Windows::Forms::ToolStripMenuItem^ citasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ especialidadesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ citasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ especialidadesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ citasToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ especialidadesToolStripMenuItem2;
	private: System::Windows::Forms::Button^ BtnEspecialidades;

	private: System::Windows::Forms::Button^ BtnCitas;

	private: System::Windows::Forms::Button^ BtnDiagnosticos;

	private: System::Windows::Forms::Button^ BtnTratamientos;
	private: System::Windows::Forms::Button^ BtnHospitalizaciones;
	private: System::Windows::Forms::Button^ BtnHabitaciones;
	private: System::Windows::Forms::Button^ BtnPacientes;
	private: System::Windows::Forms::Button^ BtnMedicos;
	private: System::Windows::Forms::Button^ BtnCiudades;
	private: System::Windows::Forms::Timer^ TimerHora;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inserciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pacientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->habitacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hospitalizacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->diagnosticosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->citasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->especialidadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pacientesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->habitacionesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hospitalizacionesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->diagnósticosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->citasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->especialidadesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->búsquedasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paisesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ciudadesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicosToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pacientesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->habitacionesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hospitalizacionesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientosToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->diagnósticosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->citasToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->especialidadesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->LblUsuario = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel3 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->LblHora = (gcnew System::Windows::Forms::ToolStripLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BtnEspecialidades = (gcnew System::Windows::Forms::Button());
			this->BtnCitas = (gcnew System::Windows::Forms::Button());
			this->BtnDiagnosticos = (gcnew System::Windows::Forms::Button());
			this->BtnTratamientos = (gcnew System::Windows::Forms::Button());
			this->BtnHospitalizaciones = (gcnew System::Windows::Forms::Button());
			this->BtnHabitaciones = (gcnew System::Windows::Forms::Button());
			this->BtnPacientes = (gcnew System::Windows::Forms::Button());
			this->BtnMedicos = (gcnew System::Windows::Forms::Button());
			this->BtnCiudades = (gcnew System::Windows::Forms::Button());
			this->BtnPaises = (gcnew System::Windows::Forms::Button());
			this->TimerHora = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mantenimientoToolStripMenuItem,
					this->reportesToolStripMenuItem, this->acercaDeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(901, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->inserciónToolStripMenuItem,
					this->modificaciónToolStripMenuItem, this->búsquedasToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// inserciónToolStripMenuItem
			// 
			this->inserciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->paisesToolStripMenuItem,
					this->ciudadesToolStripMenuItem, this->medicosToolStripMenuItem, this->pacientesToolStripMenuItem, this->habitacionesToolStripMenuItem,
					this->hospitalizacionesToolStripMenuItem, this->tratamientosToolStripMenuItem, this->diagnosticosToolStripMenuItem, this->citasToolStripMenuItem,
					this->especialidadesToolStripMenuItem
			});
			this->inserciónToolStripMenuItem->Name = L"inserciónToolStripMenuItem";
			this->inserciónToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->inserciónToolStripMenuItem->Text = L"Inserción";
			// 
			// paisesToolStripMenuItem
			// 
			this->paisesToolStripMenuItem->Name = L"paisesToolStripMenuItem";
			this->paisesToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->paisesToolStripMenuItem->Text = L"Paises";
			// 
			// ciudadesToolStripMenuItem
			// 
			this->ciudadesToolStripMenuItem->Name = L"ciudadesToolStripMenuItem";
			this->ciudadesToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->ciudadesToolStripMenuItem->Text = L"Ciudades";
			// 
			// medicosToolStripMenuItem
			// 
			this->medicosToolStripMenuItem->Name = L"medicosToolStripMenuItem";
			this->medicosToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->medicosToolStripMenuItem->Text = L"Medicos";
			// 
			// pacientesToolStripMenuItem
			// 
			this->pacientesToolStripMenuItem->Name = L"pacientesToolStripMenuItem";
			this->pacientesToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->pacientesToolStripMenuItem->Text = L"Pacientes";
			// 
			// habitacionesToolStripMenuItem
			// 
			this->habitacionesToolStripMenuItem->Name = L"habitacionesToolStripMenuItem";
			this->habitacionesToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->habitacionesToolStripMenuItem->Text = L"Habitaciones";
			// 
			// hospitalizacionesToolStripMenuItem
			// 
			this->hospitalizacionesToolStripMenuItem->Name = L"hospitalizacionesToolStripMenuItem";
			this->hospitalizacionesToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->hospitalizacionesToolStripMenuItem->Text = L"Hospitalizaciones";
			// 
			// tratamientosToolStripMenuItem
			// 
			this->tratamientosToolStripMenuItem->Name = L"tratamientosToolStripMenuItem";
			this->tratamientosToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->tratamientosToolStripMenuItem->Text = L"Tratamientos";
			// 
			// diagnosticosToolStripMenuItem
			// 
			this->diagnosticosToolStripMenuItem->Name = L"diagnosticosToolStripMenuItem";
			this->diagnosticosToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->diagnosticosToolStripMenuItem->Text = L"Diagnosticos";
			// 
			// citasToolStripMenuItem
			// 
			this->citasToolStripMenuItem->Name = L"citasToolStripMenuItem";
			this->citasToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->citasToolStripMenuItem->Text = L"Citas";
			// 
			// especialidadesToolStripMenuItem
			// 
			this->especialidadesToolStripMenuItem->Name = L"especialidadesToolStripMenuItem";
			this->especialidadesToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->especialidadesToolStripMenuItem->Text = L"Especialidades";
			// 
			// modificaciónToolStripMenuItem
			// 
			this->modificaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->paisesToolStripMenuItem1,
					this->ciudadesToolStripMenuItem1, this->medicosToolStripMenuItem1, this->pacientesToolStripMenuItem1, this->habitacionesToolStripMenuItem1,
					this->hospitalizacionesToolStripMenuItem1, this->tratamientosToolStripMenuItem1, this->diagnósticosToolStripMenuItem, this->citasToolStripMenuItem1,
					this->especialidadesToolStripMenuItem1
			});
			this->modificaciónToolStripMenuItem->Name = L"modificaciónToolStripMenuItem";
			this->modificaciónToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->modificaciónToolStripMenuItem->Text = L"Modificación";
			// 
			// paisesToolStripMenuItem1
			// 
			this->paisesToolStripMenuItem1->Name = L"paisesToolStripMenuItem1";
			this->paisesToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->paisesToolStripMenuItem1->Text = L"Paises";
			// 
			// ciudadesToolStripMenuItem1
			// 
			this->ciudadesToolStripMenuItem1->Name = L"ciudadesToolStripMenuItem1";
			this->ciudadesToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->ciudadesToolStripMenuItem1->Text = L"Ciudades";
			// 
			// medicosToolStripMenuItem1
			// 
			this->medicosToolStripMenuItem1->Name = L"medicosToolStripMenuItem1";
			this->medicosToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->medicosToolStripMenuItem1->Text = L"Medicos";
			// 
			// pacientesToolStripMenuItem1
			// 
			this->pacientesToolStripMenuItem1->Name = L"pacientesToolStripMenuItem1";
			this->pacientesToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->pacientesToolStripMenuItem1->Text = L"Pacientes";
			// 
			// habitacionesToolStripMenuItem1
			// 
			this->habitacionesToolStripMenuItem1->Name = L"habitacionesToolStripMenuItem1";
			this->habitacionesToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->habitacionesToolStripMenuItem1->Text = L"Habitaciones";
			// 
			// hospitalizacionesToolStripMenuItem1
			// 
			this->hospitalizacionesToolStripMenuItem1->Name = L"hospitalizacionesToolStripMenuItem1";
			this->hospitalizacionesToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->hospitalizacionesToolStripMenuItem1->Text = L"Hospitalizaciones";
			// 
			// tratamientosToolStripMenuItem1
			// 
			this->tratamientosToolStripMenuItem1->Name = L"tratamientosToolStripMenuItem1";
			this->tratamientosToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->tratamientosToolStripMenuItem1->Text = L"Tratamientos";
			// 
			// diagnósticosToolStripMenuItem
			// 
			this->diagnósticosToolStripMenuItem->Name = L"diagnósticosToolStripMenuItem";
			this->diagnósticosToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->diagnósticosToolStripMenuItem->Text = L"Diagnósticos";
			// 
			// citasToolStripMenuItem1
			// 
			this->citasToolStripMenuItem1->Name = L"citasToolStripMenuItem1";
			this->citasToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->citasToolStripMenuItem1->Text = L"Citas";
			// 
			// especialidadesToolStripMenuItem1
			// 
			this->especialidadesToolStripMenuItem1->Name = L"especialidadesToolStripMenuItem1";
			this->especialidadesToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->especialidadesToolStripMenuItem1->Text = L"Especialidades";
			// 
			// búsquedasToolStripMenuItem
			// 
			this->búsquedasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->paisesToolStripMenuItem2,
					this->ciudadesToolStripMenuItem2, this->medicosToolStripMenuItem2, this->pacientesToolStripMenuItem2, this->habitacionesToolStripMenuItem2,
					this->hospitalizacionesToolStripMenuItem2, this->tratamientosToolStripMenuItem2, this->diagnósticosToolStripMenuItem1, this->citasToolStripMenuItem2,
					this->especialidadesToolStripMenuItem2
			});
			this->búsquedasToolStripMenuItem->Name = L"búsquedasToolStripMenuItem";
			this->búsquedasToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->búsquedasToolStripMenuItem->Text = L"Búsquedas";
			// 
			// paisesToolStripMenuItem2
			// 
			this->paisesToolStripMenuItem2->Name = L"paisesToolStripMenuItem2";
			this->paisesToolStripMenuItem2->Size = System::Drawing::Size(166, 22);
			this->paisesToolStripMenuItem2->Text = L"Paises";
			// 
			// ciudadesToolStripMenuItem2
			// 
			this->ciudadesToolStripMenuItem2->Name = L"ciudadesToolStripMenuItem2";
			this->ciudadesToolStripMenuItem2->Size = System::Drawing::Size(166, 22);
			this->ciudadesToolStripMenuItem2->Text = L"Ciudades";
			// 
			// medicosToolStripMenuItem2
			// 
			this->medicosToolStripMenuItem2->Name = L"medicosToolStripMenuItem2";
			this->medicosToolStripMenuItem2->Size = System::Drawing::Size(166, 22);
			this->medicosToolStripMenuItem2->Text = L"Medicos";
			// 
			// pacientesToolStripMenuItem2
			// 
			this->pacientesToolStripMenuItem2->Name = L"pacientesToolStripMenuItem2";
			this->pacientesToolStripMenuItem2->Size = System::Drawing::Size(166, 22);
			this->pacientesToolStripMenuItem2->Text = L"Pacientes";
			// 
			// habitacionesToolStripMenuItem2
			// 
			this->habitacionesToolStripMenuItem2->Name = L"habitacionesToolStripMenuItem2";
			this->habitacionesToolStripMenuItem2->Size = System::Drawing::Size(166, 22);
			this->habitacionesToolStripMenuItem2->Text = L"Habitaciones";
			// 
			// hospitalizacionesToolStripMenuItem2
			// 
			this->hospitalizacionesToolStripMenuItem2->Name = L"hospitalizacionesToolStripMenuItem2";
			this->hospitalizacionesToolStripMenuItem2->Size = System::Drawing::Size(166, 22);
			this->hospitalizacionesToolStripMenuItem2->Text = L"Hospitalizaciones";
			// 
			// tratamientosToolStripMenuItem2
			// 
			this->tratamientosToolStripMenuItem2->Name = L"tratamientosToolStripMenuItem2";
			this->tratamientosToolStripMenuItem2->Size = System::Drawing::Size(166, 22);
			this->tratamientosToolStripMenuItem2->Text = L"Tratamientos";
			// 
			// diagnósticosToolStripMenuItem1
			// 
			this->diagnósticosToolStripMenuItem1->Name = L"diagnósticosToolStripMenuItem1";
			this->diagnósticosToolStripMenuItem1->Size = System::Drawing::Size(166, 22);
			this->diagnósticosToolStripMenuItem1->Text = L"Diagnósticos";
			// 
			// citasToolStripMenuItem2
			// 
			this->citasToolStripMenuItem2->Name = L"citasToolStripMenuItem2";
			this->citasToolStripMenuItem2->Size = System::Drawing::Size(166, 22);
			this->citasToolStripMenuItem2->Text = L"Citas";
			// 
			// especialidadesToolStripMenuItem2
			// 
			this->especialidadesToolStripMenuItem2->Name = L"especialidadesToolStripMenuItem2";
			this->especialidadesToolStripMenuItem2->Size = System::Drawing::Size(166, 22);
			this->especialidadesToolStripMenuItem2->Text = L"Especialidades";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->acercaDeToolStripMenuItem->Text = L"Acerca De";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripLabel1,
					this->LblUsuario, this->toolStripSeparator2, this->toolStripLabel3, this->toolStripSeparator1, this->LblHora
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 470);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(901, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(0, 22);
			// 
			// LblUsuario
			// 
			this->LblUsuario->Name = L"LblUsuario";
			this->LblUsuario->Size = System::Drawing::Size(144, 22);
			this->LblUsuario->Text = L"Usuario: Administrador ☻";
			this->LblUsuario->Click += gcnew System::EventHandler(this, &Form1::toolStripLabel2_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel3
			// 
			this->toolStripLabel3->Name = L"toolStripLabel3";
			this->toolStripLabel3->Size = System::Drawing::Size(173, 22);
			this->toolStripLabel3->Text = L"Sistema de Gestión Hospitalaria";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// LblHora
			// 
			this->LblHora->Name = L"LblHora";
			this->LblHora->Size = System::Drawing::Size(75, 22);
			this->LblHora->Text = L"Hora: --:--:--";
			this->LblHora->Click += gcnew System::EventHandler(this, &Form1::LblHora_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->BtnEspecialidades);
			this->panel1->Controls->Add(this->BtnCitas);
			this->panel1->Controls->Add(this->BtnDiagnosticos);
			this->panel1->Controls->Add(this->BtnTratamientos);
			this->panel1->Controls->Add(this->BtnHospitalizaciones);
			this->panel1->Controls->Add(this->BtnHabitaciones);
			this->panel1->Controls->Add(this->BtnPacientes);
			this->panel1->Controls->Add(this->BtnMedicos);
			this->panel1->Controls->Add(this->BtnCiudades);
			this->panel1->Controls->Add(this->BtnPaises);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(901, 446);
			this->panel1->TabIndex = 2;
			// 
			// BtnEspecialidades
			// 
			this->BtnEspecialidades->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEspecialidades->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnEspecialidades.Image")));
			this->BtnEspecialidades->Location = System::Drawing::Point(712, 245);
			this->BtnEspecialidades->Name = L"BtnEspecialidades";
			this->BtnEspecialidades->Size = System::Drawing::Size(166, 172);
			this->BtnEspecialidades->TabIndex = 9;
			this->BtnEspecialidades->Text = L"Especialidades";
			this->BtnEspecialidades->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->BtnEspecialidades->UseVisualStyleBackColor = true;
			// 
			// BtnCitas
			// 
			this->BtnCitas->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnCitas->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnCitas.Image")));
			this->BtnCitas->Location = System::Drawing::Point(540, 245);
			this->BtnCitas->Name = L"BtnCitas";
			this->BtnCitas->Size = System::Drawing::Size(166, 172);
			this->BtnCitas->TabIndex = 8;
			this->BtnCitas->Text = L"Citas";
			this->BtnCitas->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->BtnCitas->UseVisualStyleBackColor = true;
			// 
			// BtnDiagnosticos
			// 
			this->BtnDiagnosticos->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnDiagnosticos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnDiagnosticos.Image")));
			this->BtnDiagnosticos->Location = System::Drawing::Point(368, 245);
			this->BtnDiagnosticos->Name = L"BtnDiagnosticos";
			this->BtnDiagnosticos->Size = System::Drawing::Size(166, 172);
			this->BtnDiagnosticos->TabIndex = 7;
			this->BtnDiagnosticos->Text = L"Diagnosticos";
			this->BtnDiagnosticos->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->BtnDiagnosticos->UseVisualStyleBackColor = true;
			// 
			// BtnTratamientos
			// 
			this->BtnTratamientos->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnTratamientos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnTratamientos.Image")));
			this->BtnTratamientos->Location = System::Drawing::Point(196, 245);
			this->BtnTratamientos->Name = L"BtnTratamientos";
			this->BtnTratamientos->Size = System::Drawing::Size(166, 172);
			this->BtnTratamientos->TabIndex = 6;
			this->BtnTratamientos->Text = L"Tratamientos";
			this->BtnTratamientos->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->BtnTratamientos->UseVisualStyleBackColor = true;
			// 
			// BtnHospitalizaciones
			// 
			this->BtnHospitalizaciones->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnHospitalizaciones->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnHospitalizaciones.Image")));
			this->BtnHospitalizaciones->Location = System::Drawing::Point(24, 245);
			this->BtnHospitalizaciones->Name = L"BtnHospitalizaciones";
			this->BtnHospitalizaciones->Size = System::Drawing::Size(166, 172);
			this->BtnHospitalizaciones->TabIndex = 5;
			this->BtnHospitalizaciones->Text = L"Hospitalizaciones";
			this->BtnHospitalizaciones->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->BtnHospitalizaciones->UseVisualStyleBackColor = true;
			// 
			// BtnHabitaciones
			// 
			this->BtnHabitaciones->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnHabitaciones->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnHabitaciones.Image")));
			this->BtnHabitaciones->Location = System::Drawing::Point(712, 28);
			this->BtnHabitaciones->Name = L"BtnHabitaciones";
			this->BtnHabitaciones->Size = System::Drawing::Size(166, 168);
			this->BtnHabitaciones->TabIndex = 4;
			this->BtnHabitaciones->Text = L"Habitaciones";
			this->BtnHabitaciones->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->BtnHabitaciones->UseVisualStyleBackColor = true;
			// 
			// BtnPacientes
			// 
			this->BtnPacientes->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnPacientes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnPacientes.Image")));
			this->BtnPacientes->Location = System::Drawing::Point(540, 28);
			this->BtnPacientes->Name = L"BtnPacientes";
			this->BtnPacientes->Size = System::Drawing::Size(166, 168);
			this->BtnPacientes->TabIndex = 3;
			this->BtnPacientes->Text = L"Pacientes";
			this->BtnPacientes->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->BtnPacientes->UseVisualStyleBackColor = true;
			// 
			// BtnMedicos
			// 
			this->BtnMedicos->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnMedicos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnMedicos.Image")));
			this->BtnMedicos->Location = System::Drawing::Point(368, 28);
			this->BtnMedicos->Name = L"BtnMedicos";
			this->BtnMedicos->Size = System::Drawing::Size(166, 168);
			this->BtnMedicos->TabIndex = 2;
			this->BtnMedicos->Text = L"Medicos";
			this->BtnMedicos->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->BtnMedicos->UseVisualStyleBackColor = true;
			// 
			// BtnCiudades
			// 
			this->BtnCiudades->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnCiudades->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnCiudades.Image")));
			this->BtnCiudades->Location = System::Drawing::Point(196, 28);
			this->BtnCiudades->Name = L"BtnCiudades";
			this->BtnCiudades->Size = System::Drawing::Size(166, 168);
			this->BtnCiudades->TabIndex = 1;
			this->BtnCiudades->Text = L"Ciudades";
			this->BtnCiudades->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->BtnCiudades->UseVisualStyleBackColor = true;
			// 
			// BtnPaises
			// 
			this->BtnPaises->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnPaises->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BtnPaises.Image")));
			this->BtnPaises->Location = System::Drawing::Point(24, 28);
			this->BtnPaises->Name = L"BtnPaises";
			this->BtnPaises->Size = System::Drawing::Size(166, 168);
			this->BtnPaises->TabIndex = 0;
			this->BtnPaises->Text = L"Paises";
			this->BtnPaises->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->BtnPaises->UseVisualStyleBackColor = true;
			// 
			// TimerHora
			// 
			this->TimerHora->Enabled = true;
			this->TimerHora->Interval = 1000;
			this->TimerHora->Tick += gcnew System::EventHandler(this, &Form1::TimerHora_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(901, 495);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Sistema de gestión de hospital. Aaron Ortiz - Alejandro Sandoval";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolStripLabel2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TimerHora_Tick(System::Object^ sender, System::EventArgs^ e) {
	LblHora->Text = System::DateTime::Now.ToString("HH:mm:ss");
	
}
private: System::Void LblHora_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

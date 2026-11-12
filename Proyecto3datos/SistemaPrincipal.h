#pragma once

#include "Comun_PDF.h"
#include "Paises.h"
#include "Ciudades.h"
#include "Pacientes.h"
#include "Especialidades.h"
#include "Medicos.h"
#include "Citas.h"
#include "Habitaciones.h"
#include "Hospitalizaciones.h"
#include "Tratamiento.h"
#include "Diagnostico.h"

class SistemaHospitalario
{
public:

    ArbolABBPaises Paises;
    ArbolABBCiudades Ciudades;
    ArbolBPacientes Pacientes;
    ArbolAAEspecialidades Especialidades;
    ArbolBMedicos Medicos;
    ArbolAVLCitas Citas;
    ArbolAVLHabitaciones Habitaciones;
    ArbolRNHospitalizaciones Hospitalizaciones;
    ArbolAADiagnostico Diagnosticos;
    ArbolRNTratamientos Tratamientos;

    void CargarDatos()
    {
        CargarPaises(Paises);
        CargarCiudades(Ciudades, Paises);
        CargarPacientes(Pacientes, Ciudades);
        CargarEspecialidades(Especialidades);
        CargarMedicos(Medicos, Especialidades);
        CargarCitas(Citas, Pacientes, Medicos, Especialidades);
        CargarHabitaciones(Habitaciones);
        CargarHospitalizaciones(
            Hospitalizaciones, Pacientes, Habitaciones, Medicos
        );
        CargarDiagnosticos(Diagnosticos);
        CargarTratamientos(Tratamientos);
    }
};
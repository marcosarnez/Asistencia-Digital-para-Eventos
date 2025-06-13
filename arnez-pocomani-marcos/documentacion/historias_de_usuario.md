# Sistema de control de asistencia para eventos

## Introducción

### Descripción general del sistema
El Sistema de control de asistencia para eventos es una solución diseñada para la empresa "PlanificaPro" con el fin de optimizar y automatizar el registro de participantes en sus diversos eventos y talleres. Su objetivo principal es simplificar el proceso de entrada y proporcionar información precisa sobre la asistencia.

### Objetivo General
Registrar de manera eficiente y confiable la asistencia de los participantes a los eventos y talleres organizados por la empresa PlanificaPro, y generar reportes detallados para el análisis y mejora de la gestión de eventos.

### Objetivos específicos
* **Entrada Rápida y Amigable:** Crear una forma sencilla para que los asistentes se registren al llegar, asegurando que su entrada sea rápida y sin complicaciones.
* **Reportes Claros para Mejores Eventos:** Facilitar que PlanificaPro sepa exactamente quién asistió a cada evento o taller, proporcionándoles reportes claros y fáciles de entender.
* **Herramienta Intuitiva para el Equipo:** Diseñar una herramienta tan fácil de usar que el equipo de PlanificaPro la adopte de inmediato, liberándolos de tareas tediosas.

---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 1: Entrada Rápida y Amigable

* **HU-01:** Como personal de PlanificaPro, quiero poder escanear rápidamente un código QR de un asistente, para que el registro sea veloz y evitar largas filas.
    * **Criterio Positivo:* El sistema debe registrar al asistente en menos de 2 segundos después de un escaneo exitoso del código QR.
    * **Criterio Negativo:* El sistema debe mostrar un mensaje de error claro si el código QR es inválido o ya ha sido usado, sin bloquear la interfaz.

* **HU-02:** Como asistente a un evento, quiero que mi proceso de ingreso sea ágil y sin complicaciones, para poder disfrutar del evento sin esperas innecesarias.
    * **Criterio Positivo:* El tiempo total de espera en la fila para el registro no debe exceder los 30 segundos por asistente, en condiciones normales.
    * **Criterio Negativo:* El sistema no debe permitir que se registren asistentes duplicados, evitando confusiones y demoras.

* **HU-03:** Como personal de PlanificaPro, quiero buscar y registrar manualmente a un asistente por su nombre o ID si no tiene su código, para asegurar que nadie se quede sin entrar por un olvido.
    * **Criterio Positivo:* El sistema debe encontrar al asistente en menos de 5 segundos al buscar por nombre o ID, incluso con una base de datos grande.
    * **Criterio Negativo:* El sistema debe indicar claramente si un asistente buscado no existe en la base de datos, en lugar de quedarse "cargando" indefinidamente.

* **HU-04:** Como personal de PlanificaPro, quiero que el sistema me muestre una confirmación visual clara al registrar a alguien, para saber que el proceso fue exitoso de inmediato.
    * **Criterio Positivo:* Tras un registro exitoso, la pantalla debe mostrar un ícono verde de "registrado" o un mensaje de confirmación visible por al menos 3 segundos.
    * **Criterio Negativo:* El sistema no debe mostrar falsos positivos de registro si hay un error en la base de datos o en la conexión.

* **HU-05:** Como asistente a un evento, quiero sentir que mi llegada es eficiente y profesional, para tener una buena primera impresión del evento.
    * **Criterio Positivo:* El personal de registro debe poder completar el proceso de check-in manteniendo contacto visual y un trato amable, sin distracciones por fallos del sistema.
    * **Criterio Negativo:* El sistema no debe requerir que el asistente repita información que ya proporcionó en el registro previo.

* **HU-06:** Como personal de PlanificaPro, quiero que el sistema sea estable y no se caiga durante el pico de entrada, para garantizar un flujo constante de asistentes.
    * **Criterio Positivo:* El sistema debe soportar al menos 50 registros por minuto sin degradación del rendimiento durante los picos de afluencia.
    * **Criterio Negativo:* El sistema no debe congelarse o cerrar inesperadamente si la conexión a internet es intermitente, y debe intentar reconectarse automáticamente.

---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 2: Reportes Claros para Mejores Eventos

* **HU-01:** Como organizador de PlanificaPro, quiero generar un reporte con la lista completa de asistentes por evento, para tener un registro preciso de quién participó.
    * **Criterio Positivo:* El sistema debe generar un reporte descargable con todos los asistentes registrados para el evento seleccionado.
    * **Criterio Negativo:* El reporte no debe incluir asistentes que no se registraron o que pertenecen a un evento diferente.

* **HU-02:** Como organizador de PlanificaPro, quiero ver la hora exacta de entrada de cada participante, para analizar los patrones de llegada y optimizar la gestión de futuros eventos.
    * **Criterio Positivo:* El reporte generado debe incluir una columna con la fecha y hora precisa de cada registro de entrada.
    * **Criterio Negativo:* El sistema no debe mostrar horas de entrada genéricas o incorrectas.

* **HU-03:** Como organizador de PlanificaPro, quiero poder filtrar los reportes por tipo de taller o sesión, para entender la popularidad de cada actividad.
    * **Criterio Positivo:* La interfaz de reportes debe permitir seleccionar uno o varios tipos de taller/sesión para generar un reporte específico.
    * **Criterio Negativo:* El filtro no debe mostrar talleres o sesiones que no existen o que no tienen asistentes registrados.

* **HU-04:** Como organizador de PlanificaPro, quiero exportar los reportes en formatos como PDF o CSV, para poder compartirlos fácilmente con mi equipo o superiores.
    * **Criterio Positivo:* El sistema debe ofrecer opciones claras para descargar el reporte como archivo PDF y/o CSV.
    * **Criterio Negativo:* El archivo exportado no debe tener problemas de formato o ilegibilidad que impidan su uso.

* **HU-05:** Como organizador de PlanificaPro, quiero que el sistema me permita ver un resumen rápido de la asistencia total, para tener una visión general instantánea del éxito del evento.
    * **Criterio Positivo:* En la pantalla de reportes, debe haber un indicador visible con el número total de asistentes registrados para el evento seleccionado.
    * **Criterio Negativo:* El resumen no debe incluir asistentes no válidos o datos duplicados en el conteo total.

* **HU-06:** Como organizador de PlanificaPro, quiero que los reportes sean fáciles de leer y entender, para tomar decisiones informadas sin perder tiempo interpretando datos complejos.
    * **Criterio Positivo:* Los reportes deben usar una fuente legible, un diseño limpio y una estructura de columnas clara para facilitar la lectura.
    * **Criterio Negativo:* El reporte no debe contener abreviaturas ambiguas o jerga técnica que dificulte su comprensión.

---

## HISTORIAS DE USUARIO OBJETIVO ESPECÍFICO 3: Herramienta Intuitiva para el Equipo

* **HU-01:** Como personal de PlanificaPro, quiero que la interfaz de registro sea limpia y fácil de navegar, para poder usarla con mínima capacitación.
    * **Criterio Positivo:* Un usuario nuevo debe ser capaz de realizar un registro de entrada exitoso en menos de 5 minutos, con una breve explicación inicial.
    * **Criterio Negativo:* La interfaz no debe tener elementos redundantes o botones confusos que generen errores al usuario.

* **HU-02:** Como personal de PlanificaPro, quiero que los botones y opciones principales estén claramente visibles, para no tener que buscar funciones mientras registro.
    * **Criterio Positivo:* Los botones de "Escanear QR", "Búsqueda Manual" y "Registrar" deben ser prominentes y ubicados lógicamente en la pantalla de registro.
    * **Criterio Negativo:* El sistema no debe ocultar funciones esenciales en menús complejos o sub-menús innecesarios.

* **HU-03:** Como personal de PlanificaPro, quiero que el sistema me dé retroalimentación visual clara sobre el estado del registro (ej., "registrado", "error"), para operar con confianza.
    * **Criterio Positivo:* El sistema debe mostrar un mensaje o un cambio de color distinto para indicar el éxito o el fallo del registro en tiempo real.
    * **Criterio Negativo:* El sistema no debe quedarse en un estado ambiguo o no mostrar ninguna respuesta visual después de una acción de registro.

* **HU-04:** Como administrador de PlanificaPro, quiero que agregar o editar datos de un evento sea sencillo, para mantener la información actualizada sin esfuerzo.
    * **Criterio Positivo:* La interfaz para crear o modificar un evento debe ser guiada y requerir un máximo de 5 pasos claros para completar la tarea.
    * **Criterio Negativo:* El sistema no debe permitir que se guarden eventos con información esencial faltante (ej., nombre del evento, fecha).

* **HU-05:** Como personal de PlanificaPro, quiero que el sistema responda rápidamente a mis acciones, para no sentirme frustrado por la lentitud.
    * **Criterio Positivo:* El tiempo de respuesta del sistema a cualquier interacción del usuario (clic, búsqueda, etc.) no debe superar los 2 segundos.
    * **Criterio Negativo:* El sistema no debe mostrar una barra de carga o "spinner" por más de 3 segundos después de una acción común.

* **HU-06:** Como administrador de PlanificaPro, quiero poder configurar nuevos usuarios y asignarles roles fácilmente, para gestionar el acceso del equipo sin complicaciones.
    * **Criterio Positivo:* Un administrador debe poder crear un nuevo usuario y asignarle un rol (ej., "registrador", "reportes") en menos de 30 segundos.
    * **Criterio Negativo:* El sistema no debe permitir la creación de usuarios con datos de acceso duplicados o roles no válidos.
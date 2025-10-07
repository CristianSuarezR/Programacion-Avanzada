# 🧮 Operaciones básicas entre dos números (C++)

## 📘 Descripción

Este programa en **C++** solicita al usuario ingresar **dos números enteros** y calcula su:
- Suma  
- Resta  
- Multiplicación  
- División (siempre que el divisor no sea cero)

También incluye manejo de errores para evitar la **división por cero**, mostrando un mensaje apropiado si ocurre ese caso.

---

## 🧠 Metodología

1. **Entrada de datos:**  
   El programa utiliza `cin` para capturar dos números enteros ingresados por el usuario.

2. **Procesamiento:**  
   - Calcula las operaciones básicas (suma, resta y multiplicación) directamente.  
   - Antes de realizar la división, verifica si el segundo número (`num2`) es distinto de cero.  
   - Si es diferente de cero, realiza la división convirtiendo los operandos a tipo `double` para obtener un resultado decimal.  
   - Si es cero, muestra un mensaje indicando que la división no puede realizarse.

3. **Salida de resultados:**  
   Los resultados se muestran en consola usando `cout`.

---

## ⚙️ Instrucciones de compilación y ejecución

### 🔧 Requisitos
- Tener instalado un compilador de C++ (por ejemplo, `g++`).
- Tener instalado **Git** (para clonar el repositorio, si lo deseas).

### 💻 Compilación

En una terminal o consola, ubicarse en la carpeta del proyecto y ejecutar:

```bash
g++ main.cpp -o operaciones


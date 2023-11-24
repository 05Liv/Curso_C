#pragma once

namespace miformulario2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Nombre;
	private: System::Windows::Forms::Label^ Apellido;
	private: System::Windows::Forms::TextBox^ Nombre1;
	private: System::Windows::Forms::TextBox^ Apellido2;
	protected:

	protected:



	private: System::Windows::Forms::Label^ salida;
	private: System::Windows::Forms::Button^ Enviar;
	private: System::Windows::Forms::DateTimePicker^ fechadeNacimiento;
	private: System::Windows::Forms::NumericUpDown^ NumSuma1;
	private: System::Windows::Forms::NumericUpDown^ NumSuma2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Salida2;








	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Nombre = (gcnew System::Windows::Forms::Label());
			this->Apellido = (gcnew System::Windows::Forms::Label());
			this->Nombre1 = (gcnew System::Windows::Forms::TextBox());
			this->Apellido2 = (gcnew System::Windows::Forms::TextBox());
			this->salida = (gcnew System::Windows::Forms::Label());
			this->Enviar = (gcnew System::Windows::Forms::Button());
			this->fechadeNacimiento = (gcnew System::Windows::Forms::DateTimePicker());
			this->NumSuma1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->NumSuma2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Salida2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumSuma1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumSuma2))->BeginInit();
			this->SuspendLayout();
			// 
			// Nombre
			// 
			this->Nombre->AutoSize = true;
			this->Nombre->Location = System::Drawing::Point(33, 19);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(56, 16);
			this->Nombre->TabIndex = 0;
			this->Nombre->Text = L"Nombre";
			// 
			// Apellido
			// 
			this->Apellido->AutoSize = true;
			this->Apellido->Location = System::Drawing::Point(33, 94);
			this->Apellido->Name = L"Apellido";
			this->Apellido->Size = System::Drawing::Size(57, 16);
			this->Apellido->TabIndex = 1;
			this->Apellido->Text = L"Apellido";
			// 
			// Nombre1
			// 
			this->Nombre1->Location = System::Drawing::Point(36, 38);
			this->Nombre1->Name = L"Nombre1";
			this->Nombre1->Size = System::Drawing::Size(425, 22);
			this->Nombre1->TabIndex = 2;
			// 
			// Apellido2
			// 
			this->Apellido2->Location = System::Drawing::Point(36, 113);
			this->Apellido2->Name = L"Apellido2";
			this->Apellido2->Size = System::Drawing::Size(425, 22);
			this->Apellido2->TabIndex = 3;
			this->Apellido2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// salida
			// 
			this->salida->AutoSize = true;
			this->salida->Location = System::Drawing::Point(252, 203);
			this->salida->Name = L"salida";
			this->salida->Size = System::Drawing::Size(0, 16);
			this->salida->TabIndex = 4;
			this->salida->Click += gcnew System::EventHandler(this, &MyForm::salida_Click);
			// 
			// Enviar
			// 
			this->Enviar->Location = System::Drawing::Point(36, 310);
			this->Enviar->Name = L"Enviar";
			this->Enviar->Size = System::Drawing::Size(75, 23);
			this->Enviar->TabIndex = 5;
			this->Enviar->Text = L"Enviar";
			this->Enviar->UseVisualStyleBackColor = true;
			this->Enviar->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// fechadeNacimiento
			// 
			this->fechadeNacimiento->Location = System::Drawing::Point(37, 157);
			this->fechadeNacimiento->Name = L"fechadeNacimiento";
			this->fechadeNacimiento->Size = System::Drawing::Size(245, 22);
			this->fechadeNacimiento->TabIndex = 6;
			// 
			// NumSuma1
			// 
			this->NumSuma1->Location = System::Drawing::Point(36, 203);
			this->NumSuma1->Name = L"NumSuma1";
			this->NumSuma1->Size = System::Drawing::Size(120, 22);
			this->NumSuma1->TabIndex = 7;
			// 
			// NumSuma2
			// 
			this->NumSuma2->Location = System::Drawing::Point(202, 203);
			this->NumSuma2->Name = L"NumSuma2";
			this->NumSuma2->Size = System::Drawing::Size(120, 22);
			this->NumSuma2->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(370, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 9;
			// 
			// Salida2
			// 
			this->Salida2->AutoSize = true;
			this->Salida2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Salida2->Location = System::Drawing::Point(199, 317);
			this->Salida2->Name = L"Salida2";
			this->Salida2->Size = System::Drawing::Size(44, 16);
			this->Salida2->TabIndex = 10;
			this->Salida2->Text = L"label2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 400);
			this->Controls->Add(this->Salida2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NumSuma2);
			this->Controls->Add(this->NumSuma1);
			this->Controls->Add(this->fechadeNacimiento);
			this->Controls->Add(this->Enviar);
			this->Controls->Add(this->salida);
			this->Controls->Add(this->Apellido2);
			this->Controls->Add(this->Nombre1);
			this->Controls->Add(this->Apellido);
			this->Controls->Add(this->Nombre);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumSuma1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NumSuma2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salida_Click(System::Object^ sender, System::EventArgs^ e) {
		int VariNumSuma1 = Convert::ToInt32(NumSuma1->Text);
		int VariNumSuma2 = Convert::ToInt32(NumSuma2->Text);
		int suma = VariNumSuma1 + VariNumSuma2;
		salida->Text = "Bienvenido " + Nombre->Text + " " + Apellido->Text + "!\n Has nacido el " + fechadeNacimiento->Text + "\n la suma de tus números son:  " + suma;
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		salida->Text = Nombre->Text;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//salida->Text = "Bienvenido " + Nombre1->Text + " " + Apellido2->Text + "!\n Has nacido el " + fechadeNacimiento->Text;
	}
};
}

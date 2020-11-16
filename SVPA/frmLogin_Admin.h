#pragma once

namespace SVPA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmLogin_Admin
	/// </summary>
	public ref class frmLogin_Admin : public System::Windows::Forms::Form
	{
	public:
		frmLogin_Admin(void)
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
		~frmLogin_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnIngresar;
	protected:

	private: System::Windows::Forms::TextBox^ txtcontraseña;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->txtcontraseña = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(234, 294);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADMINISTRADOR";
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(172, 365);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(254, 23);
			this->btnIngresar->TabIndex = 1;
			this->btnIngresar->Text = L"ACCEDER";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &frmLogin_Admin::btnIngresar_Click);
			// 
			// txtcontraseña
			// 
			this->txtcontraseña->Location = System::Drawing::Point(198, 324);
			this->txtcontraseña->Name = L"txtcontraseña";
			this->txtcontraseña->Size = System::Drawing::Size(202, 22);
			this->txtcontraseña->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(198, 95);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(202, 175);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// frmLogin_Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 501);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtcontraseña);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->label1);
			this->Name = L"frmLogin_Admin";
			this->Text = L"frmLogin_Admin";
			this->Load += gcnew System::EventHandler(this, &frmLogin_Admin::frmLogin_Admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmLogin_Admin_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		Administrador var, dato;

		String^ m; IntPtr prt; char* copia;

		m = txtcontraseña->Text;
		prt = Marshal::StringToHGlobalAnsi(m);
		copia = static_cast<char*>(prt.ToPointer());
		strcpy_s(dato.clave, copia);

		ifstream Leer("base_admin.txt", ios::in | ios::binary);

		while (!Leer.eof())
		{
			Leer.read(reinterpret_cast <char*> (&var), sizeof(Administrador));
			if (!Leer.eof())
			{
				if (strcmp(dato.clave, var.clave))
				{
					MessageBox::Show("Datos correctos");
				}
				else
				{
					MessageBox::Show("Datos erroneos");
				}
			}
		}
		Leer.close();
	}
};
}

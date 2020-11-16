#pragma once

namespace SVPA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ aDMINISTRADORToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ eMPLEADOSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ loginToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aDMINISTRADORToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eMPLEADOSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aDMINISTRADORToolStripMenuItem,
					this->eMPLEADOSToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1143, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aDMINISTRADORToolStripMenuItem
			// 
			this->aDMINISTRADORToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->loginToolStripMenuItem1 });
			this->aDMINISTRADORToolStripMenuItem->Name = L"aDMINISTRADORToolStripMenuItem";
			this->aDMINISTRADORToolStripMenuItem->Size = System::Drawing::Size(142, 24);
			this->aDMINISTRADORToolStripMenuItem->Text = L"ADMINISTRADOR";
			// 
			// loginToolStripMenuItem1
			// 
			this->loginToolStripMenuItem1->Name = L"loginToolStripMenuItem1";
			this->loginToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->loginToolStripMenuItem1->Text = L"Login";
			this->loginToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmPrincipal::loginToolStripMenuItem1_Click);
			// 
			// eMPLEADOSToolStripMenuItem
			// 
			this->eMPLEADOSToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->loginToolStripMenuItem });
			this->eMPLEADOSToolStripMenuItem->Name = L"eMPLEADOSToolStripMenuItem";
			this->eMPLEADOSToolStripMenuItem->Size = System::Drawing::Size(107, 24);
			this->eMPLEADOSToolStripMenuItem->Text = L"EMPLEADOS";
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->loginToolStripMenuItem->Text = L"Login";
			this->loginToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::loginToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1143, 563);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmPrincipal";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void loginToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmLogin_Admin ^x = gcnew frmLogin_Admin;
	x->MdiParent = this;
	x->Show();
}
private: System::Void loginToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmLogin_Emple ^ x = gcnew frmLogin_Emple;
	x->MdiParent = this;
	x->Show();
}
};
}

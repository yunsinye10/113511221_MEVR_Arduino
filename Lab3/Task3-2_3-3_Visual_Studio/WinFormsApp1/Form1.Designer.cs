namespace WinFormsApp1
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            btnShow = new Button();
            lblPrompt = new Label();
            txtName = new TextBox();
            lblResult = new Label();
            SuspendLayout();
            // 
            // btnShow
            // 
            btnShow.Location = new Point(233, 167);
            btnShow.Name = "btnShow";
            btnShow.Size = new Size(94, 29);
            btnShow.TabIndex = 0;
            btnShow.Text = "顯示文字";
            btnShow.UseVisualStyleBackColor = true;
            btnShow.Click += button1_Click;
            // 
            // lblPrompt
            // 
            lblPrompt.AutoSize = true;
            lblPrompt.BackColor = SystemColors.Control;
            lblPrompt.Location = new Point(229, 54);
            lblPrompt.Name = "lblPrompt";
            lblPrompt.Size = new Size(129, 19);
            lblPrompt.TabIndex = 1;
            lblPrompt.Text = "請輸入你的名字：";
            lblPrompt.Click += label1_Click;
            // 
            // txtName
            // 
            txtName.Location = new Point(233, 109);
            txtName.Name = "txtName";
            txtName.Size = new Size(125, 27);
            txtName.TabIndex = 2;
            // 
            // lblResult
            // 
            lblResult.AutoSize = true;
            lblResult.BackColor = SystemColors.ActiveCaption;
            lblResult.Location = new Point(229, 253);
            lblResult.Name = "lblResult";
            lblResult.Size = new Size(0, 19);
            lblResult.TabIndex = 3;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(9F, 19F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(lblResult);
            Controls.Add(txtName);
            Controls.Add(lblPrompt);
            Controls.Add(btnShow);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button btnShow;
        private TextBox txtName;
        private Label lblResult;
        public Label lblPrompt;
    }
}

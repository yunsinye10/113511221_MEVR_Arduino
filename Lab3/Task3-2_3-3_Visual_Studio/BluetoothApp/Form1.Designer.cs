namespace WinFormsApp2
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
            btnOn = new Button();
            btnOff = new Button();
            lblStatus = new Label();
            SuspendLayout();
            // 
            // btnOn
            // 
            btnOn.Location = new Point(92, 221);
            btnOn.Name = "btnOn";
            btnOn.Size = new Size(259, 66);
            btnOn.TabIndex = 0;
            btnOn.Text = "On";
            btnOn.UseVisualStyleBackColor = true;
            btnOn.Click += btnOn_Click;
            // 
            // btnOff
            // 
            btnOff.Location = new Point(435, 221);
            btnOff.Name = "btnOff";
            btnOff.Size = new Size(259, 67);
            btnOff.TabIndex = 1;
            btnOff.Text = "off";
            btnOff.UseVisualStyleBackColor = true;
            btnOff.Click += btnOff_Click;
            // 
            // lblStatus
            // 
            lblStatus.AutoSize = true;
            lblStatus.Font = new Font("Microsoft JhengHei UI", 16.2F, FontStyle.Bold, GraphicsUnit.Point, 136);
            lblStatus.Location = new Point(137, 106);
            lblStatus.Name = "lblStatus";
            lblStatus.Size = new Size(334, 36);
            lblStatus.TabIndex = 2;
            lblStatus.Text = "Arduino Uno LED狀態：";
            lblStatus.TextAlign = ContentAlignment.MiddleLeft;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(9F, 19F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(lblStatus);
            Controls.Add(btnOff);
            Controls.Add(btnOn);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button btnOn;
        private Button btnOff;
        private Label lblStatus;
    }
}

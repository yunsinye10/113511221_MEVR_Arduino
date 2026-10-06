using System.IO.Ports;

namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        private SerialPort serialPort;

        public Form1()
        {
            InitializeComponent();

            //serialPort = new SerialPort("COM3", 9600);

            //if (!serialPort.IsOpen)
            //{
            //    serialPort.Open();
            //}
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //string message = txtName.Text.Trim();

            //serialPort.WriteLine(message);

            //lblResult.Text = $"已送出：{message}";
        }
        private void label1_Click(object sender, EventArgs e) 
        {
        
        }
    }
}
using System.IO.Ports;
namespace WinFormsApp2
{
    public partial class Form1 : Form
    {
        private SerialPort serialPort;

        public Form1()
        {
            InitializeComponent();
            serialPort = new SerialPort("COM10", 9600);
            serialPort.NewLine = "\n";


        }

        private void btnOn_Click(object sender, EventArgs e)
        {
            if (!serialPort.IsOpen)
            {
                serialPort.Open();
            }
            serialPort.WriteLine("ON");
        }

        private void btnOff_Click(object sender, EventArgs e)
        {
            if (!serialPort.IsOpen)
            {
                serialPort.Open();
            }
            serialPort.WriteLine("OFF");
        }

        
    }
}

using System.IO.Ports;
namespace WinFormsApp2
{
    public partial class Form1 : Form
    {
        private SerialPort serialPort;

        public Form1()
        {
            InitializeComponent();
            serialPort = new SerialPort("COM6", 9600);
            serialPort.NewLine = "\n";
            serialPort.DataReceived += SerialPort_DataReceived;

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

        private void SerialPort_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            string message = serialPort.ReadLine();

            Invoke(new Action(() =>
            {
                lblStatus.Text = message;
            }));
        }
    }
}

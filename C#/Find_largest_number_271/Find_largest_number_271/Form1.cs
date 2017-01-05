using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Find_largest_number_271
{
    public partial class Form1 : Form
    {
        int num1, mini1 = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                num1 = int.Parse(textBox1.Text);
                if (num1 == -1)
                    textBox1.Text = mini1.ToString();
                else
                {
                    if (mini1 < num1)
                        mini1 = num1;
                    textBox1.Text = null;
                }
            }
            catch (Exception err)
            {
                textBox1.Text = err.Message;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = null;
            mini1 = 0;
        }
    }
}

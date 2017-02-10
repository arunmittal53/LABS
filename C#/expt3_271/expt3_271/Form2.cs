using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace expt3_271
{
    public partial class Form2 : Form
    {
        int n, i=-1;
        int[] arr = new int[1000];
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (i == -1)
            {
                n = int.Parse(textBox1.Text);
                i = 0;
                label1.Text = "Enter ";
                label1.Text += (i + 1).ToString();
                label1.Text += " element";
            }
            else
            {
                arr[i] = int.Parse(textBox1.Text);
                i++;
                label1.Text = "Enter ";
                label1.Text += (i+1).ToString();
                label1.Text += " element";
            }
            textBox1.Text = null;
            if (i == n)
            {
                int temp;
                int j = n - 1;
                for (i = 0; i < n / 2; i++)
                {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                    j--;
                }
                textBox2.Text = null;
                for (i = 0; i < n; i++)
                {
                    textBox2.Text += arr[i].ToString();
                    textBox2.Text += "  ";
                }
            }
            else {
                textBox2.Text = null;
                for (int j = 0; j < i;j++)
                {
                    textBox2.Text += arr[j].ToString();
                    textBox2.Text += "  ";
                }
            }
        }
    }
}

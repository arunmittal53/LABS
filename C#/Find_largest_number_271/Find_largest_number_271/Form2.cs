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
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string str;
            str = textBox1.Text;
            int i, n;
            i = 0; n = str.Length - 1;
            while (i < n)
            {
                if (str[i] != str[n])
                {
                    textBox1.Text = "NOT PALINDROME";
                    break;
                }
                i++; n--;
            }
            if (i >= n)
            {
                textBox1.Text = "PALINDROME";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = null;
        }
    }
}

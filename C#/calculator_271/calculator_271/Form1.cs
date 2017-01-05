using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace calculator_271
{
    public partial class Form1 : Form
    {
        int num1, num2, result, choice;
        public Form1()
        {
            InitializeComponent();
            choice = 0;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            num1 = int.Parse(textBox1.Text);
            textBox1.Text = null;
            choice = 1; // 1 for addition
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == null)
            {
                textBox1.Text = "ERROR";
            }
            else
            {
                num2 = int.Parse(textBox1.Text);
                if (choice == 1)
                    result = num1 + num2;
                else if (choice == 3)
                    result = num1 - num2;
                else if (choice == 4)
                    result = num1 * num2;
                else if (choice == 5)
                    result = num1 / num2;
                else if (choice == 6)
                    result = num1 % num2;
                else if (choice == 8)
                    result = 0;
                else
                    result = 0;
                textBox1.Text = result.ToString();
                choice = 0;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            num1 = int.Parse(textBox1.Text);
            textBox1.Text = null;
            choice = 3; // 3 for subtraction
        }

        private void button4_Click(object sender, EventArgs e)
        {
            num1 = int.Parse(textBox1.Text);
            textBox1.Text = null;
            choice = 4; // 4 for multiplication
        }

        private void button5_Click(object sender, EventArgs e)
        {
            num1 = int.Parse(textBox1.Text);
            textBox1.Text = null;
            choice = 5; // 5 for division
        }

        private void button6_Click(object sender, EventArgs e)
        {
            num1 = int.Parse(textBox1.Text);
            textBox1.Text = null;
            choice = 6; // 6 for mod
        }

        private void button7_Click(object sender, EventArgs e)
        {
            num1 = int.Parse(textBox1.Text);
            textBox1.Text = null;
            choice = 7; // 7 for power
        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox1.Text = null;
            // 8 for clear
        }
    }
}

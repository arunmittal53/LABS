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
    public partial class Form1 : Form
    {
        int number = 0;
        int cost = 0;
        string name;
        int count = 0;
        int []arr = new int[1000];
        string []name1 = new string[1000];
        public Form1()
        {
            InitializeComponent();
        }
        private void PointsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            try
            {
                number = int.Parse(textBox2.Text);
            }
            catch (Exception ex)
            {
                label3.Text = ex.Message;
                return;
            }
            try
            {
                name = textBox1.Text;
            }
            catch (Exception ex)
            {
                label3.Text = ex.Message;
                return;
            }
            cost = Math.Min(6, number) * 10;
            number -= 6;
            cost += Math.Max(number, 0) * 20;
            textBox3.Text = cost.ToString();
            arr[count] = cost;
            name1[count] = name;
            count++;
        }

        private void summaryToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //string temp = null;
            textBox3.Text = null;
            for (int i = 0; i < count; i++)
            {
                textBox3.Text += name1[i];
                textBox3.Text += "    ";
                textBox3.Text += arr[i].ToString();
                textBox3.Text += "\n";
            }
        }

        private void clearToolStripMenuItem_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox2.Text = textBox3.Text = null;
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}

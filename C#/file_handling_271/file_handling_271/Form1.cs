using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;

namespace file_handling_271
{
    public partial class Form1 : Form
    {
        int ind = 0;
        string filename = null;
        String[] data;
        public Form1()
        {
            InitializeComponent();
        }

        private void menuStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {

        }

        private void aboutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Version 1.0\nCreated by Arun Mittal");
        }

        private void saveToolStripMenuItem_Click(object sender, EventArgs e)
        {
            string a;
            a = null;
            int b, c;
            b = c = 0;
            try
            {
                a = textBox1.Text;
                b = Convert.ToInt32(textBox2.Text);
                c = Convert.ToInt32(textBox3.Text);
                OpenFileDialog op = new OpenFileDialog();
                op.Title = "open dialog box";
                op.ShowDialog();
                string filename = op.FileName;
                String[] msg = {a,textBox2.Text,textBox3.Text};
                File.AppendAllLines(filename,msg);
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
            textBox1.Text = textBox2.Text = textBox3.Text = null;
        }

        private void button1_Click(object sender, EventArgs e)  // open_button
        {
            OpenFileDialog op = new OpenFileDialog();
            op.Title = "Open file Dialog";
            op.ShowDialog();
            filename = op.FileName;
            if (filename != null)
            {
                data = File.ReadAllLines(filename);
                ind = 0;
                if ((ind >= 0) && (ind + 2 <= data.Length))
                {
                    textBox1.Text = data[ind];
                    textBox2.Text = data[ind + 1];
                    textBox3.Text = data[ind + 2];
                }
            }
            else
            {
                MessageBox.Show("No file Selected");
            }
        }

        private void button2_Click(object sender, EventArgs e) // back_button
        {
            if (filename == null)
            {
                MessageBox.Show("No file selected");
            }
            else
            {
                ind -= 3;
                if ((ind >= 0) && (ind + 2 <= data.Length))
                {
                    textBox1.Text = data[ind];
                    textBox2.Text = data[ind + 1];
                    textBox3.Text = data[ind + 2];
                }
                else
                {
                    ind += 3;
                }
            }
        }

        private void button3_Click(object sender, EventArgs e) // Next_button
        {
            if (filename == null)
            {
                MessageBox.Show("No file selected");
            }
            else
            {
                ind += 3;
                if ((ind >= 0) && (ind + 2 <= data.Length))
                {
                    textBox1.Text = data[ind];
                    textBox2.Text = data[ind + 1];
                    textBox3.Text = data[ind + 2];
                }
                else
                {
                    ind -= 3;
                }
            }
        }
    }
}

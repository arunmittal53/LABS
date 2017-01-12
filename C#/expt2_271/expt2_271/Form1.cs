using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace expt2_271
{
    public partial class Form1 : Form
    {
        int sw_ms = 0, sw_h = 0, sw_m = 0, sw_s = 0;
        int counter = 0;
        int counter_blink = 0;

        public Form1()
        {
            InitializeComponent();
            timer1.Start();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            label1.Text = DateTime.Now.ToString();
        }

        private void timer2_Tick(object sender, EventArgs e)
        {
            label2.Text = sw_h + ":" + sw_m + ":" + sw_s + ":" + sw_ms;
            sw_ms++;
            if (sw_ms >= 100)
            {
                sw_ms = 0;
                sw_s++;
            }
            if (sw_s >= 60)
            {
                sw_s = 0;
                sw_m++;
            }
            if (sw_m >= 60)
            {
                sw_h++;
                sw_m = 0;
            }
        }

        private void start_stop_watch_Click(object sender, EventArgs e)
        {
            timer2.Start();
        }

        private void stop_stop_watch_Click(object sender, EventArgs e)
        {
            timer2.Stop();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void multi_line_start_Click(object sender, EventArgs e)
        {
            //timer3.Start();
            timer3.Enabled = true;
        }

        private void multi_line_stop_click_Click_1(object sender, EventArgs e)
        {
           // timer3.Stop();
            timer3.Enabled = false;
            counter = 0;
            textBox1.Text = null;
        }

        private void timer3_Tick(object sender, EventArgs e)
        {
            counter++;
            textBox1.Text += counter.ToString() + "\r\n";
        }

        private void stopwatch_clear_Click(object sender, EventArgs e)
        {
            sw_h = sw_m = sw_ms = sw_s = 0;
            label2.Text = sw_h + ":" + sw_m + ":" + sw_s + ":" + sw_ms;
        }

        private void dice_start_Click(object sender, EventArgs e)
        {
            timer4.Start();
        }

        private void dice_stop_Click(object sender, EventArgs e)
        {
            timer4.Stop();
        }

        private void dice_clear_Click(object sender, EventArgs e)
        {
            textBox2.Text = null;
        }

        private void timer4_Tick(object sender, EventArgs e)
        {
            int number;
            Random rnd = new Random();
            number = rnd.Next(1, 7);
            textBox2.Text += number.ToString() + "\r\n"; 
        }

        private void timer5_Tick(object sender, EventArgs e)
        {
            counter_blink = 1 - counter_blink;
            if(counter_blink == 1)
                pictureBox1.Hide();
            else
                pictureBox1.Show();
        }
    }
}

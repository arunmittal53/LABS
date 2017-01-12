namespace expt2_271
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.label1 = new System.Windows.Forms.Label();
            this.start_stop_watch = new System.Windows.Forms.Button();
            this.stop_stop_watch = new System.Windows.Forms.Button();
            this.timer2 = new System.Windows.Forms.Timer(this.components);
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.timer3 = new System.Windows.Forms.Timer(this.components);
            this.multi_line_textbox = new System.Windows.Forms.Label();
            this.multi_line_start = new System.Windows.Forms.Button();
            this.multi_line_stop_click = new System.Windows.Forms.Button();
            this.stopwatch_clear = new System.Windows.Forms.Button();
            this.dice_start = new System.Windows.Forms.Button();
            this.dice_stop = new System.Windows.Forms.Button();
            this.dice_clear = new System.Windows.Forms.Button();
            this.label5 = new System.Windows.Forms.Label();
            this.timer4 = new System.Windows.Forms.Timer(this.components);
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.pictureBox1 = new System.Windows.Forms.PictureBox();
            this.label6 = new System.Windows.Forms.Label();
            this.timer5 = new System.Windows.Forms.Timer(this.components);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
            this.SuspendLayout();
            // 
            // timer1
            // 
            this.timer1.Enabled = true;
            this.timer1.Interval = 1000;
            this.timer1.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(249, 211);
            this.label1.Margin = new System.Windows.Forms.Padding(7, 0, 7, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(103, 29);
            this.label1.TabIndex = 0;
            this.label1.Text = "00:00:00";
            // 
            // start_stop_watch
            // 
            this.start_stop_watch.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.start_stop_watch.Location = new System.Drawing.Point(143, 358);
            this.start_stop_watch.Name = "start_stop_watch";
            this.start_stop_watch.Size = new System.Drawing.Size(48, 23);
            this.start_stop_watch.TabIndex = 1;
            this.start_stop_watch.Text = "start";
            this.start_stop_watch.UseVisualStyleBackColor = true;
            this.start_stop_watch.Click += new System.EventHandler(this.start_stop_watch_Click);
            // 
            // stop_stop_watch
            // 
            this.stop_stop_watch.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.stop_stop_watch.Location = new System.Drawing.Point(241, 356);
            this.stop_stop_watch.Name = "stop_stop_watch";
            this.stop_stop_watch.Size = new System.Drawing.Size(45, 25);
            this.stop_stop_watch.TabIndex = 2;
            this.stop_stop_watch.Text = "stop";
            this.stop_stop_watch.UseVisualStyleBackColor = true;
            this.stop_stop_watch.Click += new System.EventHandler(this.stop_stop_watch_Click);
            // 
            // timer2
            // 
            this.timer2.Interval = 1;
            this.timer2.Tick += new System.EventHandler(this.timer2_Tick);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(249, 295);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(103, 29);
            this.label2.TabIndex = 3;
            this.label2.Text = "00:00:00";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(8, 211);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(147, 29);
            this.label3.TabIndex = 4;
            this.label3.Text = "digital_clock";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(21, 295);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(134, 29);
            this.label4.TabIndex = 5;
            this.label4.Text = "stop_watch";
            // 
            // textBox1
            // 
            this.textBox1.AllowDrop = true;
            this.textBox1.Cursor = System.Windows.Forms.Cursors.Default;
            this.textBox1.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox1.Location = new System.Drawing.Point(182, 18);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.textBox1.Size = new System.Drawing.Size(225, 91);
            this.textBox1.TabIndex = 6;
            this.textBox1.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // timer3
            // 
            this.timer3.Interval = 1000;
            this.timer3.Tick += new System.EventHandler(this.timer3_Tick);
            // 
            // multi_line_textbox
            // 
            this.multi_line_textbox.AutoSize = true;
            this.multi_line_textbox.Location = new System.Drawing.Point(0, 52);
            this.multi_line_textbox.Name = "multi_line_textbox";
            this.multi_line_textbox.Size = new System.Drawing.Size(155, 29);
            this.multi_line_textbox.TabIndex = 7;
            this.multi_line_textbox.Text = "Time counter";
            // 
            // multi_line_start
            // 
            this.multi_line_start.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.multi_line_start.Location = new System.Drawing.Point(207, 141);
            this.multi_line_start.Name = "multi_line_start";
            this.multi_line_start.Size = new System.Drawing.Size(59, 22);
            this.multi_line_start.TabIndex = 8;
            this.multi_line_start.Text = "start";
            this.multi_line_start.UseVisualStyleBackColor = true;
            this.multi_line_start.Click += new System.EventHandler(this.multi_line_start_Click);
            // 
            // multi_line_stop_click
            // 
            this.multi_line_stop_click.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.multi_line_stop_click.Location = new System.Drawing.Point(311, 140);
            this.multi_line_stop_click.Name = "multi_line_stop_click";
            this.multi_line_stop_click.Size = new System.Drawing.Size(75, 23);
            this.multi_line_stop_click.TabIndex = 9;
            this.multi_line_stop_click.Text = "stop";
            this.multi_line_stop_click.UseVisualStyleBackColor = true;
            this.multi_line_stop_click.Click += new System.EventHandler(this.multi_line_stop_click_Click_1);
            // 
            // stopwatch_clear
            // 
            this.stopwatch_clear.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.stopwatch_clear.Location = new System.Drawing.Point(324, 358);
            this.stopwatch_clear.Name = "stopwatch_clear";
            this.stopwatch_clear.Size = new System.Drawing.Size(53, 23);
            this.stopwatch_clear.TabIndex = 10;
            this.stopwatch_clear.Text = "clear";
            this.stopwatch_clear.UseVisualStyleBackColor = true;
            this.stopwatch_clear.Click += new System.EventHandler(this.stopwatch_clear_Click);
            // 
            // dice_start
            // 
            this.dice_start.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dice_start.Location = new System.Drawing.Point(641, 157);
            this.dice_start.Name = "dice_start";
            this.dice_start.Size = new System.Drawing.Size(75, 23);
            this.dice_start.TabIndex = 11;
            this.dice_start.Text = "start";
            this.dice_start.UseVisualStyleBackColor = true;
            this.dice_start.Click += new System.EventHandler(this.dice_start_Click);
            // 
            // dice_stop
            // 
            this.dice_stop.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dice_stop.Location = new System.Drawing.Point(758, 157);
            this.dice_stop.Name = "dice_stop";
            this.dice_stop.Size = new System.Drawing.Size(75, 23);
            this.dice_stop.TabIndex = 12;
            this.dice_stop.Text = "stop";
            this.dice_stop.UseVisualStyleBackColor = true;
            this.dice_stop.Click += new System.EventHandler(this.dice_stop_Click);
            // 
            // dice_clear
            // 
            this.dice_clear.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.dice_clear.Location = new System.Drawing.Point(877, 157);
            this.dice_clear.Name = "dice_clear";
            this.dice_clear.Size = new System.Drawing.Size(75, 23);
            this.dice_clear.TabIndex = 13;
            this.dice_clear.Text = "clear";
            this.dice_clear.UseVisualStyleBackColor = true;
            this.dice_clear.Click += new System.EventHandler(this.dice_clear_Click);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(561, 68);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(133, 29);
            this.label5.TabIndex = 14;
            this.label5.Text = "Digital dice";
            // 
            // timer4
            // 
            this.timer4.Interval = 1000;
            this.timer4.Tick += new System.EventHandler(this.timer4_Tick);
            // 
            // textBox2
            // 
            this.textBox2.AllowDrop = true;
            this.textBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox2.Location = new System.Drawing.Point(771, 31);
            this.textBox2.Multiline = true;
            this.textBox2.Name = "textBox2";
            this.textBox2.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.textBox2.Size = new System.Drawing.Size(95, 104);
            this.textBox2.TabIndex = 15;
            // 
            // pictureBox1
            // 
            this.pictureBox1.Image = ((System.Drawing.Image)(resources.GetObject("pictureBox1.Image")));
            this.pictureBox1.Location = new System.Drawing.Point(784, 274);
            this.pictureBox1.Name = "pictureBox1";
            this.pictureBox1.Size = new System.Drawing.Size(100, 50);
            this.pictureBox1.TabIndex = 16;
            this.pictureBox1.TabStop = false;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(561, 253);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(149, 29);
            this.label6.TabIndex = 17;
            this.label6.Text = "Screen Blink";
            // 
            // timer5
            // 
            this.timer5.Enabled = true;
            this.timer5.Interval = 1000;
            this.timer5.Tick += new System.EventHandler(this.timer5_Tick);
            // 
            // Form1
            // 
            this.AllowDrop = true;
            this.AutoScaleDimensions = new System.Drawing.SizeF(14F, 29F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(989, 393);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.pictureBox1);
            this.Controls.Add(this.textBox2);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.dice_clear);
            this.Controls.Add(this.dice_stop);
            this.Controls.Add(this.dice_start);
            this.Controls.Add(this.stopwatch_clear);
            this.Controls.Add(this.multi_line_stop_click);
            this.Controls.Add(this.multi_line_start);
            this.Controls.Add(this.multi_line_textbox);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.stop_stop_watch);
            this.Controls.Add(this.start_stop_watch);
            this.Controls.Add(this.label1);
            this.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Margin = new System.Windows.Forms.Padding(7);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Digital Clock";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Timer timer1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button start_stop_watch;
        private System.Windows.Forms.Button stop_stop_watch;
        private System.Windows.Forms.Timer timer2;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Timer timer3;
        private System.Windows.Forms.Label multi_line_textbox;
        private System.Windows.Forms.Button multi_line_start;
        private System.Windows.Forms.Button multi_line_stop_click;
        private System.Windows.Forms.Button stopwatch_clear;
        private System.Windows.Forms.Button dice_start;
        private System.Windows.Forms.Button dice_stop;
        private System.Windows.Forms.Button dice_clear;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Timer timer4;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Timer timer5;
    }
}


﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Test
{
    public partial class Login_Page : Form
    {
        public Login_Page()
        {
            InitializeComponent();
        }

        private void b_exit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void textBox1_Click(object sender, EventArgs e)
        {
            textBox1.Text = String.Empty;
        }

        private void textBox2_Click(object sender, EventArgs e)
        {
            textBox2.Text = String.Empty;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "s" && textBox2.Text == "s")
            {
                new Form1().Show(); 
            }
            else if(textBox1.Text == "d" && textBox2.Text == "d")
            {
                new Doctor.Doctor().Show();
            }
            else
                MessageBox.Show("error");
        }
    }
}

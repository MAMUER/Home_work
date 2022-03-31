#include "Complex.h"

int main()
{
    setlocale(LC_ALL, "rus");

    string path = "complex.txt";

    int n = 0;

    double re = 0, im = 0;

    Complex a;

    int serial_number = 0;

    ifstream fin;

    fin.open(path);

    if (!fin.is_open())
    {
        cout << "Ошибка\n" << endl;
    }

    else
    {
        string string_name;

        while (!fin.eof())
        {
            string_name = "";

            fin >> string_name;

            n = stoi(string_name);

            break;
        }

        if (n <= 0)
        {
            cout << "Неправильное число количества комплексных чисел или 0";
            fin.close();
        }

        Complex* p = new Complex[n];

        while (!fin.eof())
        {
            string_name = "";

            fin >> string_name;

            string real;

            string imag;

            for (int i = 0; i < size(string_name) - 1; i++)
            {
                if (string_name[i] == '+')
                {
                    real.resize(i);

                    for (int j = 0; j < i; j++)
                    {
                        real[j] = string_name[j];
                    }

                    re = stoi(real);

                    imag.resize(size(string_name) - 3 - i);

                    int z = 0;

                    for (int j = i + 1; j < size(string_name) - 2; j++)
                    {
                        for (z;;)
                        {
                            imag[z] = string_name[j];
                            z++;
                            break;
                        }
                    }

                    im = stoi(imag);

                    a.Change_re(re);
                    a.Change_im(im);

                    p[serial_number] = a;
                    re = 0;
                    im = 0;
                    serial_number++;

                    goto here;
                }

                else if ((i != 0) and (string_name[i] == '-'))
                {
                    real.resize(i);

                    for (int j = 0; j < i; j++)
                    {
                        real[j] = string_name[j];
                    }

                    re = stoi(real);

                    imag.resize(size(string_name) - 3 - i);

                    int z = 0;

                    for (int j = i + 1; j < size(string_name) - 2; j++)
                    {
                        for (z;;)
                        {
                            imag[z] = string_name[j];
                            z++;
                            break;
                        }
                    }

                    im = stoi(imag);

                    a.Change_re(re);
                    a.Change_im(im);

                    p[serial_number] = a;
                    re = 0;
                    im = 0;
                    serial_number++;

                    goto here;
                }

                else if (string_name[size(string_name) - 2] != 'i')
                {
                    real.resize(size(string_name) - 1);

                    for (int j = 0; j < size(string_name) - 1; j++)
                    {
                        real[j] = string_name[j];
                    }

                    re = stoi(real);

                    a.Change_re(re);

                    p[serial_number] = a;
                    re = 0;
                    serial_number++;

                    goto here;
                }
            }

            for (int i = 0; i < size(string_name) - 2; i++)
            {
                imag.resize(size(string_name) - 2);

                for (int j = 0; j < size(string_name) - 2; j++)
                {
                    imag[j] = string_name[j];
                }

                im = stoi(imag);

                a.Change_im(im);

                p[serial_number] = a;
                im = 0;
                serial_number++;

                break;
            }

        here:
            int o = 0;
        }

        fin.close();

        int j = 1;

        for (int i = 0; i < n;)
        {
            for (j; j < n;)
            {
                if (p[i].Get_module(p[i]) <= p[j].Get_module(p[j]))
                {
                    if (j == (n - 1))
                    {
                        cout << "\nСамый большой модуль: ";
                        p[j].Print_Complex();
                        cout << "\n";

                        i = n;
                        break;
                    }

                    else
                    {
                        i = j;
                        j = 1 + i;
                    }
                }

                else
                {
                    j++;
                    break;
                }

            }
        }
        delete[] p;
    }
}
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_comb1_currentIndexChanged(int index);

    void on_oper_currentIndexChanged(int index);

    void on_comb2_currentIndexChanged(int index);

private:

    Ui::MainWindow *ui;
    void my_func(void);

};

#endif // MAINWINDOW_H

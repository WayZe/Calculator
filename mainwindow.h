#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVector>
#include <QLineEdit>
#include <QGridLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVector<QPushButton *> *_numberBtns = nullptr;
    QLineEdit *_outputLE = nullptr;
    QGridLayout *_numberBtnsLayout = nullptr;
    int _HEIGHT = 3;
    int _WIDTH = 3;
    QVector<QPushButton *> *_actionBtns = nullptr;
    char _actions[3] = {'/', 'x', '='};

private:
    void InitUi();
};

#endif // MAINWINDOW_H

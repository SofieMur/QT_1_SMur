#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QLabel *titleLabel;

    QLineEdit *lastNameEdit;
    QLineEdit *firstNameEdit;
    QLineEdit *middleNameEdit;

    QSpinBox *daySpin;
    QSpinBox *monthSpin;
    QSpinBox *yearSpin;

    QDoubleSpinBox *heightSpin;

    QPushButton *doneButton;
};

#endif // MAINWINDOW_H
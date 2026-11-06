#include "mainwindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QWidget>
#include <QIcon>
#include <QFont>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setFixedSize(500, 400);
    setWindowTitle("Форма регистрации");

    setWindowIcon(QIcon("C:/Users/sofie/Documents/QT_1_SM/images/icons/avatar.jpg"));

    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget);

    titleLabel = new QLabel("Форма регистрации", this);
    QFont font = titleLabel->font();
    font.setBold(true);
    font.setPointSize(12);
    titleLabel->setFont(font);
    titleLabel->setAlignment(Qt::AlignCenter);
    mainLayout->addWidget(titleLabel);

    QGridLayout *gridLayout = new QGridLayout();

    gridLayout->addWidget(new QLabel("Фамилия:", this), 0, 0);
    lastNameEdit = new QLineEdit(this);
    lastNameEdit->setPlaceholderText("введите свою фамилию");
    gridLayout->addWidget(lastNameEdit, 0, 1);

    gridLayout->addWidget(new QLabel("Имя:", this), 1, 0);
    firstNameEdit = new QLineEdit(this);
    firstNameEdit->setPlaceholderText("введите своё имя");
    gridLayout->addWidget(firstNameEdit, 1, 1);

    gridLayout->addWidget(new QLabel("Отчество:", this), 2, 0);
    middleNameEdit = new QLineEdit(this);
    middleNameEdit->setPlaceholderText("введите своё отчество (если есть)");
    gridLayout->addWidget(middleNameEdit, 2, 1);

    gridLayout->addWidget(new QLabel("Дата рождения:", this), 3, 0);

    QHBoxLayout *dateLayout = new QHBoxLayout();

    daySpin = new QSpinBox(this);
    daySpin->setRange(1, 31);
    daySpin->setValue(1);

    monthSpin = new QSpinBox(this);
    monthSpin->setRange(1, 12);
    monthSpin->setValue(1);

    yearSpin = new QSpinBox(this);
    yearSpin->setRange(1900, 2100);
    yearSpin->setValue(1900);

    dateLayout->addWidget(daySpin);
    dateLayout->addWidget(monthSpin);
    dateLayout->addWidget(yearSpin);

    gridLayout->addLayout(dateLayout, 3, 1);

    gridLayout->addWidget(new QLabel("Рост (в метрах):", this), 4, 0);
    heightSpin = new QDoubleSpinBox(this);
    heightSpin->setDecimals(2);
    heightSpin->setRange(0.00, 3.00);
    heightSpin->setSingleStep(0.01);
    heightSpin->setValue(0.00);
    gridLayout->addWidget(heightSpin, 4, 1);

    mainLayout->addLayout(gridLayout);

    doneButton = new QPushButton("Готово", this);

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addStretch();
    buttonLayout->addWidget(doneButton);
    buttonLayout->addStretch();
    mainLayout->addLayout(buttonLayout);

    mainLayout->addStretch();
}

MainWindow::~MainWindow()
{
}
/********************************************************************************
** Form generated from reading UI file 'dialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG1_H
#define UI_DIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog1
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *tiempo2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *tiempo1;
    QLineEdit *tiempo5;
    QLabel *label_7;
    QLineEdit *tiempo4;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *tiempo3;
    QLineEdit *media;
    QLabel *label_8;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName(QStringLiteral("Dialog1"));
        Dialog1->resize(530, 440);
        buttonBox = new QDialogButtonBox(Dialog1);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(150, 380, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        label = new QLabel(Dialog1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 411, 16));
        pushButton = new QPushButton(Dialog1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 180, 101, 61));
        pushButton_2 = new QPushButton(Dialog1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 60, 141, 23));
        tiempo2 = new QLineEdit(Dialog1);
        tiempo2->setObjectName(QStringLiteral("tiempo2"));
        tiempo2->setGeometry(QRect(190, 140, 141, 20));
        label_4 = new QLabel(Dialog1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(210, 120, 71, 16));
        label_5 = new QLabel(Dialog1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 180, 71, 16));
        tiempo1 = new QLineEdit(Dialog1);
        tiempo1->setObjectName(QStringLiteral("tiempo1"));
        tiempo1->setGeometry(QRect(30, 140, 141, 20));
        tiempo5 = new QLineEdit(Dialog1);
        tiempo5->setObjectName(QStringLiteral("tiempo5"));
        tiempo5->setGeometry(QRect(30, 260, 141, 20));
        label_7 = new QLabel(Dialog1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 240, 71, 16));
        tiempo4 = new QLineEdit(Dialog1);
        tiempo4->setObjectName(QStringLiteral("tiempo4"));
        tiempo4->setGeometry(QRect(190, 200, 141, 20));
        label_6 = new QLabel(Dialog1);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(210, 180, 71, 16));
        label_3 = new QLabel(Dialog1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 120, 61, 16));
        tiempo3 = new QLineEdit(Dialog1);
        tiempo3->setObjectName(QStringLiteral("tiempo3"));
        tiempo3->setGeometry(QRect(30, 200, 141, 20));
        media = new QLineEdit(Dialog1);
        media->setObjectName(QStringLiteral("media"));
        media->setGeometry(QRect(170, 330, 141, 25));
        label_8 = new QLabel(Dialog1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 330, 131, 17));
        pushButton_3 = new QPushButton(Dialog1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 380, 89, 25));

        retranslateUi(Dialog1);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog1, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog1, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QApplication::translate("Dialog1", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonBox->setToolTip(QApplication::translate("Dialog1", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Dialog1", "Selecciona el directorio donde est\303\241n las im\303\241genes:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog1", "MODIFICAR", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog1", "Directorio origen", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog1", "Tiempo 2", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog1", "Tiempo 3", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog1", "Tiempo 5", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog1", "Tiempo 4", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog1", "Tiempo 1:", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog1", "MEDIA TIEMPOS:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog1", "Reiniciar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H

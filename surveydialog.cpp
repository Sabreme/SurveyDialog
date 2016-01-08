#include "surveydialog.h"
#include "ui_surveydialog.h"
#include <iostream>

SurveyDialog::SurveyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SurveyDialog)
{
    ui->setupUi(this);
    mapSignals();
}

SurveyDialog::~SurveyDialog()
{
    delete ui;
}

void SurveyDialog::on_buttonSubmit_clicked()
{

    //std::cout << "Button Pressed" << std::endl;
}

//void SurveyDialog::selectionMade(QString boxName)
//{
//    std::cout << boxName.toStdString() << std::endl;
//}

void SurveyDialog::selectionMade(QAbstractButton *radioButton)
{
    std::cout << radioButton->objectName().toStdString() << std::endl;
}


void SurveyDialog::mapSignals()
{
//    mapper = new QSignalMapper(this);

//    QObject::connect (this->ui->quest1Ans1, SIGNAL(clicked()),mapper,SLOT(map()));
//    mapper->setMapping(this->ui->quest1Ans1, this->ui->quest1Ans1->objectName());

//    connect(mapper,SIGNAL(mapped(QString)),this,SLOT(selectionMade(QString)));

    group1 = new QButtonGroup(ui->frame_Choice1);
    group1->addButton(ui->quest1Ans1);
    group1->addButton(ui->quest1Ans2);
    group1->addButton(ui->quest1Ans3);
    group1->addButton(ui->quest1Ans4);
    group1->addButton(ui->quest1Ans5);

    QObject::connect(group1,SIGNAL(buttonClicked(QAbstractButton*)),this,SLOT(selectionMade(QAbstractButton*)));

}



void SurveyDialog::on_quest1Ans1_clicked()
{


}

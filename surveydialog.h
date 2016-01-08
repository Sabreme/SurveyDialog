#ifndef SURVEYDIALOG_H
#define SURVEYDIALOG_H

#include <QDialog>
#include <QFrame>
#include <QCheckBox>
#include <QSignalMapper>
#include <QButtonGroup>


namespace Ui {
class SurveyDialog;
}

class SurveyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SurveyDialog(QWidget *parent = 0);
    ~SurveyDialog();


private slots:
    void on_buttonSubmit_clicked();

    //void selectionMade(QString boxName);
    void selectionMade (QAbstractButton *radioButton);

    void mapSignals();




    void on_quest1Ans1_clicked();

private:
    Ui::SurveyDialog *ui;

    QSignalMapper * mapper;
    QButtonGroup * group1;
};

#endif // SURVEYDIALOG_H

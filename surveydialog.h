#ifndef SURVEYDIALOG_H
#define SURVEYDIALOG_H

#include <QDialog>

namespace Ui {
class SurveyDialog;
}

class SurveyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SurveyDialog(QWidget *parent = 0);
    ~SurveyDialog();

private:
    Ui::SurveyDialog *ui;
};

#endif // SURVEYDIALOG_H

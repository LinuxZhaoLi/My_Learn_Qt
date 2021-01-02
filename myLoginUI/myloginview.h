#ifndef MYLOGINVIEW_H
#define MYLOGINVIEW_H

#include <QWidget>
namespace Ui {  // 导入文件
class Form;
}
class myLoginView : public QWidget
{
    Q_OBJECT
public:
    explicit myLoginView(QWidget *parent = 0);

signals:

public slots:
private slots:
    void on_lineEdit_2_textChanged(const QString &arg1);
    void on_lineEdit_textChanged(const QString &arg1);
    void on_pushButton_clicked();
private:
    Ui::Form *loginView;


};

#endif // MYLOGINVIEW_H

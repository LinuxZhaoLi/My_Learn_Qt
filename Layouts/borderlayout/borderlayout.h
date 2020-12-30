#ifndef BORDERLAYOUT_H
#define BORDERLAYOUT_H

#include <QLayout>
#include <QRect>

class BorderLayout : public QLayout   // 自定义一个layout
{
public:
    enum Position { West, North, South, East, Center }; //枚举： 西、北、南、东、中

    explicit BorderLayout(QWidget *parent, int margin = 0, int spacing = -1);
    BorderLayout(int spacing = -1);
    ~BorderLayout();

    void addItem(QLayoutItem *item) Q_DECL_OVERRIDE;   // 添加item
    void addWidget(QWidget *widget, Position position);  // 添加widget
    Qt::Orientations expandingDirections() const Q_DECL_OVERRIDE;    // 填充方向
    bool hasHeightForWidth() const Q_DECL_OVERRIDE;
    int count() const Q_DECL_OVERRIDE;
    QLayoutItem *itemAt(int index) const Q_DECL_OVERRIDE;
    QSize minimumSize() const Q_DECL_OVERRIDE;
    void setGeometry(const QRect &rect) Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;
    QLayoutItem *takeAt(int index) Q_DECL_OVERRIDE;

    void add(QLayoutItem *item, Position position);

private:
    struct ItemWrapper  // 结构体  属性： （1）位置 （2）对象
    {
        ItemWrapper(QLayoutItem *i, Position p) {  // 构造函数
            item = i;
            position = p;
        }

        QLayoutItem *item;
        Position position;
    };

    enum SizeType { MinimumSize, SizeHint };  // 类型
    QSize calculateSize(SizeType sizeType) const;  //

    QList<ItemWrapper *> list;  //
};

#endif // BORDERLAYOUT_H

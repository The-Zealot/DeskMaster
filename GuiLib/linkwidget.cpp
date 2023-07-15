#include "linkwidget.h"

LinkWidget::LinkWidget(QWidget *parent) : QWidget(parent)
{
    _layout     = new QVBoxLayout(this);
    _button     = new QPushButton(this);
    _labelName  = new QLabel(this);

    this->setLayout(_layout);

    _labelName->setAlignment(Qt::AlignCenter);
    _button->setFlat(true);
    _button->setIconSize(QSize(64, 64));

    this->resize(90, 90);

    _layout->addWidget(_button, 0);
    _layout->addWidget(_labelName, 1);
    _layout->setSpacing(0);

    _button->setSizePolicy(QSizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding));
    _labelName->setSizePolicy(QSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed));
    this->setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));

    _labelName->show();
    _button->show();
}

void LinkWidget::setLabel(const QString &name)
{
    _labelName->setText(name);
}

void LinkWidget::setLink(const QString &path)
{
    _path = path;
}

void LinkWidget::setIcon(const QIcon &icon)
{
    _button->setIcon(icon);
}

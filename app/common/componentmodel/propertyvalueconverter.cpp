/// Copyright 2010-2012 4kdownload.com (developers@4kdownload.com)
/**
    This file is part of 4k Download.

    4k Download is free software; you can redistribute it and/or modify
    it under the terms of the one of two licenses as you choose:

    1. GNU GENERAL PUBLIC LICENSE Version 3
    (See file COPYING.GPLv3 for details).

    2. 4k Download Commercial License
    (Send request to developers@4kdownload.com for details).
   
*/


#include "componentmodel/propertyvalueconverter.h"

using namespace ComponentModel;


PropertyValueConverter::PropertyValueConverter(QObject *parent) :
    QObject(parent)
{
}


QVariant PropertyValueConverter::convert(const QObject* target, const QString& property, const QVariant& value) const
{
    Q_UNUSED(target);
    Q_UNUSED(property);

    return value;
}


QVariant PropertyValueConverter::convertBack(QObject* target, const QString& property, const QVariant& value) const
{
    Q_UNUSED(target);
    Q_UNUSED(property);

    return value;
}

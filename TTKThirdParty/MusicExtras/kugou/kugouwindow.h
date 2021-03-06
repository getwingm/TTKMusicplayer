#ifndef KUGOUWINDOW_H
#define KUGOUWINDOW_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QWidget>
#include "kugouurl.h"

#ifdef MUSIC_WEBKIT
class QWebView;
#endif

class MUSIC_EXTRAS_EXPORT KugouWindow : public QWidget
{
    Q_OBJECT
public:
    explicit KugouWindow(QWidget *parent = 0);
    ~KugouWindow();

    static QString getClassName();

public Q_SLOTS:
    void differButtonIndexChanged(int index);

protected:
#ifdef MUSIC_WEBKIT
    QWebView *m_webView;
#endif
};

#endif // KUGOUWINDOW_H

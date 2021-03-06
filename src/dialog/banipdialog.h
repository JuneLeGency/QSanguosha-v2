/********************************************************************
    Copyright (c) 2013-2014 - QSanguosha-Rara

    This file is part of QSanguosha-Hegemony.

    This game is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License as
    published by the Free Software Foundation; either version 3.0
    of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    General Public License for more details.

    See the LICENSE file for more details.

    QSanguosha-Rara
    *********************************************************************/

#ifndef BANIPDIALOG_H
#define BANIPDIALOG_H

class Server;
class QListWidget;
class ServerPlayer;

class BanIpDialog : public QDialog
{
    Q_OBJECT

public:
    BanIpDialog(QWidget *parent, Server *server);

private:
    QListWidget *left;
    QListWidget *right;

    Server *server;
    QList<ServerPlayer *> sp_list;

    void loadIPList();
    void loadBannedList();

private slots:
    void addPlayer(ServerPlayer *player);
    void removePlayer();

    void insertClicked();
    void removeClicked();
    void kickClicked();

    void save();

};

#endif // BANIPDIALOG_H

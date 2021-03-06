#ifndef MARKET_H
#define MARKET_H

#include <QPair>
#include <QStringList>

class QTime;
class QDomDocument;

struct Market {
    QString label;
    QStringList codes;
    QStringList descs;
    QStringList regexs;
    QList<QList<QPair<QTime, QTime>>> tradetimeses;
};

void loadCommonMarketData();
Market loadMkt(const QString &file_name);
QList<QTime> getEndPoints(const QString &instrumentID);

#endif // MARKET_H

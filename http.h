#include<QObject>
class http:public QObject
{
	Q_OBJECT
	public:
		QByteArray get(const QString &strUrl);
		QByteArray post(const QString &strUrl, QByteArray data);
};

/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#ifndef _SWG_SWGUserApi_H_
#define _SWG_SWGUserApi_H_

#include "SWGHttpRequest.h"

#include <QList>
#include <QString>
#include "SWGUser.h"

#include <QObject>

namespace Swagger {

class SWGUserApi: public QObject {
    Q_OBJECT

public:
    SWGUserApi();
    SWGUserApi(QString host, QString basePath);
    ~SWGUserApi();

    QString host;
    QString basePath;

    void createUser(SWGUser body);
    void createUsersWithArrayInput(QList<SWGUser*>* body);
    void createUsersWithListInput(QList<SWGUser*>* body);
    void deleteUser(QString* username);
    void getUserByName(QString* username);
    void loginUser(QString* username, QString* password);
    void logoutUser();
    void updateUser(QString* username, SWGUser body);
    
private:
    void createUserCallback (HttpRequestWorker * worker);
    void createUsersWithArrayInputCallback (HttpRequestWorker * worker);
    void createUsersWithListInputCallback (HttpRequestWorker * worker);
    void deleteUserCallback (HttpRequestWorker * worker);
    void getUserByNameCallback (HttpRequestWorker * worker);
    void loginUserCallback (HttpRequestWorker * worker);
    void logoutUserCallback (HttpRequestWorker * worker);
    void updateUserCallback (HttpRequestWorker * worker);
    
signals:
    void createUserSignal();
    void createUsersWithArrayInputSignal();
    void createUsersWithListInputSignal();
    void deleteUserSignal();
    void getUserByNameSignal(SWGUser* summary);
    void loginUserSignal(QString* summary);
    void logoutUserSignal();
    void updateUserSignal();
    
};
}
#endif

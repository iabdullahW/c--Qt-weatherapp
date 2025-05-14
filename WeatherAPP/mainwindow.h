#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/*
 * Project by : CppBuzz.com
 * Purpose    : Education
 * User are allowed to download and modify the project as per their need.
 *
 */

#include <QMainWindow>
#include <QNetworkReply>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onWeatherDataReceived();
    void on_btnMoreDetails_clicked();
    void on_btnGo_clicked();

private:
    Ui::MainWindow *ui;
    QStringList countryCodes;
    void populateComboBox();
    int getWeatherData();
    void onPostDataReceived();
    QNetworkReply* reply;
    QNetworkAccessManager *manager;
    void hideAllButtons();
    void showAllButtons();
    void showWeatherLogo(int);
};
#endif // MAINWINDOW_H

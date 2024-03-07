/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *Top_Header;
    QVBoxLayout *verticalLayout_2;
    QLabel *documentHeading;
    QWidget *Elevator_And_Passanger_Heading;
    QHBoxLayout *horizontalLayout_4;
    QLabel *PassengerView_2;
    QLabel *PassengerView;
    QWidget *ElevatorsAndPassangerView;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_7;
    QWidget *ElevatorGUI;
    QGraphicsView *graphicsView;
    QLabel *PassengerView_5;
    QWidget *AdminViewAndConsoleLogHeading;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PassengerView_3;
    QLabel *PassengerView_4;
    QWidget *FooterArea;
    QHBoxLayout *horizontalLayout_3;
    QWidget *AdminViewFunctions;
    QHBoxLayout *horizontalLayout_5;
    QFrame *MapSettings;
    QHBoxLayout *horizontalLayout_8;
    QFrame *frame;
    QWidget *FloorAndElevatorSelector;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QSpinBox *nOfFloors;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QSpinBox *nOfElevators;
    QWidget *changeDimensionsButtonArea;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame_2;
    QLabel *label_4;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(1702, 656);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMouseTracking(true);
        MainWindow->setFocusPolicy(Qt::ClickFocus);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setDocumentMode(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Top_Header = new QWidget(centralwidget);
        Top_Header->setObjectName(QString::fromUtf8("Top_Header"));
        Top_Header->setGeometry(QRect(0, 0, 1701, 41));
        verticalLayout_2 = new QVBoxLayout(Top_Header);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        documentHeading = new QLabel(Top_Header);
        documentHeading->setObjectName(QString::fromUtf8("documentHeading"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        documentHeading->setFont(font);
        documentHeading->setAutoFillBackground(false);
        documentHeading->setStyleSheet(QString::fromUtf8("background:rgb(243,243,243)"));
        documentHeading->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(documentHeading);

        Elevator_And_Passanger_Heading = new QWidget(Top_Header);
        Elevator_And_Passanger_Heading->setObjectName(QString::fromUtf8("Elevator_And_Passanger_Heading"));
        horizontalLayout_4 = new QHBoxLayout(Elevator_And_Passanger_Heading);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        PassengerView_2 = new QLabel(Elevator_And_Passanger_Heading);
        PassengerView_2->setObjectName(QString::fromUtf8("PassengerView_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PassengerView_2->sizePolicy().hasHeightForWidth());
        PassengerView_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        PassengerView_2->setFont(font1);
        PassengerView_2->setStyleSheet(QString::fromUtf8("background: rgb(204,204,204)"));
        PassengerView_2->setTextFormat(Qt::RichText);
        PassengerView_2->setAlignment(Qt::AlignCenter);
        PassengerView_2->setWordWrap(false);

        horizontalLayout_4->addWidget(PassengerView_2);

        PassengerView = new QLabel(Elevator_And_Passanger_Heading);
        PassengerView->setObjectName(QString::fromUtf8("PassengerView"));
        sizePolicy1.setHeightForWidth(PassengerView->sizePolicy().hasHeightForWidth());
        PassengerView->setSizePolicy(sizePolicy1);
        PassengerView->setFont(font1);
        PassengerView->setStyleSheet(QString::fromUtf8("background: rgb(204,204,204)"));
        PassengerView->setTextFormat(Qt::RichText);
        PassengerView->setAlignment(Qt::AlignCenter);
        PassengerView->setWordWrap(false);

        horizontalLayout_4->addWidget(PassengerView);


        verticalLayout_2->addWidget(Elevator_And_Passanger_Heading);

        ElevatorsAndPassangerView = new QWidget(centralwidget);
        ElevatorsAndPassangerView->setObjectName(QString::fromUtf8("ElevatorsAndPassangerView"));
        ElevatorsAndPassangerView->setGeometry(QRect(0, 40, 1701, 351));
        horizontalLayout = new QHBoxLayout(ElevatorsAndPassangerView);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_7 = new QWidget(ElevatorsAndPassangerView);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        ElevatorGUI = new QWidget(widget_7);
        ElevatorGUI->setObjectName(QString::fromUtf8("ElevatorGUI"));
        ElevatorGUI->setGeometry(QRect(0, 0, 841, 351));
        graphicsView = new QGraphicsView(ElevatorGUI);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(22, -1, 811, 351));
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setStyleSheet(QString::fromUtf8("padding:5;"));
        PassengerView_5 = new QLabel(ElevatorGUI);
        PassengerView_5->setObjectName(QString::fromUtf8("PassengerView_5"));
        PassengerView_5->setGeometry(QRect(0, 0, 21, 361));
        sizePolicy1.setHeightForWidth(PassengerView_5->sizePolicy().hasHeightForWidth());
        PassengerView_5->setSizePolicy(sizePolicy1);
        PassengerView_5->setFont(font1);
        PassengerView_5->setStyleSheet(QString::fromUtf8("background: rgb(204,204,204)"));
        PassengerView_5->setTextFormat(Qt::RichText);
        PassengerView_5->setScaledContents(true);
        PassengerView_5->setAlignment(Qt::AlignCenter);
        PassengerView_5->setWordWrap(true);

        horizontalLayout->addWidget(widget_7);

        AdminViewAndConsoleLogHeading = new QWidget(centralwidget);
        AdminViewAndConsoleLogHeading->setObjectName(QString::fromUtf8("AdminViewAndConsoleLogHeading"));
        AdminViewAndConsoleLogHeading->setGeometry(QRect(0, 390, 1701, 31));
        horizontalLayout_2 = new QHBoxLayout(AdminViewAndConsoleLogHeading);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PassengerView_3 = new QLabel(AdminViewAndConsoleLogHeading);
        PassengerView_3->setObjectName(QString::fromUtf8("PassengerView_3"));
        sizePolicy1.setHeightForWidth(PassengerView_3->sizePolicy().hasHeightForWidth());
        PassengerView_3->setSizePolicy(sizePolicy1);
        PassengerView_3->setFont(font1);
        PassengerView_3->setStyleSheet(QString::fromUtf8("background: rgb(204,204,204)"));
        PassengerView_3->setTextFormat(Qt::RichText);
        PassengerView_3->setAlignment(Qt::AlignCenter);
        PassengerView_3->setWordWrap(false);

        horizontalLayout_2->addWidget(PassengerView_3);

        PassengerView_4 = new QLabel(AdminViewAndConsoleLogHeading);
        PassengerView_4->setObjectName(QString::fromUtf8("PassengerView_4"));
        sizePolicy1.setHeightForWidth(PassengerView_4->sizePolicy().hasHeightForWidth());
        PassengerView_4->setSizePolicy(sizePolicy1);
        PassengerView_4->setFont(font1);
        PassengerView_4->setStyleSheet(QString::fromUtf8("background: rgb(204,204,204)"));
        PassengerView_4->setTextFormat(Qt::RichText);
        PassengerView_4->setAlignment(Qt::AlignCenter);
        PassengerView_4->setWordWrap(false);

        horizontalLayout_2->addWidget(PassengerView_4);

        FooterArea = new QWidget(centralwidget);
        FooterArea->setObjectName(QString::fromUtf8("FooterArea"));
        FooterArea->setGeometry(QRect(0, 430, 1691, 211));
        horizontalLayout_3 = new QHBoxLayout(FooterArea);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        AdminViewFunctions = new QWidget(FooterArea);
        AdminViewFunctions->setObjectName(QString::fromUtf8("AdminViewFunctions"));
        horizontalLayout_5 = new QHBoxLayout(AdminViewFunctions);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        MapSettings = new QFrame(AdminViewFunctions);
        MapSettings->setObjectName(QString::fromUtf8("MapSettings"));
        MapSettings->setFrameShape(QFrame::StyledPanel);
        MapSettings->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(MapSettings);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        frame = new QFrame(MapSettings);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        FloorAndElevatorSelector = new QWidget(frame);
        FloorAndElevatorSelector->setObjectName(QString::fromUtf8("FloorAndElevatorSelector"));
        FloorAndElevatorSelector->setGeometry(QRect(10, 40, 391, 71));
        FloorAndElevatorSelector->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(FloorAndElevatorSelector);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(FloorAndElevatorSelector);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        nOfFloors = new QSpinBox(widget);
        nOfFloors->setObjectName(QString::fromUtf8("nOfFloors"));
        nOfFloors->setMinimum(2);
        nOfFloors->setMaximum(10);
        nOfFloors->setValue(5);

        horizontalLayout_6->addWidget(nOfFloors);


        verticalLayout_3->addWidget(widget);

        widget_5 = new QWidget(FloorAndElevatorSelector);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_7 = new QHBoxLayout(widget_5);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        nOfElevators = new QSpinBox(widget_5);
        nOfElevators->setObjectName(QString::fromUtf8("nOfElevators"));
        nOfElevators->setMinimum(2);
        nOfElevators->setMaximum(10);
        nOfElevators->setValue(3);

        horizontalLayout_7->addWidget(nOfElevators);


        verticalLayout_3->addWidget(widget_5);

        changeDimensionsButtonArea = new QWidget(frame);
        changeDimensionsButtonArea->setObjectName(QString::fromUtf8("changeDimensionsButtonArea"));
        changeDimensionsButtonArea->setGeometry(QRect(20, 130, 361, 20));
        verticalLayout_5 = new QVBoxLayout(changeDimensionsButtonArea);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(changeDimensionsButtonArea);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_5->addWidget(pushButton);

        widget_4 = new QWidget(frame);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(1, 1, 109, 17));
        widget_4->setFont(font1);
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 401, 21));
        label->setFont(font1);
        label->setLayoutDirection(Qt::RightToLeft);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(frame);

        frame_2 = new QFrame(MapSettings);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 391, 21));
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_4->setAlignment(Qt::AlignCenter);
        widget_2 = new QWidget(frame_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(10, 50, 391, 91));
        verticalLayout_8 = new QVBoxLayout(widget_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_8->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_8->addWidget(pushButton_3);


        horizontalLayout_8->addWidget(frame_2);


        horizontalLayout_5->addWidget(MapSettings);


        horizontalLayout_3->addWidget(AdminViewFunctions);

        widget_8 = new QWidget(FooterArea);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));

        horizontalLayout_3->addWidget(widget_8);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        documentHeading->setText(QCoreApplication::translate("MainWindow", "Assignment 3 Comp 3004 Nikhil Sharma ", nullptr));
        PassengerView_2->setText(QCoreApplication::translate("MainWindow", "Elevators", nullptr));
        PassengerView->setText(QCoreApplication::translate("MainWindow", "Passanger View", nullptr));
        PassengerView_5->setText(QCoreApplication::translate("MainWindow", "F L O O R S  ", nullptr));
        PassengerView_3->setText(QCoreApplication::translate("MainWindow", "ADMIN VIEW", nullptr));
        PassengerView_4->setText(QCoreApplication::translate("MainWindow", "CONSOLE LOGS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "# Floors", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "# Elevators", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Change Dimensions", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "MAP SETTINGS", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Building Emergency Testing", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Fire", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Power Outage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

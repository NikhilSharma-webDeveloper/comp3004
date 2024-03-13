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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
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
    QPushButton *changeDimensionBtn;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame_2;
    QLabel *label_4;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *fireButton;
    QPushButton *powerOutageButton;
    QWidget *widget_8;
    QTextBrowser *consoleOutput;
    QWidget *widget_7;
    QWidget *ElevatorGUI;
    QGraphicsView *graphicsView;
    QLabel *PassengerView_5;
    QWidget *widget_3;
    QFrame *frame_3;
    QLabel *label_5;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QSpinBox *spinBoxFloors;
    QPushButton *pushButtonUp;
    QPushButton *pushButtonDown;
    QFrame *frame_4;
    QLabel *label_7;
    QWidget *widget_9;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_4;
    QPushButton *two;
    QPushButton *four;
    QPushButton *six;
    QPushButton *eight;
    QPushButton *ten;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_6;
    QPushButton *one;
    QPushButton *three;
    QPushButton *five;
    QPushButton *seven;
    QPushButton *nine;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButtonOpenDoor;
    QPushButton *pushButtonCloseDoor;
    QPushButton *helpButton;
    QLabel *label_8;
    QSpinBox *elevatorSelectedSpinBox;
    QFrame *frame_5;
    QWidget *widget_13;
    QWidget *widget_15;
    QWidget *widget_14;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEditForWeight;
    QPushButton *submitWeight;
    QLabel *label_11;
    QSpinBox *elevatorSelectedForWeight;
    QFrame *line;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(1702, 720);
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
        ElevatorsAndPassangerView->setGeometry(QRect(0, 40, 28, 18));
        horizontalLayout = new QHBoxLayout(ElevatorsAndPassangerView);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AdminViewAndConsoleLogHeading = new QWidget(centralwidget);
        AdminViewAndConsoleLogHeading->setObjectName(QString::fromUtf8("AdminViewAndConsoleLogHeading"));
        AdminViewAndConsoleLogHeading->setGeometry(QRect(0, 480, 1701, 31));
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
        FooterArea->setGeometry(QRect(0, 510, 1701, 211));
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
        changeDimensionBtn = new QPushButton(changeDimensionsButtonArea);
        changeDimensionBtn->setObjectName(QString::fromUtf8("changeDimensionBtn"));

        verticalLayout_5->addWidget(changeDimensionBtn);

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
        fireButton = new QPushButton(widget_2);
        fireButton->setObjectName(QString::fromUtf8("fireButton"));

        verticalLayout_8->addWidget(fireButton);

        powerOutageButton = new QPushButton(widget_2);
        powerOutageButton->setObjectName(QString::fromUtf8("powerOutageButton"));

        verticalLayout_8->addWidget(powerOutageButton);


        horizontalLayout_8->addWidget(frame_2);


        horizontalLayout_5->addWidget(MapSettings);


        horizontalLayout_3->addWidget(AdminViewFunctions);

        widget_8 = new QWidget(FooterArea);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        consoleOutput = new QTextBrowser(widget_8);
        consoleOutput->setObjectName(QString::fromUtf8("consoleOutput"));
        consoleOutput->setGeometry(QRect(-5, 1, 861, 221));
        QFont font2;
        font2.setPointSize(13);
        consoleOutput->setFont(font2);
        consoleOutput->setAutoFillBackground(true);
        consoleOutput->setStyleSheet(QString::fromUtf8("padding:15;"));

        horizontalLayout_3->addWidget(widget_8);

        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(0, 40, 1701, 441));
        ElevatorGUI = new QWidget(widget_7);
        ElevatorGUI->setObjectName(QString::fromUtf8("ElevatorGUI"));
        ElevatorGUI->setGeometry(QRect(-3, 1, 851, 441));
        graphicsView = new QGraphicsView(ElevatorGUI);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(22, -1, 831, 441));
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setAutoFillBackground(false);
        graphicsView->setStyleSheet(QString::fromUtf8(""));
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        graphicsView->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        graphicsView->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
        PassengerView_5 = new QLabel(ElevatorGUI);
        PassengerView_5->setObjectName(QString::fromUtf8("PassengerView_5"));
        PassengerView_5->setGeometry(QRect(0, -30, 20, 471));
        sizePolicy1.setHeightForWidth(PassengerView_5->sizePolicy().hasHeightForWidth());
        PassengerView_5->setSizePolicy(sizePolicy1);
        PassengerView_5->setFont(font1);
        PassengerView_5->setStyleSheet(QString::fromUtf8("background: rgb(204,204,204)"));
        PassengerView_5->setTextFormat(Qt::RichText);
        PassengerView_5->setScaledContents(true);
        PassengerView_5->setAlignment(Qt::AlignCenter);
        PassengerView_5->setWordWrap(true);
        widget_3 = new QWidget(widget_7);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(851, 1, 841, 441));
        frame_3 = new QFrame(widget_3);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 851, 101));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 10, 121, 17));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        widget_6 = new QWidget(frame_3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(30, 40, 281, 44));
        horizontalLayout_9 = new QHBoxLayout(widget_6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        spinBoxFloors = new QSpinBox(widget_6);
        spinBoxFloors->setObjectName(QString::fromUtf8("spinBoxFloors"));

        horizontalLayout_9->addWidget(spinBoxFloors);

        pushButtonUp = new QPushButton(frame_3);
        pushButtonUp->setObjectName(QString::fromUtf8("pushButtonUp"));
        pushButtonUp->setGeometry(QRect(490, 40, 83, 25));
        pushButtonDown = new QPushButton(frame_3);
        pushButtonDown->setObjectName(QString::fromUtf8("pushButtonDown"));
        pushButtonDown->setGeometry(QRect(630, 40, 83, 25));
        frame_4 = new QFrame(widget_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(0, 100, 421, 341));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(130, 10, 161, 20));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        widget_9 = new QWidget(frame_4);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setGeometry(QRect(10, 70, 401, 181));
        widget_10 = new QWidget(widget_9);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setGeometry(QRect(230, 20, 101, 167));
        verticalLayout_4 = new QVBoxLayout(widget_10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        two = new QPushButton(widget_10);
        two->setObjectName(QString::fromUtf8("two"));

        verticalLayout_4->addWidget(two);

        four = new QPushButton(widget_10);
        four->setObjectName(QString::fromUtf8("four"));

        verticalLayout_4->addWidget(four);

        six = new QPushButton(widget_10);
        six->setObjectName(QString::fromUtf8("six"));

        verticalLayout_4->addWidget(six);

        eight = new QPushButton(widget_10);
        eight->setObjectName(QString::fromUtf8("eight"));

        verticalLayout_4->addWidget(eight);

        ten = new QPushButton(widget_10);
        ten->setObjectName(QString::fromUtf8("ten"));

        verticalLayout_4->addWidget(ten);

        widget_11 = new QWidget(widget_9);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(60, 20, 101, 167));
        verticalLayout_6 = new QVBoxLayout(widget_11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        one = new QPushButton(widget_11);
        one->setObjectName(QString::fromUtf8("one"));

        verticalLayout_6->addWidget(one);

        three = new QPushButton(widget_11);
        three->setObjectName(QString::fromUtf8("three"));

        verticalLayout_6->addWidget(three);

        five = new QPushButton(widget_11);
        five->setObjectName(QString::fromUtf8("five"));

        verticalLayout_6->addWidget(five);

        seven = new QPushButton(widget_11);
        seven->setObjectName(QString::fromUtf8("seven"));

        verticalLayout_6->addWidget(seven);

        nine = new QPushButton(widget_11);
        nine->setObjectName(QString::fromUtf8("nine"));

        verticalLayout_6->addWidget(nine);

        widget_12 = new QWidget(frame_4);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(0, 250, 411, 43));
        horizontalLayout_10 = new QHBoxLayout(widget_12);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pushButtonOpenDoor = new QPushButton(widget_12);
        pushButtonOpenDoor->setObjectName(QString::fromUtf8("pushButtonOpenDoor"));

        horizontalLayout_10->addWidget(pushButtonOpenDoor);

        pushButtonCloseDoor = new QPushButton(widget_12);
        pushButtonCloseDoor->setObjectName(QString::fromUtf8("pushButtonCloseDoor"));

        horizontalLayout_10->addWidget(pushButtonCloseDoor);

        helpButton = new QPushButton(frame_4);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(160, 300, 83, 25));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(true);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        helpButton->setFont(font3);
        helpButton->setStyleSheet(QString::fromUtf8("background:\"red\";color:white;"));
        label_8 = new QLabel(frame_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 50, 121, 17));
        elevatorSelectedSpinBox = new QSpinBox(frame_4);
        elevatorSelectedSpinBox->setObjectName(QString::fromUtf8("elevatorSelectedSpinBox"));
        elevatorSelectedSpinBox->setGeometry(QRect(280, 40, 45, 26));
        frame_5 = new QFrame(widget_3);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(419, 99, 431, 341));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        widget_13 = new QWidget(frame_5);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        widget_13->setGeometry(QRect(0, 0, 431, 341));
        widget_15 = new QWidget(widget_13);
        widget_15->setObjectName(QString::fromUtf8("widget_15"));
        widget_15->setGeometry(QRect(1, -1, 431, 341));
        widget_14 = new QWidget(widget_15);
        widget_14->setObjectName(QString::fromUtf8("widget_14"));
        widget_14->setGeometry(QRect(0, 0, 413, 159));
        label_9 = new QLabel(widget_14);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 10, 161, 20));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(widget_14);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 50, 121, 17));
        lineEditForWeight = new QLineEdit(widget_14);
        lineEditForWeight->setObjectName(QString::fromUtf8("lineEditForWeight"));
        lineEditForWeight->setGeometry(QRect(310, 50, 41, 25));
        QFont font4;
        font4.setPointSize(8);
        lineEditForWeight->setFont(font4);
        lineEditForWeight->setAutoFillBackground(true);
        lineEditForWeight->setInputMethodHints(Qt::ImhNone);
        submitWeight = new QPushButton(widget_14);
        submitWeight->setObjectName(QString::fromUtf8("submitWeight"));
        submitWeight->setGeometry(QRect(80, 90, 241, 25));
        label_11 = new QLabel(widget_14);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 120, 401, 17));
        QFont font5;
        font5.setPointSize(8);
        font5.setBold(true);
        font5.setWeight(75);
        label_11->setFont(font5);
        label_11->setLayoutDirection(Qt::LeftToRight);
        label_11->setAlignment(Qt::AlignCenter);
        elevatorSelectedForWeight = new QSpinBox(widget_14);
        elevatorSelectedForWeight->setObjectName(QString::fromUtf8("elevatorSelectedForWeight"));
        elevatorSelectedForWeight->setGeometry(QRect(200, 50, 45, 26));
        line = new QFrame(widget_15);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 160, 421, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
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
        PassengerView_3->setText(QCoreApplication::translate("MainWindow", "ADMIN VIEW", nullptr));
        PassengerView_4->setText(QCoreApplication::translate("MainWindow", "CONSOLE LOGS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "# Floors", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "# Elevators", nullptr));
        changeDimensionBtn->setText(QCoreApplication::translate("MainWindow", "Change Dimensions", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "MAP SETTINGS", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Building Emergency Testing", nullptr));
        fireButton->setText(QCoreApplication::translate("MainWindow", "Fire", nullptr));
        powerOutageButton->setText(QCoreApplication::translate("MainWindow", "Power Outage", nullptr));
        consoleOutput->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p></body></html>", nullptr));
        PassengerView_5->setText(QCoreApplication::translate("MainWindow", "F L O O R S  ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "FLOOR PANEL", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Starting Floor", nullptr));
        pushButtonUp->setText(QCoreApplication::translate("MainWindow", "UP", nullptr));
        pushButtonDown->setText(QCoreApplication::translate("MainWindow", "DOWN ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "ELEVATOR PANEL", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        ten->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "Gound ", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButtonOpenDoor->setText(QCoreApplication::translate("MainWindow", "Open Door", nullptr));
        pushButtonCloseDoor->setText(QCoreApplication::translate("MainWindow", "Close Door", nullptr));
        helpButton->setText(QCoreApplication::translate("MainWindow", "HELP", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Elevator Selected", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "ELEVATOR PANEL", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Elevator Selected", nullptr));
        lineEditForWeight->setText(QCoreApplication::translate("MainWindow", "150", nullptr));
        submitWeight->setText(QCoreApplication::translate("MainWindow", "Submit Weight", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Maximum Safe Operational Weight Of Elevator is 250 Kg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

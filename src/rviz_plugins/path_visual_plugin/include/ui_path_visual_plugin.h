/********************************************************************************
** Form generated from reading UI file 'path_visual_plugin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATH_VISUAL_PLUGIN_H
#define UI_PATH_VISUAL_PLUGIN_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PathVisualPlugin
{
public:
    QVBoxLayout *verticalLayout_main;
    QTabWidget *tabManager;
    QWidget *tab_pathVisualization;
    QGridLayout *gridLayout_pathVisualization;
    QGroupBox *groupBox_list;
    QHBoxLayout *horizontalLayout_list;
    QTableView *tableView_list;
    QGroupBox *groupBox_add;
    QVBoxLayout *verticalLayout_add;
    QGroupBox *groupBox_add_start;
    QHBoxLayout *horizontalLayout_add_start;
    QLabel *label_add_start_x;
    QLineEdit *lineEdit_add_start_x;
    QLabel *label_add_start_y;
    QLineEdit *lineEdit_add_start_y;
    QGroupBox *groupBox_add_goal;
    QHBoxLayout *horizontalLayout_add_goal;
    QLabel *label_add_goal_x;
    QLineEdit *lineEdit_add_goal_x;
    QLabel *label_add_goal_y;
    QLineEdit *lineEdit_add_goal_y;
    QGroupBox *groupBox_add_planner;
    QHBoxLayout *horizontalLayout_add_planner;
    QLabel *label_add_planner_global;
    QComboBox *comboBox_add_planner_global;
    QPushButton *pushButton_add_add;
    QGroupBox *groupBox_files;
    QVBoxLayout *verticalLayout_files;
    QPushButton *pushButton_files_load;
    QPushButton *pushButton_files_save;

    void setupUi(QWidget *PathVisualPlugin)
    {
        if (PathVisualPlugin->objectName().isEmpty())
            PathVisualPlugin->setObjectName(QStringLiteral("PathVisualPlugin"));
        PathVisualPlugin->resize(800, 600);
        verticalLayout_main = new QVBoxLayout(PathVisualPlugin);
        verticalLayout_main->setObjectName(QStringLiteral("verticalLayout_main"));
        tabManager = new QTabWidget(PathVisualPlugin);
        tabManager->setObjectName(QStringLiteral("tabManager"));
        tabManager->setMinimumSize(QSize(100, 0));
        tabManager->setLocale(QLocale(QLocale::English, QLocale::Australia));
        tab_pathVisualization = new QWidget();
        tab_pathVisualization->setObjectName(QStringLiteral("tab_pathVisualization"));
        gridLayout_pathVisualization = new QGridLayout(tab_pathVisualization);
        gridLayout_pathVisualization->setObjectName(QStringLiteral("gridLayout_pathVisualization"));
        groupBox_list = new QGroupBox(tab_pathVisualization);
        groupBox_list->setObjectName(QStringLiteral("groupBox_list"));
        horizontalLayout_list = new QHBoxLayout(groupBox_list);
        horizontalLayout_list->setObjectName(QStringLiteral("horizontalLayout_list"));
        tableView_list = new QTableView(groupBox_list);
        tableView_list->setObjectName(QStringLiteral("tableView_list"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView_list->sizePolicy().hasHeightForWidth());
        tableView_list->setSizePolicy(sizePolicy);
        tableView_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView_list->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView_list->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout_list->addWidget(tableView_list);


        gridLayout_pathVisualization->addWidget(groupBox_list, 0, 0, 3, 2);

        groupBox_add = new QGroupBox(tab_pathVisualization);
        groupBox_add->setObjectName(QStringLiteral("groupBox_add"));
        groupBox_add->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_add->sizePolicy().hasHeightForWidth());
        groupBox_add->setSizePolicy(sizePolicy1);
        verticalLayout_add = new QVBoxLayout(groupBox_add);
        verticalLayout_add->setObjectName(QStringLiteral("verticalLayout_add"));
        groupBox_add_start = new QGroupBox(groupBox_add);
        groupBox_add_start->setObjectName(QStringLiteral("groupBox_add_start"));
        horizontalLayout_add_start = new QHBoxLayout(groupBox_add_start);
        horizontalLayout_add_start->setObjectName(QStringLiteral("horizontalLayout_add_start"));
        label_add_start_x = new QLabel(groupBox_add_start);
        label_add_start_x->setObjectName(QStringLiteral("label_add_start_x"));

        horizontalLayout_add_start->addWidget(label_add_start_x);

        lineEdit_add_start_x = new QLineEdit(groupBox_add_start);
        lineEdit_add_start_x->setObjectName(QStringLiteral("lineEdit_add_start_x"));

        horizontalLayout_add_start->addWidget(lineEdit_add_start_x);

        label_add_start_y = new QLabel(groupBox_add_start);
        label_add_start_y->setObjectName(QStringLiteral("label_add_start_y"));

        horizontalLayout_add_start->addWidget(label_add_start_y);

        lineEdit_add_start_y = new QLineEdit(groupBox_add_start);
        lineEdit_add_start_y->setObjectName(QStringLiteral("lineEdit_add_start_y"));

        horizontalLayout_add_start->addWidget(lineEdit_add_start_y);


        verticalLayout_add->addWidget(groupBox_add_start);

        groupBox_add_goal = new QGroupBox(groupBox_add);
        groupBox_add_goal->setObjectName(QStringLiteral("groupBox_add_goal"));
        horizontalLayout_add_goal = new QHBoxLayout(groupBox_add_goal);
        horizontalLayout_add_goal->setObjectName(QStringLiteral("horizontalLayout_add_goal"));
        label_add_goal_x = new QLabel(groupBox_add_goal);
        label_add_goal_x->setObjectName(QStringLiteral("label_add_goal_x"));

        horizontalLayout_add_goal->addWidget(label_add_goal_x);

        lineEdit_add_goal_x = new QLineEdit(groupBox_add_goal);
        lineEdit_add_goal_x->setObjectName(QStringLiteral("lineEdit_add_goal_x"));

        horizontalLayout_add_goal->addWidget(lineEdit_add_goal_x);

        label_add_goal_y = new QLabel(groupBox_add_goal);
        label_add_goal_y->setObjectName(QStringLiteral("label_add_goal_y"));

        horizontalLayout_add_goal->addWidget(label_add_goal_y);

        lineEdit_add_goal_y = new QLineEdit(groupBox_add_goal);
        lineEdit_add_goal_y->setObjectName(QStringLiteral("lineEdit_add_goal_y"));

        horizontalLayout_add_goal->addWidget(lineEdit_add_goal_y);


        verticalLayout_add->addWidget(groupBox_add_goal);

        groupBox_add_planner = new QGroupBox(groupBox_add);
        groupBox_add_planner->setObjectName(QStringLiteral("groupBox_add_planner"));
        horizontalLayout_add_planner = new QHBoxLayout(groupBox_add_planner);
        horizontalLayout_add_planner->setObjectName(QStringLiteral("horizontalLayout_add_planner"));
        label_add_planner_global = new QLabel(groupBox_add_planner);
        label_add_planner_global->setObjectName(QStringLiteral("label_add_planner_global"));

        horizontalLayout_add_planner->addWidget(label_add_planner_global);

        comboBox_add_planner_global = new QComboBox(groupBox_add_planner);
        comboBox_add_planner_global->setObjectName(QStringLiteral("comboBox_add_planner_global"));

        horizontalLayout_add_planner->addWidget(comboBox_add_planner_global);


        verticalLayout_add->addWidget(groupBox_add_planner);

        pushButton_add_add = new QPushButton(groupBox_add);
        pushButton_add_add->setObjectName(QStringLiteral("pushButton_add_add"));

        verticalLayout_add->addWidget(pushButton_add_add);


        gridLayout_pathVisualization->addWidget(groupBox_add, 0, 2, 2, 1);

        groupBox_files = new QGroupBox(tab_pathVisualization);
        groupBox_files->setObjectName(QStringLiteral("groupBox_files"));
        verticalLayout_files = new QVBoxLayout(groupBox_files);
        verticalLayout_files->setObjectName(QStringLiteral("verticalLayout_files"));
        pushButton_files_load = new QPushButton(groupBox_files);
        pushButton_files_load->setObjectName(QStringLiteral("pushButton_files_load"));

        verticalLayout_files->addWidget(pushButton_files_load);

        pushButton_files_save = new QPushButton(groupBox_files);
        pushButton_files_save->setObjectName(QStringLiteral("pushButton_files_save"));

        verticalLayout_files->addWidget(pushButton_files_save);


        gridLayout_pathVisualization->addWidget(groupBox_files, 2, 2, 1, 1);

        tabManager->addTab(tab_pathVisualization, QString());

        verticalLayout_main->addWidget(tabManager);


        retranslateUi(PathVisualPlugin);

        tabManager->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PathVisualPlugin);
    } // setupUi

    void retranslateUi(QWidget *PathVisualPlugin)
    {
        PathVisualPlugin->setWindowTitle(QApplication::translate("PathVisualPlugin", "PathVisualPlugin", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupBox_list->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_list->setTitle(QApplication::translate("PathVisualPlugin", "Path List", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupBox_add->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_add->setTitle(QApplication::translate("PathVisualPlugin", "Add a New Path", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupBox_add_start->setToolTip(QApplication::translate("PathVisualPlugin", "The start point of the new path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox_add_start->setTitle(QApplication::translate("PathVisualPlugin", "Start Point", Q_NULLPTR));
        label_add_start_x->setText(QApplication::translate("PathVisualPlugin", "x", Q_NULLPTR));
        label_add_start_y->setText(QApplication::translate("PathVisualPlugin", "y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupBox_add_goal->setToolTip(QApplication::translate("PathVisualPlugin", "The goal point of the new path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox_add_goal->setTitle(QApplication::translate("PathVisualPlugin", "Goal Point", Q_NULLPTR));
        label_add_goal_x->setText(QApplication::translate("PathVisualPlugin", "x", Q_NULLPTR));
        label_add_goal_y->setText(QApplication::translate("PathVisualPlugin", "y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupBox_add_planner->setToolTip(QApplication::translate("PathVisualPlugin", "The planner used to plan the new path", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox_add_planner->setTitle(QApplication::translate("PathVisualPlugin", "Planner", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_add_planner_global->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_add_planner_global->setText(QApplication::translate("PathVisualPlugin", "Global Planner", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        comboBox_add_planner_global->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_add_add->setToolTip(QApplication::translate("PathVisualPlugin", "Plan and add the configured path to the path list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_add_add->setText(QApplication::translate("PathVisualPlugin", "Start Planning", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupBox_files->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_files->setTitle(QApplication::translate("PathVisualPlugin", "For Path Files", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_files_load->setToolTip(QApplication::translate("PathVisualPlugin", "Load some .json path data files and append them to the path list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_files_load->setText(QApplication::translate("PathVisualPlugin", "Load Paths", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_files_save->setToolTip(QApplication::translate("PathVisualPlugin", "Save selected paths data into a .json file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_files_save->setText(QApplication::translate("PathVisualPlugin", "Save Paths", Q_NULLPTR));
        tabManager->setTabText(tabManager->indexOf(tab_pathVisualization), QApplication::translate("PathVisualPlugin", "Path Visualization", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PathVisualPlugin: public Ui_PathVisualPlugin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATH_VISUAL_PLUGIN_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("象棋");
    setchess();
    setStepMovement();
    setRedMovement();
    setBlackMovement();

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::receivelogin(){
    this->show();
}

void MainWindow::setchess(){
    Bing_black1 ->setParent(this);
    Bing_black2 ->setParent(this);
    Bing_black3 ->setParent(this);
    Bing_black4 ->setParent(this);
    Bing_black5 ->setParent(this);
    Pao_black1 ->setParent(this);
    Pao_black2 ->setParent(this);
    Che_black1 ->setParent(this);
    Che_black2 ->setParent(this);
    Ma_black1 ->setParent(this);
    Ma_black2 ->setParent(this);
    Xiang_black1 ->setParent(this);
    Xiang_black2 ->setParent(this);
    Shi_black1 ->setParent(this);
    Shi_black2 ->setParent(this);
    Jiang_black ->setParent(this);
    Bing_red1 ->setParent(this);
    Bing_red2 ->setParent(this);
    Bing_red3 ->setParent(this);
    Bing_red4 ->setParent(this);
    Bing_red5 ->setParent(this);
    Pao_red1 ->setParent(this);
    Pao_red2 ->setParent(this);
    Che_red1 ->setParent(this);
    Che_red2 ->setParent(this);
    Ma_red1 ->setParent(this);
    Ma_red2 ->setParent(this);
    Xiang_red1 ->setParent(this);
    Xiang_red2 ->setParent(this);
    Shi_red1 ->setParent(this);
    Shi_red2 ->setParent(this);
    Jiang_red ->setParent(this);

    Bing_black1 ->setGeometry(border,border+size*3,60,60);
    Bing_black2 ->setGeometry(border+size*2,border+size*3,60,60);
    Bing_black3 ->setGeometry(border+size*4,border+size*3,60,60);
    Bing_black4 ->setGeometry(border+size*6,border+size*3,60,60);
    Bing_black5 ->setGeometry(border+size*8,border+size*3,60,60);
    Pao_black1 ->setGeometry(border+size*1,border+size*2,60,60);
    Pao_black2 ->setGeometry(border+size*7,border+size*2,60,60);
    Che_black1 ->setGeometry(border,border,60,60);
    Che_black2 ->setGeometry(border+size*8,border,60,60);
    Ma_black1 ->setGeometry(border+size,border,60,60);
    Ma_black2 ->setGeometry(border+size*7,border,60,60);
    Xiang_black1 ->setGeometry(border+size*2,border,60,60);
    Xiang_black2 ->setGeometry(border+size*6,border,60,60);
    Shi_black1 ->setGeometry(border+size*3,border,60,60);
    Shi_black2 ->setGeometry(border+size*5,border,60,60);
    Jiang_black ->setGeometry(border+size*4,border,60,60);
    Bing_red1 ->setGeometry(border,border+size*6,60,60);
    Bing_red2 ->setGeometry(border+size*2,border+size*6,60,60);
    Bing_red3 ->setGeometry(border+size*4,border+size*6,60,60);
    Bing_red4 ->setGeometry(border+size*6,border+size*6,60,60);
    Bing_red5 ->setGeometry(border+size*8,border+size*6,60,60);
    Pao_red1 ->setGeometry(border+size,border+size*7,60,60);
    Pao_red2 ->setGeometry(border+size*7,border+size*7,60,60);
    Che_red1 ->setGeometry(border,border+size*9,60,60);
    Che_red2 ->setGeometry(border+size*8,border+size*9,60,60);
    Ma_red1 ->setGeometry(border+size,border+size*9,60,60);
    Ma_red2 ->setGeometry(border+size*7,border+size*9,60,60);
    Xiang_red1 ->setGeometry(border+size*2,border+size*9,60,60);
    Xiang_red2 ->setGeometry(border+size*6,border+size*9,60,60);
    Shi_red1 ->setGeometry(border+size*3,border+size*9,60,60);
    Shi_red2 ->setGeometry(border+size*5,border+size*9,60,60);
    Jiang_red ->setGeometry(border+size*4,border+size*9,60,60);

    Bing_black1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Bing_black .png)");
    Bing_black2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Bing_black .png)");
    Bing_black3 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Bing_black .png)");
    Bing_black4 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Bing_black .png)");
    Bing_black5 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Bing_black .png)");
    Pao_black1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Pao_black .png)");
    Pao_black2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Pao_black .png)");
    Che_black1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Che_black .png)");
    Che_black2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Che_black .png)");
    Ma_black1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Ma_black .png)");
    Ma_black2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Ma_black .png)");
    Xiang_black1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Xiang_black .png)");
    Xiang_black2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Xiang_black .png)");
    Shi_black1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Shi_black .png)");
    Shi_black2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Shi_black .png)");
    Jiang_black ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Jiang_black .png)");
    Bing_red1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Bing_red .png)");
    Bing_red2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Bing_red .png)");
    Bing_red3 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Bing_red .png)");
    Bing_red4 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Bing_red .png)");
    Bing_red5 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Bing_red .png)");
    Pao_red1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Pao_red .png)");
    Pao_red2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Pao_red .png)");
    Che_red1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Che_red .png)");
    Che_red2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Che_red .png)");
    Ma_red1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Ma_red .png)");
    Ma_red2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Ma_red .png)");
    Xiang_red1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Xiang_red .png)");
    Xiang_red2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Xiang_red .png)");
    Shi_red1 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Shi_red .png)");
    Shi_red2 ->setStyleSheet("border:none;"
                               "background-color:transparent;"
                               "background-image:url(:/chess/Shi_red .png)");
    Jiang_red ->setStyleSheet("border:none;"
                              "background-color:transparent;"
                              "background-image:url(:/chess/Jiang_red .png)");



}

void MainWindow::setStepMovement(){
    connect(step0, SIGNAL(clicked(bool)), this, SLOT(step0_clicked()));
    connect(step1, SIGNAL(clicked(bool)), this, SLOT(step1_clicked()));
    connect(step2, SIGNAL(clicked(bool)), this, SLOT(step2_clicked()));
    connect(step3, SIGNAL(clicked(bool)), this, SLOT(step3_clicked()));
    connect(step4, SIGNAL(clicked(bool)), this, SLOT(step4_clicked()));
    connect(step5, SIGNAL(clicked(bool)), this, SLOT(step5_clicked()));
    connect(step6, SIGNAL(clicked(bool)), this, SLOT(step6_clicked()));
    connect(step7, SIGNAL(clicked(bool)), this, SLOT(step7_clicked()));
    connect(step8, SIGNAL(clicked(bool)), this, SLOT(step8_clicked()));
    connect(step41, SIGNAL(clicked(bool)), this, SLOT(step41_clicked()));
    connect(step51, SIGNAL(clicked(bool)), this, SLOT(step51_clicked()));
    connect(step61, SIGNAL(clicked(bool)), this, SLOT(step61_clicked()));
    connect(step71, SIGNAL(clicked(bool)), this, SLOT(step71_clicked()));
    connect(step81, SIGNAL(clicked(bool)), this, SLOT(step81_clicked()));
    connect(step82, SIGNAL(clicked(bool)), this, SLOT(step82_clicked()));
    connect(step83, SIGNAL(clicked(bool)), this, SLOT(step83_clicked()));
    connect(step84, SIGNAL(clicked(bool)), this, SLOT(step84_clicked()));
    connect(step85, SIGNAL(clicked(bool)), this, SLOT(step85_clicked()));
    connect(step86, SIGNAL(clicked(bool)), this, SLOT(step86_clicked()));
    connect(step87, SIGNAL(clicked(bool)), this, SLOT(step87_clicked()));
    connect(step01, SIGNAL(clicked(bool)), this, SLOT(step01_clicked()));
    connect(step02, SIGNAL(clicked(bool)), this, SLOT(step02_clicked()));
    connect(step03, SIGNAL(clicked(bool)), this, SLOT(step03_clicked()));
    connect(step04, SIGNAL(clicked(bool)), this, SLOT(step04_clicked()));
    connect(step05, SIGNAL(clicked(bool)), this, SLOT(step05_clicked()));
    connect(step06, SIGNAL(clicked(bool)), this, SLOT(step06_clicked()));
    connect(step07, SIGNAL(clicked(bool)), this, SLOT(step07_clicked()));
    connect(step08, SIGNAL(clicked(bool)), this, SLOT(step08_clicked()));
    connect(step11, SIGNAL(clicked(bool)), this, SLOT(step11_clicked()));
    connect(step12, SIGNAL(clicked(bool)), this, SLOT(step12_clicked()));
    connect(step13, SIGNAL(clicked(bool)), this, SLOT(step13_clicked()));
    connect(step14, SIGNAL(clicked(bool)), this, SLOT(step14_clicked()));
    connect(step15, SIGNAL(clicked(bool)), this, SLOT(step15_clicked()));
    connect(step16, SIGNAL(clicked(bool)), this, SLOT(step16_clicked()));
    connect(step17, SIGNAL(clicked(bool)), this, SLOT(step17_clicked()));
    connect(step18, SIGNAL(clicked(bool)), this, SLOT(step18_clicked()));
    connect(step21, SIGNAL(clicked(bool)), this, SLOT(step21_clicked()));
    connect(step22, SIGNAL(clicked(bool)), this, SLOT(step22_clicked()));
    connect(step23, SIGNAL(clicked(bool)), this, SLOT(step23_clicked()));
    connect(step24, SIGNAL(clicked(bool)), this, SLOT(step24_clicked()));
    connect(step25, SIGNAL(clicked(bool)), this, SLOT(step25_clicked()));
    connect(step26, SIGNAL(clicked(bool)), this, SLOT(step26_clicked()));
    connect(step27, SIGNAL(clicked(bool)), this, SLOT(step27_clicked()));
    connect(step31, SIGNAL(clicked(bool)), this, SLOT(step31_clicked()));
    connect(step32, SIGNAL(clicked(bool)), this, SLOT(step32_clicked()));
    connect(step33, SIGNAL(clicked(bool)), this, SLOT(step33_clicked()));
    connect(step34, SIGNAL(clicked(bool)), this, SLOT(step34_clicked()));
    connect(step35, SIGNAL(clicked(bool)), this, SLOT(step35_clicked()));
    connect(step36, SIGNAL(clicked(bool)), this, SLOT(step36_clicked()));
    connect(step37, SIGNAL(clicked(bool)), this, SLOT(step37_clicked()));
    connect(stepJiang, SIGNAL(clicked(bool)), this, SLOT(stepJiang_clicked()));
}

void MainWindow::setBlackMovement(){
    connect(Bing_black1, SIGNAL(clicked(bool)), this, SLOT(Bing_black1_clicked()));
    connect(Bing_black2, SIGNAL(clicked(bool)), this, SLOT(Bing_black2_clicked()));
    connect(Bing_black3, SIGNAL(clicked(bool)), this, SLOT(Bing_black3_clicked()));
    connect(Bing_black4, SIGNAL(clicked(bool)), this, SLOT(Bing_black4_clicked()));
    connect(Bing_black5, SIGNAL(clicked(bool)), this, SLOT(Bing_black5_clicked()));
    connect(Shi_black1, SIGNAL(clicked(bool)), this, SLOT(Shi_black1_clicked()));
    connect(Shi_black2, SIGNAL(clicked(bool)), this, SLOT(Shi_black2_clicked()));
    connect(Xiang_black1, SIGNAL(clicked(bool)), this, SLOT(Xiang_black1_clicked()));
    connect(Xiang_black2, SIGNAL(clicked(bool)), this, SLOT(Xiang_black2_clicked()));
    connect(Ma_black1, SIGNAL(clicked(bool)), this, SLOT(Ma_black1_clicked()));
    connect(Ma_black2, SIGNAL(clicked(bool)), this, SLOT(Ma_black2_clicked()));
    connect(Che_black1, SIGNAL(clicked(bool)), this, SLOT(Che_black1_clicked()));
    connect(Che_black2, SIGNAL(clicked(bool)), this, SLOT(Che_black2_clicked()));
    connect(Pao_black1, SIGNAL(clicked(bool)), this, SLOT(Pao_black1_clicked()));
    connect(Pao_black2, SIGNAL(clicked(bool)), this, SLOT(Pao_black2_clicked()));
    connect(Jiang_black, SIGNAL(clicked(bool)), this, SLOT(Jiang_black_clicked()));
}

void MainWindow::setRedMovement(){
    connect(Bing_red1, SIGNAL(clicked(bool)), this, SLOT(Bing_red1_clicked()));
    connect(Bing_red2, SIGNAL(clicked(bool)), this, SLOT(Bing_red2_clicked()));
    connect(Bing_red3, SIGNAL(clicked(bool)), this, SLOT(Bing_red3_clicked()));
    connect(Bing_red4, SIGNAL(clicked(bool)), this, SLOT(Bing_red4_clicked()));
    connect(Bing_red5, SIGNAL(clicked(bool)), this, SLOT(Bing_red5_clicked()));
    connect(Shi_red1, SIGNAL(clicked(bool)), this, SLOT(Shi_red1_clicked()));
    connect(Shi_red2, SIGNAL(clicked(bool)), this, SLOT(Shi_red2_clicked()));
    connect(Xiang_red1, SIGNAL(clicked(bool)), this, SLOT(Xiang_red1_clicked()));
    connect(Xiang_red2, SIGNAL(clicked(bool)), this, SLOT(Xiang_red2_clicked()));
    connect(Ma_red1, SIGNAL(clicked(bool)), this, SLOT(Ma_red1_clicked()));
    connect(Ma_red2, SIGNAL(clicked(bool)), this, SLOT(Ma_red2_clicked()));
    connect(Che_red1, SIGNAL(clicked(bool)), this, SLOT(Che_red1_clicked()));
    connect(Che_red2, SIGNAL(clicked(bool)), this, SLOT(Che_red2_clicked()));
    connect(Pao_red1, SIGNAL(clicked(bool)), this, SLOT(Pao_red1_clicked()));
    connect(Pao_red2, SIGNAL(clicked(bool)), this, SLOT(Pao_red2_clicked()));
    connect(Jiang_red, SIGNAL(clicked(bool)), this, SLOT(Jiang_red_clicked()));


}

void MainWindow::BingBlack_movement(QPushButton *chess){
    if(chess->x() < 550){
        if((chess->y()) != border+size*9){                  //border
             step0->setParent(this);
             step0->setGeometry(chess->x(),chess->y()+size,60,60);
             step0->setStyleSheet("background-color: transparent;"
                                 "background-image: url(:/chess/transparent.png)"
                                 );
             step0->show();
             if(HaveChess(step0,2)){
                 step0->hide();
             }

         }


        if(chess->y()>=border+size*5){                         //over the river,set left-right movement
             if((chess->x())+R != 35+size*8){
                step2->setParent(this);
                step2->setGeometry(chess->x()+size,chess->y(),60,60);

                step2->setStyleSheet("background-color: transparent;"
                                    "background-image: url(:/chess/transparent.png)"
                                    );
                step2->show();
                if(HaveChess(step2,2)){
                    step2->hide();
                }
            }
            if((chess->x())+R != 35){
                step3->setParent(this);
                step3->setGeometry(chess->x()-size,chess->y(),60,60);
                step3->setStyleSheet("background-color: transparent;"
                                    "background-image: url(:/chess/transparent.png)"
                                    );

                step3->show();
                if(HaveChess(step3,2)){
                    step3->hide();
                }
            }

        }

    }
}

void MainWindow::ShiBlack_movement(QPushButton *chess){
    if(chess->x() < 550){
    if((chess->x() == border+size*3 && chess->y() == border+size*2) ||
       (chess->y() == border+size*1 && chess->x() == border+size*4)){
            step4->setParent(this);
            step4->setGeometry(chess->x()+size,chess->y()-size,60,60);
            step4->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step4->show();
            if(HaveChess(step4,2)){
               step4->hide();
           }
     }
    if((chess->x() == border+size*5 && chess->y() == border+size*2) ||
       (chess->y() == border+size*1 && chess->x() == border+size*4)){
            step5->setParent(this);
            step5->setGeometry(chess->x()-size,chess->y()-size,60,60);
            step5->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step5->show();
            if(HaveChess(step5,2)){
               step5->hide();
           }
     }
    if((chess->x() == border+size*3 && chess->y() == border) ||
       (chess->y() == border+size*1 && chess->x() == border+size*4)){
            step6->setParent(this);
            step6->setGeometry(chess->x()+size,chess->y()+size,60,60);
            step6->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step6->show();
            if(HaveChess(step6,2)){
               step6->hide();
           }
     }
    if((chess->x() == border+size*5 && chess->y() == border) ||
       (chess->y() == border+size*1 && chess->x() == border+size*4)){
            step7->setParent(this);
            step7->setGeometry(chess->x()-size,chess->y()+size,60,60);
            step7->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step7->show();
            if(HaveChess(step7,2)){
               step7->hide();
           }
     }
    }
}

void MainWindow::XiangBlack_movement(QPushButton *chess){
    if(chess->x() < 550){
    if(chess->y() <= border+size*4 && chess->y() != border){
        if(chess->x() != border+size*8){
            step41->setParent(this);
            step41->setGeometry(chess->x()+size*2,chess->y()-size*2,60,60);
            step41->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step41->show();
            if(HaveChess(step41,2)){
               step41->hide();
           }
            step4->setParent(this);
            step4->setGeometry(chess->x()+size,chess->y()-size,60,60);
            step4->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step4->show();
            if(HaveChess(step4,2)){
                   step41->hide();
            }
            else if(HaveChess(step4,1)){
                   step41->hide();
              }

            step4->hide();                                                                //用來判斷"象"走動時中間有沒有棋子卡著
        }
        if(chess->x() != border){
            step51->setParent(this);
            step51->setGeometry(chess->x()-size*2,chess->y()-size*2,60,60);
            step51->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step51->show();
            if(HaveChess(step51,2)){
               step51->hide();
           }
            step5->setParent(this);
            step5->setGeometry(chess->x()-size,chess->y()-size,60,60);
            step5->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step5->show();
            if(HaveChess(step5,2)){
                step51->hide();
            }
            else if(HaveChess(step5,1)){
                step51->hide();
               }

            step5->hide();
        }
    }
    if(chess->y() >= border && chess->y() != border+size*4){
        if(chess->x() != border+size*8){
            step61->setParent(this);
            step61->setGeometry(chess->x()+size*2,chess->y()+size*2,60,60);
            step61->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step61->show();
            if(HaveChess(step61,2)){
               step61->hide();
           }
            step6->setParent(this);
            step6->setGeometry(chess->x()+size,chess->y()+size,60,60);
            step6->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step6->show();
            if(HaveChess(step6,2)){
                step61->hide();
            }
            else if(HaveChess(step6,1)){
                   step61->hide();
            }

           step6->hide();
        }
        if(chess->x() != border){
            step71->setParent(this);
            step71->setGeometry(chess->x()-size*2,chess->y()+size*2,60,60);
            step71->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step71->show();
            if(HaveChess(step71,2)){
               step71->hide();
           }
            step7->setParent(this);
            step7->setGeometry(chess->x()-size,chess->y()+size,60,60);
            step7->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step7->show();
            if(HaveChess(step7,2)){
                step71->hide();
            }
            else if(HaveChess(step7,1)){
               step71->hide();
                }

            step7->hide();
        }
    }
    }
}

void MainWindow::MaBlack_movement(QPushButton *chess){
  if(chess->x() < 550){
    if(chess->y() != border && chess->y() != border+size){
        if(chess->x() != border+size*8){
            step8->setParent(this);
            step8->setGeometry(chess->x()+size,chess->y()-size*2,60,60);
            step8->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step8->show();
            if(HaveChess(step8,2)){
                   step8->hide();
            }
        }
        if(chess->x() != border){
            step81->setParent(this);
            step81->setGeometry(chess->x()-size,chess->y()-size*2,60,60);
            step81->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step81->show();
            if(HaveChess(step81,2)){
                   step81->hide();
            }
        }
        step1->setParent(this);
        step1->setGeometry(chess->x(),chess->y()-size,60,60);
        step1->setStyleSheet("background-color: transparent;"
                            "background-image: url(:/chess/transparent.png)"
                            );
        step1->show();
        if(HaveChess(step1,1)){
               step8->hide();
               step81->hide();
           }
        else if(HaveChess(step1,2)){
            step8->hide();
            step81->hide();
        }
        step1->hide();
    }
    if(chess->y() != border+size*8 && chess->y() != border+size*9){
        if(chess->x() != border+size*8){
            step82->setParent(this);
            step82->setGeometry(chess->x()+size,chess->y()+size*2,60,60);
            step82->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step82->show();
            if(HaveChess(step82,2)){
                   step82->hide();
            }
        }
        if(chess->x() != border){
            step83->setParent(this);
            step83->setGeometry(chess->x()-size,chess->y()+size*2,60,60);
            step83->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step83->show();
            if(HaveChess(step83,2)){
                   step83->hide();
            }
        }
        step0->setParent(this);
        step0->setGeometry(chess->x(),chess->y()+size,60,60);
        step0->setStyleSheet("background-color: transparent;"
                            "background-image: url(:/chess/transparent.png)"
                            );
        step0->show();
        if(HaveChess(step0,1)){
               step82->hide();
               step83->hide();
           }
        else if(HaveChess(step0,2)){
            step82->hide();
            step83->hide();
        }
        step0->hide();
    }
    if(chess->x() != border+size*7 && chess->x() != border+size*8){
        if(chess->y() != border){
            step84->setParent(this);
            step84->setGeometry(chess->x()+size*2,chess->y()-size,60,60);
            step84->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step84->show();
            if(HaveChess(step84,2)){
                   step84->hide();
            }
        }
        if(chess->y() != border+size*9){
                    step85->setParent(this);
                    step85->setGeometry(chess->x()+size*2,chess->y()+size,60,60);
                    step85->setStyleSheet("background-color: transparent;"
                                        "background-image: url(:/chess/transparent.png)"
                                        );
                    step85->show();
                    if(HaveChess(step85,2)){
                           step85->hide();
                    }
                }
        step2->setParent(this);
        step2->setGeometry(chess->x()+size,chess->y(),60,60);
        step2->setStyleSheet("background-color: transparent;"
                            "background-image: url(:/chess/transparent.png)"
                            );
        step2->show();
        if(HaveChess(step2,1)){
               step84->hide();
               step85->hide();
           }
        else if(HaveChess(step2,2)){
            step84->hide();
            step85->hide();
        }
        step2->hide();
    }
    if(chess->x() != border && chess->x() != border+size){
        if(chess->y() != border){
            step86->setParent(this);
            step86->setGeometry(chess->x()-size*2,chess->y()-size,60,60);
            step86->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step86->show();
            if(HaveChess(step86,2)){
                   step86->hide();
            }
        }
        if(chess->y() != border+size*9){
            step87->setParent(this);
            step87->setGeometry(chess->x()-size*2,chess->y()+size,60,60);
            step87->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step87->show();
            if(HaveChess(step87,2)){
                   step87->hide();
            }
        }
        step3->setParent(this);
        step3->setGeometry(chess->x()-size,chess->y(),60,60);
        step3->setStyleSheet("background-color: transparent;"
                            "background-image: url(:/chess/transparent.png)"
                            );
        step3->show();
        if(HaveChess(step3,1)){
               step86->hide();
               step87->hide();
           }
        else if(HaveChess(step3,2)){
            step86->hide();
            step87->hide();
        }
        step3->hide();
    }
    }
}

void MainWindow::CheBlack_movement(QPushButton *chess){
   bool cont = true;
   if(chess->x() < 550){
    setstep0(chess);
    if(chess->y() != border+size*9 && cont == 1) {
        step0->show();
        if(HaveChess(step0,2)){
            step0->hide();
            cont = 0;
        }
        if(HaveChess(step0,1)){
            cont = 0;
        }
        if(chess->y() != border+size*8 && cont == 1) {
            step01->show();
            if(HaveChess(step01,2)){
                step01->hide();
                cont = 0;
            }
            if(HaveChess(step01,1)){
                cont = 0;
            }
            if(chess->y() != border+size*7 && cont == 1) {
                step02->show();
                if(HaveChess(step02,2)){
                    step02->hide();
                    cont = 0;
                }
                if(HaveChess(step02,1)){
                    cont = 0;
                }
                if(chess->y() != border+size*6 && cont == 1) {
                    step03->show();
                    if(HaveChess(step03,2)){
                        step03->hide();
                        cont = 0;
                    }
                    if(HaveChess(step03,1)){
                        cont = 0;
                    }
                    if(chess->y() != border+size*5 && cont == 1) {
                        step04->show();
                        if(HaveChess(step04,2)){
                            step04->hide();
                            cont = 0;
                        }
                        if(HaveChess(step04,1)){
                            cont = 0;
                        }
                        if(chess->y() != border+size*4 && cont == 1) {
                            step05->show();
                            if(HaveChess(step05,2)){
                                step05->hide();
                                cont = 0;
                            }
                            if(HaveChess(step05,1)){
                                cont = 0;
                            }
                            if(chess->y() != border+size*3 && cont == 1) {
                                step06->show();
                                if(HaveChess(step06,2)){
                                    step06->hide();
                                    cont = 0;
                                }
                                if(HaveChess(step06,1)){
                                    cont = 0;
                                }

                            if(chess->y() != border+size*2 && cont == 1) {
                                step07->show();
                                if(HaveChess(step07,2)){
                                    step07->hide();
                                    cont = 0;
                                }
                                if(HaveChess(step07,1)){
                                    cont = 0;
                                }
                                if(chess->y() != border+size && cont == 1) {
                                    step08->show();
                                    if(HaveChess(step08,2)){
                                        step08->hide();
                                        cont = 0;
                                    }
                                    if(HaveChess(step08,1)){
                                        cont = 0;
                                    }
                                }
                            }
                           }
                        }
                    }
                }
            }
        }
    }
    cont = true;
    setstep1(chess);
    if(chess->y() != border && cont == 1) {
        step1->show();
        if(HaveChess(step1,2)){
            step1->hide();
            cont = 0;
        }
        if(HaveChess(step1,1)){
            cont = 0;
        }
        if(chess->y() != border+size && cont == 1) {
            step11->show();
            if(HaveChess(step11,2)){
                step11->hide();
                cont = 0;
            }
            if(HaveChess(step11,1)){
                cont = 0;
            }
            if(chess->y() != border+size*2 && cont == 1) {
                step12->show();
                if(HaveChess(step12,2)){
                    step12->hide();
                    cont = 0;
                }
                if(HaveChess(step12,1)){
                    cont = 0;
                }
                if(chess->y() != border+size*3 && cont == 1) {
                    step13->show();
                    if(HaveChess(step13,2)){
                        step13->hide();
                        cont = 0;
                    }
                    if(HaveChess(step13,1)){
                        cont = 0;
                    }
                    if(chess->y() != border+size*4 && cont == 1) {
                        step14->show();
                        if(HaveChess(step14,2)){
                            step14->hide();
                            cont = 0;
                        }
                        if(HaveChess(step14,1)){
                            cont = 0;
                        }
                        if(chess->y() != border+size*5 && cont == 1) {
                            step15->show();
                            if(HaveChess(step15,2)){
                                step15->hide();
                                cont = 0;
                            }
                            if(HaveChess(step15,1)){
                                cont = 0;
                            }
                            if(chess->y() != border+size*6 && cont == 1) {
                                step16->show();
                                if(HaveChess(step16,2)){
                                    step16->hide();
                                    cont = 0;
                                }
                                if(HaveChess(step16,1)){
                                    cont = 0;
                                }
                                if(chess->y() != border+size*7 && cont == 1) {
                                    step17->show();
                                    if(HaveChess(step17,2)){
                                        step17->hide();
                                        cont = 0;
                                    }
                                    if(HaveChess(step17,1)){
                                        cont = 0;
                                    }
                                    if(chess->y() != border+size*8 && cont == 1) {
                                        step18->show();
                                        if(HaveChess(step18,2)){
                                            step18->hide();
                                            cont = 0;
                                        }
                                        if(HaveChess(step18,1)){
                                            cont = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cont = true;
    setstep2(chess);
    if(chess->x() != border+size*8 && cont == 1) {
        step2->show();
        if(HaveChess(step2,2)){
            step2->hide();
            cont = 0;
        }
        if(HaveChess(step2,1)){
            cont = 0;
        }
        if(chess->x() != border+size*7 && cont == 1) {
            step21->show();
            if(HaveChess(step21,2)){
                step21->hide();
                cont = 0;
            }
            if(HaveChess(step21,1)){
                cont = 0;
            }
            if(chess->x() != border+size*6 && cont == 1) {
                step22->show();
                if(HaveChess(step22,2)){
                    step22->hide();
                    cont = 0;
                }
                if(HaveChess(step22,1)){
                    cont = 0;
                }
                if(chess->x() != border+size*5 && cont == 1) {
                    step23->show();
                    if(HaveChess(step23,2)){
                        step23->hide();
                        cont = 0;
                    }
                    if(HaveChess(step23,1)){
                        cont = 0;
                    }
                    if(chess->x() != border+size*4 && cont == 1) {
                        step24->show();
                        if(HaveChess(step24,2)){
                            step24->hide();
                            cont = 0;
                        }
                        if(HaveChess(step24,1)){
                            cont = 0;
                        }
                        if(chess->x() != border+size*3 && cont == 1) {
                            step25->show();
                            if(HaveChess(step25,2)){
                                step25->hide();
                                cont = 0;
                            }
                            if(HaveChess(step25,1)){
                                cont = 0;
                            }
                            if(chess->x() != border+size*2 && cont == 1) {
                                step26->show();
                                if(HaveChess(step26,2)){
                                    step26->hide();
                                    cont = 0;
                                }
                                if(HaveChess(step26,1)){
                                    cont = 0;
                                }
                                if(chess->x() != border+size && cont == 1) {
                                    step27->show();
                                    if(HaveChess(step27,2)){
                                        step27->hide();
                                        cont = 0;
                                    }
                                    if(HaveChess(step27,1)){
                                        cont = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cont = true;
    setstep3(chess);
    if(chess->x() != border && cont == 1) {
        step3->show();
        if(HaveChess(step3,2)){
            step3->hide();
            cont = 0;
        }
        if(HaveChess(step3,1)){
            cont = 0;
        }
        if(chess->x() != border+size && cont == 1) {
            step31->show();
            if(HaveChess(step31,2)){
                step31->hide();
                cont = 0;
            }
            if(HaveChess(step31,1)){
                cont = 0;
            }
            if(chess->x() != border+size*2 && cont == 1) {
                step32->show();
                if(HaveChess(step32,2)){
                    step32->hide();
                    cont = 0;
                }
                if(HaveChess(step32,1)){
                    cont = 0;
                }
                if(chess->x() != border+size*3 && cont == 1) {
                    step33->show();
                    if(HaveChess(step33,2)){
                        step33->hide();
                        cont = 0;
                    }
                    if(HaveChess(step33,1)){
                        cont = 0;
                    }
                    if(chess->x() != border+size*4 && cont == 1) {
                        step34->show();
                        if(HaveChess(step34,2)){
                            step34->hide();
                            cont = 0;
                        }
                        if(HaveChess(step34,1)){
                            cont = 0;
                        }
                        if(chess->x() != border+size*5 && cont == 1) {
                            step35->show();
                            if(HaveChess(step35,2)){
                                step35->hide();
                                cont = 0;
                            }
                            if(HaveChess(step35,1)){
                                cont = 0;
                            }
                            if(chess->x() != border+size*6 && cont == 1) {
                                step36->show();
                                if(HaveChess(step36,2)){
                                    step36->hide();
                                    cont = 0;
                                }
                                if(HaveChess(step36,1)){
                                    cont = 0;
                                }
                                if(chess->x() != border+size*7 && cont == 1) {
                                    step37->show();
                                    if(HaveChess(step37,2)){
                                        step37->hide();
                                        cont = 0;
                                    }
                                    if(HaveChess(step37,1)){
                                        cont = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }


    }
}

void MainWindow::PaoBlack_movement(QPushButton *chess){
    bool cont = true;
    int count = 0;
    bool CanEat = false;
    if(chess->x() < 550){
     setstep0(chess);
     if(chess->y() != border+size*9 ) {
         step0->show();
         if(HaveChess(step0,2)){
             step0->hide();
             cont = 0;
             count ++;
         }
         if(HaveChess(step0,1)){
             step0->hide();
             cont = 0;
             count ++;
         }
         if(chess->y() != border+size*8 ) {
             step01->show();
             if(HaveChess(step01,2)){
                 step01->hide();
                 cont = 0;
                 count ++;
             }
             if(HaveChess(step01,1)){
                 step01->hide();
                 cont = 0;
                 if(count < 2){
                     count ++;
                     if(count == 2){
                         step01->show();
                         CanEat = 1;
                     }
                     else
                         CanEat = 0;
                 }

             }
             if(cont == 0 && CanEat == 0){
                 step01->hide();
                 }

             if(chess->y() != border+size*7 ) {
                 step02->show();
                 CanEat = 0;
                 if(HaveChess(step02,2)){
                     step02->hide();
                     cont = 0;
                 }
                 if(HaveChess(step02,1)){
                     step02->hide();
                     cont = 0;
                     if(count < 2){
                         count ++;
                         if(count == 2){
                             step02->show();
                             CanEat = 1;
                         }
                         else
                             CanEat = 0;
                         }

                 }
                 if(cont == 0 && CanEat == 0){
                     step02->hide();
                     }

                 if(chess->y() != border+size*6 ) {
                     step03->show();
                     CanEat = 0;
                     if(HaveChess(step03,2)){
                         step03->hide();
                         cont = 0;
                         count ++;
                     }
                     if(HaveChess(step03,1)){
                         step03->hide();
                         cont = 0;
                         if(count < 2){
                             count ++;
                             if(count == 2){
                                 step03->show();
                                 CanEat = 1;
                             }
                             else
                                 CanEat = 0;
                             }

                     }
                     if(cont == 0 && CanEat == 0){
                         step03->hide();
                         }

                     if(chess->y() != border+size*5 ) {
                         step04->show();
                         CanEat = 0;
                         if(HaveChess(step04,2)){
                             step04->hide();
                             cont = 0;
                             count ++;
                         }
                         if(HaveChess(step04,1)){
                             step04->hide();
                             cont = 0;
                             if(count < 2){
                                 count ++;
                                 if(count == 2){
                                     step04->show();
                                     CanEat = 1;
                                 }
                                 else
                                     CanEat = 0;
                                 }

                         }
                         if(cont == 0 && CanEat == 0){
                             step04->hide();
                             }

                         if(chess->y() != border+size*4 ) {
                             step05->show();
                             CanEat = 0;
                             if(HaveChess(step05,2)){
                                 step05->hide();
                                 cont = 0;
                                 count ++;
                             }
                             if(HaveChess(step05,1)){
                                 step05->hide();
                                 cont = 0;
                                 if(count < 2){
                                     count ++;
                                     if(count == 2){
                                         step05->show();
                                         CanEat = 1;
                                     }
                                     else
                                         CanEat = 0;
                                     }

                             }
                             if(cont == 0 && CanEat == 0){
                                 step05->hide();
                                 }

                             if(chess->y() != border+size*3 ) {
                                 step06->show();
                                 CanEat = 0;
                                 if(HaveChess(step06,2)){
                                     step06->hide();
                                     cont = 0;
                                     count ++;
                                 }
                                 if(HaveChess(step06,1)){
                                     step06->hide();
                                     cont = 0;
                                     if(count < 2){
                                         count ++;
                                         if(count == 2){
                                             step06->show();
                                             CanEat = 1;
                                         }
                                         else
                                             CanEat = 0;
                                         }

                                 }
                                 if(cont == 0 && CanEat == 0){
                                     step06->hide();
                                     }

                                 if(chess->y() != border+size*2 ) {
                                 step07->show();
                                 CanEat = 0;
                                 if(HaveChess(step07,2)){
                                     step07->hide();
                                     cont = 0;
                                     count ++;
                                 }
                                 if(HaveChess(step07,1)){
                                     step07->hide();
                                     cont = 0;
                                     if(count < 2){
                                         count ++;
                                         if(count == 2){
                                             step07->show();
                                             CanEat = 1;
                                         }
                                         else
                                             CanEat = 0;
                                         }

                                 }
                                 if(cont == 0 && CanEat == 0){
                                     step07->hide();
                                     }

                                 if(chess->y() != border+size) {
                                     step08->show();
                                     CanEat = 0;
                                     if(HaveChess(step08,2)){
                                         step08->hide();
                                         cont = 0;
                                         count ++;
                                     }
                                     if(HaveChess(step08,1)){
                                         step08->hide();
                                         cont = 0;
                                         if(count < 2){
                                             count ++;
                                             if(count == 2){
                                                 step08->show();
                                                 CanEat = 1;
                                             }
                                             else
                                                 CanEat = 0;
                                             }

                                     }
                                     if(cont == 0 && CanEat == 0){
                                         step08->hide();
                                         }
                                 }
                               }
                            }
                         }
                     }
                 }
             }
         }
     }
     count = 0;
     cont = true;
     CanEat = false;
     setstep1(chess);
     if(chess->y() != border ) {
         step1->show();
         if(HaveChess(step1,2)){
             step1->hide();
             cont = 0;
             count ++;
         }
         if(HaveChess(step1,1)){
             step1->hide();
             cont = 0;
             count ++;
         }
         if(chess->y() != border+size ) {
             step11->show();
             if(HaveChess(step11,2)){
                 step11->hide();
                 cont = 0;
                 count ++;
             }
             if(HaveChess(step11,1)){
                 step11->hide();
                 cont = 0;
                 if(count < 2){
                     count ++;
                     if(count == 2){
                         step11->show();
                         CanEat = 1;
                     }
                     else
                         CanEat = 0;
                 }

             }
             if(cont == 0 && CanEat == 0){
                 step11->hide();
                 }

             if(chess->y() != border+size*2 ) {
                 step12->show();
                 CanEat = 0;
                 if(HaveChess(step12,2)){
                     step12->hide();
                     cont = 0;
                 }
                 if(HaveChess(step12,1)){
                     step12->hide();
                     cont = 0;
                     if(count < 2){
                         count ++;
                         if(count == 2){
                             step12->show();
                             CanEat = 1;
                         }
                         else
                             CanEat = 0;
                         }

                 }
                 if(cont == 0 && CanEat == 0){
                     step12->hide();
                     }

                 if(chess->y() != border+size*3 ) {
                     step13->show();
                     CanEat = 0;
                     if(HaveChess(step13,2)){
                         step13->hide();
                         cont = 0;
                         count ++;
                     }
                     if(HaveChess(step13,1)){
                         step13->hide();
                         cont = 0;
                         if(count < 2){
                             count ++;
                             if(count == 2){
                                 step13->show();
                                 CanEat = 1;
                             }
                             else
                                 CanEat = 0;
                             }

                     }
                     if(cont == 0 && CanEat == 0){
                         step13->hide();
                         }

                     if(chess->y() != border+size*4 ) {
                         step14->show();
                         CanEat = 0;
                         if(HaveChess(step14,2)){
                             step14->hide();
                             cont = 0;
                             count ++;
                         }
                         if(HaveChess(step14,1)){
                             step14->hide();
                             cont = 0;
                             if(count < 2){
                                 count ++;
                                 if(count == 2){
                                     step14->show();
                                     CanEat = 1;
                                 }
                                 else
                                     CanEat = 0;
                                 }

                         }
                         if(cont == 0 && CanEat == 0){
                             step14->hide();
                             }

                         if(chess->y() != border+size*5 ) {
                             step15->show();
                             CanEat = 0;
                             if(HaveChess(step15,2)){
                                 step15->hide();
                                 cont = 0;
                                 count ++;
                             }
                             if(HaveChess(step15,1)){
                                 step15->hide();
                                 cont = 0;
                                 if(count < 2){
                                     count ++;
                                     if(count == 2){
                                         step15->show();
                                         CanEat = 1;
                                     }
                                     else
                                         CanEat = 0;
                                     }

                             }
                             if(cont == 0 && CanEat == 0){
                                 step15->hide();
                                 }

                             if(chess->y() != border+size*6 ) {
                                 step16->show();
                                 CanEat = 0;
                                 if(HaveChess(step16,2)){
                                     step16->hide();
                                     cont = 0;
                                     count ++;
                                 }
                                 if(HaveChess(step16,1)){
                                     step16->hide();
                                     cont = 0;
                                     if(count < 2){
                                         count ++;
                                         if(count == 2){
                                             step16->show();
                                             CanEat = 1;
                                         }
                                         else
                                             CanEat = 0;
                                         }

                                 }
                                 if(cont == 0 && CanEat == 0){
                                     step16->hide();
                                     }

                                 if(chess->y() != border+size*7 ) {
                                 step17->show();
                                 CanEat = 0;
                                 if(HaveChess(step17,2)){
                                     step17->hide();
                                     cont = 0;
                                     count ++;
                                 }
                                 if(HaveChess(step17,1)){
                                     step17->hide();
                                     cont = 0;
                                     if(count < 2){
                                         count ++;
                                         if(count == 2){
                                             step17->show();
                                             CanEat = 1;
                                         }
                                         else
                                             CanEat = 0;
                                         }

                                 }
                                 if(cont == 0 && CanEat == 0){
                                     step17->hide();
                                     }

                                 if(chess->y() != border+size*8) {
                                     step18->show();
                                     CanEat = 0;
                                     if(HaveChess(step18,2)){
                                         step18->hide();
                                         cont = 0;
                                         count ++;
                                     }
                                     if(HaveChess(step18,1)){
                                         step18->hide();
                                         cont = 0;
                                         if(count < 2){
                                             count ++;
                                             if(count == 2){
                                                 step18->show();
                                                 CanEat = 1;
                                             }
                                             else
                                                 CanEat = 0;
                                             }

                                     }
                                     if(cont == 0 && CanEat == 0){
                                         step18->hide();
                                         }
                                 }
                               }
                            }
                         }
                     }
                 }
             }
         }
     }
     count = 0;
     cont = true;
     CanEat = false;
     setstep2(chess);
     if(chess->x() != border+size*8 ) {
         step2->show();
         if(HaveChess(step2,2)){
             step2->hide();
             cont = 0;
             count ++;
         }
         if(HaveChess(step2,1)){
             step2->hide();
             cont = 0;
             count ++;
         }
         if(chess->x() != border+size*7 ) {
             step21->show();
             if(HaveChess(step21,2)){
                 step21->hide();
                 cont = 0;
                 count ++;
             }
             if(HaveChess(step21,1)){
                 step21->hide();
                 cont = 0;
                 if(count < 2){
                     count ++;
                     if(count == 2){
                         step21->show();
                         CanEat = 1;
                     }
                     else
                         CanEat = 0;
                 }

             }
             if(cont == 0 && CanEat == 0){
                 step21->hide();
                 }

             if(chess->x() != border+size*6) {
                 step22->show();
                 CanEat = 0;
                 if(HaveChess(step22,2)){
                     step22->hide();
                     cont = 0;
                 }
                 if(HaveChess(step22,1)){
                     step22->hide();
                     cont = 0;
                     if(count < 2){
                         count ++;
                         if(count == 2){
                             step22->show();
                             CanEat = 1;
                         }
                         else
                             CanEat = 0;
                         }

                 }
                 if(cont == 0 && CanEat == 0){
                     step22->hide();
                     }

                 if(chess->x() != border+size*5 ) {
                     step23->show();
                     CanEat = 0;
                     if(HaveChess(step23,2)){
                         step23->hide();
                         cont = 0;
                         count ++;
                     }
                     if(HaveChess(step23,1)){
                         step23->hide();
                         cont = 0;
                         if(count < 2){
                             count ++;
                             if(count == 2){
                                 step23->show();
                                 CanEat = 1;
                             }
                             else
                                 CanEat = 0;
                             }

                     }
                     if(cont == 0 && CanEat == 0){
                         step23->hide();
                         }

                     if(chess->x() != border+size*4 ) {
                         step24->show();
                         CanEat = 0;
                         if(HaveChess(step24,2)){
                             step24->hide();
                             cont = 0;
                             count ++;
                         }
                         if(HaveChess(step24,1)){
                             step24->hide();
                             cont = 0;
                             if(count < 2){
                                 count ++;
                                 if(count == 2){
                                     step24->show();
                                     CanEat = 1;
                                 }
                                 else
                                     CanEat = 0;
                                 }

                         }
                         if(cont == 0 && CanEat == 0){
                             step24->hide();
                             }

                         if(chess->x() != border+size*3 ) {
                             step25->show();
                             CanEat = 0;
                             if(HaveChess(step25,2)){
                                 step25->hide();
                                 cont = 0;
                                 count ++;
                             }
                             if(HaveChess(step25,1)){
                                 step25->hide();
                                 cont = 0;
                                 if(count < 2){
                                     count ++;
                                     if(count == 2){
                                         step25->show();
                                         CanEat = 1;
                                     }
                                     else
                                         CanEat = 0;
                                     }

                             }
                             if(cont == 0 && CanEat == 0){
                                 step25->hide();
                                 }

                             if(chess->x() != border+size*2 ) {
                                 step26->show();
                                 CanEat = 0;
                                 if(HaveChess(step26,2)){
                                     step26->hide();
                                     cont = 0;
                                     count ++;
                                 }
                                 if(HaveChess(step26,1)){
                                     step26->hide();
                                     cont = 0;
                                     if(count < 2){
                                         count ++;
                                         if(count == 2){
                                             step26->show();
                                             CanEat = 1;
                                         }
                                         else
                                             CanEat = 0;
                                         }

                                 }
                                 if(cont == 0 && CanEat == 0){
                                     step26->hide();
                                     }

                                 if(chess->x() != border+size ) {
                                 step27->show();
                                 CanEat = 0;
                                 if(HaveChess(step27,2)){
                                     step27->hide();
                                     cont = 0;
                                     count ++;
                                 }
                                 if(HaveChess(step27,1)){
                                     step27->hide();
                                     cont = 0;
                                     if(count < 2){
                                         count ++;
                                         if(count == 2){
                                             step27->show();
                                             CanEat = 1;
                                         }
                                         else
                                             CanEat = 0;
                                         }

                                 }
                                 if(cont == 0 && CanEat == 0){
                                     step27->hide();
                                     }
                               }
                            }
                         }
                     }
                 }
             }
         }
     }
     count = 0;
     cont = true;
     CanEat = false;
     setstep3(chess);
     if(chess->x() != border ) {
         step3->show();
         if(HaveChess(step3,2)){
             step3->hide();
             cont = 0;
             count ++;
         }
         if(HaveChess(step3,1)){
             step3->hide();
             cont = 0;
             count ++;
         }
         if(chess->x() != border+size ) {
             step31->show();
             if(HaveChess(step31,2)){
                 step31->hide();
                 cont = 0;
                 count ++;
             }
             if(HaveChess(step31,1)){
                 step31->hide();
                 cont = 0;
                 if(count < 2){
                     count ++;
                     if(count == 2){
                         step31->show();
                         CanEat = 1;
                     }
                     else
                         CanEat = 0;
                 }

             }
             if(cont == 0 && CanEat == 0){
                 step31->hide();
                 }

             if(chess->x() != border+size*2) {
                 step32->show();
                 CanEat = 0;
                 if(HaveChess(step32,2)){
                     step32->hide();
                     cont = 0;
                 }
                 if(HaveChess(step32,1)){
                     step32->hide();
                     cont = 0;
                     if(count < 2){
                         count ++;
                         if(count == 2){
                             step32->show();
                             CanEat = 1;
                         }
                         else
                             CanEat = 0;
                         }

                 }
                 if(cont == 0 && CanEat == 0){
                     step32->hide();
                     }

                 if(chess->x() != border+size*3 ) {
                     step33->show();
                     CanEat = 0;
                     if(HaveChess(step33,2)){
                         step33->hide();
                         cont = 0;
                         count ++;
                     }
                     if(HaveChess(step33,1)){
                         step33->hide();
                         cont = 0;
                         if(count < 2){
                             count ++;
                             if(count == 2){
                                 step33->show();
                                 CanEat = 1;
                             }
                             else
                                 CanEat = 0;
                             }

                     }
                     if(cont == 0 && CanEat == 0){
                         step33->hide();
                         }

                     if(chess->x() != border+size*4 ) {
                         step34->show();
                         CanEat = 0;
                         if(HaveChess(step34,2)){
                             step34->hide();
                             cont = 0;
                             count ++;
                         }
                         if(HaveChess(step34,1)){
                             step34->hide();
                             cont = 0;
                             if(count < 2){
                                 count ++;
                                 if(count == 2){
                                     step34->show();
                                     CanEat = 1;
                                 }
                                 else
                                     CanEat = 0;
                                 }

                         }
                         if(cont == 0 && CanEat == 0){
                             step34->hide();
                             }

                         if(chess->x() != border+size*5) {
                             step35->show();
                             CanEat = 0;
                             if(HaveChess(step35,2)){
                                 step35->hide();
                                 cont = 0;
                                 count ++;
                             }
                             if(HaveChess(step35,1)){
                                 step35->hide();
                                 cont = 0;
                                 if(count < 2){
                                     count ++;
                                     if(count == 2){
                                         step35->show();
                                         CanEat = 1;
                                     }
                                     else
                                         CanEat = 0;
                                     }

                             }
                             if(cont == 0 && CanEat == 0){
                                 step35->hide();
                                 }

                             if(chess->x() != border+size*6 ) {
                                 step36->show();
                                 CanEat = 0;
                                 if(HaveChess(step36,2)){
                                     step36->hide();
                                     cont = 0;
                                     count ++;
                                 }
                                 if(HaveChess(step36,1)){
                                     step36->hide();
                                     cont = 0;
                                     if(count < 2){
                                         count ++;
                                         if(count == 2){
                                             step36->show();
                                             CanEat = 1;
                                         }
                                         else
                                             CanEat = 0;
                                         }

                                 }
                                 if(cont == 0 && CanEat == 0){
                                     step36->hide();
                                     }

                                 if(chess->x() != border+size*7 ) {
                                 step37->show();
                                 CanEat = 0;
                                 if(HaveChess(step37,2)){
                                     step37->hide();
                                     cont = 0;
                                     count ++;
                                 }
                                 if(HaveChess(step37,1)){
                                     step37->hide();
                                     cont = 0;
                                     if(count < 2){
                                         count ++;
                                         if(count == 2){
                                             step37->show();
                                             CanEat = 1;
                                         }
                                         else
                                             CanEat = 0;
                                         }

                                 }
                                 if(cont == 0 && CanEat == 0){
                                     step37->hide();
                                     }
                               }
                            }
                         }
                     }
                 }
             }
         }
     }

   }
}

void MainWindow::JiangBlack_movement(QPushButton *chess){
  if(chess->x() < 550){
      if(Jiang_black->x() == Jiang_red->x() ){
              setstep0(chess);
              step0->show();
              step01->show();
              step02->show();
              step03->show();
              step04->show();
              step05->show();
              step06->show();
              step07->show();
              step08->show();

              stepJiang->setParent(this);
              stepJiang->setGeometry(Jiang_red->x(),Jiang_red->y(),60,60);
              stepJiang->setStyleSheet("background-color: transparent;"
                                       "background-image: url(:/chess/transparent.png)"
                                       );
              stepJiang->show();
              if(HaveChess_Jiang(step0) == 1){
                  qDebug()<<"1";
                  stepJiang->hide();
              }
              if(HaveChess_Jiang(step01) == 1 ){
                  qDebug()<<"2";
                  stepJiang->hide();
              }
              if(HaveChess_Jiang(step02) == 1 ){
                  qDebug()<<"3";
                  stepJiang->hide();
              }
              if(HaveChess_Jiang(step03) == 1 ){
                  qDebug()<<"4";
                  stepJiang->hide();
              }
              if(HaveChess_Jiang(step04) == 1 ){
                  qDebug()<<"5";
                  stepJiang->hide();
              }
              if(HaveChess_Jiang(step05) == 1 ){
                  qDebug()<<"6";
                  stepJiang->hide();
              }
              if(HaveChess_Jiang(step06) == 1 ){
                  qDebug()<<"7";
                 stepJiang->hide();
              }
              if(HaveChess_Jiang(step07) == 1 ){
                  qDebug()<<"8";
                 stepJiang->hide();
              }
              if(HaveChess_Jiang(step08) == 1 ){
                  qDebug()<<"9";
                  stepJiang->hide();
              }
              step0->hide();
              step01->hide();
              step02->hide();
              step03->hide();
              step04->hide();
              step05->hide();
              step06->hide();
              step07->hide();
              step08->hide();


      }

    if(chess->x()<border+size*6 && chess->x()>border+size*2){
        if(chess->y() == border || chess->y() == border+size ){
            step0->setParent(this);
            step0->setGeometry(chess->x(),chess->y()+size,60,60);
            step0->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step0->show();
            if(HaveChess(step0,2)){
            step0->hide();
        }
        }
    }
    if(chess->x()<border+size*6 && chess->x()>border+size*2){
        if(chess->y() == border+size || chess->y() == border+size*2 ){
            step1->setParent(this);
            step1->setGeometry(chess->x(),chess->y()-size,60,60);
            step1->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step1->show();
            if(HaveChess(step1,2)){
               step1->hide();
           }
        }
    }
    if(chess->x()<border+size*5 && chess->x()>border+size*2){
        if(chess->y() < border+size*3 && chess->y() >= border ){
            step2->setParent(this);
            step2->setGeometry(chess->x()+size,chess->y(),60,60);
            step2->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step2->show();
            if(HaveChess(step2,2)){
               step2->hide();
           }
        }
    }
    if(chess->x()<border+size*6 && chess->x()>border+size*3){
        if(chess->y() < border+size*3 && chess->y() >= border ){
            step3->setParent(this);
            step3->setGeometry(chess->x()-size,chess->y(),60,60);
            step3->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step3->show();
            if(HaveChess(step3,2)){
               step3->hide();
           }
        }
    }

  }
}

void MainWindow::BingRed_movement(QPushButton *chess){
  if(chess->x() < 550){
    if((chess->y()) != border){                                       //border
        step1->setParent(this);
        step1->setGeometry(chess->x(),chess->y()-size,60,60);
        step1->setStyleSheet("background-color: transparent;"
                            "background-image: url(:/chess/transparent.png)"
                            );
        step1->show();
        if(HaveChess(step1,1)){
               step1->hide();
           }

    }
   if(chess->y()<=border+size*4){                         //over the river,set left-right movement
        if((chess->x())+R != 35+size*8){
           step2->setParent(this);
           step2->setGeometry(chess->x()+size,chess->y(),60,60);

           step2->setStyleSheet("background-color: transparent;"
                               "background-image: url(:/chess/transparent.png)"
                               );
           step2->show();
           if(HaveChess(step2,1)){
               step2->hide();
           }

       }
       if((chess->x())+R != 35){
           step3->setParent(this);
           step3->setGeometry(chess->x()-size,chess->y(),60,60);
           step3->setStyleSheet("background-color: transparent;"
                               "background-image: url(:/chess/transparent.png)"
                               );

           step3->show();
           if(HaveChess(step3,1)){
               step3->hide();
           }
       }

   }
    }
}

void MainWindow::ShiRed_movement(QPushButton *chess){
  if(chess->x() < 550){
    if((chess->x() == border+size*3 && chess->y() == border+size*9) ||
       (chess->y() == border+size*8 && chess->x() == border+size*4)){
            step4->setParent(this);
            step4->setGeometry(chess->x()+size,chess->y()-size,60,60);
            step4->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step4->show();
            if(HaveChess(step4,1)){
               step4->hide();
           }
     }
    if((chess->x() == border+size*5 && chess->y() == border+size*9) ||
       (chess->y() == border+size*8 && chess->x() == border+size*4)){
            step5->setParent(this);
            step5->setGeometry(chess->x()-size,chess->y()-size,60,60);
            step5->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step5->show();
            if(HaveChess(step5,1)){
               step5->hide();
           }
     }
    if((chess->x() == border+size*3 && chess->y() == border+size*7) ||
       (chess->y() == border+size*8 && chess->x() == border+size*4)){
            step6->setParent(this);
            step6->setGeometry(chess->x()+size,chess->y()+size,60,60);
            step6->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step6->show();
            if(HaveChess(step6,1)){
               step6->hide();
           }
     }
    if((chess->x() == border+size*5 && chess->y() == border+size*7) ||
       (chess->y() == border+size*8 && chess->x() == border+size*4)){
            step7->setParent(this);
            step7->setGeometry(chess->x()-size,chess->y()+size,60,60);
            step7->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step7->show();
            if(HaveChess(step7,1)){
               step7->hide();
           }
     }
    }

}

void MainWindow::XiangRed_movement(QPushButton *chess){
    if(chess->x() < 550){
    if(chess->y() <= border+size*9 && chess->y() != border+size*5){
        if(chess->x() != border+size*8){
            step41->setParent(this);
            step41->setGeometry(chess->x()+size*2,chess->y()-size*2,60,60);
            step41->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step41->show();
            if(HaveChess(step41,1)){
               step41->hide();
           }
            step4->setParent(this);
            step4->setGeometry(chess->x()+size,chess->y()-size,60,60);
            step4->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step4->show();
            if(HaveChess(step4,2)){
                   step41->hide();
            }
            else if(HaveChess(step4,1)){
                   step41->hide();
              }

            step4->hide();
        }
        if(chess->x() != border){
            step51->setParent(this);
            step51->setGeometry(chess->x()-size*2,chess->y()-size*2,60,60);
            step51->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step51->show();
            if(HaveChess(step51,1)){
               step51->hide();
           }
            step5->setParent(this);
            step5->setGeometry(chess->x()-size,chess->y()-size,60,60);
            step5->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step5->show();
            if(HaveChess(step5,2)){
                step51->hide();
            }
            else if(HaveChess(step5,1)){
                step51->hide();
               }

            step5->hide();
        }
    }
    if(chess->y() >= border+size*5 && chess->y() != border+size*9){
        if(chess->x() != border+size*8){
            step61->setParent(this);
            step61->setGeometry(chess->x()+size*2,chess->y()+size*2,60,60);
            step61->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step61->show();
            if(HaveChess(step61,1)){
               step61->hide();
           }
            step6->setParent(this);
            step6->setGeometry(chess->x()+size,chess->y()+size,60,60);
            step6->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step6->show();
            if(HaveChess(step6,2)){
                step61->hide();
            }
            else if(HaveChess(step6,1)){
                   step61->hide();
            }

           step6->hide();
        }
        if(chess->x() != border){
            step71->setParent(this);
            step71->setGeometry(chess->x()-size*2,chess->y()+size*2,60,60);
            step71->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step71->show();
            if(HaveChess(step71,1)){
               step71->hide();
           }
            step7->setParent(this);
            step7->setGeometry(chess->x()-size,chess->y()+size,60,60);
            step7->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step7->show();
            if(HaveChess(step7,2)){
                step71->hide();
            }
            else if(HaveChess(step7,1)){
               step71->hide();
                }

            step7->hide();
        }
    }
    }
}

void MainWindow::MaRed_movement(QPushButton *chess){
    if(chess->x() < 550){
    if(chess->y() != border && chess->y() != border+size){
        if(chess->x() != border+size*8){
            step8->setParent(this);
            step8->setGeometry(chess->x()+size,chess->y()-size*2,60,60);
            step8->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step8->show();
            if(HaveChess(step8,1)){
                   step8->hide();
            }
        }
        if(chess->x() != border){
            step81->setParent(this);
            step81->setGeometry(chess->x()-size,chess->y()-size*2,60,60);
            step81->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step81->show();
            if(HaveChess(step81,1)){
                   step81->hide();
            }
        }
        step1->setParent(this);
        step1->setGeometry(chess->x(),chess->y()-size,60,60);
        step1->setStyleSheet("background-color: transparent;"
                            "background-image: url(:/chess/transparent.png)"
                            );
        step1->show();
        if(HaveChess(step1,1)){
               step8->hide();
               step81->hide();
           }
        else if(HaveChess(step1,2)){
            step8->hide();
            step81->hide();
        }
        step1->hide();
    }
    if(chess->y() != border+size*8 && chess->y() != border+size*9){
        if(chess->x() != border+size*8){
            step82->setParent(this);
            step82->setGeometry(chess->x()+size,chess->y()+size*2,60,60);
            step82->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step82->show();
            if(HaveChess(step82,1)){
                   step82->hide();
            }
        }
        if(chess->x() != border){
            step83->setParent(this);
            step83->setGeometry(chess->x()-size,chess->y()+size*2,60,60);
            step83->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step83->show();
            if(HaveChess(step83,1)){
                   step83->hide();
            }
        }
        step0->setParent(this);
        step0->setGeometry(chess->x(),chess->y()+size,60,60);
        step0->setStyleSheet("background-color: transparent;"
                            "background-image: url(:/chess/transparent.png)"
                            );
        step0->show();
        if(HaveChess(step0,1)){
               step82->hide();
               step83->hide();
           }
        else if(HaveChess(step0,2)){
            step82->hide();
            step83->hide();
        }
        step0->hide();
    }
    if(chess->x() != border+size*7 && chess->x() != border+size*8){
        if(chess->y() != border){
            step84->setParent(this);
            step84->setGeometry(chess->x()+size*2,chess->y()-size,60,60);
            step84->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step84->show();
            if(HaveChess(step84,1)){
                   step84->hide();
            }
        }
        if(chess->y() != border+size*9){
                    step85->setParent(this);
                    step85->setGeometry(chess->x()+size*2,chess->y()+size,60,60);
                    step85->setStyleSheet("background-color: transparent;"
                                        "background-image: url(:/chess/transparent.png)"
                                        );
                    step85->show();
                    if(HaveChess(step85,1)){
                           step85->hide();
                    }
                }
        step2->setParent(this);
        step2->setGeometry(chess->x()+size,chess->y(),60,60);
        step2->setStyleSheet("background-color: transparent;"
                            "background-image: url(:/chess/transparent.png)"
                            );
        step2->show();
        if(HaveChess(step2,1)){
               step84->hide();
               step85->hide();
           }
        else if(HaveChess(step2,2)){
            step84->hide();
            step85->hide();
        }
        step2->hide();
    }
    if(chess->x() != border && chess->x() != border+size){
        if(chess->y() != border){
            step86->setParent(this);
            step86->setGeometry(chess->x()-size*2,chess->y()-size,60,60);
            step86->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step86->show();
            if(HaveChess(step86,1)){
                   step86->hide();
            }
        }
        if(chess->y() != border+size*9){
            step87->setParent(this);
            step87->setGeometry(chess->x()-size*2,chess->y()+size,60,60);
            step87->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step87->show();
            if(HaveChess(step87,1)){
                   step87->hide();
            }
        }
        step3->setParent(this);
        step3->setGeometry(chess->x()-size,chess->y(),60,60);
        step3->setStyleSheet("background-color: transparent;"
                            "background-image: url(:/chess/transparent.png)"
                            );
        step3->show();
        if(HaveChess(step3,1)){
               step86->hide();
               step87->hide();
           }
        else if(HaveChess(step3,2)){
            step86->hide();
            step87->hide();
        }
        step3->hide();
    }
    }

}

void MainWindow::CheRed_movement(QPushButton *chess){
    bool cont = true;
    if(chess->x() < 550){
      setstep0(chess);
      if(chess->y() != border+size*9 && cont == 1) {
          step0->show();
          if(HaveChess(step0,1)){
              step0->hide();
              cont = 0;
          }
          if(HaveChess(step0,2)){
              cont = 0;
          }
          if(chess->y() != border+size*8 && cont == 1) {
              step01->show();
              if(HaveChess(step01,1)){
                  step01->hide();
                  cont = 0;
              }
              if(HaveChess(step01,2)){
                  cont = 0;
              }
              if(chess->y() != border+size*7 && cont == 1) {
                  step02->show();
                  if(HaveChess(step02,1)){
                      step02->hide();
                      cont = 0;
                  }
                  if(HaveChess(step02,2)){
                      cont = 0;
                  }
                  if(chess->y() != border+size*6 && cont == 1) {
                      step03->show();
                      if(HaveChess(step03,1)){
                          step03->hide();
                          cont = 0;
                      }
                      if(HaveChess(step03,2)){
                          cont = 0;
                      }
                      if(chess->y() != border+size*5 && cont == 1) {
                          step04->show();
                          if(HaveChess(step04,1)){
                              step04->hide();
                              cont = 0;
                          }
                          if(HaveChess(step04,2)){
                              cont = 0;
                          }
                          if(chess->y() != border+size*4 && cont == 1) {
                              step05->show();
                              if(HaveChess(step05,1)){
                                  step05->hide();
                                  cont = 0;
                              }
                              if(HaveChess(step05,2)){
                                  cont = 0;
                              }
                              if(chess->y() != border+size*3 && cont == 1) {
                                  step06->show();
                                  if(HaveChess(step06,1)){
                                      step06->hide();
                                      cont = 0;
                                  }
                                  if(HaveChess(step06,2)){
                                      cont = 0;
                                  }

                              if(chess->y() != border+size*2 && cont == 1) {
                                  step07->show();
                                  if(HaveChess(step07,1)){
                                      step07->hide();
                                      cont = 0;
                                  }
                                  if(HaveChess(step07,2)){
                                      cont = 0;
                                  }
                                  if(chess->y() != border+size && cont == 1) {
                                      step08->show();
                                      if(HaveChess(step08,1)){
                                          step08->hide();
                                          cont = 0;
                                      }
                                      if(HaveChess(step08,2)){
                                          cont = 0;
                                      }
                                  }
                              }
                            }
                          }
                      }
                  }
              }
          }
      }
      cont = true;
      setstep1(chess);
      if(chess->y() != border && cont == 1) {
          step1->show();
          if(HaveChess(step1,1)){
              step1->hide();
              cont = 0;
          }
          if(HaveChess(step1,2)){
              cont = 0;
          }
          if(chess->y() != border+size && cont == 1) {
              step11->show();
              if(HaveChess(step11,1)){
                  step11->hide();
                  cont = 0;
              }
              if(HaveChess(step11,2)){
                  cont = 0;
              }
              if(chess->y() != border+size*2 && cont == 1) {
                  step12->show();
                  if(HaveChess(step12,1)){
                      step12->hide();
                      cont = 0;
                  }
                  if(HaveChess(step12,2)){
                      cont = 0;
                  }
                  if(chess->y() != border+size*3 && cont == 1) {
                      step13->show();
                      if(HaveChess(step13,1)){
                          step13->hide();
                          cont = 0;
                      }
                      if(HaveChess(step13,2)){
                          cont = 0;
                      }
                      if(chess->y() != border+size*4 && cont == 1) {
                          step14->show();
                          if(HaveChess(step14,1)){
                              step14->hide();
                              cont = 0;
                          }
                          if(HaveChess(step14,2)){
                              cont = 0;
                          }
                          if(chess->y() != border+size*5 && cont == 1) {
                              step15->show();
                              if(HaveChess(step15,1)){
                                  step15->hide();
                                  cont = 0;
                              }
                              if(HaveChess(step15,2)){
                                  cont = 0;
                              }
                              if(chess->y() != border+size*6 && cont == 1) {
                                  step16->show();
                                  if(HaveChess(step16,1)){
                                      step16->hide();
                                      cont = 0;
                                  }
                                  if(HaveChess(step16,2)){
                                      cont = 0;
                                  }
                                  if(chess->y() != border+size*7 && cont == 1) {
                                      step17->show();
                                      if(HaveChess(step17,1)){
                                          step17->hide();
                                          cont = 0;
                                      }
                                      if(HaveChess(step17,2)){
                                          cont = 0;
                                      }
                                      if(chess->y() != border+size*8 && cont == 1) {
                                          step18->show();
                                          if(HaveChess(step18,1)){
                                              step18->hide();
                                              cont = 0;
                                          }
                                          if(HaveChess(step18,2)){
                                              cont = 0;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
      cont = true;
      setstep2(chess);
      if(chess->x() != border+size*8 && cont == 1) {
          step2->show();
          if(HaveChess(step2,1)){
              step2->hide();
              cont = 0;
          }
          if(HaveChess(step2,2)){
              cont = 0;
          }
          if(chess->x() != border+size*7 && cont == 1) {
              step21->show();
              if(HaveChess(step21,1)){
                  step21->hide();
                  cont = 0;
              }
              if(HaveChess(step21,2)){
                  cont = 0;
              }
              if(chess->x() != border+size*6 && cont == 1) {
                  step22->show();
                  if(HaveChess(step22,1)){
                      step22->hide();
                      cont = 0;
                  }
                  if(HaveChess(step22,2)){
                      cont = 0;
                  }
                  if(chess->x() != border+size*5 && cont == 1) {
                      step23->show();
                      if(HaveChess(step23,1)){
                          step23->hide();
                          cont = 0;
                      }
                      if(HaveChess(step23,2)){
                          cont = 0;
                      }
                      if(chess->x() != border+size*4 && cont == 1) {
                          step24->show();
                          if(HaveChess(step24,1)){
                              step24->hide();
                              cont = 0;
                          }
                          if(HaveChess(step24,2)){
                              cont = 0;
                          }
                          if(chess->x() != border+size*3 && cont == 1) {
                              step25->show();
                              if(HaveChess(step25,1)){
                                  step25->hide();
                                  cont = 0;
                              }
                              if(HaveChess(step25,2)){
                                  cont = 0;
                              }
                              if(chess->x() != border+size*2 && cont == 1) {
                                  step26->show();
                                  if(HaveChess(step26,1)){
                                      step26->hide();
                                      cont = 0;
                                  }
                                  if(HaveChess(step26,2)){
                                      cont = 0;
                                  }
                                  if(chess->x() != border+size && cont == 1) {
                                      step27->show();
                                      if(HaveChess(step27,1)){
                                          step27->hide();
                                          cont = 0;
                                      }
                                      if(HaveChess(step27,2)){
                                          cont = 0;
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
      cont = true;
      setstep3(chess);
      if(chess->x() != border && cont == 1) {
          step3->show();
          if(HaveChess(step3,1)){
              step3->hide();
              cont = 0;
          }
          if(HaveChess(step3,2)){
              cont = 0;
          }
          if(chess->x() != border+size && cont == 1) {
              step31->show();
              if(HaveChess(step31,1)){
                  step31->hide();
                  cont = 0;
              }
              if(HaveChess(step31,2)){
                  cont = 0;
              }
              if(chess->x() != border+size*2 && cont == 1) {
                  step32->show();
                  if(HaveChess(step32,1)){
                      step32->hide();
                      cont = 0;
                  }
                  if(HaveChess(step32,2)){
                      cont = 0;
                  }
                  if(chess->x() != border+size*3 && cont == 1) {
                      step33->show();
                      if(HaveChess(step33,1)){
                          step33->hide();
                          cont = 0;
                      }
                      if(HaveChess(step33,2)){
                          cont = 0;
                      }
                      if(chess->x() != border+size*4 && cont == 1) {
                          step34->show();
                          if(HaveChess(step34,1)){
                              step34->hide();
                              cont = 0;
                          }
                          if(HaveChess(step34,2)){
                              cont = 0;
                          }
                          if(chess->x() != border+size*5 && cont == 1) {
                              step35->show();
                              if(HaveChess(step35,1)){
                                  step35->hide();
                                  cont = 0;
                              }
                              if(HaveChess(step35,2)){
                                  cont = 0;
                              }
                              if(chess->x() != border+size*6 && cont == 1) {
                                  step36->show();
                                  if(HaveChess(step36,1)){
                                      step36->hide();
                                      cont = 0;
                                  }
                                  if(HaveChess(step36,2)){
                                      cont = 0;
                                  }
                                  if(chess->x() != border+size*7 && cont == 1) {
                                      step37->show();
                                      if(HaveChess(step37,1)){
                                          step37->hide();
                                          cont = 0;
                                      }
                                      if(HaveChess(step37,2)){
                                          cont = 0;
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
      }

}

void MainWindow::PaoRed_movement(QPushButton *chess){
    bool cont = true;
    int count = 0;
    bool CanEat = false;
    if(chess->x() < 550){
    setstep0(chess);
    if(chess->y() != border+size*9 ) {
        step0->show();
        if(HaveChess(step0,1)){
            step0->hide();
            cont = 0;
            count ++;
        }
        if(HaveChess(step0,2)){
            step0->hide();
            cont = 0;
            count ++;
        }
        if(chess->y() != border+size*8 ) {
            step01->show();
            if(HaveChess(step01,1)){
                step01->hide();
                cont = 0;
                count ++;
            }
            if(HaveChess(step01,2)){
                step01->hide();
                cont = 0;
                if(count < 2){
                    count ++;
                    if(count == 2){
                        step01->show();
                        CanEat = 1;
                    }
                    else
                        CanEat = 0;
                }

            }
            if(cont == 0 && CanEat == 0){
                step01->hide();
                }

            if(chess->y() != border+size*7 ) {
                step02->show();
                CanEat = 0;
                if(HaveChess(step02,1)){
                    step02->hide();
                    cont = 0;
                }
                if(HaveChess(step02,2)){
                    step02->hide();
                    cont = 0;
                    if(count < 2){
                        count ++;
                        if(count == 2){
                            step02->show();
                            CanEat = 1;
                        }
                        else
                            CanEat = 0;
                        }

                }
                if(cont == 0 && CanEat == 0){
                    step02->hide();
                    }

                if(chess->y() != border+size*6 ) {
                    step03->show();
                    CanEat = 0;
                    if(HaveChess(step03,1)){
                        step03->hide();
                        cont = 0;
                        count ++;
                    }
                    if(HaveChess(step03,2)){
                        step03->hide();
                        cont = 0;
                        if(count < 2){
                            count ++;
                            if(count == 2){
                                step03->show();
                                CanEat = 1;
                            }
                            else
                                CanEat = 0;
                            }

                    }
                    if(cont == 0 && CanEat == 0){
                        step03->hide();
                        }

                    if(chess->y() != border+size*5 ) {
                        step04->show();
                        CanEat = 0;
                        if(HaveChess(step04,1)){
                            step04->hide();
                            cont = 0;
                            count ++;
                        }
                        if(HaveChess(step04,2)){
                            step04->hide();
                            cont = 0;
                            if(count < 2){
                                count ++;
                                if(count == 2){
                                    step04->show();
                                    CanEat = 1;
                                }
                                else
                                    CanEat = 0;
                                }

                        }
                        if(cont == 0 && CanEat == 0){
                            step04->hide();
                            }

                        if(chess->y() != border+size*4 ) {
                            step05->show();
                            CanEat = 0;
                            if(HaveChess(step05,1)){
                                step05->hide();
                                cont = 0;
                                count ++;
                            }
                            if(HaveChess(step05,2)){
                                step05->hide();
                                cont = 0;
                                if(count < 2){
                                    count ++;
                                    if(count == 2){
                                        step05->show();
                                        CanEat = 1;
                                    }
                                    else
                                        CanEat = 0;
                                    }

                            }
                            if(cont == 0 && CanEat == 0){
                                step05->hide();
                                }

                            if(chess->y() != border+size*3 ) {
                                step06->show();
                                CanEat = 0;
                                if(HaveChess(step06,1)){
                                    step06->hide();
                                    cont = 0;
                                    count ++;
                                }
                                if(HaveChess(step06,2)){
                                    step06->hide();
                                    cont = 0;
                                    if(count < 2){
                                        count ++;
                                        if(count == 2){
                                            step06->show();
                                            CanEat = 1;
                                        }
                                        else
                                            CanEat = 0;
                                        }

                                }
                                if(cont == 0 && CanEat == 0){
                                    step06->hide();
                                    }

                                if(chess->y() != border+size*2 ) {
                                step07->show();
                                CanEat = 0;
                                if(HaveChess(step07,1)){
                                    step07->hide();
                                    cont = 0;
                                    count ++;
                                }
                                if(HaveChess(step07,2)){
                                    step07->hide();
                                    cont = 0;
                                    if(count < 2){
                                        count ++;
                                        if(count == 2){
                                            step07->show();
                                            CanEat = 1;
                                        }
                                        else
                                            CanEat = 0;
                                        }

                                }
                                if(cont == 0 && CanEat == 0){
                                    step07->hide();
                                    }

                                if(chess->y() != border+size) {
                                    step08->show();
                                    CanEat = 0;
                                    if(HaveChess(step08,1)){
                                        step08->hide();
                                        cont = 0;
                                        count ++;
                                    }
                                    if(HaveChess(step08,2)){
                                        step08->hide();
                                        cont = 0;
                                        if(count < 2){
                                            count ++;
                                            if(count == 2){
                                                step08->show();
                                                CanEat = 1;
                                            }
                                            else
                                                CanEat = 0;
                                            }

                                    }
                                    if(cont == 0 && CanEat == 0){
                                        step08->hide();
                                        }
                                }
                              }
                           }
                        }
                    }
                }
            }
        }
    }
    count = 0;
    cont = true;
    CanEat = false;
    setstep1(chess);
    if(chess->y() != border ) {
        step1->show();
        if(HaveChess(step1,1)){
            step1->hide();
            cont = 0;
            count ++;
        }
        if(HaveChess(step1,2)){
            step1->hide();
            cont = 0;
            count ++;
        }
        if(chess->y() != border+size ) {
            step11->show();
            if(HaveChess(step11,1)){
                step11->hide();
                cont = 0;
                count ++;
            }
            if(HaveChess(step11,2)){
                step11->hide();
                cont = 0;
                if(count < 2){
                    count ++;
                    if(count == 2){
                        step11->show();
                        CanEat = 1;
                    }
                    else
                        CanEat = 0;
                }

            }
            if(cont == 0 && CanEat == 0){
                step11->hide();
                }

            if(chess->y() != border+size*2 ) {
                step12->show();
                CanEat = 0;
                if(HaveChess(step12,1)){
                    step12->hide();
                    cont = 0;
                }
                if(HaveChess(step12,2)){
                    step12->hide();
                    cont = 0;
                    if(count < 2){
                        count ++;
                        if(count == 2){
                            step12->show();
                            CanEat = 1;
                        }
                        else
                            CanEat = 0;
                        }

                }
                if(cont == 0 && CanEat == 0){
                    step12->hide();
                    }

                if(chess->y() != border+size*3 ) {
                    step13->show();
                    CanEat = 0;
                    if(HaveChess(step13,1)){
                        step13->hide();
                        cont = 0;
                        count ++;
                    }
                    if(HaveChess(step13,2)){
                        step13->hide();
                        cont = 0;
                        if(count < 2){
                            count ++;
                            if(count == 2){
                                step13->show();
                                CanEat = 1;
                            }
                            else
                                CanEat = 0;
                            }

                    }
                    if(cont == 0 && CanEat == 0){
                        step13->hide();
                        }

                    if(chess->y() != border+size*4 ) {
                        step14->show();
                        CanEat = 0;
                        if(HaveChess(step14,1)){
                            step14->hide();
                            cont = 0;
                            count ++;
                        }
                        if(HaveChess(step14,2)){
                            step14->hide();
                            cont = 0;
                            if(count < 2){
                                count ++;
                                if(count == 2){
                                    step14->show();
                                    CanEat = 1;
                                }
                                else
                                    CanEat = 0;
                                }

                        }
                        if(cont == 0 && CanEat == 0){
                            step14->hide();
                            }

                        if(chess->y() != border+size*5 ) {
                            step15->show();
                            CanEat = 0;
                            if(HaveChess(step15,1)){
                                step15->hide();
                                cont = 0;
                                count ++;
                            }
                            if(HaveChess(step15,2)){
                                step15->hide();
                                cont = 0;
                                if(count < 2){
                                    count ++;
                                    if(count == 2){
                                        step15->show();
                                        CanEat = 1;
                                    }
                                    else
                                        CanEat = 0;
                                    }

                            }
                            if(cont == 0 && CanEat == 0){
                                step15->hide();
                                }

                            if(chess->y() != border+size*6 ) {
                                step16->show();
                                CanEat = 0;
                                if(HaveChess(step16,1)){
                                    step16->hide();
                                    cont = 0;
                                    count ++;
                                }
                                if(HaveChess(step16,2)){
                                    step16->hide();
                                    cont = 0;
                                    if(count < 2){
                                        count ++;
                                        if(count == 2){
                                            step16->show();
                                            CanEat = 1;
                                        }
                                        else
                                            CanEat = 0;
                                        }

                                }
                                if(cont == 0 && CanEat == 0){
                                    step16->hide();
                                    }

                                if(chess->y() != border+size*7 ) {
                                step17->show();
                                CanEat = 0;
                                if(HaveChess(step17,1)){
                                    step17->hide();
                                    cont = 0;
                                    count ++;
                                }
                                if(HaveChess(step17,2)){
                                    step17->hide();
                                    cont = 0;
                                    if(count < 2){
                                        count ++;
                                        if(count == 2){
                                            step17->show();
                                            CanEat = 1;
                                        }
                                        else
                                            CanEat = 0;
                                        }

                                }
                                if(cont == 0 && CanEat == 0){
                                    step17->hide();
                                    }

                                if(chess->y() != border+size*8) {
                                    step18->show();
                                    CanEat = 0;
                                    if(HaveChess(step18,1)){
                                        step18->hide();
                                        cont = 0;
                                        count ++;
                                    }
                                    if(HaveChess(step18,2)){
                                        step18->hide();
                                        cont = 0;
                                        if(count < 2){
                                            count ++;
                                            if(count == 2){
                                                step18->show();
                                                CanEat = 1;
                                            }
                                            else
                                                CanEat = 0;
                                            }

                                    }
                                    if(cont == 0 && CanEat == 0){
                                        step18->hide();
                                        }
                                }
                              }
                           }
                        }
                    }
                }
            }
        }
    }
    count = 0;
    cont = true;
    CanEat = false;
    setstep2(chess);
    if(chess->x() != border+size*8 ) {
        step2->show();
        if(HaveChess(step2,1)){
            step2->hide();
            cont = 0;
            count ++;
        }
        if(HaveChess(step2,2)){
            step2->hide();
            cont = 0;
            count ++;
        }
        if(chess->x() != border+size*7 ) {
            step21->show();
            if(HaveChess(step21,1)){
                step21->hide();
                cont = 0;
                count ++;
            }
            if(HaveChess(step21,2)){
                step21->hide();
                cont = 0;
                if(count < 2){
                    count ++;
                    if(count == 2){
                        step21->show();
                        CanEat = 1;
                    }
                    else
                        CanEat = 0;
                }

            }
            if(cont == 0 && CanEat == 0){
                step21->hide();
                }

            if(chess->x() != border+size*6) {
                step22->show();
                CanEat = 0;
                if(HaveChess(step22,1)){
                    step22->hide();
                    cont = 0;
                }
                if(HaveChess(step22,2)){
                    step22->hide();
                    cont = 0;
                    if(count < 2){
                        count ++;
                        if(count == 2){
                            step22->show();
                            CanEat = 1;
                        }
                        else
                            CanEat = 0;
                        }

                }
                if(cont == 0 && CanEat == 0){
                    step22->hide();
                    }

                if(chess->x() != border+size*5 ) {
                    step23->show();
                    CanEat = 0;
                    if(HaveChess(step23,1)){
                        step23->hide();
                        cont = 0;
                        count ++;
                    }
                    if(HaveChess(step23,2)){
                        step23->hide();
                        cont = 0;
                        if(count < 2){
                            count ++;
                            if(count == 2){
                                step23->show();
                                CanEat = 1;
                            }
                            else
                                CanEat = 0;
                            }

                    }
                    if(cont == 0 && CanEat == 0){
                        step23->hide();
                        }

                    if(chess->x() != border+size*4 ) {
                        step24->show();
                        CanEat = 0;
                        if(HaveChess(step24,1)){
                            step24->hide();
                            cont = 0;
                            count ++;
                        }
                        if(HaveChess(step24,2)){
                            step24->hide();
                            cont = 0;
                            if(count < 2){
                                count ++;
                                if(count == 2){
                                    step24->show();
                                    CanEat = 1;
                                }
                                else
                                    CanEat = 0;
                                }

                        }
                        if(cont == 0 && CanEat == 0){
                            step24->hide();
                            }

                        if(chess->x() != border+size*3 ) {
                            step25->show();
                            CanEat = 0;
                            if(HaveChess(step25,1)){
                                step25->hide();
                                cont = 0;
                                count ++;
                            }
                            if(HaveChess(step25,2)){
                                step25->hide();
                                cont = 0;
                                if(count < 2){
                                    count ++;
                                    if(count == 2){
                                        step25->show();
                                        CanEat = 1;
                                    }
                                    else
                                        CanEat = 0;
                                    }

                            }
                            if(cont == 0 && CanEat == 0){
                                step25->hide();
                                }

                            if(chess->x() != border+size*2 ) {
                                step26->show();
                                CanEat = 0;
                                if(HaveChess(step26,1)){
                                    step26->hide();
                                    cont = 0;
                                    count ++;
                                }
                                if(HaveChess(step26,2)){
                                    step26->hide();
                                    cont = 0;
                                    if(count < 2){
                                        count ++;
                                        if(count == 2){
                                            step26->show();
                                            CanEat = 1;
                                        }
                                        else
                                            CanEat = 0;
                                        }

                                }
                                if(cont == 0 && CanEat == 0){
                                    step26->hide();
                                    }

                                if(chess->x() != border+size ) {
                                step27->show();
                                CanEat = 0;
                                if(HaveChess(step27,1)){
                                    step27->hide();
                                    cont = 0;
                                    count ++;
                                }
                                if(HaveChess(step27,2)){
                                    step27->hide();
                                    cont = 0;
                                    if(count < 2){
                                        count ++;
                                        if(count == 2){
                                            step27->show();
                                            CanEat = 1;
                                        }
                                        else
                                            CanEat = 0;
                                        }

                                }
                                if(cont == 0 && CanEat == 0){
                                    step27->hide();
                                    }
                              }
                           }
                        }
                    }
                }
            }
        }
    }
    count = 0;
    cont = true;
    CanEat = false;
    setstep3(chess);
    if(chess->x() != border ) {
        step3->show();
        if(HaveChess(step3,1)){
            step3->hide();
            cont = 0;
            count ++;
        }
        if(HaveChess(step3,2)){
            step3->hide();
            cont = 0;
            count ++;
        }
        if(chess->x() != border+size ) {
            step31->show();
            if(HaveChess(step31,1)){
                step31->hide();
                cont = 0;
                count ++;
            }
            if(HaveChess(step31,2)){
                step31->hide();
                cont = 0;
                if(count < 2){
                    count ++;
                    if(count == 2){
                        step31->show();
                        CanEat = 1;
                    }
                    else
                        CanEat = 0;
                }

            }
            if(cont == 0 && CanEat == 0){
                step31->hide();
                }

            if(chess->x() != border+size*2) {
                step32->show();
                CanEat = 0;
                if(HaveChess(step32,1)){
                    step32->hide();
                    cont = 0;
                }
                if(HaveChess(step32,2)){
                    step32->hide();
                    cont = 0;
                    if(count < 2){
                        count ++;
                        if(count == 2){
                            step32->show();
                            CanEat = 1;
                        }
                        else
                            CanEat = 0;
                        }

                }
                if(cont == 0 && CanEat == 0){
                    step32->hide();
                    }

                if(chess->x() != border+size*3 ) {
                    step33->show();
                    CanEat = 0;
                    if(HaveChess(step33,1)){
                        step33->hide();
                        cont = 0;
                        count ++;
                    }
                    if(HaveChess(step33,2)){
                        step33->hide();
                        cont = 0;
                        if(count < 2){
                            count ++;
                            if(count == 2){
                                step33->show();
                                CanEat = 1;
                            }
                            else
                                CanEat = 0;
                            }

                    }
                    if(cont == 0 && CanEat == 0){
                        step33->hide();
                        }

                    if(chess->x() != border+size*4 ) {
                        step34->show();
                        CanEat = 0;
                        if(HaveChess(step34,1)){
                            step34->hide();
                            cont = 0;
                            count ++;
                        }
                        if(HaveChess(step34,2)){
                            step34->hide();
                            cont = 0;
                            if(count < 2){
                                count ++;
                                if(count == 2){
                                    step34->show();
                                    CanEat = 1;
                                }
                                else
                                    CanEat = 0;
                                }

                        }
                        if(cont == 0 && CanEat == 0){
                            step34->hide();
                            }

                        if(chess->x() != border+size*5) {
                            step35->show();
                            CanEat = 0;
                            if(HaveChess(step35,1)){
                                step35->hide();
                                cont = 0;
                                count ++;
                            }
                            if(HaveChess(step35,2)){
                                step35->hide();
                                cont = 0;
                                if(count < 2){
                                    count ++;
                                    if(count == 2){
                                        step35->show();
                                        CanEat = 1;
                                    }
                                    else
                                        CanEat = 0;
                                    }

                            }
                            if(cont == 0 && CanEat == 0){
                                step35->hide();
                                }

                            if(chess->x() != border+size*6 ) {
                                step36->show();
                                CanEat = 0;
                                if(HaveChess(step36,1)){
                                    step36->hide();
                                    cont = 0;
                                    count ++;
                                }
                                if(HaveChess(step36,2)){
                                    step36->hide();
                                    cont = 0;
                                    if(count < 2){
                                        count ++;
                                        if(count == 2){
                                            step36->show();
                                            CanEat = 1;
                                        }
                                        else
                                            CanEat = 0;
                                        }

                                }
                                if(cont == 0 && CanEat == 0){
                                    step36->hide();
                                    }

                                if(chess->x() != border+size*7 ) {
                                step37->show();
                                CanEat = 0;
                                if(HaveChess(step37,1)){
                                    step37->hide();
                                    cont = 0;
                                    count ++;
                                }
                                if(HaveChess(step37,2)){
                                    step37->hide();
                                    cont = 0;
                                    if(count < 2){
                                        count ++;
                                        if(count == 2){
                                            step37->show();
                                            CanEat = 1;
                                        }
                                        else
                                            CanEat = 0;
                                        }

                                }
                                if(cont == 0 && CanEat == 0){
                                    step37->hide();
                                    }
                              }
                           }
                        }
                    }
                }
            }
        }
    }

  }

}

void MainWindow::JiangRed_movement(QPushButton *chess){
    if(chess->x() < 550){
        if(Jiang_black->x() == Jiang_red->x() ){
                setstep1(chess);
                step1->show();
                step11->show();
                step12->show();
                step13->show();
                step14->show();
                step15->show();
                step16->show();
                step17->show();
                step18->show();

                stepJiang->setParent(this);
                stepJiang->setGeometry(Jiang_black->x(),Jiang_black->y(),60,60);
                stepJiang->setStyleSheet("background-color: transparent;"
                                         "background-image: url(:/chess/transparent.png)"
                                         );
                stepJiang->show();
                if(HaveChess_Jiang(step1) == 1){
                    qDebug()<<"1";
                    stepJiang->hide();
                }
                if(HaveChess_Jiang(step11) == 1 ){
                    qDebug()<<"2";
                    stepJiang->hide();
                }
                if(HaveChess_Jiang(step12) == 1 ){
                    qDebug()<<"3";
                    stepJiang->hide();
                }
                if(HaveChess_Jiang(step13) == 1 ){
                    qDebug()<<"4";
                    stepJiang->hide();
                }
                if(HaveChess_Jiang(step14) == 1 ){
                    qDebug()<<"5";
                    stepJiang->hide();
                }
                if(HaveChess_Jiang(step15) == 1 ){
                    qDebug()<<"6";
                    stepJiang->hide();
                }
                if(HaveChess_Jiang(step16) == 1 ){
                    qDebug()<<"7";
                   stepJiang->hide();
                }
                if(HaveChess_Jiang(step17) == 1 ){
                    qDebug()<<"8";
                   stepJiang->hide();
                }
                if(HaveChess_Jiang(step18) == 1 ){
                    qDebug()<<"9";
                    stepJiang->hide();
                }
                step1->hide();
                step11->hide();
                step12->hide();
                step13->hide();
                step14->hide();
                step15->hide();
                step16->hide();
                step17->hide();
                step18->hide();


        }
    if(chess->x()<border+size*6 && chess->x()>border+size*2){
        if(chess->y() == border+size*7 || chess->y() == border+size*8 ){
            step0->setParent(this);
            step0->setGeometry(chess->x(),chess->y()+size,60,60);
            step0->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step0->show();
            if(HaveChess(step0,1)){
               step0->hide();
           }
        }
    }
    if(chess->x()<border+size*6 && chess->x()>border+size*2){
        if(chess->y() == border+size*8 || chess->y() == border+size*9 ){
            step1->setParent(this);
            step1->setGeometry(chess->x(),chess->y()-size,60,60);
            step1->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step1->show();
            if(HaveChess(step1,1)){
               step1->hide();
           }
        }
    }
    if(chess->x()<border+size*5 && chess->x()>border+size*2){
        if(chess->y() <= border+size*9 && chess->y() > border+size*6 ){
            step2->setParent(this);
            step2->setGeometry(chess->x()+size,chess->y(),60,60);
            step2->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step2->show();
            if(HaveChess(step2,1)){
               step2->hide();
           }
        }
    }
    if(chess->x()<border+size*6 && chess->x()>border+size*3){
        if(chess->y() <= border+size*9 && chess->y() > border+size*6 ){
            step3->setParent(this);
            step3->setGeometry(chess->x()-size,chess->y(),60,60);
            step3->setStyleSheet("background-color: transparent;"
                                "background-image: url(:/chess/transparent.png)"
                                );
            step3->show();
            if(HaveChess(step3,1)){
               step3->hide();
           }
        }
    }
    }

}

void MainWindow::Bing_black1_clicked(){
    HideBtn();
    button = 1;
    BingBlack_movement(Bing_black1);

}

void MainWindow::Bing_black2_clicked(){
    HideBtn();
    button = 2;
    BingBlack_movement(Bing_black2);

}

void MainWindow::Bing_black3_clicked(){
    HideBtn();
    button = 3;
    BingBlack_movement(Bing_black3);

}

void MainWindow::Bing_black4_clicked(){
    HideBtn();
    button = 4;
    BingBlack_movement(Bing_black4);

}

void MainWindow::Bing_black5_clicked(){
    HideBtn();
    button = 5;
    BingBlack_movement(Bing_black5);

}

void MainWindow::Shi_black1_clicked(){
    HideBtn();
    button = 6;
    ShiBlack_movement(Shi_black1);

}

void MainWindow::Shi_black2_clicked(){
    HideBtn();
    button = 7;
    ShiBlack_movement(Shi_black2);

}

void MainWindow::Xiang_black1_clicked(){
    HideBtn();
    button = 8;
    XiangBlack_movement(Xiang_black1);

}

void MainWindow::Xiang_black2_clicked(){
    HideBtn();
    button = 9;
    XiangBlack_movement(Xiang_black2);
}

void MainWindow::Ma_black1_clicked(){
    HideBtn();
    button = 10;
    MaBlack_movement(Ma_black1);
}

void MainWindow::Ma_black2_clicked(){
    HideBtn();
    button = 11;
    MaBlack_movement(Ma_black2);
}

void MainWindow::Che_black1_clicked(){
    HideBtn();
    button = 12;
    CheBlack_movement(Che_black1);
}

void MainWindow::Che_black2_clicked(){
    HideBtn();
    button = 13;
    CheBlack_movement(Che_black2);
}

void MainWindow::Pao_black1_clicked(){
   HideBtn();
   button = 14;
   PaoBlack_movement(Pao_black1);
}

void MainWindow::Pao_black2_clicked(){
    HideBtn();
    button = 15;
    PaoBlack_movement(Pao_black2);
}

void MainWindow::Jiang_black_clicked(){
    HideBtn();
    button = 16;
    JiangBlack_movement(Jiang_black);
}

void MainWindow::Bing_red1_clicked(){
    HideBtn();
    button = 17;
    BingRed_movement(Bing_red1);
}

void MainWindow::Bing_red2_clicked(){
    HideBtn();
    button = 18;
    BingRed_movement(Bing_red2);
}

void MainWindow::Bing_red3_clicked(){
    HideBtn();
    button = 19;
    BingRed_movement(Bing_red3);
}

void MainWindow::Bing_red4_clicked(){
    HideBtn();
    button = 20;
    BingRed_movement(Bing_red4);
}

void MainWindow::Bing_red5_clicked(){
    HideBtn();
    button = 21;
    BingRed_movement(Bing_red5);
}

void MainWindow::Shi_red1_clicked(){
    HideBtn();
    button = 22;
    ShiRed_movement(Shi_red1);
}

void MainWindow::Shi_red2_clicked(){
    HideBtn();
    button = 23;
    ShiRed_movement(Shi_red2);
}

void MainWindow::Xiang_red1_clicked(){
    HideBtn();
    button = 24;
    XiangRed_movement(Xiang_red1);
}

void MainWindow::Xiang_red2_clicked(){
    HideBtn();
    button = 25;
    XiangRed_movement(Xiang_red2);
}

void MainWindow::Ma_red1_clicked(){
    HideBtn();
    button = 26;
    MaRed_movement(Ma_red1);
}

void MainWindow::Ma_red2_clicked(){
    HideBtn();
    button = 27;
    MaRed_movement(Ma_red2);
}

void MainWindow::Che_red1_clicked(){
    HideBtn();
    button = 28;
    CheRed_movement(Che_red1);
}

void MainWindow::Che_red2_clicked(){
    HideBtn();
    button = 29;
    CheRed_movement(Che_red2);
}

void MainWindow::Pao_red1_clicked(){
   HideBtn();
   button = 30;
   PaoRed_movement(Pao_red1);
}

void MainWindow::Pao_red2_clicked(){
    HideBtn();
    button = 31;
    PaoRed_movement(Pao_red2);
}

void MainWindow::Jiang_red_clicked(){
    HideBtn();
    button = 32;
    JiangRed_movement(Jiang_red);
}

void MainWindow::move(QPushButton *btn){
    int x = btn->x();
    int y = btn ->y();
    if(button == 1){
        Bing_black1->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 2){
        Bing_black2->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 3){
        Bing_black3->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 4){
        Bing_black4->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 5){
        Bing_black5->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 6){
        Shi_black1->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 7){
        Shi_black2->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 8){
        Xiang_black1->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 9){
        Xiang_black2->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 10){
        Ma_black1->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 11){
        Ma_black2->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 12){
        Che_black1->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 13){
        Che_black2->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 14){
        Pao_black1->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 15){
        Pao_black2->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 16){
        Jiang_black->setGeometry(x,y,60,60);
        EatChess(btn,2);}
    else if(button == 17){
        Bing_red1->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 18){
        Bing_red2->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 19){
        Bing_red3->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 20){
        Bing_red4->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 21){
        Bing_red5->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 22){
        Shi_red1->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 23){
        Shi_red2->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 24){
        Xiang_red1->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 25){
        Xiang_red2->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 26){
        Ma_red1->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 27){
        Ma_red2->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 28){
        Che_red1->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 29){
        Che_red2->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 30){
        Pao_red1->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 31){
        Pao_red2->setGeometry(x,y,60,60);
        EatChess(btn,1);}
    else if(button == 32){
        Jiang_red->setGeometry(x,y,60,60);
        EatChess(btn,1);}
}

void MainWindow::step0_clicked(){                            //down 1 movement
    move(step0);
    Result();
    HideBtn();
}

void MainWindow::step01_clicked(){
    move(step01);
    HideBtn();
    Result();

}

void MainWindow::step02_clicked(){
    move(step02);
    HideBtn();
    Result();

}

void MainWindow::step03_clicked(){
    move(step03);
    HideBtn();
    Result();

}

void MainWindow::step04_clicked(){
    move(step04);
    HideBtn();
    Result();

}

void MainWindow::step05_clicked(){
    move(step05);
    HideBtn();
    Result();
}

void MainWindow::step06_clicked(){
    move(step06);
    HideBtn();
    Result();
}

void MainWindow::step07_clicked(){
    move(step07);
    HideBtn();
    Result();

}

void MainWindow::step08_clicked(){
    move(step08);
    HideBtn();
    Result();
}

void MainWindow::step1_clicked(){                          //up 1 movement
    move(step1);
    HideBtn();
    Result();
}

void MainWindow::step11_clicked(){
    move(step11);
    HideBtn();
    Result();

}

void MainWindow::step12_clicked(){
    move(step12);
    HideBtn();
    Result();

}

void MainWindow::step13_clicked(){
    move(step13);
    HideBtn();
    Result();

}

void MainWindow::step14_clicked(){
    move(step14);
    HideBtn();
    Result();

}

void MainWindow::step15_clicked(){
    move(step15);
    HideBtn();
    Result();

}

void MainWindow::step16_clicked(){
    move(step16);
    HideBtn();
    Result();

}

void MainWindow::step17_clicked(){
    move(step17);
    HideBtn();
    Result();

}

void MainWindow::step18_clicked(){
    move(step18);
    HideBtn();
    Result();

}

void MainWindow::step2_clicked(){                          //right 1 movement
    move(step2);
    HideBtn();
    Result();
}

void MainWindow::step21_clicked(){
    move(step21);
    HideBtn();
    Result();

}

void MainWindow::step22_clicked(){
    move(step22);
    HideBtn();
    Result();

}

void MainWindow::step23_clicked(){
    move(step23);
    HideBtn();
    Result();

}

void MainWindow::step24_clicked(){
    move(step24);
    HideBtn();
    Result();

}

void MainWindow::step25_clicked(){
    move(step25);
    HideBtn();
    Result();

}

void MainWindow::step26_clicked(){
    move(step26);
    HideBtn();
    Result();

}

void MainWindow::step27_clicked(){
    move(step27);
    HideBtn();
    Result();

}

void MainWindow::step3_clicked(){                          //left 1 movement
    move(step3);
    HideBtn();
    Result();
}

void MainWindow::step31_clicked(){
    move(step31);
    HideBtn();
    Result();

}

void MainWindow::step32_clicked(){
    move(step32);
    HideBtn();
    Result();

}

void MainWindow::step33_clicked(){
    move(step33);
    HideBtn();
    Result();

}

void MainWindow::step34_clicked(){
    move(step34);
    HideBtn();
    Result();

}

void MainWindow::step35_clicked(){
    move(step35);
    HideBtn();
    Result();

}

void MainWindow::step36_clicked(){
    move(step36);
    HideBtn();
    Result();
}

void MainWindow::step37_clicked(){
    move(step37);
    HideBtn();
    Result();

}

void MainWindow::step4_clicked(){                           //up-right 1 movement
    move(step4);
    HideBtn();
    Result();
}

void MainWindow::step41_clicked(){
    move(step41);
    HideBtn();
    Result();
}

void MainWindow::step5_clicked(){                           //up-left 1 movement
    move(step5);
    HideBtn();
    Result();
}

void MainWindow::step51_clicked(){
    move(step51);
    HideBtn();
    Result();
}

void MainWindow::step6_clicked(){                           //down-right 1 movement
    move(step6);
    HideBtn();
    Result();
}

void MainWindow::step61_clicked(){
    move(step61);
    HideBtn();
    Result();
}

void MainWindow::step7_clicked(){                              //down-left 1 movement
    move(step7);
    HideBtn();
    Result();
}

void MainWindow::step71_clicked(){
    move(step71);
    HideBtn();
    Result();
}

void MainWindow::step8_clicked(){                           //up up right
    move(step8);
    HideBtn();
    Result();
}

void MainWindow::step81_clicked(){                          //up up left
    move(step81);
    HideBtn();
    Result();
}

void MainWindow::step82_clicked(){                          //down down right
    move(step82);
    HideBtn();
    Result();
}

void MainWindow::step83_clicked(){                          //down down left
    move(step83);
    HideBtn();
    Result();
}

void MainWindow::step84_clicked(){                          //up right right
    move(step84);
    HideBtn();
    Result();
}

void MainWindow::step85_clicked(){                          //down right right
    move(step85);
    HideBtn();
    Result();
}

void MainWindow::step86_clicked(){                          //up left left
    move(step86);
    HideBtn();
    Result();
}

void MainWindow::step87_clicked(){                          //down left left
    move(step87);
    HideBtn();
    Result();
}

void MainWindow::stepJiang_clicked(){
    move(stepJiang);
    HideBtn();
    Result();
}

bool MainWindow::HaveChess(QPushButton *btn,int color){
    if(color == 1){                     //red
        if(btn->x() == Bing_red1->x() && btn->y() == Bing_red1->y()){
           return true;
        }
        else if (btn->x() == Bing_red2->x() && btn->y() == Bing_red2->y()) {
           return true;
        }
        else if (btn->x() == Bing_red3->x() && btn->y() == Bing_red3->y()) {
           return true;
        }
        else if (btn->x() == Bing_red4->x() && btn->y() == Bing_red4->y()) {
           return true;
        }
        else if (btn->x() == Bing_red5->x() && btn->y() == Bing_red5->y()) {
           return true;
        }
        else if (btn->x() == Pao_red1->x() && btn->y() == Pao_red1->y()) {
           return true;
        }
        else if (btn->x() == Pao_red2->x() && btn->y() == Pao_red2->y()) {
            return true;
         }
        else if (btn->x() == Che_red1->x() && btn->y() == Che_red1->y()) {
           return true;
        }
        else if (btn->x() == Che_red2->x() && btn->y() == Che_red2->y()) {
            return true;
         }
        else if (btn->x() == Ma_red1->x() && btn->y() == Ma_red1->y()) {
           return true;
        }
        else if (btn->x() == Ma_red2->x() && btn->y() == Ma_red2->y()) {
            return true;
         }
        else if (btn->x() == Xiang_red1->x() && btn->y() == Xiang_red1->y()) {
           return true;
        }
        else if (btn->x() == Xiang_red2->x() && btn->y() == Xiang_red2->y()) {
            return true;
        }
        else if (btn->x() == Shi_red1->x() && btn->y() == Shi_red1->y()) {
           return true;
        }
        else if (btn->x() == Shi_red2->x() && btn->y() == Shi_red2->y()) {
            return true;
        }
        else if (btn->x() == Jiang_red->x() && btn->y() == Jiang_red->y()) {
            return true;
        }

    }
    else if (color == 2) {                                  //black
        if(btn->x() == Bing_black1->x() && btn->y() == Bing_black1->y()){
           return true;
        }
        else if (btn->x() == Bing_black2->x() && btn->y() == Bing_black2->y()) {
           return true;
        }
        else if (btn->x() == Bing_black3->x() && btn->y() == Bing_black3->y()) {
           return true;
        }
        else if (btn->x() == Bing_black4->x() && btn->y() == Bing_black4->y()) {
           return true;
        }
        else if (btn->x() == Bing_black5->x() && btn->y() == Bing_black5->y()) {
           return true;
        }
        else if (btn->x() == Pao_black1->x() && btn->y() == Pao_black1->y()) {
           return true;
        }
        else if (btn->x() == Pao_black2->x() && btn->y() == Pao_black2->y()) {
            return true;
         }
        else if (btn->x() == Che_black1->x() && btn->y() == Che_black1->y()) {
           return true;
        }
        else if (btn->x() == Che_black2->x() && btn->y() == Che_black2->y()) {
            return true;
         }
        else if (btn->x() == Ma_black1->x() && btn->y() == Ma_black1->y()) {
           return true;
        }
        else if (btn->x() == Ma_black2->x() && btn->y() == Ma_black2->y()) {
            return true;
         }
        else if (btn->x() == Xiang_black1->x() && btn->y() == Xiang_black1->y()) {
           return true;
        }
        else if (btn->x() == Xiang_black2->x() && btn->y() == Xiang_black2->y()) {
            return true;
        }
        else if (btn->x() == Shi_black1->x() && btn->y() == Shi_black1->y()) {
           return true;
        }
        else if (btn->x() == Shi_black2->x() && btn->y() == Shi_black2->y()) {
            return true;
        }
        else if (btn->x() == Jiang_black->x() && btn->y() == Jiang_black->y()) {
            return true;
        }
    }
    return false;
}

bool MainWindow::HaveChess_Jiang(QPushButton *btn){                       //wang bu jian wang
        if(btn->x() == Bing_red1->x() && btn->y() == Bing_red1->y()){
           return true;
        }
        else if (btn->x() == Bing_red2->x() && btn->y() == Bing_red2->y()) {
           return true;
        }
        else if (btn->x() == Bing_red3->x() && btn->y() == Bing_red3->y()) {
           return true;
        }
        else if (btn->x() == Bing_red4->x() && btn->y() == Bing_red4->y()) {
           return true;
        }
        else if (btn->x() == Bing_red5->x() && btn->y() == Bing_red5->y()) {
           return true;
        }
        else if (btn->x() == Pao_red1->x() && btn->y() == Pao_red1->y()) {
           return true;
        }
        else if (btn->x() == Pao_red2->x() && btn->y() == Pao_red2->y()) {
            return true;
         }
        else if (btn->x() == Che_red1->x() && btn->y() == Che_red1->y()) {
           return true;
        }
        else if (btn->x() == Che_red2->x() && btn->y() == Che_red2->y()) {
            return true;
         }
        else if (btn->x() == Ma_red1->x() && btn->y() == Ma_red1->y()) {
           return true;
        }
        else if (btn->x() == Ma_red2->x() && btn->y() == Ma_red2->y()) {
            return true;
         }
        else if (btn->x() == Xiang_red1->x() && btn->y() == Xiang_red1->y()) {
           return true;
        }
        else if (btn->x() == Xiang_red2->x() && btn->y() == Xiang_red2->y()) {
            return true;
        }
        else if (btn->x() == Shi_red1->x() && btn->y() == Shi_red1->y()) {
           return true;
        }
        else if (btn->x() == Shi_red2->x() && btn->y() == Shi_red2->y()) {
            return true;
        }
        else if(btn->x() == Bing_black1->x() && btn->y() == Bing_black1->y()){
           return true;
        }
        else if (btn->x() == Bing_black2->x() && btn->y() == Bing_black2->y()) {
           return true;
        }
        else if (btn->x() == Bing_black3->x() && btn->y() == Bing_black3->y()) {
           return true;
        }
        else if (btn->x() == Bing_black4->x() && btn->y() == Bing_black4->y()) {
           return true;
        }
        else if (btn->x() == Bing_black5->x() && btn->y() == Bing_black5->y()) {
           return true;
        }
        else if (btn->x() == Pao_black1->x() && btn->y() == Pao_black1->y()) {
           return true;
        }
        else if (btn->x() == Pao_black2->x() && btn->y() == Pao_black2->y()) {
            return true;
         }
        else if (btn->x() == Che_black1->x() && btn->y() == Che_black1->y()) {
           return true;
        }
        else if (btn->x() == Che_black2->x() && btn->y() == Che_black2->y()) {
            return true;
         }
        else if (btn->x() == Ma_black1->x() && btn->y() == Ma_black1->y()) {
           return true;
        }
        else if (btn->x() == Ma_black2->x() && btn->y() == Ma_black2->y()) {
            return true;
         }
        else if (btn->x() == Xiang_black1->x() && btn->y() == Xiang_black1->y()) {
           return true;
        }
        else if (btn->x() == Xiang_black2->x() && btn->y() == Xiang_black2->y()) {
            return true;
        }
        else if (btn->x() == Shi_black1->x() && btn->y() == Shi_black1->y()) {
           return true;
        }
        else if (btn->x() == Shi_black2->x() && btn->y() == Shi_black2->y()) {
            return true;
        }
    return false;
}

void MainWindow::EatChess(QPushButton *btn,int color){
    if(color == 2){                         //if color = black(2) eat red
        if(btn->x() == Bing_red1->x() && btn->y() == Bing_red1->y()){
            Bing_red1->setGeometry(570+size,10,60,60);
        }
        else if (btn->x() == Bing_red2->x() && btn->y() == Bing_red2->y()) {
            Bing_red2->setGeometry(570,10+size,60,60);
        }
        else if (btn->x() == Bing_red3->x() && btn->y() == Bing_red3->y()) {
            Bing_red3->setGeometry(570+size,10+size,60,60);
        }
        else if (btn->x() == Bing_red4->x() && btn->y() == Bing_red4->y()) {
            Bing_red4->setGeometry(570,10+size*2,60,60);
        }
        else if (btn->x() == Bing_red5->x() && btn->y() == Bing_red5->y()) {
            Bing_red5->setGeometry(570+size,10+size*2,60,60);
        }
        else if (btn->x() == Pao_red1->x() && btn->y() == Pao_red1->y()) {
            Pao_red1->setGeometry(570,10+size*7,60,60);
        }
        else if (btn->x() == Pao_red2->x() && btn->y() == Pao_red2->y()) {
            Pao_red2->setGeometry(570+size,10+size*7,60,60);
         }
        else if (btn->x() == Che_red1->x() && btn->y() == Che_red1->y()) {
            Che_red1->setGeometry(570,10+size*5,60,60);
        }
        else if (btn->x() == Che_red2->x() && btn->y() == Che_red2->y()) {
            Che_red2->setGeometry(570+size,10+size*5,60,60);
         }
        else if (btn->x() == Ma_red1->x() && btn->y() == Ma_red1->y()) {
            Ma_red1->setGeometry(570,10+size*6,60,60);
        }
        else if (btn->x() == Ma_red2->x() && btn->y() == Ma_red2->y()) {
            Ma_red2->setGeometry(570+size,10+size*6,60,60);
         }
        else if (btn->x() == Xiang_red1->x() && btn->y() == Xiang_red1->y()) {
            Xiang_red1->setGeometry(570,10+size*4,60,60);
        }
        else if (btn->x() == Xiang_red2->x() && btn->y() == Xiang_red2->y()) {
            Xiang_red2->setGeometry(570+size,10+size*4,60,60);
        }
        else if (btn->x() == Shi_red1->x() && btn->y() == Shi_red1->y()) {
            Shi_red1->setGeometry(570,10+size*3,60,60);
        }
        else if (btn->x() == Shi_red2->x() && btn->y() == Shi_red2->y()) {
            Shi_red2->setGeometry(570+size,10+size*3,60,60);
        }
        else if (btn->x() == Jiang_red->x() && btn->y() == Jiang_red->y()) {
            Jiang_red->setGeometry(570,10,60,60);
        }
    }
    else if(color == 1) {
        if(btn->x() == Bing_black1->x() && btn->y() == Bing_black1->y()){
            Bing_black1->setGeometry(710+size,10,60,60);
        }
        else if (btn->x() == Bing_black2->x() && btn->y() == Bing_black2->y()) {
            Bing_black2->setGeometry(710,10+size,60,60);
        }
        else if (btn->x() == Bing_black3->x() && btn->y() == Bing_black3->y()) {
            Bing_black3->setGeometry(710+size,10+size,60,60);
        }
        else if (btn->x() == Bing_black4->x() && btn->y() == Bing_black4->y()) {
            Bing_black4->setGeometry(710,10+size*2,60,60);
        }
        else if (btn->x() == Bing_black5->x() && btn->y() == Bing_black5->y()) {
            Bing_black5->setGeometry(710+size,10+size*2,60,60);
        }
        else if (btn->x() == Pao_black1->x() && btn->y() == Pao_black1->y()) {
            Pao_black1->setGeometry(710,10+size*7,60,60);
        }
        else if (btn->x() == Pao_black2->x() && btn->y() == Pao_black2->y()) {
            Pao_black2->setGeometry(710+size,10+size*7,60,60);
         }
        else if (btn->x() == Che_black1->x() && btn->y() == Che_black1->y()) {
            Che_black1->setGeometry(710,10+size*5,60,60);
        }
        else if (btn->x() == Che_black2->x() && btn->y() == Che_black2->y()) {
            Che_black2->setGeometry(710+size,10+size*5,60,60);
         }
        else if (btn->x() == Ma_black1->x() && btn->y() == Ma_black1->y()) {
            Ma_black1->setGeometry(710,10+size*6,60,60);
        }
        else if (btn->x() == Ma_black2->x() && btn->y() == Ma_black2->y()) {
            Ma_black2->setGeometry(710+size,10+size*6,60,60);
         }
        else if (btn->x() == Xiang_black1->x() && btn->y() == Xiang_black1->y()) {
            Xiang_black1->setGeometry(710,10+size*4,60,60);
        }
        else if (btn->x() == Xiang_black2->x() && btn->y() == Xiang_black2->y()) {
            Xiang_black2->setGeometry(710+size,10+size*4,60,60);
        }
        else if (btn->x() == Shi_black1->x() && btn->y() == Shi_black1->y()) {
            Shi_black1->setGeometry(710,10+size*3,60,60);
        }
        else if (btn->x() == Shi_black2->x() && btn->y() == Shi_black2->y()) {
            Shi_black2->setGeometry(710+size,10+size*3,60,60);
        }
        else if (btn->x() == Jiang_black->x() && btn->y() == Jiang_black->y()) {
            Jiang_black->setGeometry(710,10,60,60);
        }

    }
 }

void MainWindow::Result(){
    if(Jiang_red->x() > 550 || Jiang_black->x() > 550){
        button = 0;
        disconnect(Bing_red1, SIGNAL(clicked(bool)), this, SLOT(Bing_red1_clicked()));
        disconnect(Bing_red2, SIGNAL(clicked(bool)), this, SLOT(Bing_red2_clicked()));
        disconnect(Bing_red3, SIGNAL(clicked(bool)), this, SLOT(Bing_red3_clicked()));
        disconnect(Bing_red4, SIGNAL(clicked(bool)), this, SLOT(Bing_red4_clicked()));
        disconnect(Bing_red5, SIGNAL(clicked(bool)), this, SLOT(Bing_red5_clicked()));
        disconnect(Shi_red1, SIGNAL(clicked(bool)), this, SLOT(Shi_red1_clicked()));
        disconnect(Shi_red2, SIGNAL(clicked(bool)), this, SLOT(Shi_red2_clicked()));
        disconnect(Xiang_red1, SIGNAL(clicked(bool)), this, SLOT(Xiang_red1_clicked()));
        disconnect(Xiang_red2, SIGNAL(clicked(bool)), this, SLOT(Xiang_red2_clicked()));
        disconnect(Ma_red1, SIGNAL(clicked(bool)), this, SLOT(Ma_red1_clicked()));
        disconnect(Ma_red2, SIGNAL(clicked(bool)), this, SLOT(Ma_red2_clicked()));
        disconnect(Che_red1, SIGNAL(clicked(bool)), this, SLOT(Che_red1_clicked()));
        disconnect(Che_red2, SIGNAL(clicked(bool)), this, SLOT(Che_red2_clicked()));
        disconnect(Pao_red1, SIGNAL(clicked(bool)), this, SLOT(Pao_red1_clicked()));
        disconnect(Pao_red2, SIGNAL(clicked(bool)), this, SLOT(Pao_red2_clicked()));
        disconnect(Jiang_red, SIGNAL(clicked(bool)), this, SLOT(Jiang_red_clicked()));
        disconnect(Bing_black1, SIGNAL(clicked(bool)), this, SLOT(Bing_black1_clicked()));
        disconnect(Bing_black2, SIGNAL(clicked(bool)), this, SLOT(Bing_black2_clicked()));
        disconnect(Bing_black3, SIGNAL(clicked(bool)), this, SLOT(Bing_black3_clicked()));
        disconnect(Bing_black4, SIGNAL(clicked(bool)), this, SLOT(Bing_black4_clicked()));
        disconnect(Bing_black5, SIGNAL(clicked(bool)), this, SLOT(Bing_black5_clicked()));
        disconnect(Shi_black1, SIGNAL(clicked(bool)), this, SLOT(Shi_black1_clicked()));
        disconnect(Shi_black2, SIGNAL(clicked(bool)), this, SLOT(Shi_black2_clicked()));
        disconnect(Xiang_black1, SIGNAL(clicked(bool)), this, SLOT(Xiang_black1_clicked()));
        disconnect(Xiang_black2, SIGNAL(clicked(bool)), this, SLOT(Xiang_black2_clicked()));
        disconnect(Ma_black1, SIGNAL(clicked(bool)), this, SLOT(Ma_black1_clicked()));
        disconnect(Ma_black2, SIGNAL(clicked(bool)), this, SLOT(Ma_black2_clicked()));
        disconnect(Che_black1, SIGNAL(clicked(bool)), this, SLOT(Che_black1_clicked()));
        disconnect(Che_black2, SIGNAL(clicked(bool)), this, SLOT(Che_black2_clicked()));
        disconnect(Pao_black1, SIGNAL(clicked(bool)), this, SLOT(Pao_black1_clicked()));
        disconnect(Pao_black2, SIGNAL(clicked(bool)), this, SLOT(Pao_black2_clicked()));
        disconnect(Jiang_black, SIGNAL(clicked(bool)), this, SLOT(Jiang_black_clicked()));
        winner->setParent(this);
        winner->setGeometry(150,250,250,100);
        winner->setAlignment(Qt::AlignCenter);
        if(Jiang_black->x() > 550){
            winner->setText(tr("紅方獲勝"));
            winner->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 "
                                  "rgba(204, 75, 75, 255), stop:1 rgba(255, 221, 221, 255));"
                                  "font-size:40px;"
                                  "color:white");
            winner->show();
        }
        else if (Jiang_red->x() > 550) {
            winner->setText(tr("黑方獲勝"));
            winner->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0.005, y1:1, x2:0, y2:0, stop:0 "
                                  "rgba(32, 32, 32, 255), stop:1 rgba(218, 218, 218, 255));"
                                  "font-size:40px;"
                                  "color:white");
            winner->show();
        }


    }
}

void MainWindow::HideBtn(){
    step0->hide();
    step1->hide();
    step2->hide();
    step3->hide();
    step4->hide();
    step5->hide();
    step6->hide();
    step7->hide();
    step8->hide();
    step41->hide();
    step51->hide();
    step61->hide();
    step71->hide();
    step81->hide();
    step82->hide();
    step83->hide();
    step84->hide();
    step85->hide();
    step86->hide();
    step87->hide();
    step01->hide();
    step02->hide();
    step03->hide();
    step04->hide();
    step05->hide();
    step06->hide();
    step07->hide();
    step08->hide();
    step11->hide();
    step12->hide();
    step13->hide();
    step14->hide();
    step15->hide();
    step16->hide();
    step17->hide();
    step18->hide();
    step21->hide();
    step22->hide();
    step23->hide();
    step24->hide();
    step25->hide();
    step26->hide();
    step27->hide();
    step31->hide();
    step32->hide();
    step33->hide();
    step34->hide();
    step35->hide();
    step36->hide();
    step37->hide();
    stepJiang->hide();
}

void MainWindow::setstep0(QPushButton *chs){
    step0->setParent(this);
    step01->setParent(this);
    step02->setParent(this);
    step03->setParent(this);
    step04->setParent(this);
    step05->setParent(this);
    step06->setParent(this);
    step07->setParent(this);
    step08->setParent(this);

    step0->setGeometry(chs->x(),chs->y()+size,60,60);
    step01->setGeometry(chs->x(),chs->y()+size*2,60,60);
    step02->setGeometry(chs->x(),chs->y()+size*3,60,60);
    step03->setGeometry(chs->x(),chs->y()+size*4,60,60);
    step04->setGeometry(chs->x(),chs->y()+size*5,60,60);
    step05->setGeometry(chs->x(),chs->y()+size*6,60,60);
    step06->setGeometry(chs->x(),chs->y()+size*7,60,60);
    step07->setGeometry(chs->x(),chs->y()+size*8,60,60);
    step08->setGeometry(chs->x(),chs->y()+size*9,60,60);

    step0->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step01->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step02->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step03->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step04->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step05->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step06->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step07->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step08->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );

}

void MainWindow::setstep1(QPushButton *chs){
    step1->setParent(this);
    step11->setParent(this);
    step12->setParent(this);
    step13->setParent(this);
    step14->setParent(this);
    step15->setParent(this);
    step16->setParent(this);
    step17->setParent(this);
    step18->setParent(this);

    step1->setGeometry(chs->x(),chs->y()-size,60,60);
    step11->setGeometry(chs->x(),chs->y()-size*2,60,60);
    step12->setGeometry(chs->x(),chs->y()-size*3,60,60);
    step13->setGeometry(chs->x(),chs->y()-size*4,60,60);
    step14->setGeometry(chs->x(),chs->y()-size*5,60,60);
    step15->setGeometry(chs->x(),chs->y()-size*6,60,60);
    step16->setGeometry(chs->x(),chs->y()-size*7,60,60);
    step17->setGeometry(chs->x(),chs->y()-size*8,60,60);
    step18->setGeometry(chs->x(),chs->y()-size*9,60,60);

    step1->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step11->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step12->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step13->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step14->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step15->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step16->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step17->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step18->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );

}

void MainWindow::setstep2(QPushButton *chs){
    step2->setParent(this);
    step21->setParent(this);
    step22->setParent(this);
    step23->setParent(this);
    step24->setParent(this);
    step25->setParent(this);
    step26->setParent(this);
    step27->setParent(this);

    step2->setGeometry(chs->x()+size,chs->y(),60,60);
    step21->setGeometry(chs->x()+size*2,chs->y(),60,60);
    step22->setGeometry(chs->x()+size*3,chs->y(),60,60);
    step23->setGeometry(chs->x()+size*4,chs->y(),60,60);
    step24->setGeometry(chs->x()+size*5,chs->y(),60,60);
    step25->setGeometry(chs->x()+size*6,chs->y(),60,60);
    step26->setGeometry(chs->x()+size*7,chs->y(),60,60);
    step27->setGeometry(chs->x()+size*8,chs->y(),60,60);

    step2->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step21->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step22->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step23->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step24->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step25->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step26->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step27->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
}

void MainWindow::setstep3(QPushButton *chs){
    step3->setParent(this);
    step31->setParent(this);
    step32->setParent(this);
    step33->setParent(this);
    step34->setParent(this);
    step35->setParent(this);
    step36->setParent(this);
    step37->setParent(this);

    step3->setGeometry(chs->x()-size,chs->y(),60,60);
    step31->setGeometry(chs->x()-size*2,chs->y(),60,60);
    step32->setGeometry(chs->x()-size*3,chs->y(),60,60);
    step33->setGeometry(chs->x()-size*4,chs->y(),60,60);
    step34->setGeometry(chs->x()-size*5,chs->y(),60,60);
    step35->setGeometry(chs->x()-size*6,chs->y(),60,60);
    step36->setGeometry(chs->x()-size*7,chs->y(),60,60);
    step37->setGeometry(chs->x()-size*8,chs->y(),60,60);

    step3->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step31->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step32->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step33->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step34->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step35->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step36->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );
    step37->setStyleSheet("background-color: transparent;"
                        "background-image: url(:/chess/transparent.png)"
                        );

}

void MainWindow::on_restart_clicked()
{
    noEdit();
    setBlackMovement();
    setRedMovement();
    setchess();
    HideBtn();
    winner -> hide();
}

void MainWindow::on_editor_clicked(){
    edit();
    Bing_red1->setGeometry(570+size,10,60,60);
    Bing_red2->setGeometry(570,10+size,60,60);
    Bing_red3->setGeometry(570+size,10+size,60,60);
    Bing_red4->setGeometry(570,10+size*2,60,60);
    Bing_red5->setGeometry(570+size,10+size*2,60,60);
    Pao_red1->setGeometry(570,10+size*7,60,60);
    Pao_red2->setGeometry(570+size,10+size*7,60,60);
    Che_red1->setGeometry(570,10+size*5,60,60);
    Che_red2->setGeometry(570+size,10+size*5,60,60);
    Ma_red1->setGeometry(570,10+size*6,60,60);
    Ma_red2->setGeometry(570+size,10+size*6,60,60);
    Xiang_red1->setGeometry(570,10+size*4,60,60);
    Xiang_red2->setGeometry(570+size,10+size*4,60,60);
    Shi_red1->setGeometry(570,10+size*3,60,60);
    Shi_red2->setGeometry(570+size,10+size*3,60,60);
    Jiang_red->setGeometry(570,10,60,60);

    Bing_black1->setGeometry(710+size,10,60,60);
    Bing_black2->setGeometry(710,10+size,60,60);
    Bing_black3->setGeometry(710+size,10+size,60,60);
    Bing_black4->setGeometry(710,10+size*2,60,60);
    Bing_black5->setGeometry(710+size,10+size*2,60,60);
    Pao_black1->setGeometry(710,10+size*7,60,60);
    Pao_black2->setGeometry(710+size,10+size*7,60,60);
    Che_black1->setGeometry(710,10+size*5,60,60);
    Che_black2->setGeometry(710+size,10+size*5,60,60);
    Ma_black1->setGeometry(710,10+size*6,60,60);
    Ma_black2->setGeometry(710+size,10+size*6,60,60);
    Xiang_black1->setGeometry(710,10+size*4,60,60);
    Xiang_black2->setGeometry(710+size,10+size*4,60,60);
    Shi_black1->setGeometry(710,10+size*3,60,60);
    Shi_black2->setGeometry(710+size,10+size*3,60,60);
    Jiang_black->setGeometry(710,10,60,60);
    HideBtn();
    winner -> hide();
}

void MainWindow::edit(){
    connect(ui -> pushButton, SIGNAL(clicked(bool)), this, SLOT(btn0()));
    connect(ui -> pushButton_1, SIGNAL(clicked(bool)), this, SLOT(btn1()));
    connect(ui -> pushButton_2, SIGNAL(clicked(bool)), this, SLOT(btn2()));
    connect(ui -> pushButton_3, SIGNAL(clicked(bool)), this, SLOT(btn3()));
    connect(ui -> pushButton_4, SIGNAL(clicked(bool)), this, SLOT(btn4()));
    connect(ui -> pushButton_5, SIGNAL(clicked(bool)), this, SLOT(btn5()));
    connect(ui -> pushButton_6, SIGNAL(clicked(bool)), this, SLOT(btn6()));
    connect(ui -> pushButton_7, SIGNAL(clicked(bool)), this, SLOT(btn7()));
    connect(ui -> pushButton_8, SIGNAL(clicked(bool)), this, SLOT(btn8()));
    connect(ui -> pushButton_9, SIGNAL(clicked(bool)), this, SLOT(btn9()));
    connect(ui -> pushButton_10, SIGNAL(clicked(bool)), this, SLOT(btn10()));
    connect(ui -> pushButton_11, SIGNAL(clicked(bool)), this, SLOT(btn11()));
    connect(ui -> pushButton_12, SIGNAL(clicked(bool)), this, SLOT(btn12()));
    connect(ui -> pushButton_13, SIGNAL(clicked(bool)), this, SLOT(btn13()));
    connect(ui -> pushButton_14, SIGNAL(clicked(bool)), this, SLOT(btn14()));
    connect(ui -> pushButton_15, SIGNAL(clicked(bool)), this, SLOT(btn15()));
    connect(ui -> pushButton_16, SIGNAL(clicked(bool)), this, SLOT(btn16()));
    connect(ui -> pushButton_17, SIGNAL(clicked(bool)), this, SLOT(btn17()));
    connect(ui -> pushButton_18, SIGNAL(clicked(bool)), this, SLOT(btn18()));
    connect(ui -> pushButton_19, SIGNAL(clicked(bool)), this, SLOT(btn19()));
    connect(ui -> pushButton_20, SIGNAL(clicked(bool)), this, SLOT(btn20()));
    connect(ui -> pushButton_21, SIGNAL(clicked(bool)), this, SLOT(btn21()));
    connect(ui -> pushButton_22, SIGNAL(clicked(bool)), this, SLOT(btn22()));
    connect(ui -> pushButton_23, SIGNAL(clicked(bool)), this, SLOT(btn23()));
    connect(ui -> pushButton_24, SIGNAL(clicked(bool)), this, SLOT(btn24()));
    connect(ui -> pushButton_25, SIGNAL(clicked(bool)), this, SLOT(btn25()));
    connect(ui -> pushButton_26, SIGNAL(clicked(bool)), this, SLOT(btn26()));
    connect(ui -> pushButton_27, SIGNAL(clicked(bool)), this, SLOT(btn27()));
    connect(ui -> pushButton_28, SIGNAL(clicked(bool)), this, SLOT(btn28()));
    connect(ui -> pushButton_29, SIGNAL(clicked(bool)), this, SLOT(btn29()));
    connect(ui -> pushButton_30, SIGNAL(clicked(bool)), this, SLOT(btn30()));
    connect(ui -> pushButton_31, SIGNAL(clicked(bool)), this, SLOT(btn31()));
    connect(ui -> pushButton_32, SIGNAL(clicked(bool)), this, SLOT(btn32()));
    connect(ui -> pushButton_33, SIGNAL(clicked(bool)), this, SLOT(btn33()));
    connect(ui -> pushButton_34, SIGNAL(clicked(bool)), this, SLOT(btn34()));
    connect(ui -> pushButton_35, SIGNAL(clicked(bool)), this, SLOT(btn35()));
    connect(ui -> pushButton_36, SIGNAL(clicked(bool)), this, SLOT(btn36()));
    connect(ui -> pushButton_37, SIGNAL(clicked(bool)), this, SLOT(btn37()));
    connect(ui -> pushButton_38, SIGNAL(clicked(bool)), this, SLOT(btn38()));
    connect(ui -> pushButton_39, SIGNAL(clicked(bool)), this, SLOT(btn39()));
    connect(ui -> pushButton_40, SIGNAL(clicked(bool)), this, SLOT(btn40()));
    connect(ui -> pushButton_41, SIGNAL(clicked(bool)), this, SLOT(btn41()));
    connect(ui -> pushButton_42, SIGNAL(clicked(bool)), this, SLOT(btn42()));
    connect(ui -> pushButton_43, SIGNAL(clicked(bool)), this, SLOT(btn43()));
    connect(ui -> pushButton_44, SIGNAL(clicked(bool)), this, SLOT(btn44()));
    connect(ui -> pushButton_45, SIGNAL(clicked(bool)), this, SLOT(btn45()));
    connect(ui -> pushButton_46, SIGNAL(clicked(bool)), this, SLOT(btn46()));
    connect(ui -> pushButton_47, SIGNAL(clicked(bool)), this, SLOT(btn47()));
    connect(ui -> pushButton_48, SIGNAL(clicked(bool)), this, SLOT(btn48()));
    connect(ui -> pushButton_49, SIGNAL(clicked(bool)), this, SLOT(btn49()));
    connect(ui -> pushButton_50, SIGNAL(clicked(bool)), this, SLOT(btn50()));
    connect(ui -> pushButton_51, SIGNAL(clicked(bool)), this, SLOT(btn51()));
    connect(ui -> pushButton_52, SIGNAL(clicked(bool)), this, SLOT(btn52()));
    connect(ui -> pushButton_53, SIGNAL(clicked(bool)), this, SLOT(btn53()));
    connect(ui -> pushButton_54, SIGNAL(clicked(bool)), this, SLOT(btn54()));
    connect(ui -> pushButton_55, SIGNAL(clicked(bool)), this, SLOT(btn55()));
    connect(ui -> pushButton_56, SIGNAL(clicked(bool)), this, SLOT(btn56()));
    connect(ui -> pushButton_57, SIGNAL(clicked(bool)), this, SLOT(btn57()));
    connect(ui -> pushButton_58, SIGNAL(clicked(bool)), this, SLOT(btn58()));
    connect(ui -> pushButton_59, SIGNAL(clicked(bool)), this, SLOT(btn59()));
    connect(ui -> pushButton_60, SIGNAL(clicked(bool)), this, SLOT(btn60()));
    connect(ui -> pushButton_61, SIGNAL(clicked(bool)), this, SLOT(btn61()));
    connect(ui -> pushButton_62, SIGNAL(clicked(bool)), this, SLOT(btn62()));
    connect(ui -> pushButton_63, SIGNAL(clicked(bool)), this, SLOT(btn63()));
    connect(ui -> pushButton_64, SIGNAL(clicked(bool)), this, SLOT(btn64()));
    connect(ui -> pushButton_65, SIGNAL(clicked(bool)), this, SLOT(btn65()));
    connect(ui -> pushButton_66, SIGNAL(clicked(bool)), this, SLOT(btn66()));
    connect(ui -> pushButton_67, SIGNAL(clicked(bool)), this, SLOT(btn67()));
    connect(ui -> pushButton_68, SIGNAL(clicked(bool)), this, SLOT(btn68()));
    connect(ui -> pushButton_69, SIGNAL(clicked(bool)), this, SLOT(btn69()));
    connect(ui -> pushButton_70, SIGNAL(clicked(bool)), this, SLOT(btn70()));
    connect(ui -> pushButton_71, SIGNAL(clicked(bool)), this, SLOT(btn71()));
    connect(ui -> pushButton_72, SIGNAL(clicked(bool)), this, SLOT(btn72()));
    connect(ui -> pushButton_73, SIGNAL(clicked(bool)), this, SLOT(btn73()));
    connect(ui -> pushButton_74, SIGNAL(clicked(bool)), this, SLOT(btn74()));
    connect(ui -> pushButton_75, SIGNAL(clicked(bool)), this, SLOT(btn75()));
    connect(ui -> pushButton_76, SIGNAL(clicked(bool)), this, SLOT(btn76()));
    connect(ui -> pushButton_77, SIGNAL(clicked(bool)), this, SLOT(btn77()));
    connect(ui -> pushButton_78, SIGNAL(clicked(bool)), this, SLOT(btn78()));
    connect(ui -> pushButton_79, SIGNAL(clicked(bool)), this, SLOT(btn79()));
    connect(ui -> pushButton_80, SIGNAL(clicked(bool)), this, SLOT(btn80()));
    connect(ui -> pushButton_81, SIGNAL(clicked(bool)), this, SLOT(btn81()));
    connect(ui -> pushButton_82, SIGNAL(clicked(bool)), this, SLOT(btn82()));
    connect(ui -> pushButton_83, SIGNAL(clicked(bool)), this, SLOT(btn83()));
    connect(ui -> pushButton_84, SIGNAL(clicked(bool)), this, SLOT(btn84()));
    connect(ui -> pushButton_85, SIGNAL(clicked(bool)), this, SLOT(btn85()));
    connect(ui -> pushButton_86, SIGNAL(clicked(bool)), this, SLOT(btn86()));
    connect(ui -> pushButton_87, SIGNAL(clicked(bool)), this, SLOT(btn87()));
    connect(ui -> pushButton_88, SIGNAL(clicked(bool)), this, SLOT(btn88()));
    connect(ui -> pushButton_89, SIGNAL(clicked(bool)), this, SLOT(btn89()));

}

void MainWindow::noEdit(){
    disconnect(ui -> pushButton, SIGNAL(clicked(bool)), this, SLOT(btn0()));
    disconnect(ui -> pushButton_1, SIGNAL(clicked(bool)), this, SLOT(btn1()));
    disconnect(ui -> pushButton_2, SIGNAL(clicked(bool)), this, SLOT(btn2()));
    disconnect(ui -> pushButton_3, SIGNAL(clicked(bool)), this, SLOT(btn3()));
    disconnect(ui -> pushButton_4, SIGNAL(clicked(bool)), this, SLOT(btn4()));
    disconnect(ui -> pushButton_5, SIGNAL(clicked(bool)), this, SLOT(btn5()));
    disconnect(ui -> pushButton_6, SIGNAL(clicked(bool)), this, SLOT(btn6()));
    disconnect(ui -> pushButton_7, SIGNAL(clicked(bool)), this, SLOT(btn7()));
    disconnect(ui -> pushButton_8, SIGNAL(clicked(bool)), this, SLOT(btn8()));
    disconnect(ui -> pushButton_9, SIGNAL(clicked(bool)), this, SLOT(btn9()));
    disconnect(ui -> pushButton_10, SIGNAL(clicked(bool)), this, SLOT(btn10()));
    disconnect(ui -> pushButton_11, SIGNAL(clicked(bool)), this, SLOT(btn11()));
    disconnect(ui -> pushButton_12, SIGNAL(clicked(bool)), this, SLOT(btn12()));
    disconnect(ui -> pushButton_13, SIGNAL(clicked(bool)), this, SLOT(btn13()));
    disconnect(ui -> pushButton_14, SIGNAL(clicked(bool)), this, SLOT(btn14()));
    disconnect(ui -> pushButton_15, SIGNAL(clicked(bool)), this, SLOT(btn15()));
    disconnect(ui -> pushButton_16, SIGNAL(clicked(bool)), this, SLOT(btn16()));
    disconnect(ui -> pushButton_17, SIGNAL(clicked(bool)), this, SLOT(btn17()));
    disconnect(ui -> pushButton_18, SIGNAL(clicked(bool)), this, SLOT(btn18()));
    disconnect(ui -> pushButton_19, SIGNAL(clicked(bool)), this, SLOT(btn19()));
    disconnect(ui -> pushButton_20, SIGNAL(clicked(bool)), this, SLOT(btn20()));
    disconnect(ui -> pushButton_21, SIGNAL(clicked(bool)), this, SLOT(btn21()));
    disconnect(ui -> pushButton_22, SIGNAL(clicked(bool)), this, SLOT(btn22()));
    disconnect(ui -> pushButton_23, SIGNAL(clicked(bool)), this, SLOT(btn23()));
    disconnect(ui -> pushButton_24, SIGNAL(clicked(bool)), this, SLOT(btn24()));
    disconnect(ui -> pushButton_25, SIGNAL(clicked(bool)), this, SLOT(btn25()));
    disconnect(ui -> pushButton_26, SIGNAL(clicked(bool)), this, SLOT(btn26()));
    disconnect(ui -> pushButton_27, SIGNAL(clicked(bool)), this, SLOT(btn27()));
    disconnect(ui -> pushButton_28, SIGNAL(clicked(bool)), this, SLOT(btn28()));
    disconnect(ui -> pushButton_29, SIGNAL(clicked(bool)), this, SLOT(btn29()));
    disconnect(ui -> pushButton_30, SIGNAL(clicked(bool)), this, SLOT(btn30()));
    disconnect(ui -> pushButton_31, SIGNAL(clicked(bool)), this, SLOT(btn31()));
    disconnect(ui -> pushButton_32, SIGNAL(clicked(bool)), this, SLOT(btn32()));
    disconnect(ui -> pushButton_33, SIGNAL(clicked(bool)), this, SLOT(btn33()));
    disconnect(ui -> pushButton_34, SIGNAL(clicked(bool)), this, SLOT(btn34()));
    disconnect(ui -> pushButton_35, SIGNAL(clicked(bool)), this, SLOT(btn35()));
    disconnect(ui -> pushButton_36, SIGNAL(clicked(bool)), this, SLOT(btn36()));
    disconnect(ui -> pushButton_37, SIGNAL(clicked(bool)), this, SLOT(btn37()));
    disconnect(ui -> pushButton_38, SIGNAL(clicked(bool)), this, SLOT(btn38()));
    disconnect(ui -> pushButton_39, SIGNAL(clicked(bool)), this, SLOT(btn39()));
    disconnect(ui -> pushButton_40, SIGNAL(clicked(bool)), this, SLOT(btn40()));
    disconnect(ui -> pushButton_41, SIGNAL(clicked(bool)), this, SLOT(btn41()));
    disconnect(ui -> pushButton_42, SIGNAL(clicked(bool)), this, SLOT(btn42()));
    disconnect(ui -> pushButton_43, SIGNAL(clicked(bool)), this, SLOT(btn43()));
    disconnect(ui -> pushButton_44, SIGNAL(clicked(bool)), this, SLOT(btn44()));
    disconnect(ui -> pushButton_45, SIGNAL(clicked(bool)), this, SLOT(btn45()));
    disconnect(ui -> pushButton_46, SIGNAL(clicked(bool)), this, SLOT(btn46()));
    disconnect(ui -> pushButton_47, SIGNAL(clicked(bool)), this, SLOT(btn47()));
    disconnect(ui -> pushButton_48, SIGNAL(clicked(bool)), this, SLOT(btn48()));
    disconnect(ui -> pushButton_49, SIGNAL(clicked(bool)), this, SLOT(btn49()));
    disconnect(ui -> pushButton_50, SIGNAL(clicked(bool)), this, SLOT(btn50()));
    disconnect(ui -> pushButton_51, SIGNAL(clicked(bool)), this, SLOT(btn51()));
    disconnect(ui -> pushButton_52, SIGNAL(clicked(bool)), this, SLOT(btn52()));
    disconnect(ui -> pushButton_53, SIGNAL(clicked(bool)), this, SLOT(btn53()));
    disconnect(ui -> pushButton_54, SIGNAL(clicked(bool)), this, SLOT(btn54()));
    disconnect(ui -> pushButton_55, SIGNAL(clicked(bool)), this, SLOT(btn55()));
    disconnect(ui -> pushButton_56, SIGNAL(clicked(bool)), this, SLOT(btn56()));
    disconnect(ui -> pushButton_57, SIGNAL(clicked(bool)), this, SLOT(btn57()));
    disconnect(ui -> pushButton_58, SIGNAL(clicked(bool)), this, SLOT(btn58()));
    disconnect(ui -> pushButton_59, SIGNAL(clicked(bool)), this, SLOT(btn59()));
    disconnect(ui -> pushButton_60, SIGNAL(clicked(bool)), this, SLOT(btn60()));
    disconnect(ui -> pushButton_61, SIGNAL(clicked(bool)), this, SLOT(btn61()));
    disconnect(ui -> pushButton_62, SIGNAL(clicked(bool)), this, SLOT(btn62()));
    disconnect(ui -> pushButton_63, SIGNAL(clicked(bool)), this, SLOT(btn63()));
    disconnect(ui -> pushButton_64, SIGNAL(clicked(bool)), this, SLOT(btn64()));
    disconnect(ui -> pushButton_65, SIGNAL(clicked(bool)), this, SLOT(btn65()));
    disconnect(ui -> pushButton_66, SIGNAL(clicked(bool)), this, SLOT(btn66()));
    disconnect(ui -> pushButton_67, SIGNAL(clicked(bool)), this, SLOT(btn67()));
    disconnect(ui -> pushButton_68, SIGNAL(clicked(bool)), this, SLOT(btn68()));
    disconnect(ui -> pushButton_69, SIGNAL(clicked(bool)), this, SLOT(btn69()));
    disconnect(ui -> pushButton_70, SIGNAL(clicked(bool)), this, SLOT(btn70()));
    disconnect(ui -> pushButton_71, SIGNAL(clicked(bool)), this, SLOT(btn71()));
    disconnect(ui -> pushButton_72, SIGNAL(clicked(bool)), this, SLOT(btn72()));
    disconnect(ui -> pushButton_73, SIGNAL(clicked(bool)), this, SLOT(btn73()));
    disconnect(ui -> pushButton_74, SIGNAL(clicked(bool)), this, SLOT(btn74()));
    disconnect(ui -> pushButton_75, SIGNAL(clicked(bool)), this, SLOT(btn75()));
    disconnect(ui -> pushButton_76, SIGNAL(clicked(bool)), this, SLOT(btn76()));
    disconnect(ui -> pushButton_77, SIGNAL(clicked(bool)), this, SLOT(btn77()));
    disconnect(ui -> pushButton_78, SIGNAL(clicked(bool)), this, SLOT(btn78()));
    disconnect(ui -> pushButton_79, SIGNAL(clicked(bool)), this, SLOT(btn79()));
    disconnect(ui -> pushButton_80, SIGNAL(clicked(bool)), this, SLOT(btn80()));
    disconnect(ui -> pushButton_81, SIGNAL(clicked(bool)), this, SLOT(btn81()));
    disconnect(ui -> pushButton_82, SIGNAL(clicked(bool)), this, SLOT(btn82()));
    disconnect(ui -> pushButton_83, SIGNAL(clicked(bool)), this, SLOT(btn83()));
    disconnect(ui -> pushButton_84, SIGNAL(clicked(bool)), this, SLOT(btn84()));
    disconnect(ui -> pushButton_85, SIGNAL(clicked(bool)), this, SLOT(btn85()));
    disconnect(ui -> pushButton_86, SIGNAL(clicked(bool)), this, SLOT(btn86()));
    disconnect(ui -> pushButton_87, SIGNAL(clicked(bool)), this, SLOT(btn87()));
    disconnect(ui -> pushButton_88, SIGNAL(clicked(bool)), this, SLOT(btn88()));
    disconnect(ui -> pushButton_89, SIGNAL(clicked(bool)), this, SLOT(btn89()));
}

void MainWindow::btn0(){
    move(ui->pushButton);
    HideBtn();
}
void MainWindow::btn1(){
    move(ui->pushButton_1);
    HideBtn();
}
void MainWindow::btn2(){
    move(ui->pushButton_2);
    HideBtn();
}
void MainWindow::btn3(){
    move(ui->pushButton_3);
    HideBtn();
}
void MainWindow::btn4(){
    move(ui->pushButton_4);
    HideBtn();
}
void MainWindow::btn5(){
    move(ui->pushButton_5);
    HideBtn();
}
void MainWindow::btn6(){
    move(ui->pushButton_6);
    HideBtn();
}
void MainWindow::btn7(){
    move(ui->pushButton_7);
    HideBtn();
}
void MainWindow::btn8(){
    move(ui->pushButton_8);
    HideBtn();
}
void MainWindow::btn9(){
    move(ui->pushButton_9);
    HideBtn();
}
void MainWindow::btn10(){
    move(ui->pushButton_10);
    HideBtn();
}
void MainWindow::btn11(){
    move(ui->pushButton_11);
    HideBtn();
}
void MainWindow::btn12(){
    move(ui->pushButton_12);
    HideBtn();
}
void MainWindow::btn13(){
    move(ui->pushButton_13);
    HideBtn();
}
void MainWindow::btn14(){
    move(ui->pushButton_14);
    HideBtn();
}
void MainWindow::btn15(){
    move(ui->pushButton_15);
    HideBtn();
}
void MainWindow::btn16(){
    move(ui->pushButton_16);
    HideBtn();
}
void MainWindow::btn17(){
    move(ui->pushButton_17);
    HideBtn();
}
void MainWindow::btn18(){
    move(ui->pushButton_18);
    HideBtn();
}
void MainWindow::btn19(){
    move(ui->pushButton_19);
    HideBtn();
}
void MainWindow::btn20(){
    move(ui->pushButton_20);
    HideBtn();
}
void MainWindow::btn21(){
    move(ui->pushButton_21);
    HideBtn();
}
void MainWindow::btn22(){
    move(ui->pushButton_22);
    HideBtn();
}
void MainWindow::btn23(){
    move(ui->pushButton_23);
    HideBtn();
}
void MainWindow::btn24(){
    move(ui->pushButton_24);
    HideBtn();
}
void MainWindow::btn25(){
    move(ui->pushButton_25);
    HideBtn();
}
void MainWindow::btn26(){
    move(ui->pushButton_26);
    HideBtn();
}
void MainWindow::btn27(){
    move(ui->pushButton_27);
    HideBtn();
}
void MainWindow::btn28(){
    move(ui->pushButton_28);
    HideBtn();
}
void MainWindow::btn29(){
    move(ui->pushButton_29);
    HideBtn();
}
void MainWindow::btn30(){
    move(ui->pushButton_30);
    HideBtn();
}
void MainWindow::btn31(){
    move(ui->pushButton_31);
    HideBtn();
}
void MainWindow::btn32(){
    move(ui->pushButton_32);
    HideBtn();
}
void MainWindow::btn33(){
    move(ui->pushButton_33);
    HideBtn();
}
void MainWindow::btn34(){
    move(ui->pushButton_34);
    HideBtn();
}
void MainWindow::btn35(){
    move(ui->pushButton_35);
    HideBtn();
}
void MainWindow::btn36(){
    move(ui->pushButton_36);
    HideBtn();
}
void MainWindow::btn37(){
    move(ui->pushButton_37);
    HideBtn();
}
void MainWindow::btn38(){
    move(ui->pushButton_38);
    HideBtn();
}
void MainWindow::btn39(){
    move(ui->pushButton_39);
    HideBtn();
}
void MainWindow::btn40(){
    move(ui->pushButton_40);
    HideBtn();
}
void MainWindow::btn41(){
    move(ui->pushButton_41);
    HideBtn();
}
void MainWindow::btn42(){
    move(ui->pushButton_42);
    HideBtn();
}
void MainWindow::btn43(){
    move(ui->pushButton_43);
    HideBtn();
}
void MainWindow::btn44(){
    move(ui->pushButton_44);
    HideBtn();
}
void MainWindow::btn45(){
    move(ui->pushButton_45);
    HideBtn();
}
void MainWindow::btn46(){
    move(ui->pushButton_46);
    HideBtn();
}
void MainWindow::btn47(){
    move(ui->pushButton_47);
    HideBtn();
}
void MainWindow::btn48(){
    move(ui->pushButton_48);
    HideBtn();
}
void MainWindow::btn49(){
    move(ui->pushButton_49);
    HideBtn();
}
void MainWindow::btn50(){
    move(ui->pushButton_50);
    HideBtn();
}
void MainWindow::btn51(){
    move(ui->pushButton_51);
    HideBtn();
}
void MainWindow::btn52(){
    move(ui->pushButton_52);
    HideBtn();
}
void MainWindow::btn53(){
    move(ui->pushButton_53);
    HideBtn();
}
void MainWindow::btn54(){
    move(ui->pushButton_54);
    HideBtn();
}
void MainWindow::btn55(){
    move(ui->pushButton_55);
    HideBtn();
}
void MainWindow::btn56(){
    move(ui->pushButton_56);
    HideBtn();
}
void MainWindow::btn57(){
    move(ui->pushButton_57);
    HideBtn();
}
void MainWindow::btn58(){
    move(ui->pushButton_58);
    HideBtn();
}
void MainWindow::btn59(){
    move(ui->pushButton_59);
    HideBtn();
}
void MainWindow::btn60(){
    move(ui->pushButton_60);
    HideBtn();
}
void MainWindow::btn61(){
    move(ui->pushButton_61);
    HideBtn();
}
void MainWindow::btn62(){
    move(ui->pushButton_62);
    HideBtn();
}
void MainWindow::btn63(){
    move(ui->pushButton_63);
    HideBtn();
}
void MainWindow::btn64(){
    move(ui->pushButton_64);
    HideBtn();
}
void MainWindow::btn65(){
    move(ui->pushButton_65);
    HideBtn();
}
void MainWindow::btn66(){
    move(ui->pushButton_66);
    HideBtn();
}
void MainWindow::btn67(){
    move(ui->pushButton_67);
    HideBtn();
}
void MainWindow::btn68(){
    move(ui->pushButton_68);
    HideBtn();
}
void MainWindow::btn69(){
    move(ui->pushButton_69);
    HideBtn();
}
void MainWindow::btn70(){
    move(ui->pushButton_70);
    HideBtn();
}
void MainWindow::btn71(){
    move(ui->pushButton_71);
    HideBtn();
}
void MainWindow::btn72(){
    move(ui->pushButton_72);
    HideBtn();
}
void MainWindow::btn73(){
    move(ui->pushButton_73);
    HideBtn();
}
void MainWindow::btn74(){
    move(ui->pushButton_74);
    HideBtn();
}
void MainWindow::btn75(){
    move(ui->pushButton_75);
    HideBtn();
}
void MainWindow::btn76(){
    move(ui->pushButton_76);
    HideBtn();
}
void MainWindow::btn77(){
    move(ui->pushButton_77);
    HideBtn();
}
void MainWindow::btn78(){
    move(ui->pushButton_78);
    HideBtn();
}
void MainWindow::btn79(){
    move(ui->pushButton_79);
    HideBtn();
}
void MainWindow::btn80(){
    move(ui->pushButton_80);
    HideBtn();
}
void MainWindow::btn81(){
    move(ui->pushButton_81);
    HideBtn();
}
void MainWindow::btn82(){
    move(ui->pushButton_82);
    HideBtn();
}
void MainWindow::btn83(){
    move(ui->pushButton_83);
    HideBtn();
}
void MainWindow::btn84(){
    move(ui->pushButton_84);
    HideBtn();
}
void MainWindow::btn85(){
    move(ui->pushButton_85);
    HideBtn();
}
void MainWindow::btn86(){
    move(ui->pushButton_86);
    HideBtn();
}
void MainWindow::btn87(){
    move(ui->pushButton_87);
    HideBtn();
}
void MainWindow::btn88(){
    move(ui->pushButton_88);
    HideBtn();
}
void MainWindow::btn89(){
    move(ui->pushButton_89);
    HideBtn();
}


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QPoint>
#include <string>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setchess();
    void setBlackMovement();
    void setRedMovement();
    void setStepMovement();
    void BingBlack_movement(QPushButton *chess);
    void ShiBlack_movement(QPushButton *chess);
    void XiangBlack_movement(QPushButton *chess);
    void MaBlack_movement(QPushButton *chess);
    void CheBlack_movement(QPushButton *chess);
    void PaoBlack_movement(QPushButton *chess);
    void JiangBlack_movement(QPushButton *chess);
    void BingRed_movement(QPushButton *chess);
    void ShiRed_movement(QPushButton *chess);
    void XiangRed_movement(QPushButton *chess);
    void MaRed_movement(QPushButton *chess);
    void CheRed_movement(QPushButton *chess);
    void PaoRed_movement(QPushButton *chess);
    void JiangRed_movement(QPushButton *chess);


    void move(QPushButton *btn);
    bool HaveChess(QPushButton *btn, int color);
    bool HaveChess_Jiang(QPushButton *btn);
    void EatChess(QPushButton *btn, int color);
    void edit();
    void noEdit();
    void Result();
    void HideBtn();
    void setstep0(QPushButton *chs);
    void setstep1(QPushButton *chs);
    void setstep2(QPushButton *chs);
    void setstep3(QPushButton *chs);


public:
    static const int R = 30;
    static const int r = 25;
    static const int border = 35-R;
    static const int size = 60;
    int button;

private:
    Ui::MainWindow *ui;
    QPushButton *Bing_black1= new QPushButton();
    QPushButton *Bing_black2= new QPushButton();
    QPushButton *Bing_black3= new QPushButton();
    QPushButton *Bing_black4= new QPushButton();
    QPushButton *Bing_black5= new QPushButton();
    QPushButton *Pao_black1= new QPushButton();
    QPushButton *Pao_black2= new QPushButton();
    QPushButton *Che_black1= new QPushButton();
    QPushButton *Che_black2= new QPushButton();
    QPushButton *Ma_black1= new QPushButton();
    QPushButton *Ma_black2= new QPushButton();
    QPushButton *Xiang_black1= new QPushButton();
    QPushButton *Xiang_black2= new QPushButton();
    QPushButton *Shi_black1= new QPushButton();
    QPushButton *Shi_black2= new QPushButton();
    QPushButton *Jiang_black= new QPushButton();
    QPushButton *Bing_red1= new QPushButton();
    QPushButton *Bing_red2= new QPushButton();
    QPushButton *Bing_red3= new QPushButton();
    QPushButton *Bing_red4= new QPushButton();
    QPushButton *Bing_red5= new QPushButton();
    QPushButton *Pao_red1= new QPushButton();
    QPushButton *Pao_red2= new QPushButton();
    QPushButton *Che_red1= new QPushButton();
    QPushButton *Che_red2= new QPushButton();
    QPushButton *Ma_red1= new QPushButton();
    QPushButton *Ma_red2= new QPushButton();
    QPushButton *Xiang_red1= new QPushButton();
    QPushButton *Xiang_red2= new QPushButton();
    QPushButton *Shi_red1= new QPushButton();
    QPushButton *Shi_red2= new QPushButton();
    QPushButton *Jiang_red= new QPushButton();

    QPushButton *step0 = new QPushButton();
    QPushButton *step01 = new QPushButton();
    QPushButton *step02 = new QPushButton();
    QPushButton *step03 = new QPushButton();
    QPushButton *step04 = new QPushButton();
    QPushButton *step05 = new QPushButton();
    QPushButton *step06 = new QPushButton();
    QPushButton *step07 = new QPushButton();
    QPushButton *step08 = new QPushButton();

    QPushButton *step1 = new QPushButton();
    QPushButton *step11 = new QPushButton();
    QPushButton *step12 = new QPushButton();
    QPushButton *step13 = new QPushButton();
    QPushButton *step14 = new QPushButton();
    QPushButton *step15 = new QPushButton();
    QPushButton *step16 = new QPushButton();
    QPushButton *step17 = new QPushButton();
    QPushButton *step18 = new QPushButton();


    QPushButton *step2 = new QPushButton();
    QPushButton *step21 = new QPushButton();
    QPushButton *step22 = new QPushButton();
    QPushButton *step23 = new QPushButton();
    QPushButton *step24 = new QPushButton();
    QPushButton *step25 = new QPushButton();
    QPushButton *step26 = new QPushButton();
    QPushButton *step27 = new QPushButton();

    QPushButton *step3 = new QPushButton();
    QPushButton *step31 = new QPushButton();
    QPushButton *step32 = new QPushButton();
    QPushButton *step33 = new QPushButton();
    QPushButton *step34 = new QPushButton();
    QPushButton *step35 = new QPushButton();
    QPushButton *step36 = new QPushButton();
    QPushButton *step37 = new QPushButton();

    QPushButton *step4 = new QPushButton();
    QPushButton *step41 = new QPushButton();

    QPushButton *step5 = new QPushButton();
    QPushButton *step51 = new QPushButton();

    QPushButton *step6 = new QPushButton();
    QPushButton *step61 = new QPushButton();

    QPushButton *step7 = new QPushButton();
    QPushButton *step71 = new QPushButton();

    QPushButton *step8 = new QPushButton();
    QPushButton *step81 = new QPushButton();
    QPushButton *step82 = new QPushButton();
    QPushButton *step83 = new QPushButton();
    QPushButton *step84 = new QPushButton();
    QPushButton *step85 = new QPushButton();
    QPushButton *step86 = new QPushButton();
    QPushButton *step87 = new QPushButton();

    QPushButton *stepJiang = new QPushButton();

    QLabel *winner = new QLabel();

private slots:
    void receivelogin();
    void Bing_black1_clicked();
    void Bing_black2_clicked();
    void Bing_black3_clicked();
    void Bing_black4_clicked();
    void Bing_black5_clicked();
    void Jiang_black_clicked();
    void Shi_black1_clicked();
    void Shi_black2_clicked();
    void Xiang_black1_clicked();
    void Xiang_black2_clicked();
    void Ma_black1_clicked();
    void Ma_black2_clicked();
    void Che_black1_clicked();
    void Che_black2_clicked();
    void Pao_black1_clicked();
    void Pao_black2_clicked();

    void Bing_red1_clicked();
    void Bing_red2_clicked();
    void Bing_red3_clicked();
    void Bing_red4_clicked();
    void Bing_red5_clicked();
    void Jiang_red_clicked();
    void Shi_red1_clicked();
    void Shi_red2_clicked();
    void Xiang_red1_clicked();
    void Xiang_red2_clicked();
    void Ma_red1_clicked();
    void Ma_red2_clicked();
    void Che_red1_clicked();
    void Che_red2_clicked();
    void Pao_red1_clicked();
    void Pao_red2_clicked();


    void step0_clicked();    //down
    void step01_clicked();   //down 2
    void step02_clicked();
    void step03_clicked();
    void step04_clicked();
    void step05_clicked();
    void step06_clicked();
    void step07_clicked();
    void step08_clicked();

    void step1_clicked();   //up
    void step11_clicked();   //up 2
    void step12_clicked();
    void step13_clicked();
    void step14_clicked();
    void step15_clicked();
    void step16_clicked();
    void step17_clicked();
    void step18_clicked();


    void step2_clicked();   //right
    void step21_clicked();   //right 2
    void step22_clicked();
    void step23_clicked();
    void step24_clicked();
    void step25_clicked();
    void step26_clicked();
    void step27_clicked();

    void step3_clicked();   //left
    void step31_clicked();   //left 2
    void step32_clicked();
    void step33_clicked();
    void step34_clicked();
    void step35_clicked();
    void step36_clicked();
    void step37_clicked();

    void step4_clicked();   //up-right
    void step41_clicked();

    void step5_clicked();   //up-left
    void step51_clicked();

    void step6_clicked();   //down-right
    void step61_clicked();

    void step7_clicked();   //down-left
    void step71_clicked();

    void step8_clicked();
    void step81_clicked();
    void step82_clicked();
    void step83_clicked();
    void step84_clicked();
    void step85_clicked();
    void step86_clicked();
    void step87_clicked();

    void stepJiang_clicked();

    void on_restart_clicked();
    void on_editor_clicked();

    void btn0();void btn1();
    void btn2();void btn3();
    void btn4();void btn5();
    void btn6();void btn7();
    void btn8();void btn9();
    void btn10();void btn11();
    void btn12();void btn13();
    void btn14();void btn15();
    void btn16();void btn17();
    void btn18();void btn19();
    void btn20();void btn21();
    void btn22();void btn23();
    void btn24();void btn25();
    void btn26(); void btn27();
    void btn28(); void btn29();
    void btn30();void btn31();
    void btn32();void btn33();
    void btn34();void btn35();
    void btn36();void btn37();
    void btn38();void btn39();
    void btn40();void btn41();
    void btn42();void btn43();
    void btn44();void btn45();
    void btn46();void btn47();
    void btn48();void btn49();
    void btn50();void btn51();
    void btn52();void btn53();
    void btn54();void btn55();
    void btn56();void btn57();
    void btn58();void btn59();
    void btn60();void btn61();
    void btn62();void btn63();
    void btn64();void btn65();
    void btn66();void btn67();
    void btn68();void btn69();
    void btn70();void btn71();
    void btn72();void btn73();
    void btn74();void btn75();
    void btn76();void btn77();
    void btn78();void btn79();
    void btn80();void btn81();
    void btn82();void btn83();
    void btn84();void btn85();
    void btn86();void btn87();
    void btn88();void btn89();
};

#endif // MAINWINDOW_H

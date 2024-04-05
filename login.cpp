#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Criar a janela principal
    QWidget *window = new QWidget;
    window->setWindowTitle("Login");

    // Criar o formulário de login
    QLabel *usernameLabel = new QLabel("Usuário:");
    QLineEdit *usernameLineEdit = new QLineEdit;
    QLabel *passwordLabel = new QLabel("Senha:");
    QLineEdit *passwordLineEdit = new QLineEdit;
    passwordLineEdit->setEchoMode(QLineEdit::Password);

    // Criar o botão de login
    QPushButton *loginButton = new QPushButton("Login");

    // Adicionar os widgets à janela principal
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(usernameLabel);
    layout->addWidget(usernameLineEdit);
    layout->addWidget(passwordLabel);
    layout->addWidget(passwordLineEdit);
    layout->addWidget(loginButton);
    window->setLayout(layout);

    // Exibir a janela
    window->show();

    // Executar o aplicativo
    return app.exec();
}
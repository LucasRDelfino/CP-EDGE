# Sprint-EDGE

Projeto Farol Inteligente : 

O Projeto Farol Inteligente está sendo desenvolvidos por alunos da FIAP do curso de Enegnharia de Software para entrega da challenge relacionada a Sustentabilidade , ele consiste na automatização de faróis com um sistema de segurança , utilizamos python para criar um sistema de segurança que indentifica armas com câmeras , nosso objeitvo é alertar as pessoas que estão próximas ao semáforo e a polícia para o mais rápido suporte.

Softwares Utilizados : 
- Node Red
- Node Red Dashboard
- MQTT Websocket Cliente
- Tago
- Virutal Serial Port
- SimulIDLE
- Arduino IDLE

Passo a Passo :

Neste Repositório está anexado o circuito do simulIDLE , flow do node-red e código do arduino , então basicamente para replicar esse projeto deverá primeiramente baixar todos os softwares requisitados. No node red terá que baixar as bibliotecas "serial" e "dashboard" que estão sendo utilizadas , logo após poderá importar o floe anexado no repositório , para o projeto funcionar terá que se conectar ao host global do MQTT e criar um servidor pessoal (no exemplo criei o servidor chamado Lucas/1ESR) porém poderá ultilizar um de sua preferência , todas as informações do MQTT Cliente terão que ser adicionadas no nó "mqtt in". Na plataforma tago , terá que criar um device do tipo Custom MQTT , no node-red acione as informações do nome da sua device e o Token ultilizado dentro do nó "mqtt out". Indo para parte do circuito, no Arduino IDLE terá que exportar o código (que está nesse repositório) de forma compilada binária (Dentro do Arduino IDLE Acesse : Sketch/Export Compiled Binarie), esse código será ultilizado no simulIDLE , dentro do simulIDLE importe o circuito do repostório , clique em cima do arduino uno , selecione a opção "carregar firmware" e carregue o código exportado do ARDUINO IDLE. Após esses passos abra o Virtual Seria Port e crie uma dupla de portas , uma para o node red outra para o Arduino (No projeto ultilizei as portas COM5 e COM6 mas podem ser alteradas). Após esses passos tudo estará pronto para o teste rode o circuito e implemente o flow no node-red , dentro do servidor MQTT digite a mesagem "Arma encontrada" (Essa mesagem está foi ultilizada no código mas pode ser alterada).Se tudo foi feito de maneira correta, o buzzer, led e lcd estarão funcinando e uma mensagem aparecerá no Live Inspector do Tago.

Objetivo de Projeto : 

O cliente MQTT está simulando a mensagem que foi desenvolvida pelo Python no sistema de identificação de armas , a mensagem foi passada para o tago que no projeto está simulando o servidor da policia e recebe a mensagem "Arma encontrada" , o arduino também receberá a mensagem e ligará o led , buzzer e lcd que na simulação estariam alertando a população de um possível assalto , além do projeto ter um dashboard que monitora os assaltos com a "function contador" para que se for implementado outros faróis, termos um mapeamento de qual região ou farol específico tem o maior número de assaltos , essa informação poderia ser passada para polícia e ter um maior número de policiamento na região.

#define segA 2 // подключение сегмента A к PIN2
#define segB 3 // подключение сегмента B к PIN3
#define segC 4 // подключение сегмента C к PIN4
#define segD 5 // подключение сегмента D к PIN5
#define segE 6 // подключение сегмента E к PIN6
#define segF 7 // подключение сегмента F к PIN7
#define segG 8 // подключение сегмента G к PIN8

int count = 0; // объявляем переменную для счета от 0 до 9

void setup() {
  // Конфигурируем все используемые контакты на вывод данных
  for (int i = 2; i <= 8; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // Отображение числа на 7-сегментном индикаторе в зависимости от значения count
  switch (count) {
    case 0: // показываем "0" на дисплее
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, LOW);
      break;

    case 1: // показываем "1" на дисплее
      digitalWrite(segA, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break;

    case 2: // показываем "2" на дисплее
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, LOW);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, LOW);
      digitalWrite(segG, HIGH);
      break;
    
    case 3: // показываем "3" на дисплее
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, HIGH);
      break;

    case 4: // показываем "4" на дисплее
      digitalWrite(segA, LOW);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      break;

    case 5: // показываем "5" на дисплее
      digitalWrite(segA, HIGH);
      digitalWrite(segB, LOW);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, LOW);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      break;

    case 6: // показываем "6" на дисплее
      digitalWrite(segA, HIGH);
      digitalWrite(segB, LOW);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      break;

    case 7: // показываем "7" на дисплее
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, LOW);
      digitalWrite(segE, LOW);
      digitalWrite(segF, LOW);
      digitalWrite(segG, LOW);
      break;

    case 8: // показываем "8" на дисплее
      digitalWrite(segA, HIGH);
      digitalWrite(segB, HIGH);
      digitalWrite(segC, HIGH);
      digitalWrite(segD, HIGH);
      digitalWrite(segE, HIGH);
      digitalWrite(segF, HIGH);
      digitalWrite(segG, HIGH);
      break;

    // Добавьте остальные цифры от 3 до 9 по аналогии...

    default:
      count = 0; // Сбросить счетчик, если значение выходит за пределы 9
      break;
  }

  delay(1000); // Задержка в 1 секунду
  count++; // Увеличение счетчика
  if (count > 9) {
    count = 0; // Если счетчик достиг 9, сбросить на 0
  }
}

#ifndef _language_h
#define _language_h

#include "config.h"

#define FR 0
#define EN 1
#define DE 2


//****************************************
//      To display "é" use "\x80" 
//      To display "ä" use "\x81"
//      To display "ö" use "\x82"
//      To display "ü" use "\x83"
//      Take care that if the is a following character, the string has to be splitted
//      E.G. for "Dégagé" you must use "D\x80" "gag"\x80"
//
//    Furthermore, for button names only, use a "*" to force a split on 2 lines
//****************************************
#if defined(LANGUAGE) and (LANGUAGE == FR)      // ici la version en Français
#define __SETUP "Config" 
#define __PRINT "Fraisage" 
#define __HOME "Home*XYZ" 
#define __UNLOCK "D\x80" "blo*qu\x80" 
#define __RESET "Reset" 
#define __SD "Carte SD" 
#define __USB_GRBL "USB" 
#define __TELNET_GRBL "Telnet" 
#define __PAUSE "Pause" 
#define __CANCEL "Annuler" 
#define __INFO "Info" 
#define __CMD "Cmd" 
#define __MOVE "Bouger" 
#define __RESUME "Lancer" 
#define __STOP_PC_GRBL "Stop PC" 
#define __D_AUTO "Auto"
#define __SET_WCS "Set*WCS 1"
#define __SETX "Set X" 
#define __SETY "Set Y" 
#define __SETZ "Set Z"
#define __SETA "Set A"
#define __SETXYZ "Set*XYZ"
#define __SETXYZA "Set*XYZA"
#define __TOOL "Tool" 
#define __SET_CHANGE "D\x80" "f.*change"
#define __SET_PROBE "D\x80" "f.*sonde"
#define __SET_CAL "Calibrer"
#define __GO_CHANGE "Changer"
#define __GO_PROBE "Sonder"
#define __BACK "Retour" 
#define __LEFT "<-" 
#define __RIGHT "->" 
#define __UP "Haut" 
#define __MORE_PAUSE "Plus" 
#define __PG_PREV "Pr\x80" "c"
#define __PG_NEXT "Suiv"
#define __SD_SHOW "Voir*GCode"
#define __OVERWRITE "Feedrate*Rpm" // it is a hidden button , so no need for a text
#define __OVER_SWITCH_TO_FEEDRATE "Changer*Feedrate"
#define __OVER_SWITCH_TO_SPINDLE "Changer*Rpm"
#define __OVER_100 "Set to*100%"
#define __OVER_10P "+10%"
#define __OVER_10M "-10%"
#define __OVER_1P  "+1%"
#define __OVER_1M  "-1%"
#define __COMMUNICATION "Com"
#define __SERIAL "Wire"
#define __BLUETOOTH "Blue*tooth"
#define __TELNET "Telnet"
#define __SD_GRBL "SD*Grbl"
#define __YES "Oui"
#define __NO "Non"
#define __LOG "Grbl*Msg"

#define __WPOS "Wpos"
#define __MPOS "Mpos"
#define __FEED "Feed"
#define __RPM  "Rpm"

#define __TOUCH_CORNER "Touchez les coins comme indiqu\x80"
#define __SET_REPEAT_CAL "Definissez REPEAT_CAL sur false pour ne pas r\x80" "p\x80" "ter cette operation!"
#define __CAL_COMPLETED "Calibration finie!"

#define __SPIFFS_FORMATTED "SPIFFS format\x80"
#define __CMD_NOT_LOADED "Cmd non charg\x80" "e"
#define __TELENET_DISCONNECTED "Telnet d\x80" "connect\x80"
#define __INVALID_BTN_HOME "Bouton invalide (Home)"
#define __CMD_NOT_RETRIEVED "Cmd non retrouv\x80" "e"
#define __NO_TELNET_CONNECTION "pas de connexion telnet"
#define __WIFI_NOT_FOUND  "WiFi non trouv\x80" 
#define __SPIFFS_FAIL_TO_OPEN "Echec ouverture SPIFFS"
#define __FAILED_TO_CREATE_CMD "Echec cr\x80" "ation cmd"
#define __CAN_JOG_MISSING_OK "Can.JOG:Ok manque"
#define __CMD_JOG_MISSING_OK "Cmd JOG:Ok manque"
#define __DIR_NAME_NOT_FOUND "R\x80" "pertoire non trouv\x80"
#define __BUG_UPDATE_FILE_BTN "Bug: updateFilesBtn"
#define __CARD_MOUNT_FAILED "Echec montage de carte"
#define __ROOT_NOT_FOUND "Racine non trouv\x80" "e" 
#define __CHDIR_ERROR "erreur chdir"
#define __FAILED_TO_OPEN_ROOT "Echec lors de l'ouverture de la racine" 
#define __FIRST_DIR_IS_NOT_ROOT "1er r\x80" "pertoire n'est pas la racine"
#define __CURRENT_DIR_IS_NOT_A_SUB_DIR "R\x80" "pertoire n'est pas un sous-r\x80" "pertoire"
#define __FILES_MISSING "fichiers manquants"
#define __FAILED_TO_OPEN_A_FILE "Echec d'ouverture d'un fichier"
#define __NO_FILE_NAME  "Pas de nom de fichier"
#define __SELECTED_FILE_MISSING "Fichier selectionn\x80" " manque"
#define __FILE_NAME_NOT_FOUND "Nom de fichier non trouv\x80"
#define __CMD_DELETED "Cmd effac\x80" "e"
#define __CMD_NOT_CREATED "Cmd non cr\x80" "\x80" "e"
#define __CMD_CREATED "Cmd cr\x80" "\x80" "e"
#define __CMD_PART_NOT_READ "Cmd: partie non lue"
#define __CMD_COULD_NOT_SAVE "Cmd non sauv\x80" "e"
#define __NO_NUNCHUK "Pas de Nunchuk" 
#define __MISSING_OK_WHEN_SENDING_FROM_SD "Envoi de Gcode suspendu pendant plus de 2 min" 
#define __NOT_IDLE "Status not Idle"
#define __CHANGING_FEEDRATE1 "Changement du"
#define __CHANGING_FEEDRATE2 "Feedrate"
#define __CHANGING_SPINDLE1 "Changement du"
#define __CHANGING_SPINDLE2 "Spindle (Rpm)"
#define __SETX_EXECUTED  "X set dans G54"
#define __SETY_EXECUTED  "Y set dans G54"
#define __SETZ_EXECUTED  "Z set dans G54"
#define __SETA_EXECUTED  "A set dans G54"
#define __SETXYZ_EXECUTED  "XYZ set dans G54"
#define __SETXYZA_EXECUTED  "XYZA set dans G54"
#define __SET_CHANGE_EXECUTED  "Change tool pos. enregsitr\x80"
#define __SET_PROBE_EXECUTED "Probe position enregistr\x80"
#define __SET_CAL_EXECUTED "Tool Calib. ex\x80" "cut\x80"
#define __GO_CHANGE_EXECUTED "En position change tool"
#define __GO_PROBE_EXECUTED "WCS Z sauv\x80" " en G54"
#define __UNKNOWN_BTN_EXECUTED "Index boutton erronn\x80"
#define __UNABLE_TO_CONNECT_IN_BT         "Pas de connexion Bluetooth"
#define __BT_DISCONNECTED                 "BT Déconnect\x80"
#define __BT_CONNECTED_WITH_GRBL          "GRBL connect\x80" " par BT"
#define __GRBL_SERIAL_CONNECTED           "Connexion GRBL: fil(s\x80" "rie)"
#define __UNABLE_TO_CONNECT_TO_GRBL_TELNET "Pas de connexion Telnet"
#define __TELNET_CONNECTED_WITH_GRBL      "GRBL connect\x80" " par Telnet"
#define __CURRENT_GRBL_DIR                "R\x80" "pertoire actuel"
#define __READING_FILES_ON_GRBL           "Lecture des fichiers GRBL"
#define __PLEASE_WAIT                     "Attendez"
#define __NO_IP_ASSIGNED                  "Pas d'adresse IP"
#define __USES_BT_TO_GRBL                  "Connexion GRBL: Bluetooth"
#define __USES_TELNET_TO_GRBL              "Connexion GRBL: Telnet" 
#define __TRY_TO_CONNECT_WITH_BT           "Connection GRBL via BT en cours"
#define __WAIT_1_MIN                       "Cela peut prendre 1 min; attendez"
#define __WIFI_NOT_CONNECTED               "Wifi non connect\x80"
#define __TRY_TO_CONNECT_WITH_TELNET       "Connexion GRBL via Telnet en cours"
#define __WIFI_CONNECTED                   "Wifi connecté\x80"   
#define __CONFIRM_SD_FILE                  "Voulez vous ex\x80" "cuter ce fichier?"
#define __WIFI_NOT_REQUESTED               "Wifi non prévu dans la config."
#define __CONNECTING_TO_WIFI               "Connexion au wifi en cours"
#define __NO_WIFI_CONNECTION               "Pas de connexion au wifi"
#define __CONNECTED_AS_STATION             "Connect\x80" " au wifi comme Station"
#define __AP_STARTED                       "Wifi Access Point démarr\x80"

#define __UNKNOWN_ERROR "Erreur inconnue"  
#define __EXPECTED_CMD_LETTER "1.Lettre Cmd attendue"
#define __BAD_NUMBER_FORMAT "2.Erreur de nombre (format)"
#define __INVALID_$_SYSTEM_CMD "3.Cmd $ non valide"
#define __NEGATIVE_VALUE "4.Valeur n\x80" "gative"
#define __HOMING_NOT_ENABLED "5.Homing non actif"
#define __STEP_PULSE_LESS_3_USEC "6.Impulsion Step <3 usec"
#define __EEPROM_READ_FAIL "7.Echec lecture EEPROM"
#define __$_WHILE_NOT_IDLE "8. $ alors que non IDLE"
#define __LOCKED_ALARM_OR_JOG "9.Verrouill\x80" " (alarme ou jog)"
#define __SOFT_LIMIT_NO_HOMING "10.Soft limit sans homing"
#define __LINE_OVERFLOW "11.D\x80" "bordement de ligne"
#define __STEP_RATE_TO_HIGH "12.Step rate trop \x80" "lev\x80"
#define __SAFETY_DOOR_DETECTED "13.S\x80" "curite porte detect\x80" "e"
#define __LINE_LENGHT_EXCEEDED "14.Longueur de ligne depass\x80" "e"
#define __JOG_TRAVEL_EXCEEDED "15.Jog trop long"
#define __INVALID_JOG_COMMAND "16.Commande de Jog non valide"
#define __LASER_REQUIRES_PWM "17.Laser requiert PWM"
#define __NO_HOMING_DEFINED  "18.Pas de Homing/Cycle défini"
#define __UNKNOWN_ERROR_19 "19.Erreur inconnue"
#define __UNSUPPORTED_COMMAND "20.Commande non support\x80" "e"
#define __MODAL_GROUP_VIOLATION "21.Violation du groupe modal"
#define __UNDEF_FEED_RATE "22.Feed rate non defini"
#define __CMD_REQUIRES_INTEGER "23.La Cmd exige un nbr entier"
#define __SEVERAL_AXIS_GCODE "24.Plusieurs axes Gcode"
#define __REPEATED_GCODE "25.Gcode r\x80" "p\x80" "t\x80" 
#define __AXIS_MISSING_IN_GCODE "26.Axe manquant dans Gcode"
#define __INVALID_LINE_NUMBER "27.Numero de ligne non valide"
#define __VALUE_MISSING_IN_GCODE "28.Valeur manquante dans Gcode"
#define __G59_WCS_NOT_SUPPORTED "29.G59 WCS non support\x80"
#define __G53_WITHOUT_G01_AND_G1 "30.G53 sans G0 et G1"
#define __AXIS_NOT_ALLOWED "31.Axe non autoris\x80" "e"
#define __G2_G3_REQUIRE_A_PLANE "32.G2,G3 requiert un plan"
#define __INVALID_MOTION_TARGET "33.Cible du mouvement non valide"
#define __INVALID_ARC_RADIUS "34.Rayon d'arc non valide"
#define __G2_G3_REQUIRE_OFFSET "35.G2,G3 requiert un offset"
#define __UNSUSED_VALUE "36.Valeur inutilis\x80" "e"
#define __G431_TOOL_LENGTH "37.G43.1 longueur d'outil"
#define __TOOL_NUMBER_EXCEED_MAX "38.Numero d'outil > max"
#define __PARAMETER_P_EXCEED_MAX "39.Parametre P > max"
#define __SD_FAILED_TO_MOUNT     "60.Erreur au montage SD"
#define __SD_FAILED_FOR_READING  "61.Erreur lecture SD"
#define __SD_FAILED_FOR_DIRECTORY "62.Erreur ouverture Dir SD"
#define __SD_DIR_NOT_FOUND       "63.Dir non trouvé"
#define __SD_FILE_EMPTY          "64.Fichier vide"
#define __RESERVE_65             "65???"
#define __RESERVE_66             "66???"
#define __RESERVE_67             "67???"
#define __RESERVE_68             "68???"
#define __RESERVE_69             "69???"
#define __BT_FAILED              "70.Erreur connexion Bluetooth"
              
#define __UNKNOWN_ALARM "Alarme inconnue" 
#define __HARD_LIMIT_REACHED "A1.Fin de course atteinte(P?)"
#define __MOTION_EXCEED_CNC "A2.Le mouvement d\x80" "passe la CNC"
#define __RESET_IN_MOTION "A3.Reset lors d'un mouvement(P?)"
#define __PROBE_INIT_FAIL "A4.Erreur initiation Probe"
#define __PROBE_TRAVEL_FAIL "A5.Erreur  lors du trajet de la Probe" 
#define __RESET_DURING_HOMING "A6.Reset durant le homing"
#define __DOOR_OPEN_HOMING "A7.Porte ouverte (homing)"
#define __LIMIT_ON_HOMING "A8.Fin de course durant homing"
#define __LIMIT_MISSING_HOMING "A9.Pas de fin de course(homing)"



#elif defined(LANGUAGE) and (LANGUAGE == DE)  // here German version
#define __SETUP "Konfig" 
#define __PRINT "Fr\x81" "sen" 
#define __HOME "Home" 
#define __UNLOCK "Ent-*sperren" 
#define __RESET "Reset" 
#define __SD "SD-*Karte" 
#define __USB_GRBL "USB" 
#define __TELNET_GRBL "Telnet" 
#define __PAUSE "Pause" 
#define __CANCEL "Ab-*brechen" 
#define __INFO "Nach-*richten" 
#define __CMD "Cmd" 
#define __MOVE "Bewegen" 
#define __RESUME "Fortsetzen" 
#define __STOP_PC_GRBL "Stop*PC" 
#define __D_AUTO "Auto"
#define __SET_WCS "Set*WCS 1"
#define __SETX "Setze*X" 
#define __SETY "Setze*Y" 
#define __SETZ "Setze*Z"
#define __SETA "Setze*A" 
#define __SETXYZ "Setze*XYZ"
#define __SETXYZA "Setze*XYZA"
#define __TOOL "Tool"
#define __SET_CHANGE "Change*pos"
#define __SET_PROBE "Probe*pos"
#define __SET_CAL "Cali*brate"
#define __GO_CHANGE "Go*change"
#define __GO_PROBE "Probe" 
#define __BACK "Zur\x83" "ck" 
#define __LEFT "<-" 
#define __RIGHT "->" 
#define __UP "Oben" 
#define __MORE_PAUSE "Mehr" 
#define __PG_PREV "Prev"
#define __PG_NEXT "Next"
#define __SD_SHOW "See*GCode"
#define __OVERWRITE "Feedrate*Speed" // it is a hidden button , so no need for a text
#define __OVER_SWITCH_TO_FEEDRATE "Switch to*Feedrate"
#define __OVER_SWITCH_TO_SPINDLE "Switch to*Spindle"
#define __OVER_100 "Set to*100%"
#define __OVER_10P "+10%"
#define __OVER_10M "-10%"
#define __OVER_1P  "+1%"
#define __OVER_1M  "-1%"
#define __COMMUNICATION "Com"
#define __SERIAL "Wire"
#define __BLUETOOTH "Blue*tooth"
#define __TELNET "Telnet"
#define __SD_GRBL "SD*Grbl"
#define __YES "Ja"
#define __NO "Nein"
#define __LOG "Grbl*Msg"

#define __WPOS "Wpos"
#define __MPOS "Mpos"
#define __FEED "Feed"
#define __RPM  "Rpm"

#define __TOUCH_CORNER "Bitte die Ecken ber\x83" "hren, wie angegeben"
#define __SET_REPEAT_CAL "REPEAT_CAL auf false setzen, um das erneute Ausf\x83" "hren zu stoppen!"
#define __CAL_COMPLETED "Kalibrierung abgeschlossen!"

#define __SPIFFS_FORMATTED "SPIFFS formatiert"
#define __CMD_NOT_LOADED "Cmd nicht geladen"
#define __TELENET_DISCONNECTED "Telnet getrennt"
#define __INVALID_BTN_HOME "Ung\x83" "ltig bin (Home)"
#define __CMD_NOT_RETRIEVED "Cmd nicht abgerufen"
#define __NO_TELNET_CONNECTION "Keine Telnet-Verbindung"
#define __WIFI_NOT_FOUND  "WiFi nicht gefunden" 
#define __SPIFFS_FAIL_TO_OPEN "SPIFFS kann nicht ge\x82" "ffnet werden"
#define __FAILED_TO_CREATE_CMD "cmd konnte nicht erstellt werden"
#define __CAN_JOG_MISSING_OK "Can.JOG:fehlt Ok"
#define __CMD_JOG_MISSING_OK "Cmd JOG:fehlt Ok"
#define __DIR_NAME_NOT_FOUND "Verzeichnis nicht gefunden"
#define __BUG_UPDATE_FILE_BTN "Bug: updateFilesBtn"
#define __CARD_MOUNT_FAILED "Einbindung SD fehlgeschlagen"
#define __ROOT_NOT_FOUND "Root nicht gefunden" 
#define __CHDIR_ERROR "Fehler Verzeichniswechsel"
#define __FAILED_TO_OPEN_ROOT "Root \x82" "ffnen gescheitert!" 
#define __FIRST_DIR_IS_NOT_ROOT "Erstes Verz. ist nicht root"
#define __CURRENT_DIR_IS_NOT_A_SUB_DIR "aktuelles Verzeichnis ist kein Unterverzeichnis"
#define __FILES_MISSING "Dateien fehlen"
#define __FAILED_TO_OPEN_A_FILE "Fehler beim \x82" "ffnen einer Datei"
#define __NO_FILE_NAME  "Kein Dateiname"
#define __SELECTED_FILE_MISSING "Ausgew\x81" "hlte Datei fehlt"
#define __FILE_NAME_NOT_FOUND "Dateiname nicht gefunden"
#define __CMD_DELETED "Cmd gel\x82" "scht"
#define __CMD_NOT_CREATED "Cmd nicht erstellt"
#define __CMD_CREATED "Cmd erstellt"
#define __CMD_PART_NOT_READ "Cmd: Teil nicht gelesen"
#define __CMD_COULD_NOT_SAVE "Cmd: konnte nicht speichern"
#define __NO_NUNCHUK "Kein Nunchuk" 
#define __MISSING_OK_WHEN_SENDING_FROM_SD "Sending Gcode suspendend more than 2 min"
#define __NOT_IDLE "Status not Idle"
#define __CHANGING_FEEDRATE1 "Overwriting"
#define __CHANGING_FEEDRATE2 "Feedrate"
#define __CHANGING_SPINDLE1 "Overwriting"
#define __CHANGING_SPINDLE2 "Spindle (Rpm)"
#define __SETX_EXECUTED  "X set in G54"
#define __SETY_EXECUTED  "Y set in G54"
#define __SETZ_EXECUTED  "Z set in G54"
#define __SETA_EXECUTED  "A set in G54"
#define __SETXYZ_EXECUTED  "XYZ set in G54"
#define __SETXYZA_EXECUTED  "XYZA set in G54"
#define __SET_CHANGE_EXECUTED  "Change tool pos. set"
#define __SET_PROBE_EXECUTED "Probe position is set"
#define __SET_CAL_EXECUTED "Tool Calib. done"
#define __GO_CHANGE_EXECUTED "In change tool pos."
#define __GO_PROBE_EXECUTED "New WCS Z set in G54"
#define __UNKNOWN_BTN_EXECUTED "Wrong Btn Index"
#define __UNABLE_TO_CONNECT_IN_BT         "Fail to connect to GRBL in BT"
#define __BT_DISCONNECTED                 "BT Disconnected"
#define __BT_CONNECTED_WITH_GRBL          "GRBL connected with BT"
#define __GRBL_SERIAL_CONNECTED           "GRBL connection : wires (serial)"
#define __UNABLE_TO_CONNECT_TO_GRBL_TELNET "Fail to connect to GRBL with Telnet"
#define __TELNET_CONNECTED_WITH_GRBL      "GRBL connected with Telnet"
#define __CURRENT_GRBL_DIR                "Current directory"
#define __READING_FILES_ON_GRBL           "Reading files on Grbl"
#define __PLEASE_WAIT                     "Please wait"
#define __NO_IP_ASSIGNED                  "No IP assigned"
#define __USES_BT_TO_GRBL                  "GRBL connection : Bluetooth"
#define __USES_TELNET_TO_GRBL              "GRBL connection : Telnet" 
#define __TRY_TO_CONNECT_WITH_BT           "Trying to connect to GRBL using BT"
#define __WAIT_1_MIN                       "It can take 1 min; please wait"
#define __WIFI_NOT_CONNECTED               "Wifi not connected"
#define __TRY_TO_CONNECT_WITH_TELNET       "Trying to connect to GRBL using Telnet"
#define __WIFI_CONNECTED                   "Wifi is connected"   
#define __CONFIRM_SD_FILE                  "Are you sure to execute this file?"
#define __WIFI_NOT_REQUESTED               "Wifi not requested by setup"
#define __CONNECTING_TO_WIFI               "Connecting to wifi"
#define __NO_WIFI_CONNECTION               "No connection to wifi"
#define __CONNECTED_AS_STATION             "Connected to wifi as Station"
#define __AP_STARTED                       "Wifi Access Point started"

#define __UNKNOWN_ERROR "Unbekannter Fehler"  
#define __EXPECTED_CMD_LETTER "1.Erwarteter cmd Buchstabe"
#define __BAD_NUMBER_FORMAT "2.Falsches Zahlen Format"
#define __INVALID_$_SYSTEM_CMD "3.Ung\x83" "ltiges $ system cmd"
#define __NEGATIVE_VALUE "4.Negativer Wert"
#define __HOMING_NOT_ENABLED "5.Homing nicht aktiviert"
#define __STEP_PULSE_LESS_3_USEC "6.Step pulse <3 usec"
#define __EEPROM_READ_FAIL "7.EEPROM-Lesefehler"
#define __$_WHILE_NOT_IDLE "8. $ while not IDLE"
#define __LOCKED_ALARM_OR_JOG "9.Gesperrt (Alarm oder Jog))"
#define __SOFT_LIMIT_NO_HOMING "10.Soft limit(kein Homing)"
#define __LINE_OVERFLOW "11.Zeilen \x83" "berlauf"
#define __STEP_RATE_TO_HIGH "12.Step rate zu hoch"
#define __SAFETY_DOOR_DETECTED "13.Schutzt\x83" "r erkannt"
#define __LINE_LENGHT_EXCEEDED "14.Leitungslange uberschritten"
#define __JOG_TRAVEL_EXCEEDED "15.Jog Fahrweg \x83" "berschritten"
#define __INVALID_JOG_COMMAND "16.Ung\x83" "ltiger Jog Befehl"
#define __LASER_REQUIRES_PWM "17.Laser erfordert PWM"
#define __NO_HOMING_DEFINED  "18.No Homing/Cycle defined"
#define __UNKNOWN_ERROR_19 "Unbekannter Fehler"
#define __UNSUPPORTED_COMMAND "20.Nicht unterstutzter Befehl"
#define __MODAL_GROUP_VIOLATION "21.Modal group violation"
#define __UNDEF_FEED_RATE "22.Undef. feed rate"
#define __CMD_REQUIRES_INTEGER "23.Cmd erfordert ganze Zahl"
#define __SEVERAL_AXIS_GCODE "24.Mehrere Achsen Gcode"
#define __REPEATED_GCODE "25.Wiederholter Gcode"
#define __AXIS_MISSING_IN_GCODE "26.Achse fehlt in Gcode"
#define __INVALID_LINE_NUMBER "27.Ung\x83" "ltige Zeilen Nummer"
#define __VALUE_MISSING_IN_GCODE "28.Wert fehlt in Gcode"
#define __G59_WCS_NOT_SUPPORTED "29.G59 WCS nicht unterst\x83" "tzt"
#define __G53_WITHOUT_G01_AND_G1 "30.G53 Ohne G0 und G1"
#define __AXIS_NOT_ALLOWED "31.Achse nicht erlaubt"
#define __G2_G3_REQUIRE_A_PLANE "32.G2,G3 require a plane"
#define __INVALID_MOTION_TARGET "33.Ung\x83" "ltiges Bewegungsziel"
#define __INVALID_ARC_RADIUS "34.Ung\x83" "ltiger arc Radius"
#define __G2_G3_REQUIRE_OFFSET "35.G2,G3 erfordert offset"
#define __UNSUSED_VALUE "36.Unbenutzter Wert"
#define __G431_TOOL_LENGTH "37.G43.1 Werkzeug L\x81" "nge"
#define __TOOL_NUMBER_EXCEED_MAX "38.Werkzeugnummer > max"
#define __PARAMETER_P_EXCEED_MAX "39.Parameter P > max"
#define __SD_FAILED_TO_MOUNT "60.SD failed to mount"
#define __SD_FAILED_FOR_READING "61.SD failed for reading"
#define __SD_FAILED_FOR_DIRECTORY "62.SD failed for directory"
#define __SD_DIR_NOT_FOUND "63.SD dir not found"
#define __SD_FILE_EMPTY "64.SD file empty"
#define __RESERVE_65 "65???"
#define __RESERVE_66 "66???"
#define __RESERVE_67 "67???"
#define __RESERVE_68 "68???"
#define __RESERVE_69 "69???"
#define __BT_FAILED "70.Bluetooth failed to start"

              
#define __UNKNOWN_ALARM "Unbekannter Alarm" 
#define __HARD_LIMIT_REACHED "A1.Anschlag erreicht(P?)"
#define __MOTION_EXCEED_CNC "A2.Bewegungsgrenze CNC"
#define __RESET_IN_MOTION "A3.Reset w\x81" "hrend Bewegung(P?)"
#define __PROBE_INIT_FAIL "A4.Init Fehler Messf\x83" "hler"
#define __PROBE_TRAVEL_FAIL "A5.Fehler Bewegung Sensor" 
#define __RESET_DURING_HOMING "A6.Reset w\x81" "hrend homing"
#define __DOOR_OPEN_HOMING "A7.T\x83" "r offen (homing)"
#define __LIMIT_ON_HOMING "A8.Limit EIN(homing)"
#define __LIMIT_MISSING_HOMING "A9.Limit fehlt(homing)"




#else                                      // by default English
// list of buttons
#define __SETUP "Setup" 
#define __PRINT "Mill" 
#define __HOME "Home" 
#define __UNLOCK "Unlock" 
#define __RESET "Reset" 
#define __SD "SD card" 
#define __USB_GRBL "USB" 
#define __TELNET_GRBL "Telnet" 
#define __PAUSE "Pause" 
#define __CANCEL "Cancel" 
#define __INFO "Info" 
#define __CMD "Cmd" 
#define __MOVE "Move" 
#define __RESUME "Resume" 
#define __STOP_PC_GRBL "Stop PC" 
#define __D_AUTO "Auto"
#define __SET_WCS "Set*WCS 1"
#define __SETX "Set X" 
#define __SETY "Set Y" 
#define __SETZ "Set Z"
#define __SETA "Set A" 
#define __SETXYZ "Set*XYZ"
#define __SETXYZA "Set*XYZA"
#define __TOOL "Tool" 
#define __SET_CHANGE "Set*change"
#define __SET_PROBE "Set*probe"
#define __SET_CAL "Cali-*brate"
#define __GO_CHANGE "Go to*change"
#define __GO_PROBE "Probe"
#define __BACK "Back" 
#define __LEFT "<-" 
#define __RIGHT "->" 
#define __UP "UP" 
#define __MORE_PAUSE "More" 
#define __PG_PREV "Prev"
#define __PG_NEXT "Next"
#define __SD_SHOW "See*GCode"
#define __OVERWRITE "Feedrate*Speed" // it is a hidden button , so no need for a text
#define __OVER_SWITCH_TO_FEEDRATE "Change*Feedrate"
#define __OVER_SWITCH_TO_SPINDLE "Change*Spindle"
#define __OVER_100 "Set to*100%"
#define __OVER_10P "+10%"
#define __OVER_10M "-10%"
#define __OVER_1P  "+1%"
#define __OVER_1M  "-1%"
#define __COMMUNICATION "Com"
#define __SERIAL "Wire"
#define __BLUETOOTH "Blue*tooth"
#define __TELNET "Telnet"
#define __SD_GRBL "SD*Grbl"
#define __YES "Yes"
#define __NO "No"
#define __LOG "Grbl*Msg"

#define __WPOS "Wpos"
#define __MPOS "Mpos"
#define __FEED "Feed"
#define __RPM  "Rpm"

#define __TOUCH_CORNER "Touch corners as indicated"
#define __SET_REPEAT_CAL "Set REPEAT_CAL to false to stop this running again!"
#define __CAL_COMPLETED "Calibration complete!"

#define __SPIFFS_FORMATTED "SPIFFS formatted"
#define __CMD_NOT_LOADED "Cmd not loaded"
#define __TELENET_DISCONNECTED "Telnet disconnected"
#define __INVALID_BTN_HOME "Invalid btn (Home)"
#define __CMD_NOT_RETRIEVED "Cmd not retrieved"
#define __NO_TELNET_CONNECTION "No telnet connection"
#define __WIFI_NOT_FOUND  "WiFi not found" 
#define __SPIFFS_FAIL_TO_OPEN "SPIFFS fail to open"
#define __FAILED_TO_CREATE_CMD "failed to create cmd"
#define __CAN_JOG_MISSING_OK "Can.JOG:missing Ok"
#define __CMD_JOG_MISSING_OK "Cmd JOG:missing Ok"
#define __DIR_NAME_NOT_FOUND "Dir name not found"
#define __BUG_UPDATE_FILE_BTN "Bug: updateFilesBtn"
#define __CARD_MOUNT_FAILED "Card Mount Failed"
#define __ROOT_NOT_FOUND "Root not found" 
#define __CHDIR_ERROR "chdir error"
#define __FAILED_TO_OPEN_ROOT "Failed to open Root" 
#define __FIRST_DIR_IS_NOT_ROOT "first dir is not Root"
#define __CURRENT_DIR_IS_NOT_A_SUB_DIR "current dir is not a sub dir"
#define __FILES_MISSING "files missing"
#define __FAILED_TO_OPEN_A_FILE "Failed to open a file"
#define __NO_FILE_NAME  "No file name"
#define __SELECTED_FILE_MISSING "Selected file missing"
#define __FILE_NAME_NOT_FOUND "File name not found"
#define __CMD_DELETED "Cmd deleted"
#define __CMD_NOT_CREATED "Cmd not created"
#define __CMD_CREATED "Cmd created"
#define __CMD_PART_NOT_READ "Cmd: part not read"
#define __CMD_COULD_NOT_SAVE "Cmd: could not save"
#define __NO_NUNCHUK "No nunchuk" 
#define __MISSING_OK_WHEN_SENDING_FROM_SD "Sending Gcode suspendend more than 2 min"
#define __NOT_IDLE "Status not Idle"
#define __CHANGING_FEEDRATE1 "Overwriting"
#define __CHANGING_FEEDRATE2 "Feedrate"
#define __CHANGING_SPINDLE1 "Overwriting"
#define __CHANGING_SPINDLE2 "Spindle (Rpm)"
#define __SETX_EXECUTED  "X set in G54"
#define __SETY_EXECUTED  "Y set in G54"
#define __SETZ_EXECUTED  "Z set in G54"
#define __SETA_EXECUTED  "A set in G54"
#define __SETXYZ_EXECUTED  "XYZ set in G54"
#define __SETXYZA_EXECUTED  "XYZA set in G54"
#define __SET_CHANGE_EXECUTED  "Change tool pos. set"
#define __SET_PROBE_EXECUTED "Probe position is set"
#define __SET_CAL_EXECUTED "Tool Calib. done"
#define __GO_CHANGE_EXECUTED "In change tool pos."
#define __GO_PROBE_EXECUTED "New WCS Z set in G54"
#define __UNKNOWN_BTN_EXECUTED "Wrong Btn Index"
#define __UNABLE_TO_CONNECT_IN_BT         "Fail to connect to GRBL in BT"
#define __BT_DISCONNECTED                 "BT Disconnected"
#define __BT_CONNECTED_WITH_GRBL          "GRBL connected with BT"
#define __GRBL_SERIAL_CONNECTED           "GRBL connection : wires (serial)"
#define __UNABLE_TO_CONNECT_TO_GRBL_TELNET "Fail to connect to GRBL with Telnet"
#define __TELNET_CONNECTED_WITH_GRBL      "GRBL connected with Telnet"
#define __CURRENT_GRBL_DIR                "Current directory"
#define __READING_FILES_ON_GRBL           "Reading files on Grbl"
#define __PLEASE_WAIT                     "Please wait"
#define __NO_IP_ASSIGNED                  "No IP assigned"
#define __USES_BT_TO_GRBL                  "GRBL connection : Bluetooth"
#define __USES_TELNET_TO_GRBL              "GRBL connection : Telnet" 
#define __TRY_TO_CONNECT_WITH_BT           "Trying to connect to GRBL using BT"
#define __WAIT_1_MIN                       "It can take 1 min; please wait"
#define __WIFI_NOT_CONNECTED               "Wifi not connected"
#define __TRY_TO_CONNECT_WITH_TELNET       "Trying to connect to GRBL using Telnet"
#define __WIFI_CONNECTED                   "Wifi is connected"   
#define __CONFIRM_SD_FILE                  "Are you sure to execute this file?"
#define __WIFI_NOT_REQUESTED               "Wifi not requested by setup"
#define __CONNECTING_TO_WIFI               "Connecting to wifi"
#define __NO_WIFI_CONNECTION               "No connection to wifi"
#define __CONNECTED_AS_STATION             "Connected to wifi as Station"
#define __AP_STARTED                       "Wifi Access Point started"


#define __UNKNOWN_ERROR "0.Unknown error"  
#define __EXPECTED_CMD_LETTER "1.Expected cmd letter"
#define __BAD_NUMBER_FORMAT "2.Bad number format"
#define __INVALID_$_SYSTEM_CMD "3.Invalid $ sytem cmd"
#define __NEGATIVE_VALUE "4.Negative value"
#define __HOMING_NOT_ENABLED "5.Homing not enabled"
#define __STEP_PULSE_LESS_3_USEC "6.Step pulse <3 usec"
#define __EEPROM_READ_FAIL "7.EEPROM read fail"
#define __$_WHILE_NOT_IDLE "8. $ while not IDLE"
#define __LOCKED_ALARM_OR_JOG "9.Locked(alarm or jog)"
#define __SOFT_LIMIT_NO_HOMING "10.Soft limit(no Homing)"
#define __LINE_OVERFLOW "11.Line overflow"
#define __STEP_RATE_TO_HIGH "12.Step rate to high"
#define __SAFETY_DOOR_DETECTED "13.Safety door detected"
#define __LINE_LENGHT_EXCEEDED "14.Line length exceeded"
#define __JOG_TRAVEL_EXCEEDED "15.Jog travel exceeded"
#define __INVALID_JOG_COMMAND "16.Invalid jog command"
#define __LASER_REQUIRES_PWM "17.Laser requires PWM"
#define __NO_HOMING_DEFINED  "18.No Homing/Cycle defined"
#define __UNKNOWN_ERROR_19 "Unknown error"
#define __UNSUPPORTED_COMMAND "20.Unsupported command"
#define __MODAL_GROUP_VIOLATION "21.Modal group violation"
#define __UNDEF_FEED_RATE "22.Undef. feed rate"
#define __CMD_REQUIRES_INTEGER "23.Cmd requires integer"
#define __SEVERAL_AXIS_GCODE "24.Several axis Gcode"
#define __REPEATED_GCODE "25.Repeated Gcode"
#define __AXIS_MISSING_IN_GCODE "26.Axis missing in Gcode"
#define __INVALID_LINE_NUMBER "27.Invalid line number"
#define __VALUE_MISSING_IN_GCODE "28.Value missing in Gcode"
#define __G59_WCS_NOT_SUPPORTED "29.G59 WCS not supported"
#define __G53_WITHOUT_G01_AND_G1 "30.G53 without G0 and G1"
#define __AXIS_NOT_ALLOWED "31.Axis not allowed"
#define __G2_G3_REQUIRE_A_PLANE "32.G2,G3 require a plane"
#define __INVALID_MOTION_TARGET "33.Invalid motion target"
#define __INVALID_ARC_RADIUS "34.Invalid arc radius"
#define __G2_G3_REQUIRE_OFFSET "35.G2,G3 require offset"
#define __UNSUSED_VALUE "36.Unused value"
#define __G431_TOOL_LENGTH "37.G43.1 tool length"
#define __TOOL_NUMBER_EXCEED_MAX "38.Tool number > max"
#define __PARAMETER_P_EXCEED_MAX "39.Parameter P > max"
#define __SD_FAILED_TO_MOUNT "60.SD failed to mount"
#define __SD_FAILED_FOR_READING "61.SD failed for reading"
#define __SD_FAILED_FOR_DIRECTORY "62.SD failed for directory"
#define __SD_DIR_NOT_FOUND "63.SD dir not found"
#define __SD_FILE_EMPTY "64.SD file empty"
#define __RESERVE_65   "65???"
#define __RESERVE_66   "66???"
#define __RESERVE_67   "67???"
#define __RESERVE_68   "68???"
#define __RESERVE_69   "69???"
#define __BT_FAILED    "70.Bluetooth failed to start"




              
#define __UNKNOWN_ALARM "Unknown Alarm" 
#define __HARD_LIMIT_REACHED "A1.Hard limit reached(P?)"
#define __MOTION_EXCEED_CNC "A2.Motion exceed CNC"
#define __RESET_IN_MOTION "A3.Reset in motion(P?)"
#define __PROBE_INIT_FAIL "A4.Probe init fail"
#define __PROBE_TRAVEL_FAIL "A5.Probe travel fail" 
#define __RESET_DURING_HOMING "A6.Reset during homing"
#define __DOOR_OPEN_HOMING "A7.Door open (homing)"
#define __LIMIT_ON_HOMING "A8.Limit ON(homing)"
#define __LIMIT_MISSING_HOMING "A9.Limit missing(homing)"


#endif


#endif


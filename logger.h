#pragma once
#include "config.h"
#include <log4cplus/logger.h>
#include <log4cplus/configurator.h>
#ifdef HAVE_LOGGINGMACROS_H
#include <log4cplus/loggingmacros.h>
#endif

/** Crée une configuration par défaut pour le logger */
inline void init_logger(){
    log4cplus::BasicConfigurator config;
    config.configure();
}

/** Configure le logger à partir du fichier de configuration */
inline void init_logger(const std::string & config_file){
    log4cplus::PropertyConfigurator::doConfigure(config_file);
}
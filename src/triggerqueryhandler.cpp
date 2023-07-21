// Copyright (c) 2023 Manuel Schneider

#include "albert/extension/queryhandler/triggerqueryhandler.h"
#include "triggerqueryhandlerprivate.h"
using namespace albert;

TriggerQueryHandler::TriggerQueryHandler() : d(new TriggerQueryHandlerPrivate) {}

TriggerQueryHandler::~TriggerQueryHandler() = default;

QString TriggerQueryHandler::synopsis() const { return {}; }

QString TriggerQueryHandler::defaultTrigger() const { return QString("%1 ").arg(id()); }

bool TriggerQueryHandler::allowTriggerRemap() const { return true; }

QString TriggerQueryHandler::trigger() const { return d->trigger; }

bool TriggerQueryHandler::supportsFuzzyMatching() const { return false; }

bool TriggerQueryHandler::fuzzyMatchingEnabled() const { return false; }

void TriggerQueryHandler::setFuzzyMatchingEnabled(bool) { }
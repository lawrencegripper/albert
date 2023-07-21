// Copyright (c) 2023 Manuel Schneider

#include "albert/extension/pluginprovider/pluginloader.h"
using namespace albert;

PluginLoader::PluginLoader(const QString &p) : path(p), state_(PluginState::Invalid) {}

PluginLoader::~PluginLoader() = default;

albert::PluginState PluginLoader::state() const { return state_; }

const QString &PluginLoader::stateInfo() const { return state_info_; }

void PluginLoader::setState(PluginState state, QString info)
{
    state_ = state;
    state_info_ = info;
    emit stateChanged(state);
}

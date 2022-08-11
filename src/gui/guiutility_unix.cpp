/*
 * Copyright (C) by Erik Verbruggen <erik@verbruggen.consulting>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include "guiutility.h"
#include "theme.h"

#include <QStandardPaths>

namespace OCC {

void Utility::tweakUIStyle()
{
}

void Utility::startShellIntegration()
{
}

QString Utility::socketApiSocketPath()
{
    return QStringLiteral("%1/%2/socket").arg(QStandardPaths::writableLocation(QStandardPaths::RuntimeLocation), Theme::instance()->appName());
}

} // namespace OCC

/*
 *   Copyright (C) 2010 Alexey Noskov <alexey.noskov@gmail.com>
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License as
 *   published by the Free Software Foundation; either version 2 of
 *   the License or (at your option) version 3 or any later version
 *   accepted by the membership of KDE e.V. (or its successor approved
 *   by the membership of KDE e.V.), which shall act as a proxy
 *   defined in Section 14 of version 3 of the license.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "appinstall.h"

#include <KDebug>
#include <KMimeType>
#include <KIconLoader>

// This is the command that links the applet to the .desktop file
K_EXPORT_PLASMA_RUNNER(appinstall, AppInstallRunner)

using Plasma::QueryMatch;
using Plasma::RunnerSyntax;

AppInstallRunner::AppInstallRunner(QObject *parent, const QVariantList& args)
    : Plasma::AbstractRunner(parent, args)
{
    Q_UNUSED(args);

    setObjectName("appinstall_runner");

    icon = KIcon( KIconLoader().loadMimeTypeIcon( KMimeType::mimeType( "text/calendar" )->iconName(), KIconLoader::NoGroup ) );

    describeSyntaxes();
}

AppInstallRunner::~AppInstallRunner() {
}

void AppInstallRunner::reloadConfiguration() {
}

void AppInstallRunner::describeSyntaxes() {
    QList<RunnerSyntax> syntaxes;

    setSyntaxes(syntaxes);
}

void AppInstallRunner::match( Plasma::RunnerContext &context ) {
    const QString term = context.query();

    if ( term.length() < 8 )
        return;

   
}

void AppInstallRunner::run(const Plasma::RunnerContext &context, const Plasma::QueryMatch &match) {
    Q_UNUSED(context)

}


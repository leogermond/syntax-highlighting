/*
    Copyright (C) 2016 Volker Krause <vkrause@kde.org>

    This program is free software; you can redistribute it and/or modify it
    under the terms of the GNU Library General Public License as published by
    the Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    This program is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
    License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SYNTAXHIGHLIGHTING_REPOSITORY_P_H
#define SYNTAXHIGHLIGHTING_REPOSITORY_P_H

#include <QHash>
#include <QVector>

class QString;

namespace SyntaxHighlighting {

class Definition;
class Repository;
class Theme;

class RepositoryPrivate
{
public:
    void load(Repository *repo);
    void loadSyntaxFolder(Repository *repo, const QString &path);
    bool loadSyntaxFolderFromIndex(Repository *repo, const QString &path);
    void addDefinition(const Definition &def);

    void loadThemeFolder(const QString &path);
    void addTheme(const Theme &theme);

    QHash<QString, Definition> m_defs;
    QVector<Definition> m_sortedDefs;

    QVector<Theme> m_themes;
};
}

#endif

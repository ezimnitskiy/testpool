// Copyright (c) 2015-2017, The Vuecash developers
//
// This file is part of Vuecash.
//
// Vuecash is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Vuecash is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Vuecash.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <QSortFilterProxyModel>

namespace WalletGUI {

class WalletWindowedItemModel : public QSortFilterProxyModel
{
    Q_OBJECT
    Q_DISABLE_COPY(WalletWindowedItemModel)

public:
    WalletWindowedItemModel(int filterRole, QObject* parent);
    virtual ~WalletWindowedItemModel();

    int getWindowSize() const;
    int getWindowBegin() const;
    void setWindowSize(int windowSize);
    void setWindowBegin(int windowBegin);

protected:
    virtual bool filterAcceptsRow(int sourceRow, const QModelIndex& sourceParent) const override;

private:
    int m_filterRole;
    int m_windowSize;
    int m_windowBegin;
};

}

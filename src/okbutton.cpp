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

#include "okbutton.h"

namespace WalletGUI {

namespace {

const char WALLET_OK_BUTTON_STYLE_SHEET_TEMPLATE[] =
  "* {"
    "font-family: %fontFamily%;"
  "}"

  "WalletGui--WalletOkButton {"
    "min-width: 80px;"
    "max-width: 80px;"
    "min-height: 30px;"
    "max-height: 30px;"
    "font-size: %fontSizeNormal%;"
    "color: #ffffff;"
    "background-color: %backgroundColorBlueNormal%;"
    "border: 1px solid %backgroundColorBlueNormal%;"
  "}"

  "WalletGui--WalletOkButton:disabled {"
    "background-color: %backgroundColorBlueDisabled%;"
    "border: 1px solid %backgroundColorBlueDisabled%;"
  "}"

  "WalletGui--WalletOkButton:hover {"
    "background-color: %backgroundColorBlueHover%;"
    "border: 1px solid %backgroundColorBlueHover%;"
  "}"

  "WalletGui--WalletOkButton:pressed {"
    "background-color: %backgroundColorBluePressed%;"
    "border: 1px solid %backgroundColorBluePressed%;"
  "}";

}

WalletOkButton::WalletOkButton(QWidget* parent)
    : QPushButton(parent)
{
//    setStyleSheet(Settings::instance().getCurrentStyle().makeStyleSheet(WALLET_OK_BUTTON_STYLE_SHEET_TEMPLATE));
}

WalletOkButton::~WalletOkButton()
{}

}

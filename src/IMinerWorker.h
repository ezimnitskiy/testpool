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

#include <QObject>

namespace WalletGUI {

struct Job {
  QString jobId;
  quint32 target;
  QByteArray blob;
};

class IMinerWorkerObserver {
public:
  virtual ~IMinerWorkerObserver() {}
  virtual void shareFound(const QString& _jobId, quint32 _nonce, const QByteArray& _result) = 0;
};

class IMinerWorker {
public:
  virtual ~IMinerWorker() {}

  virtual void start() = 0;
  virtual void stop() = 0;
  virtual void addObserver(IMinerWorkerObserver* _observer) = 0;
  virtual void removeObserver(IMinerWorkerObserver* _observer) = 0;
  virtual void addAlternateObserver(IMinerWorkerObserver* _observer) = 0;
  virtual void removeAlternateObserver(IMinerWorkerObserver* _observer) = 0;
};

}

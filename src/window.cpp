// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include <QtWidgets/QPushButton>

#include "QFlowLayout.h"
#include "window.h"

//! [1]
Window::Window() {
    QFlowLayout* flowLayout = new QFlowLayout;

    flowLayout->addWidget(new QPushButton(tr("Short")));
    flowLayout->addWidget(new QPushButton(tr("Longer")));
    flowLayout->addWidget(new QPushButton(tr("Different text")));
    flowLayout->addWidget(new QPushButton(tr("More text")));
    flowLayout->addWidget(new QPushButton(tr("Even longer button text")));
    setLayout(flowLayout);

    setWindowTitle(tr("Flow Layout"));
}
//! [1]


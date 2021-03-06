/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSNodeIterator_h
#define JSNodeIterator_h

#include "JSDOMBinding.h"
#include <kjs/JSGlobalObject.h>
#include <kjs/ObjectPrototype.h>

namespace WebCore {

class NodeIterator;

class JSNodeIterator : public DOMObject {
    typedef DOMObject Base;
public:
    JSNodeIterator(KJS::JSObject* prototype, NodeIterator*);
    virtual ~JSNodeIterator();
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier& propertyName, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;

    virtual void mark();

    enum {
        // Attributes
        RootAttrNum, WhatToShowAttrNum, FilterAttrNum, ExpandEntityReferencesAttrNum, 
        ReferenceNodeAttrNum, PointerBeforeReferenceNodeAttrNum, 
    };

    // Custom functions
    KJS::JSValue* nextNode(KJS::ExecState*, const KJS::ArgList&);
    KJS::JSValue* previousNode(KJS::ExecState*, const KJS::ArgList&);
    NodeIterator* impl() const { return m_impl.get(); }

private:
    RefPtr<NodeIterator> m_impl;
};

KJS::JSValue* toJS(KJS::ExecState*, NodeIterator*);
NodeIterator* toNodeIterator(KJS::JSValue*);

class JSNodeIteratorPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState*);
    virtual const KJS::ClassInfo* classInfo() const { return &s_info; }
    static const KJS::ClassInfo s_info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSNodeIteratorPrototype(KJS::ExecState* exec)
        : KJS::JSObject(exec->lexicalGlobalObject()->objectPrototype()) { }
};

// Functions

KJS::JSValue* jsNodeIteratorPrototypeFunctionNextNode(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodeIteratorPrototypeFunctionPreviousNode(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
KJS::JSValue* jsNodeIteratorPrototypeFunctionDetach(KJS::ExecState*, KJS::JSObject*, KJS::JSValue*, const KJS::ArgList&);
} // namespace WebCore

#endif

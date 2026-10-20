// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58822C50 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_58822c50() {
    __asm {
        mov eax, dword ptr [esp + 4]
        add eax, 0ffffefffh
        cmp eax, 5
        ; Exact mapped bytes 0F 87 86 00 00 00: ja 0x58822ce8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 04 2D 82 58: jmp dword ptr [eax*4 + 0x58822d04]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x2d
        __asm _emit 0x82
        __asm _emit 0x58
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 7A 8E F4 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B3 20 F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x20
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1d0h
        ; Exact mapped bytes E8 60 8E F4 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 99 20 F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x20
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1d1h
        ; Exact mapped bytes E8 46 8E F4 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F 20 F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x20
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1d2h
        ; Exact mapped bytes E8 2C 8E F4 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 65 20 F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x20
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1cfh
        ; Exact mapped bytes E8 12 8E F4 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B 20 F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x20
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1d3h
        ; Exact mapped bytes E8 F8 8D F4 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 20 F4 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x20
        __asm _emit 0xf4
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

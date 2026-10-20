// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879EB30 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5879eb30_5879EB30() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test dword ptr [eax + 78h], 400000h
        ; Exact mapped bytes 74 42: je 0x5879eb7f
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879eb4a
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes FF E1: jmp ecx
        __asm _emit 0xff
        __asm _emit 0xe1
        push dword ptr [esp + 8]
        push 588b7734h
        push 2
        ; Exact mapped bytes E8 06 B1 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xb1
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 4D 2A D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x2a
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        push 588b70a8h
        push 2
        ; Exact mapped bytes E8 EE B0 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 35 2A D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x2a
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 8
        ret
        push dword ptr [esp + 8]
        push eax
        ; Exact mapped bytes E8 F7 02 00 00: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

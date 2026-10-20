// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879EB90 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5879eb90_5879EB90() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test dword ptr [eax + 78h], 200000h
        ; Exact mapped bytes 74 42: je 0x5879ebdf
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879ebaa
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes FF E1: jmp ecx
        __asm _emit 0xff
        __asm _emit 0xe1
        push dword ptr [esp + 8]
        push 588b7734h
        push 2
        ; Exact mapped bytes E8 A6 B0 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 ED 29 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x29
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        push 588b70a8h
        push 2
        ; Exact mapped bytes E8 8E B0 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 D5 29 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x29
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 8
        ret
        push dword ptr [esp + 8]
        push eax
        ; Exact mapped bytes E8 97 02 00 00: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

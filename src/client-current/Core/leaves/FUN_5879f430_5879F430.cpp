// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F430 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_5879f430_5879F430() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x5879f445
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879f445
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes FF E1: jmp ecx
        __asm _emit 0xff
        __asm _emit 0xe1
        push dword ptr [esp + 8]
        push 588b7734h
        push 2
        ; Exact mapped bytes E8 0B A8 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 52 21 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x21
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        push 588b70a8h
        push 2
        ; Exact mapped bytes E8 F3 A7 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa7
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 3A 21 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x21
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 8
        ret
    }
}

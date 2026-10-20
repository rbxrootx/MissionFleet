// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879EBF0 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_5879ebf0_5879EBF0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax + 74h]
        and ecx, 8000h
        test dword ptr [eax + 78h], 100000h
        ; Exact mapped bytes 74 58: je 0x5879ec5e
        __asm _emit 0x74
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x5879ec1c
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [eax + 120h], 0
        ; Exact mapped bytes 74 09: je 0x5879ec1c
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes E9 74 01 00 00: jmp 0x5879ed90
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x5879ec29
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes FF E1: jmp ecx
        __asm _emit 0xff
        __asm _emit 0xe1
        push dword ptr [esp + 8]
        push 588b7734h
        push 2
        ; Exact mapped bytes E8 27 B0 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 6E 29 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x29
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        push 588b70a8h
        push 2
        ; Exact mapped bytes E8 0F B0 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 56 29 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x29
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 8
        ret
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x5879ec6b
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [eax + 120h], 0
        ; Exact mapped bytes 75 0A: jne 0x5879ec75
        __asm _emit 0x75
        __asm _emit 0x0a
        push dword ptr [esp + 8]
        push eax
        ; Exact mapped bytes E8 0B 02 00 00: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esp + 8]
        push eax
        ; Exact mapped bytes E8 31 00 00 00: call 0x5879ecb0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

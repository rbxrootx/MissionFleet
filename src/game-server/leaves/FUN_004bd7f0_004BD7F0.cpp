// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BD7F0 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_004bd7f0_004BD7F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0eh]
        and eax, 0ffffh
        and eax, 7ff0h
        cmp eax, 7ff0h
        ; Exact mapped bytes 75 46: jne 0x4bd850
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 A9 F7 FF FF: call 0x4bcfc0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 0E: je 0x4bd831
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 12: je 0x4bd83b
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 74 13: je 0x4bd842
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes EB 18: jmp 0x4bd849
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, 200h
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x4bd8bf
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        ; Exact mapped bytes EB 7D: jmp 0x4bd8bf
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov eax, 2
        ; Exact mapped bytes EB 76: jmp 0x4bd8bf
        __asm _emit 0xeb
        __asm _emit 0x76
        mov eax, 1
        ; Exact mapped bytes EB 6F: jmp 0x4bd8bf
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov eax, dword ptr [ebp + 0eh]
        and eax, 0ffffh
        and eax, 8000h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0eh]
        and ecx, 0ffffh
        and ecx, 7ff0h
        test ecx, ecx
        ; Exact mapped bytes 75 20: jne 0x4bd893
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 0ch
        test edx, edx
        ; Exact mapped bytes 75 06: jne 0x4bd883
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 10: je 0x4bd893
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        neg eax
        sbb eax, eax
        and al, 90h
        add eax, 80h
        ; Exact mapped bytes EB 2C: jmp 0x4bd8bf
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 1D 18 11 58 00: fcomp qword ptr [0x581118]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 40h
        ; Exact mapped bytes 74 0E: je 0x4bd8b1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        neg eax
        sbb eax, eax
        and al, 0e0h
        add eax, 40h
        ; Exact mapped bytes EB 0E: jmp 0x4bd8bf
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        neg eax
        sbb eax, eax
        and al, 8
        add eax, 100h
        mov esp, ebp
        pop ebp
        ret
    }
}

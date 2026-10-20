// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865860 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_58865860_58865860() {
    __asm {
        mov edi, edi
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 8B 3D 98 98 96 58: mov edi, dword ptr [0x58969898]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        test edi, edi
        ; Exact mapped bytes 74 67: je 0x588658d6
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [edi]
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x588658cb
        __asm _emit 0x74
        __asm _emit 0x56
        xor ebx, ebx
        push ebx
        push ebx
        push -1
        push eax
        push ebx
        push ebx
        ; Exact mapped bytes E8 AC A2 00 00: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        add esp, 18h
        test ebx, ebx
        ; Exact mapped bytes 74 4A: je 0x588658d6
        __asm _emit 0x74
        __asm _emit 0x4a
        push 2
        push ebx
        ; Exact mapped bytes E8 7C 99 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 41: je 0x588658dd
        __asm _emit 0x74
        __asm _emit 0x41
        push ebx
        push esi
        push -1
        push dword ptr [edi]
        xor ebx, ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 84 A2 00 00: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x588658cf
        __asm _emit 0x74
        __asm _emit 0x1d
        push ebx
        push esi
        ; Exact mapped bytes E8 E6 FF 00 00: call 0x5887589f
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 51 73 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, 4
        add esp, 0ch
        mov eax, dword ptr [edi]
        test eax, eax
        ; Exact mapped bytes 75 AC: jne 0x58865877
        __asm _emit 0x75
        __asm _emit 0xac
        xor eax, eax
        ; Exact mapped bytes EB 0A: jmp 0x588658d9
        __asm _emit 0xeb
        __asm _emit 0x0a
        push esi
        ; Exact mapped bytes E8 3B 73 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        ret
        push 0
        ; Exact mapped bytes EB EF: jmp 0x588658d0
        __asm _emit 0xeb
        __asm _emit 0xef
    }
}

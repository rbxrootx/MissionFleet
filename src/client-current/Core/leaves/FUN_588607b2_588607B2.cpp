// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588607B2 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_588607b2_588607B2() {
    __asm {
        mov edi, edi
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ebx, [esi + 8]
        mov ecx, ebx
        ; Exact mapped bytes E8 70 0C 00 00: call 0x58861433
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 0E: je 0x588607d5
        __asm _emit 0x74
        __asm _emit 0x0e
        lea edi, [esi + 10h]
        mov ecx, edi
        ; Exact mapped bytes E8 25 0C 00 00: call 0x588613f6
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 75 12: jne 0x588607e7
        __asm _emit 0x75
        __asm _emit 0x12
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 2E 04 00 00: call 0x58860c11
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 0B: je 0x588607f2
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, edi
        ; Exact mapped bytes E8 75 D4 FF FF: call 0x5885dc63
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 EA: jne 0x588607dc
        __asm _emit 0x75
        __asm _emit 0xea
        mov edi, dword ptr [esi + 68h]
        test edi, edi
        ; Exact mapped bytes 75 23: jne 0x5886081c
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [esi + 20h], 1
        ; Exact mapped bytes 74 1D: je 0x5886081c
        __asm _emit 0x74
        __asm _emit 0x1d
        push dword ptr [ebx]
        ; Exact mapped bytes E8 C2 98 FF FF: call 0x5885a0c8
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        cmp eax, -1
        ; Exact mapped bytes 74 05: je 0x58860811
        __asm _emit 0x74
        __asm _emit 0x05
        inc dword ptr [ebx + 4]
        ; Exact mapped bytes EB 03: jmp 0x58860814
        __asm _emit 0xeb
        __asm _emit 0x03
        or edi, 0ffffffffh
        push eax
        mov ecx, ebx
        ; Exact mapped bytes E8 9D 0B 00 00: call 0x588613b9
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        and eax, 1
        or eax, 0
        ; Exact mapped bytes 74 13: je 0x58860839
        __asm _emit 0x74
        __asm _emit 0x13
        mov esi, dword ptr [esi + 1ch]
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x58860839
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 3D 1C 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 72 07 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, edi
        ; Exact mapped bytes EB 9B: jmp 0x588607d8
        __asm _emit 0xeb
        __asm _emit 0x9b
    }
}

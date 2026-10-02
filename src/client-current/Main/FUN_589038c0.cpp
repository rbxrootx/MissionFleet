// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 189 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589038C0 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_589038c0_segment_00() {
    __asm {
        sub esp, 8
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x58903976
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 50h], 0
        ; Exact mapped bytes 0F 8C 9A 00 00 00: jl 0x58903976
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        push ebp
        mov ebp, dword ptr [esp + 1ch]
        push esi
        mov esi, dword ptr [edi + 4ch]
        test esi, esi
        ; Exact mapped bytes 74 20: je 0x5890390e
        __asm _emit 0x74
        __asm _emit 0x20
        mov edi, edi
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 17: jge 0x5890390e
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [edx + 14h]
        push ebx
        push ebp
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 E2: jne 0x589038f0
        __asm _emit 0x75
        __asm _emit 0xe2
        mov ecx, dword ptr [edi + 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 3F: je 0x58903954
        __asm _emit 0x74
        __asm _emit 0x3f
        test ecx, 0ffffff00h
        ; Exact mapped bytes 74 37: je 0x58903954
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [edi + 0ch]
        add eax, dword ptr [edi + 4]
        mov edx, dword ptr [ebx + 4]
        add edx, dword ptr [edi + 10h]
        add eax, dword ptr [ebx]
        add edx, dword ptr [edi + 8]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [edi + 2ch]
        push eax
        mov eax, dword ptr [edi + 50h]
        mov dword ptr [esp + 18h], edx
        mov edx, dword ptr [edi + 28h]
        mov edi, dword ptr [esp + 20h]
        push edx
        push eax
        push ebp
        lea edx, [esp + 20h]
        push edx
        push edi
        ; Exact mapped bytes E8 7E 6C E3 FF: call 0x5873a5d0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6c
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x58903958
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 1ch]
        test esi, esi
        ; Exact mapped bytes 74 17: je 0x58903973
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 14h]
        push ebx
        push ebp
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 ED: jne 0x58903960
        __asm _emit 0x75
        __asm _emit 0xed
        pop esi
        pop ebp
        pop ebx
        pop edi
        add esp, 8
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

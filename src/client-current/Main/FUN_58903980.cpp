// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 186 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903980 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_58903980_segment_00() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x58903a33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 4ch]
        mov ebp, dword ptr [esp + 1ch]
        mov ebx, dword ptr [esp + 18h]
        test esi, esi
        ; Exact mapped bytes 74 1E: je 0x589039bf
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 17: jge 0x589039bf
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [esi]
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [edx + 14h]
        push ebp
        push ebx
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 E2: jne 0x589039a1
        __asm _emit 0x75
        __asm _emit 0xe2
        mov eax, dword ptr [edi + 50h]
        mov dword ptr [esp + 1ch], eax
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x58903a11
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [edi + 2ch]
        mov edx, dword ptr [ebp + 4]
        add edx, dword ptr [edi + 10h]
        mov eax, dword ptr [edi + 0ch]
        add eax, dword ptr [edi + 4]
        add edx, dword ptr [edi + 8]
        add eax, dword ptr [ebp]
        push ecx
        mov ecx, dword ptr [edi + 28h]
        push ecx
        mov ecx, dword ptr [ebx]
        sub esp, 10h
        mov edi, esp
        mov dword ptr [edi], ecx
        mov ecx, dword ptr [ebx + 4]
        mov dword ptr [edi + 4], ecx
        mov ecx, dword ptr [ebx + 8]
        mov dword ptr [edi + 8], ecx
        mov ecx, dword ptr [ebx + 0ch]
        push edx
        mov dword ptr [edi + 0ch], ecx
        mov edi, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 38h]
        push eax
        push edi
        ; Exact mapped bytes E8 51 03 00 00: call 0x58903d60
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x58903a15
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 14h]
        test esi, esi
        ; Exact mapped bytes 74 1A: je 0x58903a33
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 14h]
        push ebp
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 ED: jne 0x58903a20
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

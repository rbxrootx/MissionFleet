// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FE8B0 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_100fe8b0_100FE8B0() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 1
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x100fe962
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi + 4ch]
        mov ebx, dword ptr [esp + 1ch]
        mov ebp, dword ptr [esp + 18h]
        test esi, esi
        ; Exact mapped bytes 74 1C: je 0x100fe8eb
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 15: jge 0x100fe8eb
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi]
        push ebx
        push ebp
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 E4: jne 0x100fe8cf
        __asm _emit 0x75
        __asm _emit 0xe4
        mov eax, dword ptr [edi + 50h]
        test eax, eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 74 53: je 0x100fe949
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [ebx]
        add eax, ecx
        mov ecx, dword ptr [edi + 10h]
        add eax, edx
        mov edx, dword ptr [ebx + 4]
        add edx, ecx
        mov ecx, dword ptr [edi + 8]
        add edx, ecx
        mov ecx, dword ptr [edi + 2ch]
        push ecx
        mov ecx, dword ptr [edi + 28h]
        mov edi, dword ptr [ebp]
        push ecx
        sub esp, 10h
        mov ecx, esp
        push edx
        push eax
        mov dword ptr [ecx], edi
        mov edi, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edi
        mov edi, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [esp + 34h]
        mov ecx, dword ptr [esp + 3ch]
        push edi
        ; Exact mapped bytes E8 CD 10 00 00: call 0x100ffa10
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 18h]
        ; Exact mapped bytes EB 04: jmp 0x100fe94d
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 14h]
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x100fe962
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [esi]
        push ebx
        push ebp
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 EF: jne 0x100fe951
        __asm _emit 0x75
        __asm _emit 0xef
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

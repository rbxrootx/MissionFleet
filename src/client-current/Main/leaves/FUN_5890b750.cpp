// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890B750 .. +0x1A5 bytes.
extern "C" __declspec(naked) void FUN_5890b750() {
    __asm {
        sub esp, 1ch
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 84 8C 01 00 00: je 0x5890b8ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 28h]
        push ebp
        mov ebp, dword ptr [esp + 34h]
        push edi
        mov edi, dword ptr [esi + 4ch]
        test edi, edi
        ; Exact mapped bytes 74 1E: je 0x5890b792
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 17: jge 0x5890b792
        __asm _emit 0x7d
        __asm _emit 0x17
        mov eax, dword ptr [esp + 34h]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 14h]
        push ebp
        push eax
        push ebx
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E2: jne 0x5890b774
        __asm _emit 0x75
        __asm _emit 0xe2
        cmp dword ptr [esi + 50h], 0
        ; Exact mapped bytes 0F 84 34 01 00 00: je 0x5890b8d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        mov eax, dword ptr [esi + 0ch]
        mov ebx, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 14h]
        add ebx, ecx
        add ebx, eax
        add ebx, edx
        mov edx, dword ptr [ebp + 4]
        mov ebp, dword ptr [esi + 8]
        mov dword ptr [esp + 10h], edx
        mov edx, dword ptr [esi + 18h]
        add edx, ebp
        mov ebp, dword ptr [esi + 1ch]
        add edx, dword ptr [esi + 10h]
        add ecx, ebp
        add ecx, dword ptr [esi + 4]
        mov ebp, dword ptr [esp + 38h]
        add edx, dword ptr [esp + 10h]
        add ecx, eax
        mov eax, dword ptr [esp + 34h]
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 24h], ecx
        mov ecx, dword ptr [esi + 20h]
        add ecx, dword ptr [esi + 8]
        mov dword ptr [esp + 1ch], ebx
        add ecx, dword ptr [esi + 10h]
        mov dword ptr [esp + 20h], edx
        add ecx, dword ptr [ebp + 4]
        cmp ebx, eax
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes 7D 06: jge 0x5890b7fe
        __asm _emit 0x7d
        __asm _emit 0x06
        mov ebx, eax
        mov dword ptr [esp + 1ch], ebx
        mov eax, dword ptr [esp + 34h]
        mov eax, dword ptr [eax + 4]
        cmp edx, eax
        ; Exact mapped bytes 7D 06: jge 0x5890b80f
        __asm _emit 0x7d
        __asm _emit 0x06
        mov edx, eax
        mov dword ptr [esp + 20h], edx
        mov eax, dword ptr [esp + 34h]
        mov eax, dword ptr [eax + 8]
        cmp dword ptr [esp + 24h], eax
        ; Exact mapped bytes 7E 04: jle 0x5890b820
        __asm _emit 0x7e
        __asm _emit 0x04
        mov dword ptr [esp + 24h], eax
        mov eax, dword ptr [esp + 34h]
        mov eax, dword ptr [eax + 0ch]
        cmp ecx, eax
        ; Exact mapped bytes 7E 06: jle 0x5890b831
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ecx, eax
        mov dword ptr [esp + 28h], ecx
        cmp ebx, dword ptr [esp + 24h]
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x5890b8cc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, ecx
        ; Exact mapped bytes 0F 8D 89 00 00 00: jge 0x5890b8cc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        add ecx, dword ptr [ebp]
        mov ebx, dword ptr [esi + 54h]
        mov dword ptr [esp + 14h], ecx
        test bl, 2
        ; Exact mapped bytes 74 28: je 0x5890b87d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 1ch]
        sub eax, edx
        add ecx, eax
        mov eax, dword ptr [esi + 88h]
        mov dword ptr [esp + 14h], ecx
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5890b893
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [eax + 14h]
        sub edx, dword ptr [eax + 1ch]
        lea eax, [ecx + edx - 2]
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes EB 16: jmp 0x5890b893
        __asm _emit 0xeb
        __asm _emit 0x16
        test bl, 6
        ; Exact mapped bytes 74 11: je 0x5890b893
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [esi + 1ch]
        sub eax, dword ptr [esi + 14h]
        cdq
        sub eax, edx
        sar eax, 1
        add ecx, eax
        mov dword ptr [esp + 14h], ecx
        mov ecx, dword ptr [esi + 8]
        add ecx, dword ptr [ebp + 4]
        push ebx
        mov ebx, dword ptr [esp + 34h]
        lea eax, [esp + 20h]
        push eax
        mov eax, dword ptr [esi + 68h]
        push eax
        mov eax, dword ptr [esi + 64h]
        push eax
        mov eax, dword ptr [esi + 60h]
        push eax
        mov eax, dword ptr [esi + 6ch]
        push eax
        mov dword ptr [esp + 30h], ecx
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 8]
        lea eax, [esp + 2ch]
        push eax
        mov eax, dword ptr [ebx + 50h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes EB 04: jmp 0x5890b8d0
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 30h]
        test edi, edi
        ; Exact mapped bytes 74 17: je 0x5890b8eb
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [esp + 34h]
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 14h]
        push ebp
        push ecx
        push ebx
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E9: jne 0x5890b8d4
        __asm _emit 0x75
        __asm _emit 0xe9
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

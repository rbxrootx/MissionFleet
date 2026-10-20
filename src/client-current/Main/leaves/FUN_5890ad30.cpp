// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890AD30 .. +0x1C1 bytes.
extern "C" __declspec(naked) void FUN_5890ad30() {
    __asm {
        sub esp, 20h
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 84 A8 01 00 00: je 0x5890aeea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 30h]
        push edi
        mov edi, dword ptr [esi + 4ch]
        test edi, edi
        ; Exact mapped bytes 74 23: je 0x5890ad72
        __asm _emit 0x74
        __asm _emit 0x23
        nop
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1B: jge 0x5890ad72
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 14h]
        push eax
        push ebp
        push ecx
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 DE: jne 0x5890ad50
        __asm _emit 0x75
        __asm _emit 0xde
        cmp dword ptr [esi + 50h], 0
        push ebx
        ; Exact mapped bytes 0F 84 45 01 00 00: je 0x5890aec2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 3ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + 0ch]
        add eax, dword ptr [esi + 4]
        add edx, dword ptr [esi + 10h]
        add eax, dword ptr [ecx]
        add edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 18h]
        mov ebx, dword ptr [esi + 14h]
        add ecx, edx
        mov dword ptr [esp + 24h], ecx
        mov ecx, dword ptr [esi + 1ch]
        add ebx, eax
        add ecx, eax
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [esi + 20h]
        add eax, edx
        mov dword ptr [esp + 14h], edx
        mov edx, dword ptr [ebp]
        cmp ebx, edx
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esp + 28h], ecx
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 7D 06: jge 0x5890adcb
        __asm _emit 0x7d
        __asm _emit 0x06
        mov ebx, edx
        mov dword ptr [esp + 20h], ebx
        mov edx, dword ptr [ebp + 4]
        cmp dword ptr [esp + 24h], edx
        ; Exact mapped bytes 7D 04: jge 0x5890add8
        __asm _emit 0x7d
        __asm _emit 0x04
        mov dword ptr [esp + 24h], edx
        mov edx, dword ptr [ebp + 8]
        cmp ecx, edx
        ; Exact mapped bytes 7E 06: jle 0x5890ade5
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ecx, edx
        mov dword ptr [esp + 28h], ecx
        mov edx, dword ptr [ebp + 0ch]
        cmp eax, edx
        ; Exact mapped bytes 7E 06: jle 0x5890adf2
        __asm _emit 0x7e
        __asm _emit 0x06
        mov eax, edx
        mov dword ptr [esp + 2ch], eax
        cmp ebx, ecx
        ; Exact mapped bytes 0F 8D C8 00 00 00: jge 0x5890aec2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 24h], eax
        ; Exact mapped bytes 0F 8D BE 00 00 00: jge 0x5890aec2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        push edx
        mov ecx, dword ptr [esi + 50h]
        mov ebx, dword ptr [esp + 38h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 8]
        lea edx, [esp + 24h]
        push edx
        mov edx, dword ptr [esi + 68h]
        push edx
        mov edx, dword ptr [esi + 64h]
        push edx
        mov edx, dword ptr [esi + 60h]
        push edx
        mov edx, dword ptr [esi + 94h]
        add edx, dword ptr [esi + 80h]
        push edx
        lea edx, [esp + 28h]
        push edx
        mov edx, dword ptr [ebx + 50h]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        inc dword ptr [esi + 6ch]
        mov ecx, dword ptr [esi + 6ch]
        mov eax, 0cccccccdh
        mul ecx
        shr edx, 3
        test dl, 1
        ; Exact mapped bytes 74 74: je 0x5890aec6
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 2
        ; Exact mapped bytes 74 6B: je 0x5890aec6
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esi + 94h]
        mov edx, dword ptr [edx + 4]
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, dword ptr [esi + 90h]
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [esi + 80h]
        add ecx, eax
        push ecx
        mov ecx, dword ptr [esi + 50h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        cmp dword ptr [ebx + 50h], 0
        ; Exact mapped bytes 74 3B: je 0x5890aec6
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [esi + 60h]
        mov eax, dword ptr [esi + 50h]
        mov esi, dword ptr [esp + 14h]
        mov ecx, dword ptr [ebx + 50h]
        mov ebx, dword ptr [ecx]
        push 0
        push 100h
        push edx
        mov edx, dword ptr [eax + 8]
        lea edx, [edx + esi - 3]
        mov esi, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 24h]
        push edx
        mov edx, dword ptr [esp + 20h]
        add esi, eax
        add esi, edx
        add eax, edx
        push esi
        push eax
        mov eax, dword ptr [ebx + 10h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebx, dword ptr [esp + 34h]
        test edi, edi
        ; Exact mapped bytes 74 1D: je 0x5890aee7
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 14h]
        push eax
        push ebp
        push ebx
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E9: jne 0x5890aed0
        __asm _emit 0x75
        __asm _emit 0xe9
        pop ebx
        pop edi
        pop ebp
        pop esi
        add esp, 20h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

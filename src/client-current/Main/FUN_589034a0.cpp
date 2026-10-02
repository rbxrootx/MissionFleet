// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 402 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589034A0 .. +0x192 bytes.
extern "C" __declspec(naked) void FUN_589034a0_segment_00() {
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
        ; Exact mapped bytes 0F 84 79 01 00 00: je 0x5890362b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [esi + 4ch]
        test edi, edi
        ; Exact mapped bytes 74 2C: je 0x589034e6
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7F 26 00: cmp word ptr [edi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1F: jge 0x589034e6
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 14h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push eax
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 DA: jne 0x589034c0
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [esi + 50h], 0
        push ebx
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x58903606
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 34h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [esi + 0ch]
        mov eax, dword ptr [esi + 14h]
        mov ebx, dword ptr [esi + 10h]
        push ebp
        mov ebp, dword ptr [esi + 4]
        add edx, ebp
        add edx, ecx
        add edx, eax
        mov eax, dword ptr [esi + 8]
        add eax, ebx
        mov ebx, dword ptr [esp + 38h]
        add eax, dword ptr [ebx + 4]
        mov ebx, dword ptr [esi + 1ch]
        add eax, dword ptr [esi + 18h]
        mov dword ptr [esp + 1ch], edx
        mov dword ptr [esp + 20h], eax
        mov eax, dword ptr [esp + 38h]
        mov eax, dword ptr [eax]
        add ebx, eax
        add ebx, ebp
        mov ebp, dword ptr [esp + 38h]
        add ebx, ecx
        mov ecx, dword ptr [esi + 20h]
        add ecx, dword ptr [esi + 8]
        mov dword ptr [esp + 24h], ebx
        add ecx, dword ptr [esi + 10h]
        add ecx, dword ptr [ebp + 4]
        mov ebp, dword ptr [esp + 34h]
        mov ebp, dword ptr [ebp]
        cmp edx, ebp
        mov dword ptr [esp + 28h], ecx
        ; Exact mapped bytes 7D 06: jge 0x58903559
        __asm _emit 0x7d
        __asm _emit 0x06
        mov edx, ebp
        mov dword ptr [esp + 1ch], edx
        mov ebp, dword ptr [esp + 34h]
        mov ebp, dword ptr [ebp + 4]
        cmp dword ptr [esp + 20h], ebp
        ; Exact mapped bytes 7D 04: jge 0x5890356a
        __asm _emit 0x7d
        __asm _emit 0x04
        mov dword ptr [esp + 20h], ebp
        mov ebp, dword ptr [esp + 34h]
        mov ebp, dword ptr [ebp + 8]
        cmp ebx, ebp
        ; Exact mapped bytes 7E 06: jle 0x5890357b
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ebx, ebp
        mov dword ptr [esp + 24h], ebx
        mov ebp, dword ptr [esp + 34h]
        mov ebp, dword ptr [ebp + 0ch]
        cmp ecx, ebp
        ; Exact mapped bytes 7E 06: jle 0x5890358c
        __asm _emit 0x7e
        __asm _emit 0x06
        mov ecx, ebp
        mov dword ptr [esp + 28h], ecx
        cmp edx, ebx
        pop ebp
        ; Exact mapped bytes 7D 75: jge 0x58903606
        __asm _emit 0x7d
        __asm _emit 0x75
        cmp dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes 7D 6F: jge 0x58903606
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [esi + 14h]
        mov ebx, dword ptr [esi + 54h]
        lea ecx, [eax + edx]
        add ecx, dword ptr [esi + 4]
        mov dword ptr [esp + 10h], ecx
        test bl, 6
        ; Exact mapped bytes 74 0C: je 0x589035b8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 1ch]
        sub eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0A: jmp 0x589035c2
        __asm _emit 0xeb
        __asm _emit 0x0a
        test bl, 2
        ; Exact mapped bytes 74 0B: je 0x589035c8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 1ch]
        sub eax, edx
        add ecx, eax
        mov dword ptr [esp + 10h], ecx
        mov ecx, dword ptr [esi + 8]
        add ecx, dword ptr [esi + 18h]
        mov edx, dword ptr [esp + 34h]
        add ecx, dword ptr [edx + 4]
        push ebx
        lea edx, [esp + 1ch]
        push edx
        mov edx, dword ptr [esi + 68h]
        push edx
        mov edx, dword ptr [esi + 64h]
        push edx
        mov edx, dword ptr [esi + 60h]
        push edx
        mov edx, dword ptr [esi + 6ch]
        push edx
        lea edx, [esp + 28h]
        push edx
        mov edx, dword ptr [esp + 48h]
        mov edx, dword ptr [edx + 50h]
        mov dword ptr [esp + 30h], ecx
        mov ecx, dword ptr [esi + 50h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 8]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test edi, edi
        ; Exact mapped bytes 74 1F: je 0x58903629
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ebx, dword ptr [esp + 2ch]
        mov esi, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 30h]
        mov edx, dword ptr [edi]
        mov edx, dword ptr [edx + 14h]
        push esi
        push eax
        push ebx
        mov ecx, edi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [edi + 48h]
        test edi, edi
        ; Exact mapped bytes 75 E9: jne 0x58903612
        __asm _emit 0x75
        __asm _emit 0xe9
        pop ebx
        pop edi
        pop esi
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

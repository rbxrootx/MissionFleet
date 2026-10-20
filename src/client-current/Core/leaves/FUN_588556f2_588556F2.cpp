// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588556F2 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_588556f2_588556F2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        mov ebx, ecx
        xor edx, edx
        inc edx
        mov dword ptr [ebp - 0ch], ebx
        push esi
        or dword ptr [ebx + 1ch], 10h
        mov eax, dword ptr [ebx + 24h]
        test eax, eax
        ; Exact mapped bytes 79 17: jns 0x58855726
        __asm _emit 0x79
        __asm _emit 0x17
        mov al, byte ptr [ebx + 2dh]
        cmp al, 61h
        ; Exact mapped bytes 74 08: je 0x5885571e
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 41h
        ; Exact mapped bytes 74 04: je 0x5885571e
        __asm _emit 0x74
        __asm _emit 0x04
        push 6
        ; Exact mapped bytes EB 02: jmp 0x58855720
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0dh
        pop eax
        mov dword ptr [ebx + 24h], eax
        ; Exact mapped bytes EB 14: jmp 0x5885573a
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 75 12: jne 0x5885573a
        __asm _emit 0x75
        __asm _emit 0x12
        mov cl, byte ptr [ebx + 2dh]
        cmp cl, 67h
        ; Exact mapped bytes 74 05: je 0x58855735
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 47h
        ; Exact mapped bytes 75 05: jne 0x5885573a
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ebx + 24h], edx
        mov eax, edx
        push dword ptr [ebx + 8]
        lea esi, [ebx + 3ch]
        add eax, 15dh
        push eax
        mov ecx, esi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 92 C4 FF FF: call 0x58851be2
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 75 11: jne 0x58855765
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, esi
        ; Exact mapped bytes E8 56 C4 FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 0fffffea3h
        mov dword ptr [ebx + 24h], eax
        ; Exact mapped bytes EB 03: jmp 0x58855768
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebx + 24h]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebx + 30h]
        mov eax, dword ptr [esi + 404h]
        test eax, eax
        mov dword ptr [ebp - 14h], ecx
        cmove eax, esi
        and dword ptr [ebp - 1ch], 0
        and dword ptr [ebp - 18h], 0
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebx + 10h]
        push edi
        lea eax, [ecx + 8]
        mov dword ptr [ebx + 10h], eax
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ch], eax
        lea eax, [ebx + 2dh]
        ; Exact mapped bytes 0F BE 18: movsx ebx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x18
        mov dword ptr [ebp - 18h], ecx
        mov ecx, esi
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 06 C4 FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        mov edi, eax
        ; Exact mapped bytes E8 F4 CD FF FF: call 0x588525a8
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov esi, eax
        ; Exact mapped bytes E8 F3 C3 FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, eax
        mov eax, dword ptr [edx + 404h]
        test eax, eax
        cmove eax, edx
        mov edx, dword ptr [ebp - 0ch]
        push dword ptr [edx + 8]
        push 1
        push dword ptr [edx + 4]
        push dword ptr [edx]
        push dword ptr [ebp - 8]
        push ebx
        push edi
        push esi
        push ecx
        push eax
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 A0 81 01 00: call 0x5886d98c
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, dword ptr [ebp - 0ch]
        add esp, 2ch
        mov edx, dword ptr [ebp - 10h]
        mov esi, edx
        mov edi, dword ptr [ebp - 14h]
        mov ecx, edi
        mov eax, dword ptr [ebx + 1ch]
        shr eax, 5
        test al, 1
        ; Exact mapped bytes 74 2A: je 0x58855830
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp dword ptr [ebx + 24h], 0
        ; Exact mapped bytes 75 24: jne 0x58855830
        __asm _emit 0x75
        __asm _emit 0x24
        mov edi, dword ptr [ebx + 8]
        cmp byte ptr [edi + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x5885581f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, edi
        ; Exact mapped bytes E8 84 06 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebx + 2dh]
        lea eax, [edi + 0ch]
        push eax
        push dword ptr [ebx + 30h]
        ; Exact mapped bytes E8 F4 DF FF FF: call 0x5885381f
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        lea ecx, [ebx + 30h]
        mov al, byte ptr [esi]
        cmp al, 67h
        ; Exact mapped bytes 74 06: je 0x5885583c
        __asm _emit 0x74
        __asm _emit 0x06
        mov esi, ecx
        cmp al, 47h
        ; Exact mapped bytes 75 2D: jne 0x58855869
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [ebx + 1ch]
        mov esi, ecx
        shr eax, 5
        test al, 1
        ; Exact mapped bytes 75 21: jne 0x58855869
        __asm _emit 0x75
        __asm _emit 0x21
        mov edi, dword ptr [ebx + 8]
        cmp byte ptr [edi + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x5885585b
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, edi
        ; Exact mapped bytes E8 48 06 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebx + 30h]
        lea eax, [edi + 0ch]
        push eax
        push dword ptr [ebx + 30h]
        ; Exact mapped bytes E8 9A DE FF FF: call 0x58853701
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov edx, dword ptr [ebx + 30h]
        pop edi
        mov al, byte ptr [edx]
        cmp al, 2dh
        ; Exact mapped bytes 75 09: jne 0x5885587c
        __asm _emit 0x75
        __asm _emit 0x09
        or dword ptr [ebx + 1ch], 40h
        inc edx
        mov dword ptr [esi], edx
        mov al, byte ptr [edx]
        cmp al, 69h
        ; Exact mapped bytes 74 0C: je 0x5885588c
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp al, 49h
        ; Exact mapped bytes 74 08: je 0x5885588c
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 6eh
        ; Exact mapped bytes 74 04: je 0x5885588c
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 4eh
        ; Exact mapped bytes 75 08: jne 0x58855894
        __asm _emit 0x75
        __asm _emit 0x08
        and dword ptr [ebx + 1ch], 0fffffff7h
        mov byte ptr [ebx + 2dh], 73h
        lea esi, [edx + 1]
        mov cl, byte ptr [edx]
        inc edx
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58855897
        __asm _emit 0x75
        __asm _emit 0xf9
        sub edx, esi
        mov al, 1
        pop esi
        mov dword ptr [ebx + 34h], edx
        pop ebx
        leave
        ret
    }
}

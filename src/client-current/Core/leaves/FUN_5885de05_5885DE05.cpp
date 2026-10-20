// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885DE05 .. +0x399 bytes.
extern "C" __declspec(naked) void FUN_5885de05_5885DE05() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        xor ebx, ebx
        push edi
        mov edi, dword ptr [ebp + 8]
        cmp esi, ebx
        ; Exact mapped bytes 77 14: ja 0x5885de30
        __asm _emit 0x77
        __asm _emit 0x14
        cmp edi, -1
        ; Exact mapped bytes 77 0F: ja 0x5885de30
        __asm _emit 0x77
        __asm _emit 0x0f
        bsr eax, edi
        mov dword ptr [ebp - 24h], ebx
        ; Exact mapped bytes 74 03: je 0x5885de2c
        __asm _emit 0x74
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB 14: jmp 0x5885de40
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ebx
        ; Exact mapped bytes EB 10: jmp 0x5885de40
        __asm _emit 0xeb
        __asm _emit 0x10
        bsr eax, esi
        mov dword ptr [ebp - 24h], ebx
        ; Exact mapped bytes 74 03: je 0x5885de3b
        __asm _emit 0x74
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x5885de3d
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, ebx
        add eax, 20h
        mov ecx, dword ptr [ebp + 1ch]
        push 18h
        pop edx
        mov dword ptr [ebp - 18h], 35h
        mov cl, byte ptr [ecx + 4]
        test cl, cl
        mov byte ptr [ebp - 1], cl
        mov ecx, dword ptr [ebp + 10h]
        cmovne edx, dword ptr [ebp - 18h]
        sub edx, eax
        mov dword ptr [ebp - 18h], 3ffh
        sub ecx, edx
        mov dword ptr [ebp - 0ch], edx
        cmp byte ptr [ebp - 1], bl
        push 7fh
        pop eax
        cmovne eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 10h], eax
        cmp ecx, eax
        ; Exact mapped bytes 0F 8F 06 03 00 00: jg 0x5885e188
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 1], bl
        push -7eh
        pop eax
        mov dword ptr [ebp - 14h], 0fffffc02h
        cmovne eax, dword ptr [ebp - 14h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 8D 59 01 00 00: jge 0x5885dff4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 10h]
        dec eax
        add eax, ecx
        neg ecx
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 8], ecx
        test eax, eax
        ; Exact mapped bytes 0F 89 38 01 00 00: jns 0x5885dfec
        __asm _emit 0x0f
        __asm _emit 0x89
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, eax
        neg edx
        mov dword ptr [ebp - 14h], edx
        cmp edx, 40h
        ; Exact mapped bytes 0F 83 14 01 00 00: jae 0x5885dfd8
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov byte ptr [ebp - 3], 1
        lea eax, [ebx - 1]
        add eax, edx
        xor edx, edx
        bts ecx, eax
        cmp eax, 20h
        cmovae edx, ecx
        xor ecx, edx
        cmp eax, 40h
        mov eax, edx
        mov dword ptr [ebp - 1ch], ecx
        cmovae eax, ecx
        add ecx, -1
        mov dword ptr [ebp - 10h], eax
        adc eax, -1
        mov dword ptr [ebp - 20h], ecx
        xor edx, edx
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        add eax, ebx
        bts edx, eax
        cmp eax, 20h
        cmovae ecx, edx
        xor edx, ecx
        cmp eax, 40h
        cmovae ecx, edx
        and edx, edi
        and ecx, esi
        or edx, ecx
        ; Exact mapped bytes 75 03: jne 0x5885df1b
        __asm _emit 0x75
        __asm _emit 0x03
        mov byte ptr [ebp - 3], bl
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        and eax, edi
        and ecx, esi
        or eax, ecx
        ; Exact mapped bytes 74 07: je 0x5885df30
        __asm _emit 0x74
        __asm _emit 0x07
        mov cl, 1
        mov byte ptr [ebp - 1], cl
        ; Exact mapped bytes EB 05: jmp 0x5885df35
        __asm _emit 0xeb
        __asm _emit 0x05
        mov cl, bl
        mov byte ptr [ebp - 1], bl
        cmp byte ptr [ebp + 18h], bl
        ; Exact mapped bytes 74 15: je 0x5885df4f
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 24h]
        and eax, edi
        and edx, esi
        or eax, edx
        ; Exact mapped bytes 75 07: jne 0x5885df4f
        __asm _emit 0x75
        __asm _emit 0x07
        mov al, bl
        mov byte ptr [ebp - 2], bl
        ; Exact mapped bytes EB 05: jmp 0x5885df54
        __asm _emit 0xeb
        __asm _emit 0x05
        mov al, 1
        mov byte ptr [ebp - 2], al
        test cl, cl
        ; Exact mapped bytes 75 04: jne 0x5885df5c
        __asm _emit 0x75
        __asm _emit 0x04
        test al, al
        ; Exact mapped bytes 74 35: je 0x5885df91
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes E8 7F 42 01 00: call 0x588721e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x5885df80
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp eax, 100h
        ; Exact mapped bytes 74 0F: je 0x5885df7b
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp eax, 200h
        ; Exact mapped bytes 75 1E: jne 0x5885df91
        __asm _emit 0x75
        __asm _emit 0x1e
        mov bl, byte ptr [ebp + 14h]
        xor bl, 1
        ; Exact mapped bytes EB 16: jmp 0x5885df91
        __asm _emit 0xeb
        __asm _emit 0x16
        mov bl, byte ptr [ebp + 14h]
        ; Exact mapped bytes EB 11: jmp 0x5885df91
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp byte ptr [ebp - 1], bl
        ; Exact mapped bytes 74 0C: je 0x5885df91
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp byte ptr [ebp - 2], bl
        ; Exact mapped bytes 75 05: jne 0x5885df8f
        __asm _emit 0x75
        __asm _emit 0x05
        cmp byte ptr [ebp - 3], bl
        ; Exact mapped bytes 74 02: je 0x5885df91
        __asm _emit 0x74
        __asm _emit 0x02
        mov bl, 1
        mov ecx, dword ptr [ebp - 14h]
        mov eax, edi
        mov edx, esi
        ; Exact mapped bytes E8 B3 F2 01 00: call 0x5887d250
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov esi, edx
        movzx eax, bl
        cdq
        add edi, eax
        mov eax, edi
        adc esi, edx
        or eax, esi
        ; Exact mapped bytes 74 29: je 0x5885dfd8
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes E8 69 21 00 00: call 0x58860120
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, edx
        ; Exact mapped bytes 0F 82 84 01 00 00: jb 0x5885e143
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 08: ja 0x5885dfc9
        __asm _emit 0x77
        __asm _emit 0x08
        cmp edi, eax
        ; Exact mapped bytes 0F 86 7A 01 00 00: jbe 0x5885e143
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 10h]
        sub ebx, dword ptr [ebp - 18h]
        sub ebx, dword ptr [ebp - 0ch]
        dec ebx
        ; Exact mapped bytes E9 6E 01 00 00: jmp 0x5885e146
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 58 03 00 00: call 0x5885e33b
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        push 2
        ; Exact mapped bytes E9 AC 01 00 00: jmp 0x5885e198
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x5885e136
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 89 35 01 00 00: jns 0x5885e131
        __asm _emit 0x0f
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        neg edx
        mov dword ptr [ebp - 0ch], edx
        cmp edx, 40h
        ; Exact mapped bytes 72 13: jb 0x5885e019
        __asm _emit 0x72
        __asm _emit 0x13
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 D8: movlpd qword ptr [ebp - 0x28], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xd8
        mov esi, dword ptr [ebp - 24h]
        mov edi, dword ptr [ebp - 28h]
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x5885e101
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov byte ptr [ebp - 1], 1
        lea eax, [ebx - 1]
        add eax, edx
        xor edx, edx
        bts ecx, eax
        cmp eax, 20h
        cmovae edx, ecx
        xor ecx, edx
        mov dword ptr [ebp - 10h], edx
        cmp eax, 40h
        mov dword ptr [ebp - 24h], ecx
        mov eax, edx
        cmovae eax, ecx
        add ecx, -1
        mov dword ptr [ebp - 10h], eax
        adc eax, -1
        mov dword ptr [ebp - 20h], ecx
        xor edx, edx
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        add eax, ebx
        bts edx, eax
        cmp eax, 20h
        cmovae ecx, edx
        xor edx, ecx
        cmp eax, 40h
        cmovae ecx, edx
        and edx, edi
        and ecx, esi
        or edx, ecx
        ; Exact mapped bytes 75 03: jne 0x5885e073
        __asm _emit 0x75
        __asm _emit 0x03
        mov byte ptr [ebp - 1], bl
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 10h]
        and eax, edi
        and ecx, esi
        or eax, ecx
        ; Exact mapped bytes 74 07: je 0x5885e088
        __asm _emit 0x74
        __asm _emit 0x07
        mov cl, 1
        mov byte ptr [ebp - 3], cl
        ; Exact mapped bytes EB 05: jmp 0x5885e08d
        __asm _emit 0xeb
        __asm _emit 0x05
        mov cl, bl
        mov byte ptr [ebp - 3], bl
        cmp byte ptr [ebp + 18h], bl
        ; Exact mapped bytes 74 15: je 0x5885e0a7
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 1ch]
        and eax, edi
        and edx, esi
        or eax, edx
        ; Exact mapped bytes 75 07: jne 0x5885e0a7
        __asm _emit 0x75
        __asm _emit 0x07
        mov al, bl
        mov byte ptr [ebp - 2], bl
        ; Exact mapped bytes EB 05: jmp 0x5885e0ac
        __asm _emit 0xeb
        __asm _emit 0x05
        mov al, 1
        mov byte ptr [ebp - 2], al
        test cl, cl
        ; Exact mapped bytes 75 04: jne 0x5885e0b4
        __asm _emit 0x75
        __asm _emit 0x04
        test al, al
        ; Exact mapped bytes 74 35: je 0x5885e0e9
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes E8 27 41 01 00: call 0x588721e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x5885e0d8
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp eax, 100h
        ; Exact mapped bytes 74 0F: je 0x5885e0d3
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp eax, 200h
        ; Exact mapped bytes 75 1E: jne 0x5885e0e9
        __asm _emit 0x75
        __asm _emit 0x1e
        mov bl, byte ptr [ebp + 14h]
        xor bl, 1
        ; Exact mapped bytes EB 16: jmp 0x5885e0e9
        __asm _emit 0xeb
        __asm _emit 0x16
        mov bl, byte ptr [ebp + 14h]
        ; Exact mapped bytes EB 11: jmp 0x5885e0e9
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp byte ptr [ebp - 3], bl
        ; Exact mapped bytes 74 0C: je 0x5885e0e9
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp byte ptr [ebp - 2], bl
        ; Exact mapped bytes 75 05: jne 0x5885e0e7
        __asm _emit 0x75
        __asm _emit 0x05
        cmp byte ptr [ebp - 1], bl
        ; Exact mapped bytes 74 02: je 0x5885e0e9
        __asm _emit 0x74
        __asm _emit 0x02
        mov bl, 1
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, edi
        mov edx, esi
        ; Exact mapped bytes E8 5B F1 01 00: call 0x5887d250
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov esi, edx
        movzx eax, bl
        cdq
        add edi, eax
        adc esi, edx
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes E8 92 26 00 00: call 0x5886079b
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, edx
        ; Exact mapped bytes 72 36: jb 0x5885e143
        __asm _emit 0x72
        __asm _emit 0x36
        ; Exact mapped bytes 77 04: ja 0x5885e113
        __asm _emit 0x77
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 76 30: jbe 0x5885e143
        __asm _emit 0x76
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 1ch]
        mov ebx, dword ptr [ebp - 8]
        shrd edi, esi, 1
        push 7fh
        shr esi, 1
        inc ebx
        cmp byte ptr [eax + 4], 0
        pop ecx
        cmovne ecx, dword ptr [ebp - 18h]
        cmp ebx, ecx
        ; Exact mapped bytes 7E 1A: jle 0x5885e149
        __asm _emit 0x7e
        __asm _emit 0x1a
        ; Exact mapped bytes EB 5A: jmp 0x5885e18b
        __asm _emit 0xeb
        __asm _emit 0x5a
        ; Exact mapped bytes 7E 10: jle 0x5885e143
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, esi
        mov eax, edi
        ; Exact mapped bytes E8 81 EF 01 00: call 0x5887d0c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, edx
        mov edi, eax
        mov ebx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, eax
        ; Exact mapped bytes E8 D0 1F 00 00: call 0x58860120
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        and edi, eax
        and esi, edx
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, eax
        cmp byte ptr [eax + 4], 0
        ; Exact mapped bytes 74 13: je 0x5885e172
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes E8 17 FC FF FF: call 0x5885dd7b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push esi
        push edi
        push ebx
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 E8 D5 FF FF: call 0x5885b758
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x5885e183
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes E8 29 FC FF FF: call 0x5885dda0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push esi
        push edi
        push ebx
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 96 D5 FF FF: call 0x5885b719
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 11: jmp 0x5885e199
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 1ch]
        push eax
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 31 FC FF FF: call 0x5885ddc5
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 3
        pop eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}

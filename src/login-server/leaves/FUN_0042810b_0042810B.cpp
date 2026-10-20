// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042810B .. +0x293 bytes.
extern "C" __declspec(naked) void FUN_0042810b_0042810B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, dword ptr [ebp + 10h]
        push ebx
        mov ebx, dword ptr [ebp + 1ch]
        push esi
        mov ecx, eax
        mov esi, 7fffh
        and ecx, 8000h
        and eax, esi
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        push edi
        mov byte ptr [ebp - 1ch], 0cch
        mov byte ptr [ebp - 1bh], 0cch
        mov byte ptr [ebp - 1ah], 0cch
        mov byte ptr [ebp - 19h], 0cch
        mov byte ptr [ebp - 18h], 0cch
        mov byte ptr [ebp - 17h], 0cch
        mov byte ptr [ebp - 16h], 0cch
        mov byte ptr [ebp - 15h], 0cch
        mov byte ptr [ebp - 14h], 0cch
        mov byte ptr [ebp - 13h], 0cch
        mov byte ptr [ebp - 12h], 0fbh
        mov byte ptr [ebp - 11h], 3fh
        mov dword ptr [ebp - 4], 1
        mov edx, eax
        ; Exact mapped bytes 74 06: je 0x42816d
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ebx + 2], 2dh
        ; Exact mapped bytes EB 04: jmp 0x428171
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebx + 2], 20h
        mov edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 1E: jne 0x428197
        __asm _emit 0x75
        __asm _emit 0x1e
        test edi, edi
        ; Exact mapped bytes 75 1A: jne 0x428197
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 8], edi
        ; Exact mapped bytes 75 15: jne 0x428197
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 66 83 23 00: and word ptr [ebx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x23
        __asm _emit 0x00
        mov byte ptr [ebx + 2], 20h
        mov byte ptr [ebx + 3], 1
        mov byte ptr [ebx + 4], 30h
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x428395
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B D6: cmp dx, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd6
        ; Exact mapped bytes 75 7A: jne 0x428216
        __asm _emit 0x75
        __asm _emit 0x7a
        mov eax, 80000000h
        ; Exact mapped bytes 66 C7 03 01 00: mov word ptr [ebx], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 75 06: jne 0x4281b0
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0F: je 0x4281bf
        __asm _emit 0x74
        __asm _emit 0x0f
        test edi, 40000000h
        ; Exact mapped bytes 75 07: jne 0x4281bf
        __asm _emit 0x75
        __asm _emit 0x07
        push 4401d8h
        ; Exact mapped bytes EB 46: jmp 0x428205
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 15: je 0x4281d9
        __asm _emit 0x74
        __asm _emit 0x15
        cmp edi, 0c0000000h
        ; Exact mapped bytes 75 0D: jne 0x4281d9
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 2E: jne 0x428200
        __asm _emit 0x75
        __asm _emit 0x2e
        push 4401d0h
        ; Exact mapped bytes EB 0F: jmp 0x4281e8
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp edi, eax
        ; Exact mapped bytes 75 23: jne 0x428200
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x428200
        __asm _emit 0x75
        __asm _emit 0x1d
        push 4401c8h
        lea eax, [ebx + 4]
        push eax
        ; Exact mapped bytes E8 8F DF FF FF: call 0x426180
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov byte ptr [ebx + 3], 5
        pop ecx
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E9 6E 01 00 00: jmp 0x42836e
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4401c0h
        lea eax, [ebx + 4]
        push eax
        ; Exact mapped bytes E8 72 DF FF FF: call 0x426180
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov byte ptr [ebx + 3], 6
        pop ecx
        ; Exact mapped bytes EB E1: jmp 0x4281f7
        __asm _emit 0xeb
        __asm _emit 0xe1
        movzx eax, dx
        mov ecx, edi
        mov esi, eax
        shr ecx, 18h
        imul eax, eax, 4d10h
        shr esi, 8
        ; Exact mapped bytes 66 83 65 F0 00: and word ptr [ebp - 0x10], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0x00
        push 1
        lea ecx, [esi + ecx*2]
        ; Exact mapped bytes 66 89 55 FA: mov word ptr [ebp - 6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfa
        imul ecx, ecx, 4dh
        mov dword ptr [ebp - 0ah], edi
        lea esi, [ecx + eax - 134312f4h]
        mov eax, dword ptr [ebp + 8]
        sar esi, 10h
        mov dword ptr [ebp - 0eh], eax
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        neg eax
        push eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 1F 05 00 00: call 0x42877b
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 66 81 7D FA FF 3F: cmp word ptr [ebp - 6], 0x3fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0x3f
        ; Exact mapped bytes 72 10: jb 0x428277
        __asm _emit 0x72
        __asm _emit 0x10
        lea eax, [ebp - 1ch]
        inc esi
        push eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 E6 02 00 00: call 0x42855b
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test byte ptr [ebp + 18h], 1
        ; Exact mapped bytes 66 89 33: mov word ptr [ebx], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x33
        ; Exact mapped bytes 74 11: je 0x428291
        __asm _emit 0x74
        __asm _emit 0x11
        mov edi, dword ptr [ebp + 14h]
        ; Exact mapped bytes 0F BF C6: movsx eax, si
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc6
        add edi, eax
        test edi, edi
        ; Exact mapped bytes 7F 08: jg 0x428294
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes E9 F1 FE FF FF: jmp 0x428182
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp + 14h]
        cmp edi, 15h
        ; Exact mapped bytes 7E 03: jle 0x42829c
        __asm _emit 0x7e
        __asm _emit 0x03
        push 15h
        pop edi
        movzx esi, word ptr [ebp - 6]
        sub esi, 3ffeh
        ; Exact mapped bytes 66 83 65 FA 00: and word ptr [ebp - 6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xfa
        __asm _emit 0x00
        mov dword ptr [ebp + 1ch], 8
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 5D F8 FF FF: call 0x427b18
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        dec dword ptr [ebp + 1ch]
        pop ecx
        ; Exact mapped bytes 75 F1: jne 0x4282b2
        __asm _emit 0x75
        __asm _emit 0xf1
        test esi, esi
        ; Exact mapped bytes 7D 17: jge 0x4282dc
        __asm _emit 0x7d
        __asm _emit 0x17
        neg esi
        and esi, 0ffh
        ; Exact mapped bytes 7E 0D: jle 0x4282dc
        __asm _emit 0x7e
        __asm _emit 0x0d
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 6E F8 FF FF: call 0x427b46
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        dec esi
        pop ecx
        ; Exact mapped bytes 75 F3: jne 0x4282cf
        __asm _emit 0x75
        __asm _emit 0xf3
        lea ecx, [edi + 1]
        lea eax, [ebx + 4]
        test ecx, ecx
        mov dword ptr [ebp + 1ch], eax
        ; Exact mapped bytes 7E 50: jle 0x428339
        __asm _emit 0x7e
        __asm _emit 0x50
        mov dword ptr [ebp + 14h], ecx
        lea esi, [ebp - 10h]
        lea edi, [ebp + 8]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes E8 1A F8 FF FF: call 0x427b18
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 11 F8 FF FF: call 0x427b18
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp + 8]
        push eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A6 F7 FF FF: call 0x427aba
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 FB F7 FF FF: call 0x427b18
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [ebp - 5]
        mov ecx, dword ptr [ebp + 1ch]
        and byte ptr [ebp - 5], 0
        add esp, 14h
        add al, 30h
        inc dword ptr [ebp + 1ch]
        dec dword ptr [ebp + 14h]
        mov byte ptr [ecx], al
        ; Exact mapped bytes 75 B6: jne 0x4282ec
        __asm _emit 0x75
        __asm _emit 0xb6
        mov eax, dword ptr [ebp + 1ch]
        mov cl, byte ptr [eax - 1]
        dec eax
        dec eax
        cmp cl, 35h
        lea ecx, [ebx + 4]
        ; Exact mapped bytes 7C 30: jl 0x428376
        __asm _emit 0x7c
        __asm _emit 0x30
        cmp eax, ecx
        ; Exact mapped bytes 72 0F: jb 0x428359
        __asm _emit 0x72
        __asm _emit 0x0f
        cmp byte ptr [eax], 39h
        ; Exact mapped bytes 75 06: jne 0x428355
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [eax], 30h
        dec eax
        ; Exact mapped bytes EB F1: jmp 0x428346
        __asm _emit 0xeb
        __asm _emit 0xf1
        cmp eax, ecx
        ; Exact mapped bytes 73 04: jae 0x42835d
        __asm _emit 0x73
        __asm _emit 0x04
        inc eax
        ; Exact mapped bytes 66 FF 03: inc word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x03
        inc byte ptr [eax]
        sub al, bl
        sub al, 3
        mov byte ptr [ebx + 3], al
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        and byte ptr [eax + ebx + 4], 0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        leave
        ret
        cmp eax, ecx
        ; Exact mapped bytes 72 0C: jb 0x428386
        __asm _emit 0x72
        __asm _emit 0x0c
        cmp byte ptr [eax], 30h
        ; Exact mapped bytes 75 03: jne 0x428382
        __asm _emit 0x75
        __asm _emit 0x03
        dec eax
        ; Exact mapped bytes EB F4: jmp 0x428376
        __asm _emit 0xeb
        __asm _emit 0xf4
        cmp eax, ecx
        ; Exact mapped bytes 73 D9: jae 0x42835f
        __asm _emit 0x73
        __asm _emit 0xd9
        ; Exact mapped bytes 66 83 23 00: and word ptr [ebx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x23
        __asm _emit 0x00
        mov byte ptr [ebx + 2], 20h
        mov byte ptr [ebx + 3], 1
        mov byte ptr [ecx], 30h
        and byte ptr [ebx + 5], 0
        push 1
        pop eax
        ; Exact mapped bytes EB D3: jmp 0x428371
        __asm _emit 0xeb
        __asm _emit 0xd3
    }
}

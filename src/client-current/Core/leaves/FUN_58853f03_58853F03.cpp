// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853F03 .. +0x2B4 bytes.
extern "C" __declspec(naked) void FUN_58853f03_58853F03() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        push dword ptr [esi + 8]
        lea ecx, [esi + 448h]
        ; Exact mapped bytes E8 31 20 00 00: call 0x58855f4e
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 27: je 0x58853f48
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 28: jne 0x58853f50
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [esi + 8]
        xor ebx, ebx
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        push dword ptr [esi + 8]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 E9 CF FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        leave
        ret
        mov eax, dword ptr [esi + 450h]
        inc eax
        mov dword ptr [esi + 450h], eax
        cmp eax, 2
        ; Exact mapped bytes 0F 84 36 02 00 00: je 0x5885419c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov dword ptr [esi + 34h], ebx
        mov byte ptr [esi + 18h], bl
        mov dl, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebp - 1], dl
        mov dword ptr [esi + 0ch], ecx
        mov byte ptr [esi + 2dh], dl
        test dl, dl
        ; Exact mapped bytes 0F 84 07 02 00 00: je 0x58854189
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 5], dl
        cmp dword ptr [esi + 14h], ebx
        ; Exact mapped bytes 0F 8C FB 01 00 00: jl 0x58854189
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 18h]
        mov ecx, esi
        push eax
        push dword ptr [ebp - 5]
        ; Exact mapped bytes E8 CE F7 FF FF: call 0x5885376b
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [esi + 18h], al
        cmp al, 8
        ; Exact mapped bytes 0F 83 FC 01 00 00: jae 0x588541a4
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        cmp eax, 7
        ; Exact mapped bytes 77 98: ja 0x58853f48
        __asm _emit 0x77
        __asm _emit 0x98
        ; Exact mapped bytes FF 24 85 B7 41 85 58: jmp dword ptr [eax*4 + 0x588541b7]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x41
        __asm _emit 0x85
        __asm _emit 0x58
        mov edi, dword ptr [esi + 8]
        mov byte ptr [esi + 38h], bl
        cmp byte ptr [edi + 14h], bl
        ; Exact mapped bytes 75 07: jne 0x58853fc9
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 D7 1E 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 2dh]
        mov byte ptr [ebp - 1], al
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        push 8000h
        push eax
        mov eax, dword ptr [edi + 0ch]
        push dword ptr [eax]
        ; Exact mapped bytes E8 13 22 00 00: call 0x588561f5
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea edi, [esi + 448h]
        test eax, eax
        ; Exact mapped bytes 74 76: je 0x58854065
        __asm _emit 0x74
        __asm _emit 0x76
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 10: jne 0x58854009
        __asm _emit 0x75
        __asm _emit 0x10
        cmp byte ptr [ecx + 0ch], bl
        ; Exact mapped bytes 74 05: je 0x58854003
        __asm _emit 0x74
        __asm _emit 0x05
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes EB 19: jmp 0x5885401c
        __asm _emit 0xeb
        __asm _emit 0x19
        or dword ptr [esi + 14h], 0ffffffffh
        ; Exact mapped bytes EB 13: jmp 0x5885401c
        __asm _emit 0xeb
        __asm _emit 0x13
        inc dword ptr [esi + 14h]
        inc dword ptr [ecx + 8]
        mov eax, dword ptr [edi]
        mov cl, byte ptr [ebp - 1]
        mov eax, dword ptr [eax]
        mov byte ptr [eax], cl
        mov eax, dword ptr [edi]
        inc dword ptr [eax]
        mov eax, dword ptr [esi + 0ch]
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi + 0ch], eax
        mov byte ptr [esi + 2dh], cl
        test cl, cl
        ; Exact mapped bytes 75 3C: jne 0x58854068
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [esi + 8]
        push 16h
        pop edi
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], edi
        push dword ptr [esi + 8]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 E8 CE FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], edi
        push dword ptr [esi + 8]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 D1 CE FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 30h
        ; Exact mapped bytes E9 E3 FE FF FF: jmp 0x58853f48
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [ebp - 1]
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 8]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 16: jne 0x58854088
        __asm _emit 0x75
        __asm _emit 0x16
        cmp byte ptr [edx + 0ch], bl
        ; Exact mapped bytes 74 08: je 0x5885407f
        __asm _emit 0x74
        __asm _emit 0x08
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes E9 EE 00 00 00: jmp 0x5885416d
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 14h], 0ffffffffh
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x5885416d
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 14h]
        inc dword ptr [edx + 8]
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax]
        mov byte ptr [eax], cl
        mov eax, dword ptr [edi]
        inc dword ptr [eax]
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x5885416d
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 24h], 0ffffffffh
        mov dword ptr [esi + 20h], ebx
        mov byte ptr [esi + 2ch], bl
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 28h], ebx
        mov byte ptr [esi + 38h], bl
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x5885416d
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        sub eax, 20h
        ; Exact mapped bytes 74 37: je 0x588540f5
        __asm _emit 0x74
        __asm _emit 0x37
        sub eax, 3
        ; Exact mapped bytes 74 2C: je 0x588540ef
        __asm _emit 0x74
        __asm _emit 0x2c
        sub eax, 8
        ; Exact mapped bytes 74 21: je 0x588540e9
        __asm _emit 0x74
        __asm _emit 0x21
        dec eax
        sub eax, 1
        ; Exact mapped bytes 74 12: je 0x588540e0
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, 3
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x5885416d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 1ch], 8
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x5885416d
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 1ch], 4
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x5885416d
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 1ch], 1
        ; Exact mapped bytes EB 7E: jmp 0x5885416d
        __asm _emit 0xeb
        __asm _emit 0x7e
        or dword ptr [esi + 1ch], 20h
        ; Exact mapped bytes EB 78: jmp 0x5885416d
        __asm _emit 0xeb
        __asm _emit 0x78
        or dword ptr [esi + 1ch], 2
        ; Exact mapped bytes EB 72: jmp 0x5885416d
        __asm _emit 0xeb
        __asm _emit 0x72
        cmp byte ptr [ebp - 1], 2ah
        ; Exact mapped bytes 74 0D: je 0x5885410e
        __asm _emit 0x74
        __asm _emit 0x0d
        lea eax, [esi + 20h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 75 F7 FF FF: call 0x58853881
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 57: jmp 0x58854165
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [esi + 10h]
        lea eax, [ecx + 4]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ecx]
        mov dword ptr [esi + 20h], eax
        test eax, eax
        ; Exact mapped bytes 79 09: jns 0x58854129
        __asm _emit 0x79
        __asm _emit 0x09
        or dword ptr [esi + 1ch], 4
        neg eax
        mov dword ptr [esi + 20h], eax
        mov al, 1
        ; Exact mapped bytes EB 38: jmp 0x58854165
        __asm _emit 0xeb
        __asm _emit 0x38
        mov dword ptr [esi + 24h], ebx
        ; Exact mapped bytes EB 3B: jmp 0x5885416d
        __asm _emit 0xeb
        __asm _emit 0x3b
        cmp byte ptr [ebp - 1], 2ah
        ; Exact mapped bytes 74 05: je 0x5885413d
        __asm _emit 0x74
        __asm _emit 0x05
        lea eax, [esi + 24h]
        ; Exact mapped bytes EB C7: jmp 0x58854104
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov ecx, dword ptr [esi + 10h]
        lea eax, [ecx + 4]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ecx]
        mov dword ptr [esi + 24h], eax
        test eax, eax
        ; Exact mapped bytes 79 DA: jns 0x58854129
        __asm _emit 0x79
        __asm _emit 0xda
        or dword ptr [esi + 24h], 0ffffffffh
        ; Exact mapped bytes EB D4: jmp 0x58854129
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, esi
        ; Exact mapped bytes E8 2C 04 00 00: call 0x58854588
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x58854165
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 FD 0A 00 00: call 0x58854c62
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 DB FD FF FF: je 0x58853f48
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0ch]
        mov dl, byte ptr [eax]
        lea ecx, [eax + 1]
        mov dword ptr [esi + 0ch], ecx
        mov byte ptr [ebp - 1], dl
        mov byte ptr [esi + 2dh], dl
        mov byte ptr [ebp - 5], dl
        test dl, dl
        ; Exact mapped bytes 0F 85 FC FD FF FF: jne 0x58853f85
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        inc dword ptr [esi + 450h]
        cmp dword ptr [esi + 450h], 2
        ; Exact mapped bytes 0F 85 CC FD FF FF: jne 0x58853f68
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 14h]
        ; Exact mapped bytes E9 A7 FD FF FF: jmp 0x58853f4b
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov byte ptr [ecx + 1ch], 1
        mov dword ptr [ecx + 18h], 16h
        ; Exact mapped bytes E9 81 FD FF FF: jmp 0x58853f38
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AC4C0 .. +0x9F0 bytes.
extern "C" __declspec(naked) void FUN_587ac4c0_587AC4C0() {
    __asm {
        sub esp, 8
        push ebx
        push edi
        mov edi, dword ptr [esp + 14h]
        test edi, edi
        ; Exact mapped bytes 0F 84 D4 09 00 00: je 0x587acea5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 20h], 0
        ; Exact mapped bytes 0F 84 CA 09 00 00: je 0x587acea5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 24h], 0
        ; Exact mapped bytes 0F 84 C0 09 00 00: je 0x587acea5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 B5 09 00 00: je 0x587acea5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], edi
        ; Exact mapped bytes 0F 85 AD 09 00 00: jne 0x587acea5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        cmp eax, 2ah
        ; Exact mapped bytes 74 29: je 0x587ac529
        __asm _emit 0x74
        __asm _emit 0x29
        cmp eax, 39h
        ; Exact mapped bytes 74 24: je 0x587ac529
        __asm _emit 0x74
        __asm _emit 0x24
        cmp eax, 45h
        ; Exact mapped bytes 74 1F: je 0x587ac529
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp eax, 49h
        ; Exact mapped bytes 74 1A: je 0x587ac529
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp eax, 5bh
        ; Exact mapped bytes 74 15: je 0x587ac529
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 67h
        ; Exact mapped bytes 74 10: je 0x587ac529
        __asm _emit 0x74
        __asm _emit 0x10
        cmp eax, 71h
        ; Exact mapped bytes 74 0B: je 0x587ac529
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp eax, 29ah
        ; Exact mapped bytes 0F 85 7C 09 00 00: jne 0x587acea5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 18h]
        cmp ebx, 5
        ; Exact mapped bytes 0F 87 6F 09 00 00: ja 0x587acea5
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 0ch], 0
        push esi
        mov esi, dword ptr [edi + 1ch]
        ; Exact mapped bytes 0F 84 4D 09 00 00: je 0x587ace91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 0
        ; Exact mapped bytes 74 09: je 0x587ac553
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 0F 84 3E 09 00 00: je 0x587ace91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 4], 29ah
        ; Exact mapped bytes 75 09: jne 0x587ac565
        __asm _emit 0x75
        __asm _emit 0x09
        cmp ebx, 4
        ; Exact mapped bytes 0F 85 2C 09 00 00: jne 0x587ace91
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 10h], 0
        push ebp
        ; Exact mapped bytes 74 6D: je 0x587ac5d9
        __asm _emit 0x74
        __asm _emit 0x6d
        cmp dword ptr [esi + 14h], 0
        mov edx, dword ptr [esi + 28h]
        mov dword ptr [esi + 28h], ebx
        ; Exact mapped bytes 74 20: je 0x587ac598
        __asm _emit 0x74
        __asm _emit 0x20
        push edi
        ; Exact mapped bytes E8 C2 15 00 00: call 0x587adb40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [edi + 10h], 0
        ; Exact mapped bytes 75 3E: jne 0x587ac5c5
        __asm _emit 0x75
        __asm _emit 0x3e
        mov dword ptr [esi + 28h], 0ffffffffh
        pop ebp
        pop esi
        pop edi
        xor eax, eax
        pop ebx
        add esp, 8
        ret
        cmp dword ptr [edi + 4], 0
        ; Exact mapped bytes 75 27: jne 0x587ac5c5
        __asm _emit 0x75
        __asm _emit 0x27
        xor eax, eax
        mov ebp, 9
        cmp edx, 4
        cmovg eax, ebp
        add edx, edx
        sub edx, eax
        xor ecx, ecx
        cmp ebx, 4
        lea eax, [ebx + ebx]
        cmovg ecx, ebp
        sub eax, ecx
        cmp eax, edx
        ; Exact mapped bytes 7F 05: jg 0x587ac5c5
        __asm _emit 0x7f
        __asm _emit 0x05
        cmp ebx, 4
        ; Exact mapped bytes 75 14: jne 0x587ac5d9
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [esi + 4]
        cmp eax, 29ah
        ; Exact mapped bytes 75 1F: jne 0x587ac5ee
        __asm _emit 0x75
        __asm _emit 0x1f
        cmp dword ptr [edi + 4], 0
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x587ac6ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 FC C4 8B 58: mov eax, dword ptr [0x588bc4fc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xc4
        __asm _emit 0x8b
        __asm _emit 0x58
        pop ebp
        pop esi
        mov dword ptr [edi + 18h], eax
        mov eax, 0fffffffbh
        pop edi
        pop ebx
        add esp, 8
        ret
        cmp eax, 2ah
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x587ac6ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 18h], 0
        ; Exact mapped bytes 75 0C: jne 0x587ac609
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 4], 71h
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x587ac6ca
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        shl ecx, 0ch
        sub ecx, 7800h
        cmp dword ptr [esi + 88h], 2
        mov ebp, ecx
        ; Exact mapped bytes 7D 30: jge 0x587ac650
        __asm _emit 0x7d
        __asm _emit 0x30
        mov eax, dword ptr [esi + 84h]
        cmp eax, 2
        ; Exact mapped bytes 7C 25: jl 0x587ac650
        __asm _emit 0x7c
        __asm _emit 0x25
        cmp eax, 6
        ; Exact mapped bytes 7D 0A: jge 0x587ac63a
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov eax, 40h
        lea edx, [eax + 20h]
        ; Exact mapped bytes EB 1B: jmp 0x587ac655
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 75 0A: jne 0x587ac646
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80h
        lea edx, [eax + 20h]
        ; Exact mapped bytes EB 0F: jmp 0x587ac655
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, 0c0h
        lea edx, [eax + 20h]
        ; Exact mapped bytes EB 05: jmp 0x587ac655
        __asm _emit 0xeb
        __asm _emit 0x05
        xor eax, eax
        lea edx, [eax + 20h]
        or ecx, eax
        cmp dword ptr [esi + 6ch], 0
        ; Exact mapped bytes 74 04: je 0x587ac661
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, edx
        or ecx, ebp
        mov eax, 8421085h
        mul ecx
        sub ecx, edx
        shr ecx, 1
        add ecx, edx
        shr ecx, 4
        inc ecx
        mov eax, ecx
        shl eax, 5
        sub eax, ecx
        push eax
        push esi
        ; Exact mapped bytes E8 A0 16 00 00: call 0x587add20
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [esi + 6ch], 0
        ; Exact mapped bytes 74 19: je 0x587ac6a2
        __asm _emit 0x74
        __asm _emit 0x19
        movzx eax, word ptr [edi + 32h]
        push eax
        push esi
        ; Exact mapped bytes E8 8C 16 00 00: call 0x587add20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 30h]
        push eax
        push esi
        ; Exact mapped bytes E8 81 16 00 00: call 0x587add20
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 F3 38 00 00: call 0x587affa0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 30h], eax
        push edi
        mov dword ptr [esi + 4], 71h
        ; Exact mapped bytes E8 83 14 00 00: call 0x587adb40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 0F 85 BD FE FF FF: jne 0x587ac587
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 4], 39h
        ; Exact mapped bytes 0F 85 13 02 00 00: jne 0x587ac8e7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 91 34 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edi + 30h], eax
        add esp, 0ch
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        mov byte ptr [ecx + eax], 1fh
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc ecx
        mov dword ptr [esi + 14h], ecx
        mov byte ptr [ecx + eax], 8bh
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc ecx
        mov dword ptr [esi + 14h], ecx
        mov byte ptr [ecx + eax], 8
        mov edx, dword ptr [esi + 14h]
        mov ebp, dword ptr [esi + 1ch]
        inc edx
        mov dword ptr [esi + 14h], edx
        test ebp, ebp
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x587ac7bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov byte ptr [edx + eax], 0
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc ecx
        mov dword ptr [esi + 14h], ecx
        mov byte ptr [ecx + eax], 0
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc ecx
        mov dword ptr [esi + 14h], ecx
        mov byte ptr [ecx + eax], 0
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc ecx
        mov dword ptr [esi + 14h], ecx
        mov byte ptr [ecx + eax], 0
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc ecx
        mov dword ptr [esi + 14h], ecx
        mov byte ptr [ecx + eax], 0
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 84h]
        inc edx
        mov dword ptr [esi + 14h], edx
        cmp eax, 9
        ; Exact mapped bytes 75 04: jne 0x587ac772
        __asm _emit 0x75
        __asm _emit 0x04
        mov cl, 2
        ; Exact mapped bytes EB 14: jmp 0x587ac786
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp dword ptr [esi + 88h], 2
        ; Exact mapped bytes 7D 09: jge 0x587ac784
        __asm _emit 0x7d
        __asm _emit 0x09
        cmp eax, 2
        ; Exact mapped bytes 7C 04: jl 0x587ac784
        __asm _emit 0x7c
        __asm _emit 0x04
        xor cl, cl
        ; Exact mapped bytes EB 02: jmp 0x587ac786
        __asm _emit 0xeb
        __asm _emit 0x02
        mov cl, 4
        mov eax, dword ptr [esi + 8]
        push edi
        mov byte ptr [edx + eax], cl
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc ecx
        mov dword ptr [esi + 14h], ecx
        mov byte ptr [ecx + eax], 0ah
        inc dword ptr [esi + 14h]
        mov dword ptr [esi + 4], 71h
        ; Exact mapped bytes E8 96 13 00 00: call 0x587adb40
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 0F 85 D0 FD FF FF: jne 0x587ac587
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x587ac8e7
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 24h]
        mov eax, dword ptr [ebp + 2ch]
        neg ecx
        sbb cl, cl
        and cl, 10h
        neg eax
        sbb al, al
        and al, 2
        add cl, al
        mov eax, dword ptr [ebp + 1ch]
        neg eax
        sbb al, al
        and al, 8
        add cl, al
        mov eax, dword ptr [ebp + 10h]
        neg eax
        sbb al, al
        and al, 4
        add cl, al
        cmp dword ptr [ebp], 0
        setne al
        add cl, al
        mov eax, dword ptr [esi + 8]
        mov byte ptr [edx + eax], cl
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 1ch]
        inc edx
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [eax + 4]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 1ch]
        inc edx
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [eax + 5]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 1ch]
        inc edx
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [eax + 6]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 1ch]
        inc edx
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [eax + 7]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 84h]
        inc edx
        mov dword ptr [esi + 14h], edx
        cmp eax, 9
        ; Exact mapped bytes 75 04: jne 0x587ac85c
        __asm _emit 0x75
        __asm _emit 0x04
        mov cl, 2
        ; Exact mapped bytes EB 14: jmp 0x587ac870
        __asm _emit 0xeb
        __asm _emit 0x14
        cmp dword ptr [esi + 88h], 2
        ; Exact mapped bytes 7D 09: jge 0x587ac86e
        __asm _emit 0x7d
        __asm _emit 0x09
        cmp eax, 2
        ; Exact mapped bytes 7C 04: jl 0x587ac86e
        __asm _emit 0x7c
        __asm _emit 0x04
        xor cl, cl
        ; Exact mapped bytes EB 02: jmp 0x587ac870
        __asm _emit 0xeb
        __asm _emit 0x02
        mov cl, 4
        mov eax, dword ptr [esi + 8]
        mov byte ptr [edx + eax], cl
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 1ch]
        inc edx
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 14h], edx
        mov al, byte ptr [eax + 0ch]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 1ch]
        inc edx
        mov dword ptr [esi + 14h], edx
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 25: je 0x587ac8be
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esi + 8]
        movzx eax, byte ptr [eax + 14h]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 1ch]
        inc edx
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [eax + 15h]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        inc edx
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [esi + 1ch]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 12: je 0x587ac8d9
        __asm _emit 0x74
        __asm _emit 0x12
        push edx
        push dword ptr [esi + 8]
        push dword ptr [edi + 30h]
        ; Exact mapped bytes E8 AD 32 00 00: call 0x587afb80
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 30h], eax
        mov dword ptr [esi + 20h], 0
        mov dword ptr [esi + 4], 45h
        mov eax, dword ptr [esi + 4]
        cmp eax, 45h
        ; Exact mapped bytes 0F 85 38 01 00 00: jne 0x587aca2b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x587aca22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [eax + 14h]
        sub ecx, dword ptr [esi + 20h]
        mov ebp, dword ptr [esi + 14h]
        mov edx, ebp
        mov ebx, dword ptr [esi + 0ch]
        mov dword ptr [esp + 1ch], ecx
        lea eax, [ecx + ebp]
        cmp eax, ebx
        ; Exact mapped bytes 0F 86 B6 00 00 00: jbe 0x587ac9d4
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        mov eax, dword ptr [esi + 1ch]
        sub ebx, edx
        push ebx
        mov dword ptr [esp + 14h], ebx
        mov eax, dword ptr [eax + 10h]
        add eax, dword ptr [esi + 20h]
        push eax
        mov eax, dword ptr [esi + 8]
        add eax, edx
        push eax
        ; Exact mapped bytes E8 54 FF 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        add esp, 0ch
        mov ecx, dword ptr [esi + 0ch]
        mov dword ptr [esi + 14h], ecx
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 1B: je 0x587ac969
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp ecx, ebp
        ; Exact mapped bytes 76 17: jbe 0x587ac969
        __asm _emit 0x76
        __asm _emit 0x17
        mov eax, dword ptr [esi + 8]
        sub ecx, ebp
        push ecx
        add eax, ebp
        push eax
        push dword ptr [edi + 30h]
        ; Exact mapped bytes E8 1D 32 00 00: call 0x587afb80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 30h], eax
        add dword ptr [esi + 20h], ebx
        mov ebx, dword ptr [edi + 1ch]
        push ebx
        ; Exact mapped bytes E8 BB 39 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edi + 10h]
        add esp, 4
        cmp dword ptr [ebx + 14h], ebp
        cmovbe ebp, dword ptr [ebx + 14h]
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x587ac9ac
        __asm _emit 0x74
        __asm _emit 0x26
        push ebp
        push dword ptr [ebx + 10h]
        push dword ptr [edi + 0ch]
        ; Exact mapped bytes E8 FE FE 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        add dword ptr [edi + 0ch], ebp
        add esp, 0ch
        add dword ptr [ebx + 10h], ebp
        add dword ptr [edi + 14h], ebp
        sub dword ptr [edi + 10h], ebp
        sub dword ptr [ebx + 14h], ebp
        ; Exact mapped bytes 75 06: jne 0x587ac9ac
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [ebx + 10h], eax
        mov eax, dword ptr [esi + 14h]
        test eax, eax
        ; Exact mapped bytes 0F 85 D0 FB FF FF: jne 0x587ac587
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 1ch]
        xor ebp, ebp
        sub ecx, dword ptr [esp + 10h]
        xor edx, edx
        mov ebx, dword ptr [esi + 0ch]
        mov dword ptr [esp + 1ch], ecx
        cmp ecx, ebx
        ; Exact mapped bytes 0F 87 4E FF FF FF: ja 0x587ac920
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        mov eax, dword ptr [esi + 1ch]
        push ecx
        mov eax, dword ptr [eax + 10h]
        add eax, dword ptr [esi + 20h]
        push eax
        mov eax, dword ptr [esi + 8]
        add eax, edx
        push eax
        ; Exact mapped bytes E8 A6 FE 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 14h]
        add esp, 0ch
        mov eax, dword ptr [esi + 1ch]
        add ecx, dword ptr [esp + 1ch]
        mov dword ptr [esi + 14h], ecx
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 1B: je 0x587aca1b
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp ecx, ebp
        ; Exact mapped bytes 76 17: jbe 0x587aca1b
        __asm _emit 0x76
        __asm _emit 0x17
        mov eax, dword ptr [esi + 8]
        sub ecx, ebp
        push ecx
        add eax, ebp
        push eax
        push dword ptr [edi + 30h]
        ; Exact mapped bytes E8 6B 31 00 00: call 0x587afb80
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 30h], eax
        mov dword ptr [esi + 20h], 0
        mov dword ptr [esi + 4], 49h
        ; Exact mapped bytes EB 09: jmp 0x587aca34
        __asm _emit 0xeb
        __asm _emit 0x09
        cmp eax, 49h
        ; Exact mapped bytes 0F 85 E4 00 00 00: jne 0x587acb18
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 0F 84 CE 00 00 00: je 0x587acb0f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 14h]
        mov ebx, ebp
        cmp ebx, dword ptr [esi + 0ch]
        ; Exact mapped bytes 75 72: jne 0x587acabd
        __asm _emit 0x75
        __asm _emit 0x72
        mov eax, dword ptr [esi + 1ch]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 1B: je 0x587aca6f
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp ebx, ebp
        ; Exact mapped bytes 76 17: jbe 0x587aca6f
        __asm _emit 0x76
        __asm _emit 0x17
        mov eax, dword ptr [esi + 8]
        sub ebx, ebp
        push ebx
        add eax, ebp
        push eax
        push dword ptr [edi + 30h]
        ; Exact mapped bytes E8 17 31 00 00: call 0x587afb80
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 30h], eax
        mov ebx, dword ptr [edi + 1ch]
        push ebx
        ; Exact mapped bytes E8 B8 38 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edi + 10h]
        add esp, 4
        cmp dword ptr [ebx + 14h], ebp
        cmovbe ebp, dword ptr [ebx + 14h]
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x587acaaf
        __asm _emit 0x74
        __asm _emit 0x26
        push ebp
        push dword ptr [ebx + 10h]
        push dword ptr [edi + 0ch]
        ; Exact mapped bytes E8 FB FD 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0x09
        __asm _emit 0x00
        add dword ptr [edi + 0ch], ebp
        add esp, 0ch
        add dword ptr [ebx + 10h], ebp
        add dword ptr [edi + 14h], ebp
        sub dword ptr [edi + 10h], ebp
        sub dword ptr [ebx + 14h], ebp
        ; Exact mapped bytes 75 06: jne 0x587acaaf
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [ebx + 10h], eax
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 0F 85 CE FA FF FF: jne 0x587ac587
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebp, ebp
        xor ebx, ebx
        mov eax, dword ptr [esi + 1ch]
        mov ecx, dword ptr [esi + 20h]
        mov eax, dword ptr [eax + 1ch]
        mov dl, byte ptr [ecx + eax]
        lea eax, [ecx + 1]
        mov dword ptr [esi + 20h], eax
        mov eax, dword ptr [esi + 8]
        mov byte ptr [ebx + eax], dl
        mov ebx, dword ptr [esi + 14h]
        inc ebx
        mov dword ptr [esi + 14h], ebx
        test dl, dl
        ; Exact mapped bytes 0F 85 62 FF FF FF: jne 0x587aca46
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1ch]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 1B: je 0x587acb08
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp ebx, ebp
        ; Exact mapped bytes 76 17: jbe 0x587acb08
        __asm _emit 0x76
        __asm _emit 0x17
        mov eax, dword ptr [esi + 8]
        sub ebx, ebp
        push ebx
        add eax, ebp
        push eax
        push dword ptr [edi + 30h]
        ; Exact mapped bytes E8 7E 30 00 00: call 0x587afb80
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 30h], eax
        mov dword ptr [esi + 20h], 0
        mov dword ptr [esi + 4], 5bh
        ; Exact mapped bytes EB 09: jmp 0x587acb21
        __asm _emit 0xeb
        __asm _emit 0x09
        cmp eax, 5bh
        ; Exact mapped bytes 0F 85 E1 00 00 00: jne 0x587acc02
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x587acbf5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 14h]
        mov ebx, ebp
        cmp ebx, dword ptr [esi + 0ch]
        ; Exact mapped bytes 75 72: jne 0x587acbaa
        __asm _emit 0x75
        __asm _emit 0x72
        mov eax, dword ptr [esi + 1ch]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 1B: je 0x587acb5c
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp ebx, ebp
        ; Exact mapped bytes 76 17: jbe 0x587acb5c
        __asm _emit 0x76
        __asm _emit 0x17
        mov eax, dword ptr [esi + 8]
        sub ebx, ebp
        push ebx
        add eax, ebp
        push eax
        push dword ptr [edi + 30h]
        ; Exact mapped bytes E8 2A 30 00 00: call 0x587afb80
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 30h], eax
        mov ebx, dword ptr [edi + 1ch]
        push ebx
        ; Exact mapped bytes E8 CB 37 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edi + 10h]
        add esp, 4
        cmp dword ptr [ebx + 14h], ebp
        cmovbe ebp, dword ptr [ebx + 14h]
        test ebp, ebp
        ; Exact mapped bytes 74 26: je 0x587acb9c
        __asm _emit 0x74
        __asm _emit 0x26
        push ebp
        push dword ptr [ebx + 10h]
        push dword ptr [edi + 0ch]
        ; Exact mapped bytes E8 0E FD 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0x09
        __asm _emit 0x00
        add dword ptr [edi + 0ch], ebp
        add esp, 0ch
        add dword ptr [ebx + 10h], ebp
        add dword ptr [edi + 14h], ebp
        sub dword ptr [edi + 10h], ebp
        sub dword ptr [ebx + 14h], ebp
        ; Exact mapped bytes 75 06: jne 0x587acb9c
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [ebx + 10h], eax
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 0F 85 E1 F9 FF FF: jne 0x587ac587
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebp, ebp
        xor ebx, ebx
        mov eax, dword ptr [esi + 1ch]
        mov ecx, dword ptr [esi + 20h]
        mov eax, dword ptr [eax + 24h]
        mov dl, byte ptr [ecx + eax]
        lea eax, [ecx + 1]
        mov dword ptr [esi + 20h], eax
        mov eax, dword ptr [esi + 8]
        mov byte ptr [ebx + eax], dl
        mov ebx, dword ptr [esi + 14h]
        inc ebx
        mov dword ptr [esi + 14h], ebx
        test dl, dl
        ; Exact mapped bytes 0F 85 62 FF FF FF: jne 0x587acb33
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1ch]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 1B: je 0x587acbf5
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp ebx, ebp
        ; Exact mapped bytes 76 17: jbe 0x587acbf5
        __asm _emit 0x76
        __asm _emit 0x17
        mov eax, dword ptr [esi + 8]
        sub ebx, ebp
        push ebx
        add eax, ebp
        push eax
        push dword ptr [edi + 30h]
        ; Exact mapped bytes E8 91 2F 00 00: call 0x587afb80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 30h], eax
        mov ebx, dword ptr [esp + 20h]
        mov dword ptr [esi + 4], 67h
        ; Exact mapped bytes EB 05: jmp 0x587acc07
        __asm _emit 0xeb
        __asm _emit 0x05
        cmp eax, 67h
        ; Exact mapped bytes 75 71: jne 0x587acc78
        __asm _emit 0x75
        __asm _emit 0x71
        mov eax, dword ptr [esi + 1ch]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 74 4E: je 0x587acc5e
        __asm _emit 0x74
        __asm _emit 0x4e
        mov edx, dword ptr [esi + 14h]
        lea eax, [edx + 2]
        cmp eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes 76 14: jbe 0x587acc2f
        __asm _emit 0x76
        __asm _emit 0x14
        push edi
        ; Exact mapped bytes E8 1F 0F 00 00: call 0x587adb40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 14h]
        add esp, 4
        test edx, edx
        ; Exact mapped bytes 0F 85 58 F9 FF FF: jne 0x587ac587
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        movzx eax, byte ptr [edi + 30h]
        push 0
        push 0
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [edi + 31h]
        push 0
        mov byte ptr [edx + ecx], al
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes E8 18 2F 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [edi + 30h], eax
        push edi
        mov dword ptr [esi + 4], 71h
        ; Exact mapped bytes E8 D5 0E 00 00: call 0x587adb40
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [esi + 14h], 0
        ; Exact mapped bytes 0F 85 0F F9 FF FF: jne 0x587ac587
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [edi + 4], 0
        ; Exact mapped bytes 75 1B: jne 0x587acc99
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp dword ptr [esi + 74h], 0
        ; Exact mapped bytes 75 15: jne 0x587acc99
        __asm _emit 0x75
        __asm _emit 0x15
        test ebx, ebx
        ; Exact mapped bytes 0F 84 02 F9 FF FF: je 0x587ac58e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 4], 29ah
        ; Exact mapped bytes 0F 84 F2 00 00 00: je 0x587acd8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        push ebx
        push esi
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x587accac
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 36 EA FF FF: call 0x587ab6e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2A: jmp 0x587accd6
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [esi + 88h]
        cmp ecx, 2
        ; Exact mapped bytes 75 07: jne 0x587accbe
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 14 07 00 00: call 0x587ad3d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x587accd6
        __asm _emit 0xeb
        __asm _emit 0x18
        cmp ecx, 3
        ; Exact mapped bytes 75 07: jne 0x587accca
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 F8 08 00 00: call 0x587ad5c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x587accd6
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea eax, [eax + eax*2]
        mov eax, dword ptr [eax*4 + 588b99d8h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        add esp, 8
        cmp eax, 2
        ; Exact mapped bytes 74 05: je 0x587acce3
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 3
        ; Exact mapped bytes 75 07: jne 0x587accea
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 4], 29ah
        test eax, eax
        ; Exact mapped bytes 0F 84 84 01 00 00: je 0x587ace76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 84 7B 01 00 00: je 0x587ace76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x587acd8b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 75 0B: jne 0x587acd13
        __asm _emit 0x75
        __asm _emit 0x0b
        push esi
        ; Exact mapped bytes E8 42 35 00 00: call 0x587b0250
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 65: jmp 0x587acd78
        __asm _emit 0xeb
        __asm _emit 0x65
        cmp ebx, 5
        ; Exact mapped bytes 74 60: je 0x587acd78
        __asm _emit 0x74
        __asm _emit 0x60
        push 0
        push 0
        push 0
        push esi
        ; Exact mapped bytes E8 5C 3A 00 00: call 0x587b0780
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp ebx, 3
        ; Exact mapped bytes 75 4C: jne 0x587acd78
        __asm _emit 0x75
        __asm _emit 0x4c
        mov eax, dword ptr [esi + 44h]
        xor edx, edx
        mov ecx, dword ptr [esi + 4ch]
        ; Exact mapped bytes 66 89 54 48 FE: mov word ptr [eax + ecx*2 - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0xfe
        mov eax, dword ptr [esi + 4ch]
        lea eax, [eax*2 - 2]
        push eax
        push edx
        push dword ptr [esi + 44h]
        ; Exact mapped bytes E8 C3 00 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [esi + 16c8h], 0
        cmp dword ptr [esi + 74h], 0
        ; Exact mapped bytes 75 18: jne 0x587acd78
        __asm _emit 0x75
        __asm _emit 0x18
        mov dword ptr [esi + 6ch], 0
        mov dword ptr [esi + 5ch], 0
        mov dword ptr [esi + 16b4h], 0
        push edi
        ; Exact mapped bytes E8 C2 0D 00 00: call 0x587adb40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [edi + 10h], 0
        ; Exact mapped bytes 0F 84 FC F7 FF FF: je 0x587ac587
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ebx, 4
        ; Exact mapped bytes 0F 85 FA F7 FF FF: jne 0x587ac58e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 18h]
        test eax, eax
        ; Exact mapped bytes 7F 0B: jg 0x587acda6
        __asm _emit 0x7f
        __asm _emit 0x0b
        pop ebp
        pop esi
        pop edi
        lea eax, [ebx - 3]
        pop ebx
        add esp, 8
        ret
        cmp eax, 2
        ; Exact mapped bytes 0F 85 89 00 00 00: jne 0x587ace38
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 14h]
        movzx eax, byte ptr [edi + 30h]
        mov ecx, dword ptr [esi + 8]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [edi + 31h]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [edi + 32h]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [edi + 33h]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [edi + 8]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [edi + 9]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [edi + 0ah]
        mov byte ptr [edx + ecx], al
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov dword ptr [esi + 14h], edx
        movzx eax, byte ptr [edi + 0bh]
        mov byte ptr [edx + ecx], al
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes EB 19: jmp 0x587ace51
        __asm _emit 0xeb
        __asm _emit 0x19
        movzx eax, word ptr [edi + 32h]
        push eax
        push esi
        ; Exact mapped bytes E8 DD 0E 00 00: call 0x587add20
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + 30h]
        push eax
        push esi
        ; Exact mapped bytes E8 D2 0E 00 00: call 0x587add20
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push edi
        ; Exact mapped bytes E8 E9 0C 00 00: call 0x587adb40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 18h]
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 7E 05: jle 0x587ace66
        __asm _emit 0x7e
        __asm _emit 0x05
        neg eax
        mov dword ptr [esi + 18h], eax
        xor eax, eax
        cmp dword ptr [esi + 14h], eax
        pop ebp
        pop esi
        pop edi
        sete al
        pop ebx
        add esp, 8
        ret
        cmp dword ptr [edi + 10h], 0
        ; Exact mapped bytes 0F 85 0E F7 FF FF: jne 0x587ac58e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        mov dword ptr [esi + 28h], 0ffffffffh
        xor eax, eax
        pop esi
        pop edi
        pop ebx
        add esp, 8
        ret
        ; Exact mapped bytes A1 F0 C4 8B 58: mov eax, dword ptr [0x588bc4f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0xc4
        __asm _emit 0x8b
        __asm _emit 0x58
        pop esi
        mov dword ptr [edi + 18h], eax
        mov eax, 0fffffffeh
        pop edi
        pop ebx
        add esp, 8
        ret
        pop edi
        mov eax, 0fffffffeh
        pop ebx
        add esp, 8
        ret
    }
}

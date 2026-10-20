// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058031E .. +0x6BA bytes.
extern "C" __declspec(naked) void FUN_0058031e_0058031E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x580344
        __asm _emit 0x75
        __asm _emit 0x14
        push 24ah
        push 67849ch
        ; Exact mapped bytes E8 01 8A FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x8a
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x580344
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x58032a
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x580364
        __asm _emit 0x75
        __asm _emit 0x14
        push 24bh
        push 67849ch
        ; Exact mapped bytes E8 E1 89 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x580364
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x58034a
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 14: jne 0x580384
        __asm _emit 0x75
        __asm _emit 0x14
        push 24ch
        push 67849ch
        ; Exact mapped bytes E8 C1 89 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x580384
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x58036a
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x5803a4
        __asm _emit 0x75
        __asm _emit 0x14
        push 24dh
        push 67849ch
        ; Exact mapped bytes E8 A1 89 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5803a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x58038a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0ffffh
        cmp ecx, 6
        ; Exact mapped bytes 74 0E: je 0x5803d7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 14h]
        and edx, 0ffffh
        cmp edx, 0ch
        ; Exact mapped bytes 75 11: jne 0x5803e8
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x580423
        __asm _emit 0x75
        __asm _emit 0x14
        push 28ah
        push 67849ch
        ; Exact mapped bytes E8 22 89 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x580423
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x580409
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 09: jmp 0x58043a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 52 05 00 00: je 0x58099b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        sub edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 0F B6 08: movzx cx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        mov edx, dword ptr [ebp - 18h]
        and edx, 0ffffh
        cmp edx, 0ffh
        ; Exact mapped bytes 74 22: je 0x580490
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x580490
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ffffh
        and ecx, 0ffffffbfh
        or ch, 40h
        ; Exact mapped bytes 66 89 4D E8: mov word ptr [ebp - 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 8C C2 01 00 00: jl 0x58065e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        cmp eax, 0ffh
        ; Exact mapped bytes 75 05: jne 0x5804b0
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 EB 04 00 00: jmp 0x58099b
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 4
        mov edx, dword ptr [ebp - 0ch]
        add edx, ecx
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        cmp eax, 0ch
        ; Exact mapped bytes 0F 84 8D 01 00 00: je 0x58065c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp - 1ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 74 01 00 00: je 0x58065c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 4
        mov edx, dword ptr [ebp + 20h]
        add edx, ecx
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x580516
        __asm _emit 0x74
        __asm _emit 0x14
        push 2a1h
        push 67849ch
        ; Exact mapped bytes E8 2F 88 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x88
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x580516
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x5804f6
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        cmp eax, 0eh
        ; Exact mapped bytes 75 09: jne 0x580532
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 34h], 8
        ; Exact mapped bytes EB 0C: jmp 0x58053e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 0ffffh
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes 66 8B 55 CC: mov dx, word ptr [ebp - 0x34]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xcc
        ; Exact mapped bytes 66 89 55 DC: mov word ptr [ebp - 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 1ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        and edx, 0ffffh
        cmp ecx, edx
        ; Exact mapped bytes 74 6F: je 0x5805ca
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes 66 8B 45 DC: mov ax, word ptr [ebp - 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xdc
        push eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 FC BA 68 00: call dword ptr [0x68bafc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 7D 22: jge 0x58059b
        __asm _emit 0x7d
        __asm _emit 0x22
        push 6784f8h
        push 678528h
        ; Exact mapped bytes E8 8D 00 F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes E9 34 04 00 00: jmp 0x5809cf
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 24h]
        and ecx, 0ffffh
        cmp eax, ecx
        ; Exact mapped bytes 74 14: je 0x5805c4
        __asm _emit 0x74
        __asm _emit 0x14
        push 2b0h
        push 67849ch
        ; Exact mapped bytes E8 81 87 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5805c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x58059b
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        cmp eax, 0eh
        ; Exact mapped bytes 75 7F: jne 0x580656
        __asm _emit 0x75
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 1ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 24h]
        and eax, 0ffffh
        cmp edx, eax
        ; Exact mapped bytes 74 4B: je 0x580636
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 20h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        cmp edx, 8
        ; Exact mapped bytes 74 14: je 0x58060c
        __asm _emit 0x74
        __asm _emit 0x14
        push 2bah
        push 67849ch
        ; Exact mapped bytes E8 39 87 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x58060c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x5805eb
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 DF 5A FC FF: call 0x546103
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 5C BB 68 00: call dword ptr [0x68bb5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x580650
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 C1 5A FC FF: call 0x546103
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 66 C7 00 08 00: mov word ptr [eax], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 E8 08 00: mov word ptr [ebp - 0x18], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 60: jmp 0x5806be
        __asm _emit 0xeb
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 18h]
        and edx, 0ffffh
        cmp edx, 0ffh
        ; Exact mapped bytes 75 1C: jne 0x58068b
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E9 A6 FD FF FF: jmp 0x580431
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0E: jne 0x58069f
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 18h]
        and edx, 0ffffh
        cmp edx, 0ch
        ; Exact mapped bytes 74 05: je 0x5806a4
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 F7 02 00 00: jmp 0x58099b
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 05 C0 70 68 00 0A 00: mov word ptr [0x6870c0], 0xa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 C8 70 68 00 04 00 02 80: mov dword ptr [0x6870c8], 0x80020004
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x70
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x80
        mov dword ptr [ebp - 1ch], 6870c0h
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 11h
        ; Exact mapped bytes 7F 23: jg 0x5806f2
        __asm _emit 0x7f
        __asm _emit 0x23
        cmp dword ptr [ebp - 38h], 11h
        ; Exact mapped bytes 74 3C: je 0x580711
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 38h]
        sub ecx, 2
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0bh
        ; Exact mapped bytes 0F 87 8B 02 00 00: ja 0x580973
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 24 95 D8 09 58 00: jmp dword ptr [edx*4 + 0x5809d8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        sub eax, 4002h
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 10h
        ; Exact mapped bytes 0F 87 6C 02 00 00: ja 0x580973
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 24 8D 08 0A 58 00: jmp dword ptr [ecx*4 + 0x580a08]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x58
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        xor eax, eax
        mov al, byte ptr [edx + 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes E9 6A 02 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BF 48 08: movsx ecx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E9 50 02 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes E9 37 02 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes E9 FF 01 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 8
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E9 E0 01 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        add edx, 8
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E9 A8 01 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes E9 8F 01 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BF 42 08: movsx eax, word ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x08
        neg eax
        sbb eax, eax
        neg eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes E9 6F 01 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes E9 59 01 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E9 40 01 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes E9 27 01 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x580996
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB 7B: jmp 0x580996
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB 65: jmp 0x580996
        __asm _emit 0xeb
        __asm _emit 0x65
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB 4F: jmp 0x580996
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 4
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB 39: jmp 0x580996
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes EB 23: jmp 0x580996
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x580990
        __asm _emit 0x74
        __asm _emit 0x14
        push 360h
        push 67849ch
        ; Exact mapped bytes E8 B5 83 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x580990
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x580973
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E9 96 FA FF FF: jmp 0x580431
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 0F: jle 0x5809b0
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov eax, 8002000eh
        ; Exact mapped bytes EB 1F: jmp 0x5809cf
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x5809cd
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        mov eax, 8002000fh
        ; Exact mapped bytes EB 02: jmp 0x5809cf
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}

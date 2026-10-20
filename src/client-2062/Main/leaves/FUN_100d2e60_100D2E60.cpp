// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D2E60 .. +0x7F2 bytes.
extern "C" __declspec(naked) void FUN_100d2e60_100D2E60() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 0b54h]
        mov ecx, dword ptr [esi + 68h]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 D6 BE 02 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 258h
        push 320h
        ; Exact mapped bytes E8 41 BE 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        lea edi, [esi + 0c3ch]
        mov ebx, 32h
        mov ecx, dword ptr [edi]
        push 258h
        push 320h
        ; Exact mapped bytes E8 25 BE 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 E9: jne 0x100d2e9a
        __asm _emit 0x75
        __asm _emit 0xe9
        lea edi, [esi + 8ch]
        mov ebx, 8
        mov ecx, dword ptr [edi]
        push 258h
        push 320h
        ; Exact mapped bytes E8 03 BE 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 E9: jne 0x100d2ebc
        __asm _emit 0x75
        __asm _emit 0xe9
        lea ebx, [esi + 0dcch]
        lea edi, [esi + 434h]
        mov ebp, 3
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 0b58h]
        add ecx, edx
        mov edx, dword ptr [esi + 4]
        add ecx, eax
        mov eax, dword ptr [edi]
        push ecx
        mov ecx, dword ptr [esi + 0b54h]
        add edx, eax
        add edx, ecx
        mov ecx, dword ptr [ebx]
        push edx
        ; Exact mapped bytes E8 C4 BD 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        add ebx, 4
        add edi, 8
        dec ebp
        ; Exact mapped bytes 75 CF: jne 0x100d2ee4
        __asm _emit 0x75
        __asm _emit 0xcf
        mov eax, dword ptr [esp + 14h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 0F 84 31 06 00 00: je 0x100d3554
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 0E: jle 0x100d2f3e
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 04: je 0x100d2f3e
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100d2f40
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 60h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d2f72
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 86h
        ; Exact mapped bytes 7E 12: jle 0x100d2f95
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100d2f95
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 218h]
        ; Exact mapped bytes EB 02: jmp 0x100d2f97
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 64h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d2fc9
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 68h]
        mov edi, 0eh
        mov dword ptr [eax + 50h], ebp
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [eax + 50h], ebp
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 11: jle 0x100d2ff8
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x100d2ff8
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 380h
        ; Exact mapped bytes EB 02: jmp 0x100d2ffa
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 70h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100d302c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0ch
        ; Exact mapped bytes 7E 11: jle 0x100d304b
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x100d304b
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 300h
        ; Exact mapped bytes EB 02: jmp 0x100d304d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 74h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100d307f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, 0dh
        cmp dword ptr [eax + 160h], edx
        ; Exact mapped bytes 7E 11: jle 0x100d30a2
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x100d30a2
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 340h
        ; Exact mapped bytes EB 02: jmp 0x100d30a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 78h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100d30d6
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 11: jle 0x100d30f5
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x100d30f5
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x100d30f7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 7ch]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100d3129
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0ah
        ; Exact mapped bytes 7E 11: jle 0x100d3148
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebp
        ; Exact mapped bytes 74 07: je 0x100d3148
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 280h
        ; Exact mapped bytes EB 02: jmp 0x100d314a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        cmp eax, ebp
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100d317f
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 8eh
        ; Exact mapped bytes 7E 12: jle 0x100d31a2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100d31a2
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 238h]
        ; Exact mapped bytes EB 02: jmp 0x100d31a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d31d9
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 0F: jle 0x100d31f5
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x100d31f5
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 34h]
        ; Exact mapped bytes EB 02: jmp 0x100d31f7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0dcch]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d322c
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], edi
        ; Exact mapped bytes 7E 0F: jle 0x100d3248
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x100d3248
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 38h]
        ; Exact mapped bytes EB 02: jmp 0x100d324a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0dd0h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d327f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0fh
        ; Exact mapped bytes 7E 0F: jle 0x100d329c
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 05: je 0x100d329c
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x100d329e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0dd4h]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d32d3
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebx, 3
        lea edx, [esi + 0dd8h]
        mov edi, ebx
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0F: jle 0x100d32fc
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d32fc
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x100d32fe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d332f
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        add edx, 4
        dec edi
        ; Exact mapped bytes 75 AB: jne 0x100d32e0
        __asm _emit 0x75
        __asm _emit 0xab
        lea eax, [esi + 0d04h]
        mov edx, 32h
        xor ebp, ebp
        mov ecx, dword ptr [eax - 0c8h]
        add eax, 4
        dec edx
        mov dword ptr [ecx + 54h], ebp
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ecx + 50h], ebp
        ; Exact mapped bytes 75 EB: jne 0x100d3342
        __asm _emit 0x75
        __asm _emit 0xeb
        lea eax, [esi + 8ch]
        mov edi, 8
        mov edx, eax
        mov ebx, 79h
        ; Exact mapped bytes EB 02: jmp 0x100d336d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 12: jle 0x100d338c
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 08: je 0x100d338c
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1e4h]
        ; Exact mapped bytes EB 02: jmp 0x100d338e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx]
        cmp eax, ebp
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d33bf
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        add edx, 4
        dec edi
        ; Exact mapped bytes 75 A6: jne 0x100d336b
        __asm _emit 0x75
        __asm _emit 0xa6
        mov edi, 64h
        mov ebx, 190h
        lea edx, [esi + 0de8h]
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], edi
        ; Exact mapped bytes 7E 13: jle 0x100d33f5
        __asm _emit 0x7e
        __asm _emit 0x13
        test edi, edi
        ; Exact mapped bytes 7C 0F: jl 0x100d33f5
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d33f5
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebx + eax]
        ; Exact mapped bytes EB 02: jmp 0x100d33f7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx - 4]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d3429
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 68h
        ; Exact mapped bytes 7E 12: jle 0x100d3449
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d3449
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1a0h]
        ; Exact mapped bytes EB 02: jmp 0x100d344b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100d347c
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebp, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        add ebx, 4
        inc edi
        add edx, 8
        lea ecx, [edi - 64h]
        cmp ecx, 4
        ; Exact mapped bytes 0F 8C 46 FF FF FF: jl 0x100d33d5
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 8
        ; Exact mapped bytes 7E 11: jle 0x100d34ae
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100d34ae
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 200h
        ; Exact mapped bytes EB 02: jmp 0x100d34b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0e04h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100d34e5
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 0e04h]
        mov dword ptr [ecx + 50h], 6
        ; Exact mapped bytes A1 B4 57 1C 10: mov eax, dword ptr [0x101c57b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 78h
        ; Exact mapped bytes 7E 12: jle 0x100d3512
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100d3512
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 1e0h]
        ; Exact mapped bytes EB 02: jmp 0x100d3514
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esi, dword ptr [esi + 88h]
        test eax, eax
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x100d364b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], ecx
        mov edx, dword ptr [eax]
        add esi, 14h
        pop edi
        mov dword ptr [esi], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [esi + 4], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esi + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [esi + 0ch], eax
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        push ebp
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 9D 25 F4 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        push ebp
        ; Exact mapped bytes E8 94 25 F4 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        push ebp
        ; Exact mapped bytes E8 8B 25 F4 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        push ebp
        ; Exact mapped bytes E8 C2 25 F4 FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 74h]
        push ebp
        ; Exact mapped bytes E8 B9 25 F4 FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        push ebp
        ; Exact mapped bytes E8 B0 25 F4 FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 7ch]
        push ebp
        ; Exact mapped bytes E8 A7 25 F4 FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 80h]
        push ebp
        ; Exact mapped bytes E8 9B 25 F4 FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 84h]
        push ebp
        ; Exact mapped bytes E8 4F 25 F4 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        lea edi, [esi + 0dd8h]
        mov ebx, 3
        mov ecx, dword ptr [edi - 0ch]
        push ebp
        ; Exact mapped bytes E8 3B 25 F4 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push ebp
        ; Exact mapped bytes E8 33 25 F4 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 E9: jne 0x100d35bc
        __asm _emit 0x75
        __asm _emit 0xe9
        lea edi, [esi + 0d04h]
        mov ebx, 32h
        mov ecx, dword ptr [edi - 0c8h]
        push ebp
        ; Exact mapped bytes E8 56 25 F4 FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push ebp
        ; Exact mapped bytes E8 0E 25 F4 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 E6: jne 0x100d35de
        __asm _emit 0x75
        __asm _emit 0xe6
        lea edi, [esi + 8ch]
        mov ebx, 8
        mov ecx, dword ptr [edi]
        push ebp
        ; Exact mapped bytes E8 F5 24 F4 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0xff
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F2: jne 0x100d3603
        __asm _emit 0x75
        __asm _emit 0xf2
        mov ecx, dword ptr [esi + 0e04h]
        push ebp
        ; Exact mapped bytes E8 23 25 F4 FF: call 0x10015b40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x25
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 88h]
        push ebp
        ; Exact mapped bytes E8 D7 24 F4 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0xff
        add esi, 0de8h
        mov edi, 4
        mov ecx, dword ptr [esi - 4]
        push ebp
        ; Exact mapped bytes E8 C3 24 F4 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi]
        push ebp
        ; Exact mapped bytes E8 BB 24 F4 FF: call 0x10015b00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0xff
        add esi, 8
        dec edi
        ; Exact mapped bytes 75 E9: jne 0x100d3634
        __asm _emit 0x75
        __asm _emit 0xe9
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100602A0 .. +0x6D8 bytes.
extern "C" __declspec(naked) void FUN_100602a0_100602A0() {
    __asm {
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        mov dword ptr [esp + 10h], edi
        cmp dword ptr [edi + 0d0ch], ebx
        ; Exact mapped bytes 0F 84 A1 06 00 00: je 0x1006095b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0d50h]
        ; Exact mapped bytes E8 8B 86 09 00: call 0x100f8950
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0d0ch]
        xor esi, esi
        mov dword ptr [esp + 0ch], esi
        mov eax, dword ptr [eax + 0b4ch]
        mov dword ptr [esp + 20h], eax
        mov ecx, dword ptr [eax + 254h]
        mov edx, dword ptr [eax + 258h]
        ; Exact mapped bytes 66 8B 40 0A: mov ax, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0a
        mov dword ptr [esp + 18h], ecx
        and eax, 7c00h
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 86 3A 06 00 00: jbe 0x1006093b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 924h
        push ebp
        sub ecx, edi
        lea esi, [edi + 0a8h]
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x1006031f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edi, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 18h]
        xor ebx, ebx
        mov eax, dword ptr [edi + 0d0ch]
        add ecx, esi
        mov ecx, dword ptr [eax + ecx]
        cmp ecx, ebx
        ; Exact mapped bytes 0F 84 AE 05 00 00: je 0x100608e0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [esp + 1ch], 80000000h
        ; Exact mapped bytes 74 11: je 0x1006034d
        __asm _emit 0x74
        __asm _emit 0x11
        and edx, 80000000h
        neg edx
        sbb edx, edx
        neg edx
        add edx, 3
        ; Exact mapped bytes EB 0D: jmp 0x1006035a
        __asm _emit 0xeb
        __asm _emit 0x0d
        and edx, 80000000h
        neg edx
        sbb edx, edx
        neg edx
        inc edx
        mov ebp, dword ptr [eax + edx*4 + 83ch]
        cmp ebp, ebx
        ; Exact mapped bytes 0F 84 4C 04 00 00: je 0x100607b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ecx + 68h]
        mov eax, dword ptr [esi]
        mov edi, dword ptr [ebp + 0e4h]
        xor ecx, ecx
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [esi + 80h]
        push 100h
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [esi + 100h]
        mov dword ptr [eax + 50h], ecx
        mov ecx, dword ptr [esi + 414h]
        ; Exact mapped bytes E8 85 ED 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        push 0ffffffh
        push ecx
        mov ecx, dword ptr [edx + 0d50h]
        ; Exact mapped bytes E8 3C 9E 09 00: call 0x100fa1f0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9e
        __asm _emit 0x09
        __asm _emit 0x00
        and edi, ebx
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x100604ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3dh
        ; Exact mapped bytes 7E 12: jle 0x100603de
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100603de
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0f4h]
        ; Exact mapped bytes EB 02: jmp 0x100603e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10060411
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
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 11dh
        ; Exact mapped bytes 7E 12: jle 0x10060434
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10060434
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 474h]
        ; Exact mapped bytes EB 02: jmp 0x10060436
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 100h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1006046b
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
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 11ch
        ; Exact mapped bytes 7E 12: jle 0x1006048e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1006048e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 470h]
        ; Exact mapped bytes EB 02: jmp 0x10060490
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100604c5
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
        mov ecx, dword ptr [esi + 414h]
        push 78h
        ; Exact mapped bytes E8 4E EC 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xec
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov edi, dword ptr [esp + 14h]
        push 0ffh
        push ecx
        mov ecx, dword ptr [edi + 0d50h]
        ; Exact mapped bytes E8 05 9D 09 00: call 0x100fa1f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 04: jmp 0x100604f1
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [edi + 0d0ch]
        lea ebx, [eax + esi]
        mov ecx, dword ptr [ebx + edx]
        mov edx, dword ptr [ebp + 60h]
        xor edx, 0fffffaafh
        mov eax, dword ptr [ecx + 28h]
        shr edx, 4
        and edx, 0ffh
        cmp eax, edx
        ; Exact mapped bytes 0F 86 29 01 00 00: jbe 0x10060647
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3dh
        ; Exact mapped bytes 7E 12: jle 0x1006053e
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1006053e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0f4h]
        ; Exact mapped bytes EB 02: jmp 0x10060540
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10060571
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
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 11fh
        ; Exact mapped bytes 7E 12: jle 0x10060594
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10060594
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 47ch]
        ; Exact mapped bytes EB 02: jmp 0x10060596
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 100h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100605cb
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
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 11eh
        ; Exact mapped bytes 7E 12: jle 0x100605ee
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100605ee
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 478h]
        ; Exact mapped bytes EB 02: jmp 0x100605f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10060625
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
        mov ecx, dword ptr [esi + 414h]
        push 78h
        ; Exact mapped bytes E8 EE EA 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        push 0ffh
        push ecx
        mov ecx, dword ptr [edi + 0d50h]
        ; Exact mapped bytes E8 A9 9B 09 00: call 0x100fa1f0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 60h]
        and eax, 0fh
        ; Exact mapped bytes 75 17: jne 0x10060666
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [edi + 0d0ch]
        mov ecx, dword ptr [ebx + edx]
        cmp dword ptr [ecx + 28h], 0ch
        ; Exact mapped bytes 0F 82 95 02 00 00: jb 0x100608f7
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x95
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [edi + 0d0ch]
        add ecx, esi
        mov edx, dword ptr [ecx + edx]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 4A 06: mov cx, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x06
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 74 02 00 00: je 0x100608f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3dh
        ; Exact mapped bytes 7E 12: jle 0x100606a3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100606a3
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0f4h]
        ; Exact mapped bytes EB 02: jmp 0x100606a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100606d6
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
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 121h
        ; Exact mapped bytes 7E 12: jle 0x100606f9
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100606f9
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 484h]
        ; Exact mapped bytes EB 02: jmp 0x100606fb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 100h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10060730
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
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 120h
        ; Exact mapped bytes 7E 12: jle 0x10060753
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10060753
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 480h]
        ; Exact mapped bytes EB 02: jmp 0x10060755
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1006078a
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
        mov ecx, dword ptr [esi + 414h]
        push 78h
        ; Exact mapped bytes E8 89 E9 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 14h]
        push 0ffh
        push ecx
        mov ecx, dword ptr [edx + 0d50h]
        ; Exact mapped bytes E8 40 9A 09 00: call 0x100fa1f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x100608f7
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 3dh
        ; Exact mapped bytes 7E 12: jle 0x100607d5
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100607d5
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0f4h]
        ; Exact mapped bytes EB 02: jmp 0x100607d7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        cmp eax, ebx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10060808
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
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 123h
        ; Exact mapped bytes 7E 12: jle 0x1006082b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x1006082b
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 48ch]
        ; Exact mapped bytes EB 02: jmp 0x1006082d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 100h]
        cmp eax, ebx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10060862
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
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 122h
        ; Exact mapped bytes 7E 12: jle 0x10060885
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10060885
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 488h]
        ; Exact mapped bytes EB 02: jmp 0x10060887
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        cmp eax, ebx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100608bc
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
        mov ecx, dword ptr [esi + 414h]
        push 78h
        ; Exact mapped bytes E8 57 E8 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        push 0ffh
        push ecx
        mov ecx, dword ptr [edi + 0d50h]
        ; Exact mapped bytes E8 12 99 09 00: call 0x100fa1f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x100608f7
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 50h], ebx
        mov eax, dword ptr [esi + 80h]
        mov dword ptr [eax + 50h], ebx
        mov eax, dword ptr [esi + 100h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esp + 24h]
        mov ebp, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 20h]
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 8B 49 0A: mov cx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x0a
        add esi, 4
        shr ecx, 0ah
        shl ebp, 1
        shl edx, 1
        inc eax
        and ecx, 1fh
        cmp eax, ecx
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [esp + 20h], edx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C E8 F9 FF FF: jl 0x10060315
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 20h
        pop ebp
        ; Exact mapped bytes 7D 3E: jge 0x10060971
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov edi, dword ptr [esp + 10h]
        xor ebx, ebx
        mov esi, eax
        mov ecx, 20h
        lea eax, [edi + esi*4 + 0a8h]
        sub ecx, esi
        mov edx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [edx + 50h], ebx
        ; Exact mapped bytes 75 F5: jne 0x10060949
        __asm _emit 0x75
        __asm _emit 0xf5
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ret
        lea eax, [edi + 0a8h]
        mov edx, 20h
        mov ecx, dword ptr [eax]
        add eax, 4
        dec edx
        mov dword ptr [ecx + 50h], ebx
        ; Exact mapped bytes 75 F5: jne 0x10060966
        __asm _emit 0x75
        __asm _emit 0xf5
        pop edi
        pop esi
        pop ebx
        add esp, 18h
        ret
    }
}

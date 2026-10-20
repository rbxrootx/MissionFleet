// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BD500 .. +0x5FB bytes.
extern "C" __declspec(naked) void FUN_100bd500_100BD500() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 1d0h]
        test eax, eax
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x100bd651
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 57 1C 10: mov eax, dword ptr [0x101c573c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edi, edi
        cmp dword ptr [eax + 160h], 4
        ; Exact mapped bytes 7E 11: jle 0x100bd533
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100bd533
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 100h
        ; Exact mapped bytes EB 02: jmp 0x100bd535
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 150h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100bd56a
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
        mov ecx, dword ptr [esi + 150h]
        push 5ah
        ; Exact mapped bytes E8 A9 1B 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 57 1C 10: mov eax, dword ptr [0x101c573c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 5
        ; Exact mapped bytes 7E 11: jle 0x100bd596
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100bd596
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 140h
        ; Exact mapped bytes EB 02: jmp 0x100bd598
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 154h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100bd5cd
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
        ; Exact mapped bytes A1 3C 57 1C 10: mov eax, dword ptr [0x101c573c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0dh
        ; Exact mapped bytes 7E 11: jle 0x100bd5ec
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100bd5ec
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 340h
        ; Exact mapped bytes EB 02: jmp 0x100bd5ee
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 158h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100bd623
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
        mov ecx, dword ptr [esi + 158h]
        push 0ffh
        ; Exact mapped bytes E8 ED 1A 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 15ch]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 160h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x100bd793
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1cch]
        mov edi, 7eh
        cmp dword ptr [eax + 160h], 2
        ; Exact mapped bytes 7E 11: jle 0x100bd676
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100bd676
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 80h
        ; Exact mapped bytes EB 02: jmp 0x100bd678
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 150h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100bd6ad
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
        mov ecx, dword ptr [esi + 150h]
        push 0c8h
        ; Exact mapped bytes E8 63 1A 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1cch]
        cmp dword ptr [eax + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100bd6db
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100bd6db
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 40h
        ; Exact mapped bytes EB 02: jmp 0x100bd6dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 154h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100bd712
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
        mov eax, dword ptr [esi + 1cch]
        mov ecx, dword ptr [eax + 160h]
        test ecx, ecx
        ; Exact mapped bytes 7E 0A: jle 0x100bd72c
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x100bd72e
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 158h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100bd763
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
        mov ecx, dword ptr [esi + 158h]
        push 5ah
        ; Exact mapped bytes E8 B0 19 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 15ch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 160h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 164h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 1C BF 1A 10: mov eax, dword ptr [0x101abf1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xbf
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100bd7a9
        __asm _emit 0x74
        __asm _emit 0x0d
        pop edi
        ; Exact mapped bytes C7 05 1C BF 1A 10 00 00 00 00: mov dword ptr [0x101abf1c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0xbf
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [eax + 14h]
        sub ecx, edx
        sub ecx, edi
        sub ecx, 320h
        push ecx
        mov ecx, dword ptr [esi + 124h]
        ; Exact mapped bytes E8 86 15 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 1ch]
        mov ecx, dword ptr [eax + 14h]
        sub edx, ecx
        mov ecx, dword ptr [esi + 128h]
        sub edx, edi
        sub edx, 320h
        push edx
        ; Exact mapped bytes E8 65 15 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [eax + 14h]
        sub ecx, edx
        sub ecx, edi
        sub ecx, 1f4h
        push ecx
        mov ecx, dword ptr [esi + 140h]
        ; Exact mapped bytes E8 44 15 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 1ch]
        mov ecx, dword ptr [eax + 14h]
        sub edx, ecx
        mov ecx, dword ptr [esi + 118h]
        sub edx, edi
        sub edx, 27ah
        push edx
        ; Exact mapped bytes E8 23 15 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [eax + 14h]
        sub ecx, edx
        sub ecx, edi
        sub ecx, 1cbh
        push ecx
        mov ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes E8 02 15 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 1ch]
        mov ecx, dword ptr [eax + 14h]
        sub edx, ecx
        mov ecx, dword ptr [esi + 130h]
        sub edx, edi
        sub edx, 320h
        push edx
        ; Exact mapped bytes E8 E1 14 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test edi, edi
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [eax + 18h]
        ; Exact mapped bytes 0F 85 3B 01 00 00: jne 0x100bd9bd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, edx
        sub ecx, 12ch
        push ecx
        mov ecx, dword ptr [esi + 150h]
        ; Exact mapped bytes E8 2A 15 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 20h]
        mov ecx, dword ptr [eax + 18h]
        sub edx, ecx
        mov ecx, dword ptr [esi + 154h]
        sub edx, 3ch
        push edx
        ; Exact mapped bytes E8 0E 15 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [eax + 18h]
        sub ecx, edx
        sub ecx, 3ch
        push ecx
        mov ecx, dword ptr [esi + 158h]
        ; Exact mapped bytes E8 F2 14 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 19ch]
        push 0d3h
        ; Exact mapped bytes E8 72 14 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18ch]
        push 114h
        ; Exact mapped bytes E8 62 14 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 190h]
        push 114h
        ; Exact mapped bytes E8 52 14 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 17ch]
        push 114h
        ; Exact mapped bytes E8 42 14 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        push 157h
        ; Exact mapped bytes E8 32 14 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        push 2fch
        mov edx, dword ptr [eax + 14h]
        add edx, 1a3h
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [esi + 184h]
        ; Exact mapped bytes E8 10 14 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 188h]
        push 2fch
        ; Exact mapped bytes E8 00 14 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 178h]
        push 2fch
        ; Exact mapped bytes E8 F0 13 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 168h]
        push 19dh
        ; Exact mapped bytes E8 E0 13 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 16ch]
        push 2b2h
        ; Exact mapped bytes E8 D0 13 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 170h]
        push 2e4h
        ; Exact mapped bytes E8 C0 13 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        push 82h
        ; Exact mapped bytes E8 B0 13 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 1a4h
        mov edi, 6
        mov ecx, dword ptr [esi]
        push 69h
        ; Exact mapped bytes E8 9C 13 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F1: jne 0x100bd9ab
        __asm _emit 0x75
        __asm _emit 0xf1
        pop edi
        pop esi
        ret
        sub ecx, edx
        sub ecx, 0c3h
        push ecx
        mov ecx, dword ptr [esi + 150h]
        ; Exact mapped bytes E8 EF 13 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 20h]
        mov ecx, dword ptr [eax + 18h]
        sub edx, ecx
        mov ecx, dword ptr [esi + 154h]
        sub edx, 0c3h
        push edx
        ; Exact mapped bytes E8 D0 13 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [eax + 18h]
        sub ecx, edx
        sub ecx, 0c3h
        push ecx
        mov ecx, dword ptr [esi + 158h]
        ; Exact mapped bytes E8 B1 13 04 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 19ch]
        push 0ach
        ; Exact mapped bytes E8 31 13 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18ch]
        push 0eeh
        ; Exact mapped bytes E8 21 13 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 190h]
        push 0eeh
        ; Exact mapped bytes E8 11 13 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 17ch]
        push 0eeh
        ; Exact mapped bytes E8 01 13 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 198h]
        push 104h
        ; Exact mapped bytes E8 F1 12 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 198h]
        push 3c5h
        mov edx, dword ptr [eax + 14h]
        add edx, 30ch
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [esi + 184h]
        ; Exact mapped bytes E8 CF 12 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 188h]
        push 3c5h
        ; Exact mapped bytes E8 BF 12 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 178h]
        push 3c5h
        ; Exact mapped bytes E8 AF 12 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 168h]
        push 12ch
        ; Exact mapped bytes E8 9F 12 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 16ch]
        push 370h
        ; Exact mapped bytes E8 8F 12 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 170h]
        push 3a2h
        ; Exact mapped bytes E8 7F 12 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1a0h]
        push 57h
        ; Exact mapped bytes E8 72 12 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 1a4h
        mov edi, 6
        mov ecx, dword ptr [esi]
        push 36h
        ; Exact mapped bytes E8 5E 12 04 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F1: jne 0x100bdae9
        __asm _emit 0x75
        __asm _emit 0xf1
        pop edi
        pop esi
        ret
    }
}

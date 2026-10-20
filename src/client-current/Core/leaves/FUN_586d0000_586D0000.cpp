// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D0000 .. +0x8B5 bytes.
extern "C" __declspec(naked) void FUN_586d0000_586D0000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0f4h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 FC DD FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 75 07 00 00: je 0x586d0799
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 24h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x586d003d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 1fh
        ; Exact mapped bytes 7F 28: jg 0x586d006b
        __asm _emit 0x7f
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 95 49 DB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x49
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + 270h]
        shr edx, cl
        and edx, 1
        ; Exact mapped bytes 74 09: je 0x586d0069
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB C9: jmp 0x586d0034
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 228h], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E1 49 DB FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x49
        __asm _emit 0xdb
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 53 49 DB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x49
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        push ecx
        ; Exact mapped bytes E8 F2 20 E5 FF: call 0x58522190
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x20
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 94h]
        ; Exact mapped bytes E8 2E A1 DD FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        push 588b2024h
        mov edx, dword ptr [ebp - 5ch]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D9 4F DD FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x4f
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6E F6 DD FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        imul eax, dword ptr [ebp - 30h], 0ffh
        cdq
        idiv dword ptr [ebp - 34h]
        mov byte ptr [ebp - 11h], al
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 11ch]
        mov dword ptr [ebp - 60h], eax
        movzx ecx, byte ptr [ebp - 11h]
        shl ecx, 8
        or ecx, 0ffh
        movzx edx, byte ptr [ebp - 11h]
        shl edx, 10h
        or ecx, edx
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 B9 5F DB FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x5f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 30h]
        push eax
        push 588b202ch
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 11ch]
        ; Exact mapped bytes E8 99 A0 DD FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa0
        __asm _emit 0xdd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        push 588b2030h
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 11ch]
        ; Exact mapped bytes E8 6F A0 DD FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa0
        __asm _emit 0xdd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586d018d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 51: jge 0x586d01e4
        __asm _emit 0x7d
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        mov dword ptr [ebp - 64h], ecx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 33 5D DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x5d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 124h]
        mov dword ptr [ebp - 68h], ecx
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 19 5D DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x5d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        mov dword ptr [ebp - 6ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 FF 5C DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5c
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A0: jmp 0x586d0184
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F4 47 DB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        mov ecx, 10h
        sub ecx, eax
        mov edx, dword ptr [ebp - 4]
        sub ecx, dword ptr [edx + 228h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 79 07: jns 0x586d0217
        __asm _emit 0x79
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586d0229
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x586d02d8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        mov dword ptr [ebp - 74h], ecx
        push 588b2038h
        ; Exact mapped bytes E8 A1 1D E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1d
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 3F 5E DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x5e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9ch]
        mov dword ptr [ebp - 78h], edx
        push 646464h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 62 5E DB FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5e
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9ch]
        mov dword ptr [ebp - 7ch], edx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 48 5C DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 124h]
        mov dword ptr [ebp - 80h], edx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 2E 5C DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x5c
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        mov dword ptr [ebp - 84h], edx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 0E 5C DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x5c
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 48 FF FF FF: jmp 0x586d0220
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x586d02e9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 10h
        ; Exact mapped bytes 0F 8D 30 03 00 00: jge 0x586d0623
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        mov dword ptr [ebp - 88h], ecx
        push 0fafafah
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 CA 5D DB FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x5d
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E F9 DD FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 26 CD DB FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcd
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 0F 85 A1 01 00 00: jne 0x586d04e7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EB CC DB FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xcc
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        push 0
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A4 F9 DD FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 1
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 90 F9 DD FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 90h]
        add ecx, 78h
        push ecx
        push 588b2058h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        ; Exact mapped bytes E8 3C 9E DD FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9e
        __asm _emit 0xdd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 9ch]
        mov dword ptr [ebp - 94h], eax
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 12 5B DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5b
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 124h]
        mov dword ptr [ebp - 98h], eax
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 F2 5A DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x5a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        mov dword ptr [ebp - 9ch], eax
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 D2 5A DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 0
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 31: je 0x586d044c
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E4 CB DB FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xcb
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov eax, 0ffh
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 23 81 98 00 00 00: and ax, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, ax
        imul edx, eax
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 07: jmp 0x586d0453
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 124h]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 15 AD 0E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xad
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 31: je 0x586d04b2
        __asm _emit 0x74
        __asm _emit 0x31
        push 1
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7E CB DB FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xcb
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov edx, 0ffh
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 66 23 90 98 00 00 00: and dx, word ptr [eax + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x90
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, dx
        imul ecx, edx
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes EB 07: jmp 0x586d04b9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 AF AC 0E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xac
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 37 01 00 00: jmp 0x586d061e
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6A CB DB FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xcb
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x586d061e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2F CB DB FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xcb
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 0
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EB F7 DD FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf7
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b4h], eax
        mov eax, dword ptr [ebp - 48h]
        movzx ecx, word ptr [eax + 0a2h]
        mov dword ptr [ebp - 0f4h], ecx
        mov edx, dword ptr [ebp - 48h]
        add edx, 78h
        push edx
        push 588b205ch
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 9ch]
        ; Exact mapped bytes E8 87 9C DD FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x9c
        __asm _emit 0xdd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        mov dword ptr [ebp - 0a8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 5D 59 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x59
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 124h]
        mov dword ptr [ebp - 0ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 3D 59 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x59
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        mov dword ptr [ebp - 0b0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 1D 59 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x59
        __asm _emit 0xdb
        __asm _emit 0xff
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 1C: je 0x586d05e8
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 33 CA DB FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xca
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx eax, ax
        xor eax, 55h
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x586d05ef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0b8h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 124h]
        mov dword ptr [ebp - 0bch], ecx
        mov edx, dword ptr [ebp - 0b8h]
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 73 AB 0E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xab
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BD FC FF FF: jmp 0x586d02e0
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 228h], 0
        ; Exact mapped bytes 0F 84 61 01 00 00: je 0x586d0794
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0ch
        ; Exact mapped bytes EB 09: jmp 0x586d0645
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 228h]
        add eax, 0ch
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 0F 8D 3A 01 00 00: jge 0x586d0794
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FA C9 DB FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc9
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 0dh
        ; Exact mapped bytes 0F 85 1D 01 00 00: jne 0x586d078f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C2 C9 DB FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc9
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 0F 84 04 01 00 00: je 0x586d078f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 1fh
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 228h], 4
        ; Exact mapped bytes 75 06: jne 0x586d06a4
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 50h]
        add eax, 78h
        push eax
        push 588b2060h
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 9ch]
        ; Exact mapped bytes E8 1E 9B DD FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x9b
        __asm _emit 0xdd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 36 C9 DB FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc9
        __asm _emit 0xdb
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        mov dword ptr [ebp - 0c8h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9ch]
        mov dword ptr [ebp - 0c0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 DA 57 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x57
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 124h]
        mov dword ptr [ebp - 0c4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 BA 57 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x57
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 124h]
        mov dword ptr [ebp - 0cch], ecx
        mov edx, dword ptr [ebp - 0c8h]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 45 AA 0E 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xaa
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        mov dword ptr [ebp - 0d0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 75 57 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x57
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9ch]
        mov dword ptr [ebp - 0d4h], edx
        push 0fafafah
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 52 59 DB FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x59
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A8 FE FF FF: jmp 0x586d063c
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x586d08b1
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 0d8h], ecx
        push 588b202ah
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 E8 58 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 11ch]
        mov dword ptr [ebp - 0dch], ecx
        push 588b202bh
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 C0 58 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 11ch]
        mov dword ptr [ebp - 0e0h], edx
        push 588b202fh
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 98 58 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x58
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x586d081b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 20h
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x586d08b1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 9ch]
        mov dword ptr [ebp - 0e4h], eax
        push 588b2035h
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 58 58 DB FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x58
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 9ch]
        mov dword ptr [ebp - 0e8h], eax
        push 646464h
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 75 58 DB FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x58
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 124h]
        mov dword ptr [ebp - 0ech], eax
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 55 56 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x56
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        mov dword ptr [ebp - 0f0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 35 56 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x56
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x586d0812
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}

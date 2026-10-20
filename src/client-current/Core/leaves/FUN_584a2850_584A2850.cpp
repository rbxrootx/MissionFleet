// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2850 .. +0x304 bytes.
extern "C" __declspec(naked) void FUN_584a2850_584A2850() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 D5 9B FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 5A 21 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 48 10: and cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x10
        movzx edx, cx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 710h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584a28ba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 7D 1A: jge 0x584a28da
        __asm _emit 0x7d
        __asm _emit 0x1a
        push 38h
        push 0
        imul eax, dword ptr [ebp - 14h], 38h
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0ch]
        push edx
        ; Exact mapped bytes E8 3B A5 3A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa5
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB D7: jmp 0x584a28b1
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584a28ec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D 46 02 00 00: jge 0x584a2b3c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 55 02 00 00: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [eax + 2]
        cmp ecx, 0bh
        ; Exact mapped bytes 0F 8C 1F 02 00 00: jl 0x584a2b37
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 33 02 00 00: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 2]
        cmp edx, 0fh
        ; Exact mapped bytes 0F 8F FD 01 00 00: jg 0x584a2b37
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584a294c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D E1 01 00 00: jge 0x584a2b37
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D5 A6 FE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x584a2971
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D2: jmp 0x584a2943
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 28h], edx
        push 4
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B8 A6 FE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 FE 9E 3A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9e
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        movzx edx, byte ptr [ebp - 18h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 02: je 0x584a29a0
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB A3: jmp 0x584a2943
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 3F 05 00: call 0x584f6910
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x3f
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 98h]
        cmp edx, 1
        ; Exact mapped bytes 74 32: je 0x584a29f3
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 98h]
        cmp ecx, 2
        ; Exact mapped bytes 74 23: je 0x584a29f3
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 98h]
        cmp eax, 3
        ; Exact mapped bytes 74 14: je 0x584a29f3
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 98h]
        cmp edx, 4
        ; Exact mapped bytes 74 05: je 0x584a29f3
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x584a2943
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 43 9A FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 54 01 00 00: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 2]
        sub edx, 0ah
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 98h]
        cmp edx, ecx
        ; Exact mapped bytes 74 05: je 0x584a2a26
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 1D FF FF FF: jmp 0x584a2943
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 98h]
        cmp eax, 1
        ; Exact mapped bytes 74 0F: je 0x584a2a44
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 98h]
        cmp edx, 2
        ; Exact mapped bytes 75 68: jne 0x584a2aac
        __asm _emit 0x75
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 14h], 1
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 D2 99 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E3 00 00 00: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 2]
        sub eax, 0ah
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 8], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [eax + edx + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x584a2b32
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 8A 99 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 49 A5 FE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx ecx, ax
        xor ecx, 55h
        ; Exact mapped bytes 7E 63: jle 0x584a2b32
        __asm _emit 0x7e
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 14h], 1
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 47 99 FE FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 58 00 00 00: call 0x584a2b60
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 2]
        sub edx, 0ah
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + ecx + 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes E9 0C FE FF FF: jmp 0x584a2943
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A7 FD FF FF: jmp 0x584a28e3
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 7E 09: jle 0x584a2b4e
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 10 00 00: call 0x584a3bf0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

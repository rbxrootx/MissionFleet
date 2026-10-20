// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C8580 .. +0x33C bytes.
extern "C" __declspec(naked) void FUN_586c8580_586C8580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 18ch]
        ; Exact mapped bytes E8 22 83 0F 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x83
        __asm _emit 0x0f
        __asm _emit 0x00
        movzx ecx, word ptr [ebp + 8]
        add ecx, 1
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        movzx edx, word ptr [ebp + 8]
        cmp edx, 5
        ; Exact mapped bytes 75 09: jne 0x586c85bb
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 7
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 198h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        add edx, 5ah
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 4D D1 0E 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd1
        __asm _emit 0x0e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D F0: mov word ptr [ebp - 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        xor edx, edx
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        add ecx, 1
        push ecx
        movzx edx, word ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D E1 E2 FF: call 0x584f6770
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe1
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 66 8B 45 FC: mov ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 4D F8: mov cx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 C7: jne 0x586c85fb
        __asm _emit 0x75
        __asm _emit 0xc7
        ; Exact mapped bytes 0F BF 55 F8: movsx edx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xf8
        sub edx, 1
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 66 8B 45 F0: mov ax, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x586c8659
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 0F BF 55 F8: movsx edx, word ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xf8
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 7D 20: jge 0x586c8682
        __asm _emit 0x7d
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 18ch]
        mov dword ptr [ebp - 30h], ecx
        push 0
        push 0
        push 588b0e36h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A1 7E 0F 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x7e
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CE: jmp 0x586c8650
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        add edx, 1
        push edx
        movzx eax, word ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 E0 E2 FF: call 0x584f6770
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xe0
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 EF 01 00 00: je 0x586c8896
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, word ptr [ecx + 4]
        movzx eax, word ptr [ebp - 0ch]
        cmp edx, eax
        ; Exact mapped bytes 0F 85 DC 01 00 00: jne 0x586c8896
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 0F 84 CF 01 00 00: je 0x586c8896
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x586c86e0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 98h
        ; Exact mapped bytes E8 92 06 00 00: call 0x586c8d80
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 73 31: jae 0x586c8724
        __asm _emit 0x73
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 18h]
        add eax, 98h
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C6 45 FF FF: call 0x586bccd0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax + 2]
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + 2]
        cmp edx, ecx
        ; Exact mapped bytes 75 09: jne 0x586c8722
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 02: jmp 0x586c8724
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B3: jmp 0x586c86d7
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 55ch]
        sub eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], -1
        ; Exact mapped bytes 75 11: jne 0x586c874a
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E9 58 01 00 00: jmp 0x586c88a2
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 8C 42 01 00 00: jl 0x586c8896
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 1
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x586c87ff
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 18ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        movzx eax, word ptr [edx + 6]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 92 BC E5 FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, word ptr [ecx + 8]
        cmp edx, 2
        ; Exact mapped bytes 75 4A: jne 0x586c87d5
        __asm _emit 0x75
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + 6]
        sub ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 14h]
        movzx eax, word ptr [edx + 4]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A7 84 FF FF: call 0x586c0c50
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 74 27: je 0x586c87d5
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 18ch]
        mov dword ptr [ebp - 3ch], edx
        push 0ecc282h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 14h
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 2E 8E 0F 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x8e
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x586c87fa
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 18ch]
        mov dword ptr [ebp - 40h], eax
        push 68f5fdh
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 14h
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 07 8E 0F 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8e
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x586c8896
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 18ch]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + 6]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 F1 BB E5 FF: call 0x58524410
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xbb
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 18ch]
        mov dword ptr [ebp - 48h], eax
        push 0ecc282h
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 14h
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 BD 8D 0F 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, word ptr [eax + 4]
        sub ecx, 1
        cmp ecx, 3
        ; Exact mapped bytes 75 43: jne 0x586c8896
        __asm _emit 0x75
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 14h]
        movzx eax, word ptr [edx + 6]
        sub eax, 1
        cmp eax, 29h
        ; Exact mapped bytes 74 0F: je 0x586c8871
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, word ptr [ecx + 6]
        sub edx, 1
        cmp edx, 2ah
        ; Exact mapped bytes 75 25: jne 0x586c8896
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 18ch]
        mov dword ptr [ebp - 4ch], ecx
        push 68f5fdh
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 6B 8D 0F 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 85 D6 FD FF FF: jne 0x586c8682
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 7ch], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

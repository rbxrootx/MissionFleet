// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58764FD0 .. +0x287 bytes.
extern "C" __declspec(naked) void FUN_58764fd0_58764FD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 164h]
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x58764fec
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 67 02 00 00: jmp 0x58765253
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 164h]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x587650c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 168h], 0
        ; Exact mapped bytes 0F 8F B5 00 00 00: jg 0x587650c4
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 3
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 64 01 00 00: mov word ptr [eax + 0x164], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 19 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x19
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x587650c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 19 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x19
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FC 73 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x73
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 F9 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 7
        ; Exact mapped bytes 75 4C: jne 0x587650a7
        __asm _emit 0x75
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 19 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x19
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D3 73 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x73
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C F9 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf9
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 0bh
        ; Exact mapped bytes 75 1F: jne 0x587650a7
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 09 D3 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x09
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 1
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DC CD F2 FF: call 0x58691e80
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xcd
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x587650c4
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 09 D3 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 4bh
        push 1
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BD CD F2 FF: call 0x58691e80
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xcd
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8A 01 00 00: jmp 0x58765253
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 164h]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 C7 00 00 00: jne 0x587651a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 168h], 0
        ; Exact mapped bytes 0F 8F B2 00 00 00: jg 0x5876519e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 64 01 00 00: mov word ptr [eax + 0x164], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD 18 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x18
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x5876519e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 18 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x18
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 22 73 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x73
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BB F8 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf8
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 7
        ; Exact mapped bytes 75 4C: jne 0x58765181
        __asm _emit 0x75
        __asm _emit 0x4c
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 18 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F9 72 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x72
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 92 F8 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 0bh
        ; Exact mapped bytes 75 1F: jne 0x58765181
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 08 D3 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 02 CD F2 FF: call 0x58691e80
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xcd
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x5876519e
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 08 D3 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 4bh
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E3 CC F2 FF: call 0x58691e80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xcc
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x58765253
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 164h]
        cmp eax, 4
        ; Exact mapped bytes 75 4A: jne 0x587651fc
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 168h], 0
        ; Exact mapped bytes 7F 3C: jg 0x587651fa
        __asm _emit 0x7f
        __asm _emit 0x3c
        mov edx, 6
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 64 01 00 00: mov word ptr [eax + 0x164], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 17 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 1D: jne 0x587651fa
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 08 D3 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 1
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 87 CC F2 FF: call 0x58691e80
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xcc
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 57: jmp 0x58765253
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 164h]
        cmp edx, 5
        ; Exact mapped bytes 75 48: jne 0x58765253
        __asm _emit 0x75
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 168h], 0
        ; Exact mapped bytes 7F 3C: jg 0x58765253
        __asm _emit 0x7f
        __asm _emit 0x3c
        mov ecx, 3
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 64 01 00 00: mov word ptr [edx + 0x164], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 17 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x17
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 1D: jne 0x58765253
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 07 D3 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x07
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 1
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2E CC F2 FF: call 0x58691e80
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xcc
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

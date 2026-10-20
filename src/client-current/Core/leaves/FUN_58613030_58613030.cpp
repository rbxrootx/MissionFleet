// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58613030 .. +0x293 bytes.
extern "C" __declspec(naked) void FUN_58613030_58613030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 2ch], 0
        movzx eax, word ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 87 63 02 00 00: ja 0x586132b4
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D C4 32 61 58: jmp dword ptr [ecx*4 + 0x586132c4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x32
        __asm _emit 0x61
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 198h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9B FE FF FF: call 0x58612f10
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + eax + 1ach], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 D8 69 F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x69
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x586130b0
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 B6 19 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x19
        __asm _emit 0xe7
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 89 50 40: mov word ptr [eax + 0x40], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x40
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 124h]
        ; Exact mapped bytes E8 C9 27 E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x27
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x586130ee
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 10h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A3 2E E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x2e
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x586132b4
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 198h]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D3 01 00 00: call 0x586132e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + ecx + 1ach], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 60 03 F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58613148
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 1E 19 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x19
        __asm _emit 0xe7
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 89 48 42: mov word ptr [eax + 0x42], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x42
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        ; Exact mapped bytes E8 31 27 E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x27
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 20: je 0x58613186
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 18h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0B 2E E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x2e
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 29 01 00 00: jmp 0x586132b4
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 198h]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EB FB FF FF: call 0x58612d90
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + edx + 1ach], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 E9 F4 FB FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x586131df
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 87 18 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0xe7
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 89 48 46: mov word ptr [eax + 0x46], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x46
        mov edx, 4
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        ; Exact mapped bytes E8 9A 26 E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x5861321c
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 124h]
        mov dword ptr [ebp - 20h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 75 2D E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x2d
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x586132b4
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 198h]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 75 FB FF FF: call 0x58612db0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + eax + 1ach], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 72 F4 FB FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58613276
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 F0 17 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x17
        __asm _emit 0xe7
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 89 50 44: mov word ptr [eax + 0x44], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x44
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 124h]
        ; Exact mapped bytes E8 03 26 E8 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x26
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x586132b4
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 28h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DD 2C E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2c
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 B7 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

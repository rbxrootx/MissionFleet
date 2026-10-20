// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B1300 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_585b1300_585B1300() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2fh
        ; Exact mapped bytes 0F 87 0A 01 00 00: ja 0x585b142d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 585b146ch]
        ; Exact mapped bytes FF 24 85 54 14 5B 58: jmp dword ptr [eax*4 + 0x585b1454]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x14
        __asm _emit 0x5b
        __asm _emit 0x58
        movzx ecx, word ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 37: je 0x585b1373
        __asm _emit 0x74
        __asm _emit 0x37
        movzx edx, word ptr [ebp + 0ch]
        cmp edx, 1
        ; Exact mapped bytes 75 0D: jne 0x585b1352
        __asm _emit 0x75
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 F4 FF FF: call 0x585b0780
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 14: jmp 0x585b1366
        __asm _emit 0xeb
        __asm _emit 0x14
        movzx eax, word ptr [ebp + 0ch]
        cmp eax, 2
        ; Exact mapped bytes 75 0B: jne 0x585b1366
        __asm _emit 0x75
        __asm _emit 0x0b
        push -1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B F4 FF FF: call 0x585b0780
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 4A ED FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x4a
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x585b1382
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0db0h]
        ; Exact mapped bytes E8 EF B8 F9 FF: call 0x5854cc70
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xb8
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x585b142d
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x585b139c
        __asm _emit 0x74
        __asm _emit 0x0d
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 4A ED FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4a
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2F: jmp 0x585b13cb
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0db0h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DE B8 F9 FF: call 0x5854cc90
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb8
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E8 39 5E F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A6 79 F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x79
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0B 4A ED FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x4a
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 55: jmp 0x585b142d
        __asm _emit 0xeb
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dc8h]
        mov dword ptr [ebp - 14h], eax
        push 0
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 10 1F 06 00: call 0x58613300
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x1f
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3A: jmp 0x585b142d
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dc8h]
        mov dword ptr [ebp - 18h], edx
        movzx eax, word ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F2 1E 06 00: call 0x58613300
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1e
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1C: jmp 0x585b142d
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 DA 5D F2 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x5d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 48fh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 44 79 F2 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x79
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        push 1
        mov ecx, dword ptr [ebp + 10h]
        xor ecx, 55555555h
        push ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C FA 12 00: call 0x586e0e80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 CC 20 96 58 00 00 00 00: mov dword ptr [0x589620cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780E20 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_58780e20_58780E20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890837h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        push 27ch
        ; Exact mapped bytes E8 B2 01 0B 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 11: je 0x58780e76
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8F 72 D7 FF: call 0x584f8100
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x72
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58780e7d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, 8ch
        push eax
        ; Exact mapped bytes E8 E2 02 0D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 77 1E: ja 0x58780ec3
        __asm _emit 0x77
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 34h
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E6 0D 00 00: call 0x58781ca0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DE FC FF FF: call 0x58780ba0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 14h]
        add eax, 10h
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E8 97 D7 FF: call 0x584fa6c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8F 24 D4 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 74 55: je 0x58780f3c
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 81 24 D4 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [eax + 68h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 05 04 00 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 29: je 0x58780f2d
        __asm _emit 0x74
        __asm _emit 0x29
        push 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5E 24 D4 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E9 0B: shr cx, 0xb
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0b
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C6 DA D7 FF: call 0x584fe9f0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xda
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58780f3c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3B 24 D4 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [eax + 68h], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2C 24 D4 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp dword ptr [eax + 68h], -1
        ; Exact mapped bytes 75 16: jne 0x58780f60
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 14h]
        add eax, 20h
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 61 97 D7 FF: call 0x584fa6c0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x97
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

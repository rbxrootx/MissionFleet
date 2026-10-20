// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B51D0 .. +0x17F bytes.
extern "C" __declspec(naked) void FUN_585b51d0_585B51D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F F8 EC FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA 6E ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x585b52d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 17 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x17
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 32: jne 0x585b5241
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 99 6E ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 A3 EE FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa3
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F 6E ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F2 A2 EE FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa2
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 45: jmp 0x585b5286
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 17 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x17
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5C 6E ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1D A2 EE FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa2
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 6E ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A 17 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x17
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AB A2 EE FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa2
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F 6E ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 A2 EE FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa2
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 6E ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CC A1 EE FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD A1 EE FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B3 A1 EE FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 01 00 00: call 0x585b54b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 1
        push 0
        push 0ffh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 AF FF FF: call 0x585b02d0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 4D: jne 0x585b5339
        __asm _emit 0x75
        __asm _emit 0x4d
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 35 02 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 16 02 20 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x20
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2A 1B 00 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 10: jmp 0x585b5349
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 1B 00 00: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x1b
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58606E90 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_58606e90_58606E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 104h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 EB E8 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xeb
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 E6 FF FF: call 0x58605560
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, eax, 1ch
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov edx, 1ch
        sub edx, eax
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 68 89 E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC FA E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfa
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 55 E8 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x55
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 1A: je 0x58606f0c
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 FA E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfa
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7C 55 E8 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x55
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 2
        ; Exact mapped bytes 75 31: jne 0x58606f3d
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        mov dword ptr [ebp - 14h], ecx
        push 8ch
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 DB E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xdb
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F9 EF E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xef
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x58607019
        __asm _emit 0xe9
        __asm _emit 0xdc
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
        ; Exact mapped bytes E8 78 FA E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 55 E8 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x55
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 74 34: je 0x58606f8b
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E FA E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfa
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 17 55 E8 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x55
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 74 1A: je 0x58606f8b
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 FA E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfa
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD 54 E8 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x54
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 5
        ; Exact mapped bytes 75 2E: jne 0x58606fb9
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        mov dword ptr [ebp - 1ch], ecx
        push 8dh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 DB E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xdb
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7A EF E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xef
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 60: jmp 0x58607019
        __asm _emit 0xeb
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC F9 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 54 E8 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x54
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 74 1A: je 0x58606fed
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 F9 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B 54 E8 FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x54
        __asm _emit 0xe8
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 75 2C: jne 0x58607019
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 110h]
        mov dword ptr [ebp - 24h], eax
        push 8eh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 DB E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xdb
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 18 EF E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xef
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

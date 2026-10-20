// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F3550 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_584f3550_584F3550() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 11ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 11ch], ecx
        mov dword ptr [ebp - 118h], 0
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 58 89 F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x89
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 11: jmp 0x584f35a1
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 95 8B F9 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 0F 84 0B 01 00 00: je 0x584f36b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 8D E0 FD FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 74 02: je 0x584f35cc
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB C4: jmp 0x584f3590
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584f35e7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 108h]
        add eax, 1
        mov dword ptr [ebp - 108h], eax
        mov ecx, dword ptr [ebp - 108h]
        cmp ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes 7D 58: jge 0x584f364d
        __asm _emit 0x7d
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 B0 99 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        cmp eax, dword ptr [ebp + edx*4 - 104h]
        ; Exact mapped bytes 75 3C: jne 0x584f364b
        __asm _emit 0x75
        __asm _emit 0x3c
        mov dword ptr [ebp - 114h], 0
        mov eax, dword ptr [ebp - 108h]
        cmp dword ptr [ebp + eax*4 - 84h], 0
        ; Exact mapped bytes 75 20: jne 0x584f3649
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 EC 9A F9 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x584f3649
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ebp + ecx*4 - 84h], 1
        ; Exact mapped bytes EB 02: jmp 0x584f364d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 8B: jmp 0x584f35d8
        __asm _emit 0xeb
        __asm _emit 0x8b
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 74 5E: je 0x584f36b4
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 4F 99 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x99
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp + edx*4 - 104h], eax
        mov eax, dword ptr [ebp - 110h]
        cmp dword ptr [ebp + eax*4 - 84h], 0
        ; Exact mapped bytes 74 0F: je 0x584f368d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 118h]
        add ecx, 1
        mov dword ptr [ebp - 118h], ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 88 9A F9 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp + edx*4 - 84h], eax
        mov eax, dword ptr [ebp - 110h]
        add eax, 1
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes E9 D7 FE FF FF: jmp 0x584f3590
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584f36d4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 1
        mov dword ptr [ebp - 108h], ecx
        mov edx, dword ptr [ebp - 108h]
        cmp edx, dword ptr [ebp - 110h]
        ; Exact mapped bytes 7D 2C: jge 0x584f370e
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 108h]
        cmp dword ptr [ebp + eax*4 - 84h], 0
        ; Exact mapped bytes 74 1A: je 0x584f370c
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ebp + ecx*4 - 104h]
        push edx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 55 08 00 00: call 0x584f3f60
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B7: jmp 0x584f36c5
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 38 D9 33 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd9
        __asm _emit 0x33
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

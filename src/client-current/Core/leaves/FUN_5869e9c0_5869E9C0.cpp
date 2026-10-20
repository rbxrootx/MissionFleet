// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869E9C0 .. +0x1A2 bytes.
extern "C" __declspec(naked) void FUN_5869e9c0_5869E9C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 288h], 0
        ; Exact mapped bytes 74 05: je 0x5869e9da
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 84 01 00 00: jmp 0x5869eb5e
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 28ch], 0
        ; Exact mapped bytes 74 3D: je 0x5869ea23
        __asm _emit 0x74
        __asm _emit 0x3d
        push 588b05a0h
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DE 73 DE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x73
        __asm _emit 0xde
        __asm _emit 0xff
        push 4
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 104h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 F0 ED FF: call 0x5857dab0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf0
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3B 01 00 00: jmp 0x5869eb5e
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 100h]
        ; Exact mapped bytes E8 1F 2C E3 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2c
        __asm _emit 0xe3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 25 01 00 00: je 0x5869eb5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 100h]
        ; Exact mapped bytes E8 09 2C E3 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x2c
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 8E 00 01 00 00: jle 0x5869eb5e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1], 0
        mov dword ptr [ebp - 10h], 1
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5869ea7b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 100h]
        ; Exact mapped bytes E8 C7 2B E3 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2b
        __asm _emit 0xe3
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 74 58: je 0x5869eaed
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 100h]
        ; Exact mapped bytes E8 AD 2B E3 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x2b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov al, byte ptr [eax + edx]
        mov byte ptr [ebp - 1], al
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, 20h
        ; Exact mapped bytes 74 09: je 0x5869eabe
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, 27h
        ; Exact mapped bytes 75 09: jne 0x5869eac7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 26: jmp 0x5869eaed
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7C 09: jl 0x5869ead9
        __asm _emit 0x7c
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 4D FF: movsx ecx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xff
        cmp ecx, 1fh
        ; Exact mapped bytes 7E 09: jle 0x5869eae2
        __asm _emit 0x7e
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 55 FF: movsx edx, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xff
        cmp edx, 7fh
        ; Exact mapped bytes 75 09: jne 0x5869eaeb
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 02: jmp 0x5869eaed
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 85: jmp 0x5869ea72
        __asm _emit 0xeb
        __asm _emit 0x85
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 41: je 0x5869eb34
        __asm _emit 0x74
        __asm _emit 0x41
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E3 72 DE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x72
        __asm _emit 0xde
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 100h]
        ; Exact mapped bytes E8 45 2B E3 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x2b
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F EF ED FF: call 0x5857dab0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xef
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2A: jmp 0x5869eb5e
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 100h]
        ; Exact mapped bytes E8 BE 19 E3 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x19
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes E8 A9 86 E3 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x86
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 3e6h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 13 A2 E3 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa2
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

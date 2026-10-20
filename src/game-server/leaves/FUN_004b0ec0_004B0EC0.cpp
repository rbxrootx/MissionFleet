// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B0EC0 .. +0x30C bytes.
extern "C" __declspec(naked) void FUN_004b0ec0_004B0EC0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1138h
        ; Exact mapped bytes E8 F3 88 FF FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 25: jne 0x4b0ef8
        __asm _emit 0x75
        __asm _emit 0x25
        push 58c66ch
        push 0
        push 1dah
        push 58c660h
        push 2
        ; Exact mapped bytes E8 45 FC FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 05: jne 0x4b0ef8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 28 FB FF FF: call 0x4b0a20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x4b0ecd
        __asm _emit 0x75
        __asm _emit 0xcf
        push 104h
        lea ecx, [ebp - 108h]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 50 24 5E 00: call dword ptr [0x5e2450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b0f2a
        __asm _emit 0x75
        __asm _emit 0x14
        push 58c648h
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes E8 19 8F FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x8f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 108h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 94 84 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, 40h
        ; Exact mapped bytes 76 29: jbe 0x4b0f6d
        __asm _emit 0x76
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 83 84 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax - 40h]
        mov dword ptr [ebp - 4], edx
        push 3
        push 58c644h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D6 88 FF FF: call 0x4a9840
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 1110h], ecx
        cmp dword ptr [ebp - 1110h], 0
        ; Exact mapped bytes 74 49: je 0x4b0fc8
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 1110h]
        push edx
        ; Exact mapped bytes E8 45 84 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, 40h
        ; Exact mapped bytes 76 35: jbe 0x4b0fc8
        __asm _emit 0x76
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 1110h]
        push eax
        ; Exact mapped bytes E8 31 84 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 1110h]
        lea edx, [ecx + eax - 40h]
        mov dword ptr [ebp - 1110h], edx
        push 3
        push 58c644h
        mov eax, dword ptr [ebp - 1110h]
        push eax
        ; Exact mapped bytes E8 7B 88 FF FF: call 0x4a9840
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0C: jne 0x4b0fda
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 1114h], 58c5d0h
        ; Exact mapped bytes EB 0A: jmp 0x4b0fe4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1114h], 58b9c8h
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x4b0ff9
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 1118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4b1003
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1118h], 58b9c8h
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x4b101f
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0C: jne 0x4b101f
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 111ch], 58c5c0h
        ; Exact mapped bytes EB 0A: jmp 0x4b1029
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 111ch], 58b9c8h
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x4b103f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 1120h], 58c5bch
        ; Exact mapped bytes EB 0A: jmp 0x4b1049
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1120h], 58b9c8h
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0B: je 0x4b105a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1124h], edx
        ; Exact mapped bytes EB 0A: jmp 0x4b1064
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1124h], 58b9c8h
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0C: je 0x4b1076
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 1128h], 58c5b4h
        ; Exact mapped bytes EB 0A: jmp 0x4b1080
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1128h], 58b9c8h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x4b1091
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 112ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x4b109b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 112ch], 58b9c8h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x4b10ad
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 1130h], 58c5ach
        ; Exact mapped bytes EB 0A: jmp 0x4b10b7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1130h], 58b9c8h
        cmp dword ptr [ebp - 1110h], 0
        ; Exact mapped bytes 74 0E: je 0x4b10ce
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 1110h]
        mov dword ptr [ebp - 1134h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x4b10d8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1134h], 58b9c8h
        cmp dword ptr [ebp - 1110h], 0
        ; Exact mapped bytes 74 0C: je 0x4b10ed
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 1138h], 58c5a0h
        ; Exact mapped bytes EB 0A: jmp 0x4b10f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1138h], 58b9c8h
        mov edx, dword ptr [ebp - 1114h]
        push edx
        mov eax, dword ptr [ebp - 1118h]
        push eax
        mov ecx, dword ptr [ebp - 111ch]
        push ecx
        mov edx, dword ptr [ebp - 1120h]
        push edx
        mov eax, dword ptr [ebp - 1124h]
        push eax
        mov ecx, dword ptr [ebp - 1128h]
        push ecx
        mov edx, dword ptr [ebp - 112ch]
        push edx
        mov eax, dword ptr [ebp - 1130h]
        push eax
        mov ecx, dword ptr [ebp - 1134h]
        push ecx
        mov edx, dword ptr [ebp - 1138h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 5d14cch]
        push edx
        push 58c54ch
        push 1000h
        lea eax, [ebp - 110ch]
        push eax
        ; Exact mapped bytes E8 AE A9 00 00: call 0x4bbb10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 3ch
        test eax, eax
        ; Exact mapped bytes 7D 14: jge 0x4b117d
        __asm _emit 0x7d
        __asm _emit 0x14
        push 58c4b0h
        lea ecx, [ebp - 110ch]
        push ecx
        ; Exact mapped bytes E8 C6 8C FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 12012h
        push 58c528h
        lea edx, [ebp - 110ch]
        push edx
        ; Exact mapped bytes E8 0D B0 00 00: call 0x4bc1a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 3
        ; Exact mapped bytes 75 11: jne 0x4b11b6
        __asm _emit 0x75
        __asm _emit 0x11
        push 16h
        ; Exact mapped bytes E8 34 AD 00 00: call 0x4bbee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 3
        ; Exact mapped bytes E8 1A F3 FF FF: call 0x4b04d0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10ch], 4
        ; Exact mapped bytes 75 07: jne 0x4b11c6
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4b11c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}

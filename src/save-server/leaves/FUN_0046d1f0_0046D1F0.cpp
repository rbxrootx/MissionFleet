// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046D1F0 .. +0x30C bytes.
extern "C" __declspec(naked) void FUN_0046d1f0_0046D1F0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1138h
        ; Exact mapped bytes E8 A3 8D FF FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 25: jne 0x46d228
        __asm _emit 0x75
        __asm _emit 0x25
        push 63ec98h
        push 0
        push 1dah
        push 63ec8ch
        push 2
        ; Exact mapped bytes E8 45 FC FF FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 05: jne 0x46d228
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 28 FB FF FF: call 0x46cd50
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x46d1fd
        __asm _emit 0x75
        __asm _emit 0xcf
        push 104h
        lea ecx, [ebp - 108h]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 F4 B7 68 00: call dword ptr [0x68b7f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x46d25a
        __asm _emit 0x75
        __asm _emit 0x14
        push 63ec74h
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes E8 19 87 FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 108h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D4 84 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, 40h
        ; Exact mapped bytes 76 29: jbe 0x46d29d
        __asm _emit 0x76
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 C3 84 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax - 40h]
        mov dword ptr [ebp - 4], edx
        push 3
        push 63ec70h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A6 83 FF FF: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 1110h], ecx
        cmp dword ptr [ebp - 1110h], 0
        ; Exact mapped bytes 74 49: je 0x46d2f8
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 1110h]
        push edx
        ; Exact mapped bytes E8 85 84 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp eax, 40h
        ; Exact mapped bytes 76 35: jbe 0x46d2f8
        __asm _emit 0x76
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 1110h]
        push eax
        ; Exact mapped bytes E8 71 84 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 1110h]
        lea edx, [ecx + eax - 40h]
        mov dword ptr [ebp - 1110h], edx
        push 3
        push 63ec70h
        mov eax, dword ptr [ebp - 1110h]
        push eax
        ; Exact mapped bytes E8 4B 83 FF FF: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0C: jne 0x46d30a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 1114h], 63ebfch
        ; Exact mapped bytes EB 0A: jmp 0x46d314
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1114h], 63315ch
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x46d329
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 1118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x46d333
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1118h], 63315ch
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x46d34f
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0C: jne 0x46d34f
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 111ch], 63ebech
        ; Exact mapped bytes EB 0A: jmp 0x46d359
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 111ch], 63315ch
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x46d36f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 1120h], 63ebe8h
        ; Exact mapped bytes EB 0A: jmp 0x46d379
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1120h], 63315ch
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0B: je 0x46d38a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1124h], edx
        ; Exact mapped bytes EB 0A: jmp 0x46d394
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1124h], 63315ch
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0C: je 0x46d3a6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 1128h], 63ebe0h
        ; Exact mapped bytes EB 0A: jmp 0x46d3b0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1128h], 63315ch
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x46d3c1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 112ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x46d3cb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 112ch], 63315ch
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x46d3dd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 1130h], 63ebd8h
        ; Exact mapped bytes EB 0A: jmp 0x46d3e7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1130h], 63315ch
        cmp dword ptr [ebp - 1110h], 0
        ; Exact mapped bytes 74 0E: je 0x46d3fe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 1110h]
        mov dword ptr [ebp - 1134h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x46d408
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1134h], 63315ch
        cmp dword ptr [ebp - 1110h], 0
        ; Exact mapped bytes 74 0C: je 0x46d41d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 1138h], 63ebcch
        ; Exact mapped bytes EB 0A: jmp 0x46d427
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1138h], 63315ch
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
        mov edx, dword ptr [ecx*4 + 67dc68h]
        push edx
        push 63eb78h
        push 1000h
        lea eax, [ebp - 110ch]
        push eax
        ; Exact mapped bytes E8 6E B7 00 00: call 0x478c00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 3ch
        test eax, eax
        ; Exact mapped bytes 7D 14: jge 0x46d4ad
        __asm _emit 0x7d
        __asm _emit 0x14
        push 63eadch
        lea ecx, [ebp - 110ch]
        push ecx
        ; Exact mapped bytes E8 C6 84 FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 12012h
        push 63eb54h
        lea edx, [ebp - 110ch]
        push edx
        ; Exact mapped bytes E8 3D B8 00 00: call 0x478d00
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10ch], eax
        cmp dword ptr [ebp - 10ch], 3
        ; Exact mapped bytes 75 11: jne 0x46d4e6
        __asm _emit 0x75
        __asm _emit 0x11
        push 16h
        ; Exact mapped bytes E8 44 87 00 00: call 0x475c20
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 3
        ; Exact mapped bytes E8 4A CB FF FF: call 0x46a030
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10ch], 4
        ; Exact mapped bytes 75 07: jne 0x46d4f6
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x46d4f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}

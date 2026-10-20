// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BB4D0 .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_004bb4d0_004BB4D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 88h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4bb4e6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x4bb650
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 43h
        ; Exact mapped bytes 75 4F: jne 0x4bb540
        __asm _emit 0x75
        __asm _emit 0x4f
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        test eax, eax
        ; Exact mapped bytes 75 44: jne 0x4bb540
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx], 43h
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx + 1], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x4bb529
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 00 00 00: mov word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 41 02 00 00: mov word ptr [ecx + 2], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 66 C7 42 04 00 00: mov word ptr [edx + 4], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 09: je 0x4bb538
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x4bb650
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5d1f70h
        ; Exact mapped bytes E8 E2 E9 FF FF: call 0x4b9f30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x4bb608
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5d1eech
        ; Exact mapped bytes E8 C9 E9 FF FF: call 0x4b9f30
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x4bb608
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 88h]
        push ecx
        ; Exact mapped bytes E8 3E 01 00 00: call 0x4bb6c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4bb590
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x4bb650
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 88h]
        push edx
        push 5df02ch
        lea eax, [ebp - 88h]
        push eax
        ; Exact mapped bytes E8 88 80 00 00: call 0x4c3630
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4bb5b6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x4bb650
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 30 F0 5D 00: mov cx, word ptr [0x5df030]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 34 F0 5D 00: mov dword ptr [0x5df034], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        lea edx, [ebp - 88h]
        push edx
        push 5d1f70h
        ; Exact mapped bytes E8 4A 02 00 00: call 0x4bb820
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x4bb5f6
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5d1eech
        ; Exact mapped bytes E8 4F E8 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 12: jmp 0x4bb608
        __asm _emit 0xeb
        __asm _emit 0x12
        push 5d1f70h
        push 5d1eech
        ; Exact mapped bytes E8 3B E8 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x4bb621
        __asm _emit 0x74
        __asm _emit 0x13
        push 6
        push 5df02ch
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 02 DA FE FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 13: je 0x4bb63a
        __asm _emit 0x74
        __asm _emit 0x13
        push 4
        push 5df034h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 E9 D9 FE FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        push 5d1f70h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 F8 E7 FE FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, 5d1f70h
        mov esp, ebp
        pop ebp
        ret
    }
}

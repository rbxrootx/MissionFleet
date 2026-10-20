// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00535010 .. +0x21D bytes.
extern "C" __declspec(naked) void FUN_00535010_00535010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x535033
        __asm _emit 0x75
        __asm _emit 0x14
        push 127h
        push 5c9524h
        ; Exact mapped bytes E8 D2 F9 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x535033
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x535019
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x535053
        __asm _emit 0x75
        __asm _emit 0x14
        push 128h
        push 5c9524h
        ; Exact mapped bytes E8 B2 F9 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x535053
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x535039
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 200h
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x535103
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 0a0h
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x535103
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 84h
        ; Exact mapped bytes 74 7E: je 0x535103
        __asm _emit 0x74
        __asm _emit 0x7e
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 20h
        ; Exact mapped bytes 74 75: je 0x535103
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 135h
        ; Exact mapped bytes 74 69: je 0x535103
        __asm _emit 0x74
        __asm _emit 0x69
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 136h
        ; Exact mapped bytes 74 5D: je 0x535103
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 133h
        ; Exact mapped bytes 74 51: je 0x535103
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 134h
        ; Exact mapped bytes 74 45: je 0x535103
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 132h
        ; Exact mapped bytes 74 39: je 0x535103
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 137h
        ; Exact mapped bytes 74 2D: je 0x535103
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 138h
        ; Exact mapped bytes 74 21: je 0x535103
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 121h
        ; Exact mapped bytes 74 15: je 0x535103
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 1fh
        ; Exact mapped bytes 74 0C: je 0x535103
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 118h
        ; Exact mapped bytes 75 05: jne 0x535108
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 1C 01 00 00: jmp 0x535224
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 0
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 0c000h
        ; Exact mapped bytes 72 1F: jb 0x53513a
        __asm _emit 0x72
        __asm _emit 0x1f
        push 50h
        lea edx, [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 3C 25 5E 00: call dword ptr [0x5e253c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x535138
        __asm _emit 0x74
        __asm _emit 0x06
        lea edx, [ebp - 50h]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes EB 68: jmp 0x5351a2
        __asm _emit 0xeb
        __asm _emit 0x68
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 400h
        ; Exact mapped bytes 72 27: jb 0x53516d
        __asm _emit 0x72
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, 400h
        push edx
        push 5ca050h
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 50h]
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes EB 35: jmp 0x5351a2
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 58h], 586450h
        ; Exact mapped bytes EB 09: jmp 0x53517f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 58h]
        add edx, 8
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 1A: je 0x5351a2
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 75 0B: jne 0x5351a0
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes EB 02: jmp 0x5351a2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D4: jmp 0x535176
        __asm _emit 0xeb
        __asm _emit 0xd4
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 2B: je 0x5351d3
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5ca060h
        ; Exact mapped bytes E8 47 AA F9 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes EB 2C: jmp 0x5351ff
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5ca090h
        ; Exact mapped bytes E8 19 AA F9 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 18h
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 3e0h
        ; Exact mapped bytes 72 19: jb 0x535224
        __asm _emit 0x72
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 3e8h
        ; Exact mapped bytes 77 0D: ja 0x535224
        __asm _emit 0x77
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 09 00 00 00: call 0x53522d
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

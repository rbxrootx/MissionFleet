// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478840 .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_00478840_00478840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 88h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x478856
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x4789c0
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
        ; Exact mapped bytes 75 4F: jne 0x4788b0
        __asm _emit 0x75
        __asm _emit 0x4f
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        test eax, eax
        ; Exact mapped bytes 75 44: jne 0x4788b0
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx], 43h
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx + 1], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x478899
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
        ; Exact mapped bytes 74 09: je 0x4788a8
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x4789c0
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 680414h
        ; Exact mapped bytes E8 F2 98 FF FF: call 0x4721b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x478978
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        push 680390h
        ; Exact mapped bytes E8 D9 98 FF FF: call 0x4721b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x478978
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
        ; Exact mapped bytes E8 3E 01 00 00: call 0x478a30
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x478900
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x4789c0
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 88h]
        push edx
        push 687558h
        lea eax, [ebp - 88h]
        push eax
        ; Exact mapped bytes E8 48 5C 00 00: call 0x47e560
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x478926
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x4789c0
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0D 5C 75 68 00: mov cx, word ptr [0x68755c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 60 75 68 00: mov dword ptr [0x687560], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp - 88h]
        push edx
        push 680414h
        ; Exact mapped bytes E8 4A 02 00 00: call 0x478b90
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
        ; Exact mapped bytes 74 13: je 0x478966
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        push edx
        push 680390h
        ; Exact mapped bytes E8 0F D0 FE FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 12: jmp 0x478978
        __asm _emit 0xeb
        __asm _emit 0x12
        push 680414h
        push 680390h
        ; Exact mapped bytes E8 FB CF FE FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x478991
        __asm _emit 0x74
        __asm _emit 0x13
        push 6
        push 687558h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 72 C9 FE FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 13: je 0x4789aa
        __asm _emit 0x74
        __asm _emit 0x13
        push 4
        push 687560h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 59 C9 FE FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        push 680414h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 B8 CF FE FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, 680414h
        mov esp, ebp
        pop ebp
        ret
    }
}

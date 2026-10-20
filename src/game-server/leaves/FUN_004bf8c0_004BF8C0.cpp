// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BF8C0 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_004bf8c0_004BF8C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov eax, dword ptr [ebp + 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 6ch]
        sub edx, 1
        mov dword ptr [ebp - 6ch], edx
        cmp dword ptr [ebp - 6ch], 7
        ; Exact mapped bytes 77 40: ja 0x4bf92e
        __asm _emit 0x77
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 24 85 1C FA 4B 00: jmp dword ptr [eax*4 + 0x4bfa1c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0x4b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 8
        ; Exact mapped bytes EB 34: jmp 0x4bf935
        __asm _emit 0xeb
        __asm _emit 0x34
        mov dword ptr [ebp - 4], 11h
        ; Exact mapped bytes EB 2B: jmp 0x4bf935
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 4], 12h
        ; Exact mapped bytes EB 22: jmp 0x4bf935
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 4], 4
        ; Exact mapped bytes EB 19: jmp 0x4bf935
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 4], 10h
        ; Exact mapped bytes EB 10: jmp 0x4bf935
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 1
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x4bf9ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18h
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 5B D0 FF FF: call 0x4bc9b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 6E: jne 0x4bf9ca
        __asm _emit 0x75
        __asm _emit 0x6e
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 70h], eax
        cmp dword ptr [ebp - 70h], 10h
        ; Exact mapped bytes 74 0E: je 0x4bf976
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 70h], 16h
        ; Exact mapped bytes 74 08: je 0x4bf976
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 70h], 1dh
        ; Exact mapped bytes 74 02: je 0x4bf976
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x4bf99c
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 30h]
        or ecx, 1
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        and edx, 0ffffffe1h
        or edx, 2
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 08: jmp 0x4bf9a4
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 30h]
        and al, 0feh
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 18h
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        lea eax, [ebp - 68h]
        push eax
        ; Exact mapped bytes E8 19 CB FF FF: call 0x4bc4e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        push 0ffffh
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 E6 D7 FF FF: call 0x4bd1c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 8
        ; Exact mapped bytes 74 18: je 0x4bfa04
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 83 3D 68 2A 5D 00 00: cmp dword ptr [0x5d2a68], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x2a
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0F: jne 0x4bfa04
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 D2 49 00 00: call 0x4c43d0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0E: jne 0x4bfa18
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 BB D3 FF FF: call 0x4bcdd0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}

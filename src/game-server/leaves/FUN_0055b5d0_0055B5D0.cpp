// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055B5D0 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_0055b5d0_0055B5D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 2b9h
        push 5cebe0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 71 FB F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 64 FF FF FF: call 0x55b55b
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 53: je 0x55b659
        __asm _emit 0x74
        __asm _emit 0x53
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 74 05: je 0x55b611
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x55b6a2
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 82 D0 00 00 00: movsx eax, byte ptr [edx + 0xd0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55b633
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c3h
        push 5cebe0h
        ; Exact mapped bytes E8 D2 93 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55b633
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x55b611
        __asm _emit 0x75
        __asm _emit 0xd8
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp - 0ch]
        add edx, 0d0h
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4C 8D FF FF: call 0x55439d
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x55b6dd
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 88 D0 00 00 00: movsx ecx, byte ptr [eax + 0xd0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x55b67b
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c8h
        push 5cebe0h
        ; Exact mapped bytes E8 8A 93 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55b67b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x55b659
        __asm _emit 0x75
        __asm _emit 0xd8
        push 0
        push 0
        push 1
        push 58e530h
        mov eax, dword ptr [ebp - 0ch]
        add eax, 0d0h
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 37 8B FF FF: call 0x5541d4
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 3B: jmp 0x55b6dd
        __asm _emit 0xeb
        __asm _emit 0x3b
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x55b6bc
        __asm _emit 0x74
        __asm _emit 0x14
        push 2cdh
        push 5cebe0h
        ; Exact mapped bytes E8 49 93 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55b6bc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55b6a2
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp - 0ch]
        add edx, 84h
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 8E FF FF: call 0x554562
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 49: je 0x55b72c
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 27 1F 00 00: call 0x55d612
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 3C: jne 0x55b72c
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0cch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 AA FF FF: call 0x5561d4
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x55b71f
        __asm _emit 0x75
        __asm _emit 0x19
        push 5cecbch
        push 5cecf4h
        ; Exact mapped bytes E8 00 45 F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes EB 10: jmp 0x55b72f
        __asm _emit 0xeb
        __asm _emit 0x10
        push 4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

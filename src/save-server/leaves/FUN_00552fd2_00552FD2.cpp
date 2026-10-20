// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552FD2 .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_00552fd2_00552FD2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 2c1h
        push 67c1e0h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 6F 72 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x55300e
        __asm _emit 0x74
        __asm _emit 0x14
        push 2c2h
        push 67c1e0h
        ; Exact mapped bytes E8 37 5D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55300e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x552ff1
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x553031
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c3h
        push 67c1e0h
        ; Exact mapped bytes E8 14 5D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x5d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553031
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x553014
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 25: je 0x553062
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 1C 04 F5 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x553062
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c5h
        push 67c1e0h
        ; Exact mapped bytes E8 E3 5C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553062
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x553037
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 42 EA FF FF: call 0x551ab2
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 28h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x5530a1
        __asm _emit 0x75
        __asm _emit 0x14
        push 2cah
        push 67c1e0h
        ; Exact mapped bytes E8 A4 5C FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5530a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553084
        __asm _emit 0x75
        __asm _emit 0xdd
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 35 95 FF FF: call 0x54c5ee
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 14h], eax
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 24h]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 34h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 640d30h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 48 C2 68 00: call dword ptr [0x68c248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 90 CC 00 00 00: call dword ptr [eax + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push 2d6h
        push 67c1e0h
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 3F 71 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 20h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

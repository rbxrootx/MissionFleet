// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534E28 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_00534e28_00534E28() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7F 14: jg 0x534e4e
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0c9h
        push 5c7700h
        ; Exact mapped bytes E8 B7 FB FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534e4e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x534e34
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7F 14: jg 0x534e6e
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0cah
        push 5c7700h
        ; Exact mapped bytes E8 97 FB FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534e6e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x534e54
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 B3 AF F9 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xaf
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x534e97
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cbh
        push 5c7700h
        ; Exact mapped bytes E8 6E FB FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534e97
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x534e74
        __asm _emit 0x75
        __asm _emit 0xd7
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 AA AF F9 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xaf
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x534ec4
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cch
        push 5c7700h
        ; Exact mapped bytes E8 41 FB FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534ec4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x534e9d
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes 83 3D 7C E8 5D 00 00: cmp dword ptr [0x5de87c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x534ed8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x534f8c
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 10h]
        sub edx, 1
        mov dword ptr [ebp + 10h], edx
        test ecx, ecx
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x534f79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 21: jne 0x534f1a
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 01 FC FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 5c7778h
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 CC FB FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        cmp edx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 7C 14: jl 0x534f74
        __asm _emit 0x7c
        __asm _emit 0x14
        push 5c7780h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AE FB FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x534edf
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0D: je 0x534f8c
        __asm _emit 0x74
        __asm _emit 0x0d
        push 5c7784h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8F FB FF FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
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

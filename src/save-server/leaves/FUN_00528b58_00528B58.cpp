// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528B58 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_00528b58_00528B58() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7F 14: jg 0x528b7e
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0c9h
        push 673af0h
        ; Exact mapped bytes E8 C7 01 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528b7e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x528b64
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7F 14: jg 0x528b9e
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0cah
        push 673af0h
        ; Exact mapped bytes E8 A7 01 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528b9e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x528b84
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 93 A8 F7 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x528bc7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cbh
        push 673af0h
        ; Exact mapped bytes E8 7E 01 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528bc7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x528ba4
        __asm _emit 0x75
        __asm _emit 0xd7
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 8A A8 F7 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa8
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x528bf4
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cch
        push 673af0h
        ; Exact mapped bytes E8 51 01 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528bf4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x528bcd
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes 83 3D D4 6C 68 00 00: cmp dword ptr [0x686cd4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x528c08
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x528cbc
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
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x528ca9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 21: jne 0x528c4a
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 01 FC FF FF: call 0x52884b
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
        push 673b68h
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 CC FB FF FF: call 0x52884b
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
        ; Exact mapped bytes 7C 14: jl 0x528ca4
        __asm _emit 0x7c
        __asm _emit 0x14
        push 673b70h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AE FB FF FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x528c0f
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 0D: je 0x528cbc
        __asm _emit 0x74
        __asm _emit 0x0d
        push 673b74h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8F FB FF FF: call 0x52884b
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

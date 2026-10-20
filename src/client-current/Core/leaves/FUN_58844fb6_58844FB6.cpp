// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58844FB6 .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_58844fb6_58844FB6() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        cmp dword ptr [esi + 48h], edi
        ; Exact mapped bytes 75 3C: jne 0x58844ffd
        __asm _emit 0x75
        __asm _emit 0x3c
        push ebx
        mov ebx, 588f20e4h
        push ebx
        ; Exact mapped bytes E8 86 73 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 48h], eax
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x58844fed
        __asm _emit 0x75
        __asm _emit 0x11
        push ebx
        ; Exact mapped bytes E8 71 73 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 D4 42 89 58: call dword ptr [0x588942d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi + 48h], eax
        pop ebx
        cmp dword ptr [esi + 48h], edi
        ; Exact mapped bytes 75 0A: jne 0x58844ffd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 132h
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x58845116
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 4ch], edi
        ; Exact mapped bytes 75 18: jne 0x5884501a
        __asm _emit 0x75
        __asm _emit 0x18
        push 588f20f4h
        ; Exact mapped bytes E8 0A 75 FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [esi + 48h]
        push esi
        ; Exact mapped bytes E8 16 CA FF FF: call 0x58841a2d
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 4ch], eax
        cmp dword ptr [esi + 50h], edi
        ; Exact mapped bytes 75 18: jne 0x58845037
        __asm _emit 0x75
        __asm _emit 0x18
        push 588f2108h
        ; Exact mapped bytes E8 ED 74 FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [esi + 48h]
        push esi
        ; Exact mapped bytes E8 F9 C9 FF FF: call 0x58841a2d
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 50h], eax
        cmp dword ptr [esi + 54h], edi
        ; Exact mapped bytes 75 18: jne 0x58845054
        __asm _emit 0x75
        __asm _emit 0x18
        push 588f2120h
        ; Exact mapped bytes E8 D0 74 FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [esi + 48h]
        push esi
        ; Exact mapped bytes E8 DC C9 FF FF: call 0x58841a2d
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 54h], eax
        cmp dword ptr [esi + 58h], edi
        ; Exact mapped bytes 75 18: jne 0x58845071
        __asm _emit 0x75
        __asm _emit 0x18
        push 588f2138h
        ; Exact mapped bytes E8 F0 72 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [esi + 48h]
        push esi
        ; Exact mapped bytes E8 BF C9 FF FF: call 0x58841a2d
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 58h], eax
        cmp dword ptr [esi + 5ch], edi
        ; Exact mapped bytes 75 18: jne 0x5884508e
        __asm _emit 0x75
        __asm _emit 0x18
        push 588f2150h
        ; Exact mapped bytes E8 D3 72 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [esi + 48h]
        push esi
        ; Exact mapped bytes E8 A2 C9 FF FF: call 0x58841a2d
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 5ch], eax
        cmp dword ptr [esi + 60h], edi
        ; Exact mapped bytes 75 18: jne 0x588450ab
        __asm _emit 0x75
        __asm _emit 0x18
        push 588f2168h
        ; Exact mapped bytes E8 79 74 FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [esi + 48h]
        push esi
        ; Exact mapped bytes E8 85 C9 FF FF: call 0x58841a2d
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 60h], eax
        cmp dword ptr [esi + 64h], edi
        ; Exact mapped bytes 75 18: jne 0x588450c8
        __asm _emit 0x75
        __asm _emit 0x18
        push 588f2188h
        ; Exact mapped bytes E8 5C 74 FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [esi + 48h]
        push esi
        ; Exact mapped bytes E8 68 C9 FF FF: call 0x58841a2d
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 64h], eax
        cmp dword ptr [esi + 68h], edi
        ; Exact mapped bytes 75 18: jne 0x588450e5
        __asm _emit 0x75
        __asm _emit 0x18
        push 588f21a0h
        ; Exact mapped bytes E8 3F 74 FF FF: call 0x5883c516
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [esi + 48h]
        push esi
        ; Exact mapped bytes E8 4B C9 FF FF: call 0x58841a2d
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 68h], eax
        cmp dword ptr [esi + 4ch], edi
        ; Exact mapped bytes 74 27: je 0x58845111
        __asm _emit 0x74
        __asm _emit 0x27
        cmp dword ptr [esi + 50h], edi
        ; Exact mapped bytes 74 22: je 0x58845111
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 1D: je 0x58845111
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [esi + 58h], edi
        ; Exact mapped bytes 74 18: je 0x58845111
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [esi + 5ch], edi
        ; Exact mapped bytes 74 13: je 0x58845111
        __asm _emit 0x74
        __asm _emit 0x13
        cmp dword ptr [esi + 60h], edi
        ; Exact mapped bytes 74 0E: je 0x58845111
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [esi + 64h], edi
        ; Exact mapped bytes 74 09: je 0x58845111
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [esi + 68h], edi
        ; Exact mapped bytes 74 04: je 0x58845111
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58845116
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 133h
        pop edi
        pop esi
        ret
    }
}

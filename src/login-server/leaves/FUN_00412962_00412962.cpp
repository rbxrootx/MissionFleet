// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412962 .. +0x1BA bytes.
extern "C" __declspec(naked) void FUN_00412962_00412962() {
    __asm {
        mov eax, 43a604h
        ; Exact mapped bytes E8 9C CC 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esp
        lea ecx, [esi + 0a4h]
        ; Exact mapped bytes E8 B5 B1 01 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        xor edi, edi
        cmp dword ptr [esi + 3ch], edi
        ; Exact mapped bytes 74 11: je 0x412999
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [esi + 14h], edi
        ; Exact mapped bytes 76 0C: jbe 0x412999
        __asm _emit 0x76
        __asm _emit 0x0c
        cmp dword ptr [esi + 1ch], edi
        ; Exact mapped bytes 74 07: je 0x412999
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 90 26 00 00: call 0x415029
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 04 12 00 00: call 0x413ba4
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 3ch]
        mov dword ptr [esi + 94h], edi
        ; Exact mapped bytes E8 67 AF 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 3ch], edi
        mov ecx, dword ptr [esi + 38h]
        cmp ecx, edi
        ; Exact mapped bytes 74 07: je 0x4129c0
        __asm _emit 0x74
        __asm _emit 0x07
        push 3
        ; Exact mapped bytes E8 6C 01 00 00: call 0x412b2c
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 0ech]
        lea ebx, [esi + 0ech]
        mov dword ptr [esi + 38h], edi
        ; Exact mapped bytes E8 41 AF 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [esi + 0f0h]
        mov dword ptr [ebx], edi
        lea ebx, [esi + 0f0h]
        ; Exact mapped bytes E8 2E AF 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [esi + 78h], edi
        pop ecx
        pop ecx
        mov dword ptr [ebx], edi
        ; Exact mapped bytes 74 31: je 0x412a21
        __asm _emit 0x74
        __asm _emit 0x31
        xor ebx, ebx
        cmp dword ptr [esi + 80h], edi
        ; Exact mapped bytes 76 15: jbe 0x412a0f
        __asm _emit 0x76
        __asm _emit 0x15
        mov eax, dword ptr [esi + 78h]
        push dword ptr [eax + ebx*4]
        ; Exact mapped bytes E8 10 AF 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        inc ebx
        pop ecx
        cmp ebx, dword ptr [esi + 80h]
        ; Exact mapped bytes 72 EB: jb 0x4129fa
        __asm _emit 0x72
        __asm _emit 0xeb
        push dword ptr [esi + 78h]
        ; Exact mapped bytes E8 FE AE 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 78h], edi
        mov dword ptr [esi + 80h], edi
        cmp dword ptr [esi + 7ch], edi
        ; Exact mapped bytes 74 31: je 0x412a57
        __asm _emit 0x74
        __asm _emit 0x31
        xor ebx, ebx
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 76 15: jbe 0x412a45
        __asm _emit 0x76
        __asm _emit 0x15
        mov eax, dword ptr [esi + 7ch]
        push dword ptr [eax + ebx*4]
        ; Exact mapped bytes E8 DA AE 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        inc ebx
        pop ecx
        cmp ebx, dword ptr [esi + 84h]
        ; Exact mapped bytes 72 EB: jb 0x412a30
        __asm _emit 0x72
        __asm _emit 0xeb
        push dword ptr [esi + 7ch]
        ; Exact mapped bytes E8 C8 AE 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 7ch], edi
        mov dword ptr [esi + 84h], edi
        push dword ptr [esi + 0f4h]
        lea ebx, [esi + 0f4h]
        ; Exact mapped bytes E8 AD AE 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        pop ecx
        cmp eax, edi
        mov dword ptr [ebx], edi
        ; Exact mapped bytes 74 0B: je 0x412a7d
        __asm _emit 0x74
        __asm _emit 0x0b
        push 1
        push eax
        ; Exact mapped bytes E8 EA 9A 01 00: call 0x42c564
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 4], edi
        mov eax, dword ptr [esi + 0bch]
        lea ebx, [esi + 0bch]
        cmp eax, edi
        ; Exact mapped bytes 74 0A: je 0x412a97
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        push eax
        ; Exact mapped bytes E8 CF 9A 01 00: call 0x42c564
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebx], edi
        push 0fh
        ; Exact mapped bytes E8 05 45 02 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        push edi
        push esi
        add ecx, 1ch
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes E8 32 A9 01 00: call 0x42d3e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xa9
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 74 0C: je 0x412abe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 8]
        push eax
        add ecx, 1ch
        ; Exact mapped bytes E8 EB A8 01 00: call 0x42d3a9
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        push 0fh
        ; Exact mapped bytes E8 4A 45 02 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 4E 30 FF: or word ptr [esi + 0x30], 0xffff
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x30
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        push 1
        mov dword ptr [esi + 90h], edi
        pop eax
        mov dword ptr [esi + 0e4h], edi
        mov dword ptr [esi + 0d0h], edi
        mov dword ptr [esi + 0cch], edi
        mov dword ptr [esi + 0e0h], edi
        mov dword ptr [esi + 20h], edi
        mov dword ptr [esi + 24h], edi
        mov dword ptr [esi + 0a8h], edi
        mov dword ptr [esi + 0e8h], edi
        mov dword ptr [esi + 0c4h], eax
        mov dword ptr [esi + 0c8h], eax
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ret
    }
}

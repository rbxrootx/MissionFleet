// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585219F0 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_585219f0_585219F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7F 11: jg 0x58521a10
        __asm _emit 0x7f
        __asm _emit 0x11
        ; Exact mapped bytes 7C 06: jl 0x58521a07
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 77 09: ja 0x58521a10
        __asm _emit 0x77
        __asm _emit 0x09
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x58521b52
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 19: je 0x58521a32
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 AE FE FF: call 0x5850c8b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x58521b52
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F4 77 FE FF: call 0x58509240
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 76 4D: jbe 0x58521aa2
        __asm _emit 0x76
        __asm _emit 0x4d
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 6E 59 F6 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x59
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2A 99 FE FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x99
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 70 8C F8 FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6F 98 FE FF: call 0x5850b310
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x58521b43
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A9 ED FF FF: call 0x58520860
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], 0fffh
        cmp dword ptr [ebp - 4], 0fffh
        ; Exact mapped bytes 76 4B: jbe 0x58521b12
        __asm _emit 0x76
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        push 0fffh
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A3 4E 33 00: call 0x58856981
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4e
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 10h], 0fffh
        ; Exact mapped bytes 74 11: je 0x58521b10
        __asm _emit 0x74
        __asm _emit 0x11
        xor eax, eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 24h]
        sbb edx, eax
        mov eax, ecx
        ; Exact mapped bytes EB 42: jmp 0x58521b52
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes EB AC: jmp 0x58521abe
        __asm _emit 0xeb
        __asm _emit 0xac
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 76 2B: jbe 0x58521b43
        __asm _emit 0x76
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 53 4E 33 00: call 0x58856981
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4e
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], ecx
        xor edx, edx
        mov eax, dword ptr [ebp - 28h]
        sub eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 24h]
        sbb ecx, edx
        mov edx, ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

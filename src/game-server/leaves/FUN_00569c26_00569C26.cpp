// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00569C26 .. +0x296 bytes.
extern "C" __declspec(naked) void FUN_00569c26_00569C26() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        push 0eah
        push 5d053ch
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 1B 15 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x15
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x569c70
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 8
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 FE 61 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x569c70
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ebh
        push 5d053ch
        ; Exact mapped bytes E8 95 AD FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569c70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x569c45
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x569ca1
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 CD 61 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x569ca1
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ech
        push 5d053ch
        ; Exact mapped bytes E8 64 AD FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569ca1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x569c76
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x569cd2
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 9C 61 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x61
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x569cd2
        __asm _emit 0x75
        __asm _emit 0x14
        push 0eeh
        push 5d053ch
        ; Exact mapped bytes E8 33 AD FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569cd2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x569ca7
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 56 66 00 00: call 0x570336
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 50: jne 0x569d34
        __asm _emit 0x75
        __asm _emit 0x50
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 43: je 0x569d2d
        __asm _emit 0x74
        __asm _emit 0x43
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x569d04
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f4h
        push 5d053ch
        ; Exact mapped bytes E8 01 AD FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569d04
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x569cea
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        xor eax, eax
        ; Exact mapped bytes E9 7F 01 00 00: jmp 0x569eb3
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0fbh
        push 5d053ch
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0c0h]
        push eax
        ; Exact mapped bytes E8 13 14 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x14
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 DD B8 FC FF: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 25: jne 0x569d80
        __asm _emit 0x75
        __asm _emit 0x25
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 0c0h]
        add ecx, 104h
        ; Exact mapped bytes E8 F4 C0 FC FF: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 1D: jmp 0x569d9d
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + 0ch]
        sub edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        push 0
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 97 B8 FC FF: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 68 FB FF FF: call 0x569919
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 10eh
        push 5d053ch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 99 13 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        push 58a178h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BC 12 F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x569dec
        __asm _emit 0x75
        __asm _emit 0x14
        push 10fh
        push 5d053ch
        ; Exact mapped bytes E8 19 AC FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569dec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x569dc7
        __asm _emit 0x75
        __asm _emit 0xd5
        lea edx, [ebp - 14h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 06: je 0x569e0f
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 11: jne 0x569e20
        __asm _emit 0x75
        __asm _emit 0x11
        lea eax, [ebp - 14h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        lea eax, [ebp - 14h]
        push eax
        xor ecx, ecx
        ; Exact mapped bytes E8 08 87 FB FF: call 0x522533
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 06: je 0x569e37
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 1E: jne 0x569e55
        __asm _emit 0x75
        __asm _emit 0x1e
        push 5d0564h
        push 5d05a4h
        ; Exact mapped bytes E8 CF 5D F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x5d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3C: je 0x569e97
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x569e75
        __asm _emit 0x75
        __asm _emit 0x14
        push 125h
        push 5d053ch
        ; Exact mapped bytes E8 90 AB FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xab
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x569e75
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x569e5b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 4F B8 FC FF: call 0x535702
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

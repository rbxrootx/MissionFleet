// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00569270 .. +0x1EA bytes.
extern "C" __declspec(naked) void FUN_00569270_00569270() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fbdch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 5ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 68h], ecx
        push 0b8h
        push 5cffc8h
        mov eax, dword ptr [ebp - 68h]
        push eax
        ; Exact mapped bytes E8 BC 1E F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1e
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x5692bd
        __asm _emit 0x74
        __asm _emit 0x13
        push 0bah
        push 5cffc8h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 A3 1E F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x1e
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 25: je 0x5692e8
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 86 6B F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6b
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5692e8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bch
        push 5cffc8h
        ; Exact mapped bytes E8 1D B7 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb7
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5692e8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x5692bd
        __asm _emit 0x75
        __asm _emit 0xcf
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 CA FB FF FF: call 0x568ec0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 06: jne 0x569309
        __asm _emit 0x75
        __asm _emit 0x06
        lea ecx, [ebp - 50h]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 30h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x56932a
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 38 CD FC FF: call 0x536060
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 2D: jmp 0x569357
        __asm _emit 0xeb
        __asm _emit 0x2d
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 29 C6 FC FF: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 5ch]
        push ecx
        ; Exact mapped bytes FF 15 74 25 5E 00: call dword ptr [0x5e2574]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 A6 CC FC FF: call 0x535ffd
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 39 CC FC FF: call 0x535f9b
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x569372
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 30h], 1
        ; Exact mapped bytes EB 28: jmp 0x56939a
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 09 CC FC FF: call 0x535f86
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x56939a
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D E0 EC 5D 00: mov ecx, dword ptr [0x5dece0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 E0 EC 5D 00: mov edx, dword ptr [0x5dece0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 FC CC FC FF: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0dfh
        push 5cffc8h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 B3 1D F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x1d
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0e3h
        push 5cffc8h
        ; Exact mapped bytes E8 44 C2 FC FF: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 9E 1D F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1d
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E8 39 C2 FC FF: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x5693f2
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 60h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 73 01 00 00: call 0x569560
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes EB 55: jmp 0x569447
        __asm _emit 0xeb
        __asm _emit 0x55
        push 58ec68h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 35 2C FE FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 58ec08h
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 25 2C FE FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 10h], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 E4 29 5E 00: call dword ptr [0x5e29e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 64h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 1C 01 00 00: call 0x569560
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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

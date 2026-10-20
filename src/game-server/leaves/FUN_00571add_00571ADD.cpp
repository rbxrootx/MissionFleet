// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571ADD .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_00571add_00571ADD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 2bfh
        push 5d0930h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 64 96 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 4D E3 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x571b21
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c0h
        push 5d0930h
        ; Exact mapped bytes E8 E4 2E FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571b21
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x571afc
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x571b52
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1C E3 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe3
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x571b52
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c2h
        push 5d0930h
        ; Exact mapped bytes E8 B3 2E FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571b52
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x571b27
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 92 ED FF FF: call 0x5708f2
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x571b7d
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c5h
        push 5d0930h
        ; Exact mapped bytes E8 88 2E FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x571b7d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x571b63
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2C: je 0x571bc3
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 94 3A FC FF: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        push ecx
        xor ecx, ecx
        ; Exact mapped bytes E8 39 08 FB FF: call 0x5223f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x571be7
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 10h]
        push edx
        xor ecx, ecx
        ; Exact mapped bytes E8 0B 08 FB FF: call 0x5223f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x08
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x571bf5
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 24h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 E8 23 5E 00: call dword ptr [0x5e23e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 6E C9 FD FF: call 0x54e589
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 24h]
        add edx, 4
        push edx
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 05: jne 0x571c36
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 76 E1 F5 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 8], 0
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

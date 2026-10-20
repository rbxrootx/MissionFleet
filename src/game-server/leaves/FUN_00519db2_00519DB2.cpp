// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519DB2 .. +0x1D2 bytes.
extern "C" __declspec(naked) void FUN_00519db2_00519DB2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x519dd5
        __asm _emit 0x75
        __asm _emit 0x11
        push 29h
        push 5c8ddch
        ; Exact mapped bytes E8 30 AC 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519dd5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x519dbe
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x519df2
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ah
        push 5c8ddch
        ; Exact mapped bytes E8 13 AC 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519df2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x519ddb
        __asm _emit 0x75
        __asm _emit 0xe3
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 AC 71 FD FF: call 0x4f0faf
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x71
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x519e3c
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x519e21
        __asm _emit 0x74
        __asm _emit 0x11
        push 30h
        push 5c8ddch
        ; Exact mapped bytes E8 E4 AB 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519e21
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x519e07
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 90 AC 00 00 00: call dword ptr [eax + 0xac]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x519f7b
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 40ffffh
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [edx + 64h], ecx
        push 30h
        push 0
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 18 F5 F8 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf5
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 1ch], 582e60h
        mov ecx, dword ptr [ebp + 10h]
        or ecx, 40000000h
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes E8 94 B6 01 00: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 1C 02 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        lea eax, [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x519ea1
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x519f7b
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 84h], ecx
        push 10h
        ; Exact mapped bytes E8 47 D5 FD FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x519ec9
        __asm _emit 0x75
        __asm _emit 0x11
        push 49h
        push 5c8ddch
        ; Exact mapped bytes E8 3C AB 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519ec9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x519ead
        __asm _emit 0x75
        __asm _emit 0xde
        push 3c000h
        ; Exact mapped bytes E8 22 D5 FD FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E4 5F FD FF: call 0x4efecd
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [edx + 84h], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 04: jne 0x519f03
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 78: jmp 0x519f7b
        __asm _emit 0xeb
        __asm _emit 0x78
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 7B 52 FD FF: call 0x4ef18a
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3A BE 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 8C 21 02 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 4ch]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 38 BF 01 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [eax + 78h], ecx
        mov dword ptr [eax + 7ch], edx
        push 0
        push 4000000h
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 7E 4F FD FF: call 0x4eeecc
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 86 CA FD FF: call 0x4f69e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x519f62
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x519f7b
        __asm _emit 0xeb
        __asm _emit 0x19
        push 54h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 1A 53 FD FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 1
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

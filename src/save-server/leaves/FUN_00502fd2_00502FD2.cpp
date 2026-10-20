// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00502FD2 .. +0x1D2 bytes.
extern "C" __declspec(naked) void FUN_00502fd2_00502FD2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 50h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x502ff5
        __asm _emit 0x75
        __asm _emit 0x11
        push 29h
        push 675914h
        ; Exact mapped bytes E8 50 5D 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502ff5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x502fde
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x503012
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ah
        push 675914h
        ; Exact mapped bytes E8 33 5D 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503012
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x502ffb
        __asm _emit 0x75
        __asm _emit 0xe3
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 BC BE FC FF: call 0x4ceedf
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x50305c
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x503041
        __asm _emit 0x74
        __asm _emit 0x11
        push 30h
        push 675914h
        ; Exact mapped bytes E8 04 5D 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x503041
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x503027
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
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x50319b
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
        ; Exact mapped bytes E8 48 28 F6 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x28
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 1ch], 634d80h
        mov ecx, dword ptr [ebp + 10h]
        or ecx, 40000000h
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes E8 E4 E9 02 00: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 08 85 02 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x85
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
        ; Exact mapped bytes 75 07: jne 0x5030c1
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x50319b
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 84h], ecx
        push 10h
        ; Exact mapped bytes E8 57 22 FD FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5030e9
        __asm _emit 0x75
        __asm _emit 0x11
        push 49h
        push 675914h
        ; Exact mapped bytes E8 5C 5C 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5030e9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x5030cd
        __asm _emit 0x75
        __asm _emit 0xde
        push 3c000h
        ; Exact mapped bytes E8 32 22 FD FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 F4 AC FC FF: call 0x4cddfd
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [edx + 84h], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 04: jne 0x503123
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 78: jmp 0x50319b
        __asm _emit 0xeb
        __asm _emit 0x78
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 EB 34 FD FF: call 0x4d661a
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 90 F0 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 CC 89 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 4ch]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8E F1 02 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x02
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
        ; Exact mapped bytes E8 EE 31 FD FF: call 0x4d635c
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x31
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 96 17 FD FF: call 0x4d4910
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x17
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x503182
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x50319b
        __asm _emit 0xeb
        __asm _emit 0x19
        push 54h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 8A 35 FD FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x35
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

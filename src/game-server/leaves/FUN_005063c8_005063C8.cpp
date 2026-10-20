// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005063C8 .. +0x19E bytes.
extern "C" __declspec(naked) void FUN_005063c8_005063C8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x5063fc
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        push 18h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6F 9A FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5063fc
        __asm _emit 0x75
        __asm _emit 0x11
        push 74h
        push 5c79a0h
        ; Exact mapped bytes E8 09 E6 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5063fc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x5063d4
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F2 B4 02 00: call 0x5318fc
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x50641f
        __asm _emit 0x75
        __asm _emit 0x11
        push 75h
        push 5c79a0h
        ; Exact mapped bytes E8 E6 E5 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50641f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x506402
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50642c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x506425
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x506439
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x506432
        __asm _emit 0x75
        __asm _emit 0xf3
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x506446
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x50643f
        __asm _emit 0x75
        __asm _emit 0xf3
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1F 04 00 00: call 0x50687f
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 69: jne 0x5064d2
        __asm _emit 0x75
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 34h]
        ; Exact mapped bytes E8 7E C1 02 00: call 0x5325f2
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 76 13: jbe 0x50648c
        __asm _emit 0x76
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        ; Exact mapped bytes E8 26 AB 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes E8 1D FD FF FF: call 0x5061a9
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 34h]
        ; Exact mapped bytes E8 82 C1 02 00: call 0x53261d
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 29: je 0x5064cd
        __asm _emit 0x74
        __asm _emit 0x29
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x5064cd
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DA 4B FF FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x5064cd
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        ; Exact mapped bytes E8 E5 AA 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 6
        ; Exact mapped bytes E8 DC FC FF FF: call 0x5061a9
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x50655a
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0F 4E FF FF: call 0x4fb2e9
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 05: jne 0x5064e8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 C4 98 FC FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 80 FD FF FF: call 0x506270
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 30h]
        add eax, 1
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 34h]
        ; Exact mapped bytes E8 76 EA FD FF: call 0x4e4f93
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0ch], edx
        push 0a3h
        push 5c79a0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 06 4C FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512ED9 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_00512ed9_00512ED9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x512efc
        __asm _emit 0x75
        __asm _emit 0x14
        push 523h
        push 5c84b0h
        ; Exact mapped bytes E8 09 1B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512efc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x512ee2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x512f1f
        __asm _emit 0x75
        __asm _emit 0x14
        push 524h
        push 5c84b0h
        ; Exact mapped bytes E8 E6 1A 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512f1f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x512f02
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 4E: je 0x512f79
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp dword ptr [ebp + 18h], 1
        ; Exact mapped bytes 7E 0F: jle 0x512f40
        __asm _emit 0x7e
        __asm _emit 0x0f
        cmp dword ptr [ebp + 1ch], 1
        ; Exact mapped bytes 7E 09: jle 0x512f40
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 07: jmp 0x512f47
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 1
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        neg ecx
        sbb ecx, ecx
        and ecx, 800000h
        push ecx
        mov edx, dword ptr [ebp - 24h]
        neg edx
        sbb edx, edx
        and edx, 0ff800000h
        add edx, 800000h
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 53 BF FD FF: call 0x4eeecc
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 14h]
        add eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C8 2D 02 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x512fc5
        __asm _emit 0x75
        __asm _emit 0x25
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 0E: je 0x512fb4
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        push 1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E4 30 02 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x512fc5
        __asm _emit 0xeb
        __asm _emit 0x11
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 98 BE FD FF: call 0x4eee65
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x512fe7
        __asm _emit 0x75
        __asm _emit 0x11
        push 587230h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AD 80 FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x512ffd
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D AC E8 5D 00: mov ecx, dword ptr [0x5de8ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 A8 E8 5D 00: mov edx, dword ptr [0x5de8a8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 99 30 02 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 4C 2D 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 5D 2F 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 99 90 02 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 17 A0 02 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 44 F9 FE FF: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B6 31 02 00: call 0x5361eb
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x513052
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 29 2F 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B0 26 FE FF: call 0x4f5702
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}

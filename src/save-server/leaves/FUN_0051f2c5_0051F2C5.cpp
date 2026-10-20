// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F2C5 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_0051f2c5_0051F2C5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x51f2e8
        __asm _emit 0x75
        __asm _emit 0x11
        push 76h
        push 6792bch
        ; Exact mapped bytes E8 5D 9A 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f2e8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x51f2d1
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 11: jne 0x51f308
        __asm _emit 0x75
        __asm _emit 0x11
        push 78h
        push 6792bch
        ; Exact mapped bytes E8 3D 9A 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f308
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51f2ee
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x51f3e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x51f331
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 8D 9F 00 00 00: jge 0x51f3da
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx*8 + 63ae48h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EF 53 FF FF: call 0x51473d
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 29: je 0x51f380
        __asm _emit 0x74
        __asm _emit 0x29
        push -1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 49 AA FE FF: call 0x509dbd
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 08: jle 0x51f380
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 5A: jmp 0x51f3da
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax*8 + 63ae4ch]
        and ecx, 0f000h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 0f000h
        cmp ecx, eax
        ; Exact mapped bytes 75 36: jne 0x51f3d5
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx*8 + 63ae48h]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8B 53 FF FF: call 0x51473d
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x51f3cf
        __asm _emit 0x75
        __asm _emit 0x14
        push 92h
        push 6792bch
        ; Exact mapped bytes E8 76 99 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f3cf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51f3b5
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x51f328
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 06: jne 0x51f3e6
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 0ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x51f400
        __asm _emit 0x75
        __asm _emit 0x14
        push 9ch
        push 6792bch
        ; Exact mapped bytes E8 45 99 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f400
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51f3e6
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 6ch
        ; Exact mapped bytes E8 04 2A FA FF: call 0x4c1e1b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x2a
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51f42f
        __asm _emit 0x75
        __asm _emit 0x14
        push 9dh
        push 6792bch
        ; Exact mapped bytes E8 16 99 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f42f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x51f406
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 6ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 74 14: je 0x51f454
        __asm _emit 0x74
        __asm _emit 0x14
        push 9eh
        push 6792bch
        ; Exact mapped bytes E8 F1 98 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f454
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x51f435
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C4 98 FE FF: call 0x508d2e
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x98
        __asm _emit 0xfe
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051E25B .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_0051e25b_0051E25B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x51e2f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 28 E5 5D 00 00: cmp dword ptr [0x5de528], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 70: je 0x51e2ea
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes 8B 0D 28 E5 5D 00: mov ecx, dword ptr [0x5de528]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 09 4A 01 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 25: je 0x51e2b3
        __asm _emit 0x74
        __asm _emit 0x25
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes 8B 0D 28 E5 5D 00: mov ecx, dword ptr [0x5de528]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 13 4A 01 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        ; Exact mapped bytes EB D5: jmp 0x51e288
        __asm _emit 0xeb
        __asm _emit 0xd5
        ; Exact mapped bytes A1 28 E5 5D 00: mov eax, dword ptr [0x5de528]
        __asm _emit 0xa1
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 12: je 0x51e2d9
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x51e2e0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes C7 05 28 E5 5D 00 00 00 00 00: mov dword ptr [0x5de528], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 C0 5D 5C 00 00 00 00 00: mov dword ptr [0x5c5dc0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x5d
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5C: jmp 0x51e352
        __asm _emit 0xeb
        __asm _emit 0x5c
        push 213h
        push 5cb84ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 57 CE FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 11 97 FC FF: call 0x4e7a2b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x51e332
        __asm _emit 0x74
        __asm _emit 0x14
        push 214h
        push 5cb84ch
        ; Exact mapped bytes E8 D3 66 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51e332
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x51e309
        __asm _emit 0x75
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 00 90 FC FF: call 0x4e7352
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
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

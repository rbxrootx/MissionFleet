// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F2DF2 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_004f2df2_004F2DF2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 07: jne 0x4f2e0e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x4f2ee4
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 9A EA FF FF: call 0x4f18af
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f2e32
        __asm _emit 0x75
        __asm _emit 0x14
        push 3beh
        push 5c5574h
        ; Exact mapped bytes E8 D3 1B 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2e32
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f2e18
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 99 A3 F9 FF: call 0x48d1e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 12: jne 0x4f2e6e
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 08 26 5E 00: call dword ptr [0x5e2608]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 14: jmp 0x4f2e82
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2C: je 0x4f2eb4
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4C A3 F9 FF: call 0x48d1e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f2eac
        __asm _emit 0x74
        __asm _emit 0x14
        push 3d4h
        push 5c5574h
        ; Exact mapped bytes E8 59 1B 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2eac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4f2e88
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes EB 2D: jmp 0x4f2ee1
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 1ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 14: je 0x4f2ed3
        __asm _emit 0x74
        __asm _emit 0x14
        push 3dah
        push 5c5574h
        ; Exact mapped bytes E8 32 1B 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2ed3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x4f2eb4
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 46 EC FF FF: call 0x4f1b27
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

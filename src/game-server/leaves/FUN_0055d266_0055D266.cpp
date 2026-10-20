// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D266 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_0055d266_0055D266() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 14 EC 5D 00 00: cmp dword ptr [0x5dec14], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x55d28d
        __asm _emit 0x75
        __asm _emit 0x14
        push 558h
        push 5cebe0h
        ; Exact mapped bytes E8 78 77 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d28d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x55d270
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        push 1
        push 0f092h
        push 8
        ; Exact mapped bytes 8B 0D 14 EC 5D 00: mov ecx, dword ptr [0x5dec14]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E FD FF FF: call 0x55cfbb
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3C: je 0x55d2ef
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 83 3D 1C EC 5D 00 00: cmp dword ptr [0x5dec1c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x55d2d0
        __asm _emit 0x75
        __asm _emit 0x14
        push 55fh
        push 5cebe0h
        ; Exact mapped bytes E8 35 77 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d2d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55d2b3
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 1
        push 0f091h
        push 4
        ; Exact mapped bytes A1 1C EC 5D 00: mov eax, dword ptr [0x5dec1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC FC FF FF: call 0x55cfbb
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0f08eh
        push 20h
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 FC FF FF: call 0x55cfbb
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0f08fh
        push 1
        push 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 FC FF FF: call 0x55cfbb
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0f090h
        push 10h
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D FC FF FF: call 0x55cfbb
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xfc
        __asm _emit 0xff
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

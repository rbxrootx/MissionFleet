// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005602E6 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_005602e6_005602E6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 83 3D 34 71 68 00 00: cmp dword ptr [0x687134], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x56030d
        __asm _emit 0x75
        __asm _emit 0x14
        push 558h
        push 67b3b8h
        ; Exact mapped bytes E8 38 8A FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x8a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56030d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5602f0
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        push 1
        push 0f092h
        push 8
        ; Exact mapped bytes 8B 0D 34 71 68 00: mov ecx, dword ptr [0x687134]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0E FD FF FF: call 0x56003b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3C: je 0x56036f
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 83 3D 3C 71 68 00 00: cmp dword ptr [0x68713c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x560350
        __asm _emit 0x75
        __asm _emit 0x14
        push 55fh
        push 67b3b8h
        ; Exact mapped bytes E8 F5 89 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x560350
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x560333
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 1
        push 0f091h
        push 4
        ; Exact mapped bytes A1 3C 71 68 00: mov eax, dword ptr [0x68713c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC FC FF FF: call 0x56003b
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
        ; Exact mapped bytes E8 B7 FC FF FF: call 0x56003b
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
        ; Exact mapped bytes E8 A2 FC FF FF: call 0x56003b
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
        ; Exact mapped bytes E8 8D FC FF FF: call 0x56003b
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005462D0 .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_005462d0_005462D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 38 8C 5C 00 FF: cmp dword ptr [0x5c8c38], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 74 0A: je 0x5462ec
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes A1 38 8C 5C 00: mov eax, dword ptr [0x5c8c38]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x5463cf
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c8c4ch
        ; Exact mapped bytes FF 15 3C 24 5E 00: call dword ptr [0x5e243c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x546314
        __asm _emit 0x75
        __asm _emit 0x14
        push 9bh
        push 5c8c2ch
        ; Exact mapped bytes E8 F1 E6 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546314
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5462fa
        __asm _emit 0x75
        __asm _emit 0xe0
        push 5c8c5ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 40000h
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x5463c3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 14h
        push 0
        lea edx, [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 26 30 F6 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x30
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 24h], 14h
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7C 5F: jl 0x5463c3
        __asm _emit 0x7c
        __asm _emit 0x5f
        cmp dword ptr [ebp - 20h], 0ffffh
        ; Exact mapped bytes 76 14: jbe 0x546381
        __asm _emit 0x76
        __asm _emit 0x14
        push 0a7h
        push 5c8c2ch
        ; Exact mapped bytes E8 84 E6 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546381
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x546364
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp - 1ch], 0ffffh
        ; Exact mapped bytes 76 14: jbe 0x5463a4
        __asm _emit 0x76
        __asm _emit 0x14
        push 0a8h
        push 5c8c2ch
        ; Exact mapped bytes E8 61 E6 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5463a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x546387
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 1ch]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 20h]
        and ecx, 0ffffh
        shl ecx, 10h
        or eax, ecx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 15 38 8C 5C 00: mov dword ptr [0x5c8c38], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

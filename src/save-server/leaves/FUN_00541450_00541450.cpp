// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541450 .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_00541450_00541450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 70 57 67 00 FF: cmp dword ptr [0x675770], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 74 0A: je 0x54146c
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes A1 70 57 67 00: mov eax, dword ptr [0x675770]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x54154f
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 675784h
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x541494
        __asm _emit 0x75
        __asm _emit 0x14
        push 9bh
        push 675764h
        ; Exact mapped bytes E8 B1 78 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541494
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54147a
        __asm _emit 0x75
        __asm _emit 0xe0
        push 675794h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 40000h
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x541543
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
        ; Exact mapped bytes E8 F6 43 F2 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x43
        __asm _emit 0xf2
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
        ; Exact mapped bytes 7C 5F: jl 0x541543
        __asm _emit 0x7c
        __asm _emit 0x5f
        cmp dword ptr [ebp - 20h], 0ffffh
        ; Exact mapped bytes 76 14: jbe 0x541501
        __asm _emit 0x76
        __asm _emit 0x14
        push 0a7h
        push 675764h
        ; Exact mapped bytes E8 44 78 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541501
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5414e4
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp - 1ch], 0ffffh
        ; Exact mapped bytes 76 14: jbe 0x541524
        __asm _emit 0x76
        __asm _emit 0x14
        push 0a8h
        push 675764h
        ; Exact mapped bytes E8 21 78 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541524
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x541507
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
        ; Exact mapped bytes 89 15 70 57 67 00: mov dword ptr [0x675770], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x57
        __asm _emit 0x67
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

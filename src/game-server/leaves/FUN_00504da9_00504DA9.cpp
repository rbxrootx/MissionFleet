// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504DA9 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_00504da9_00504DA9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 43: jne 0x504e01
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 74 3A: je 0x504e01
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 47 CB 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 28h]
        sub ecx, dword ptr [eax + 2ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 2ch]
        push eax
        ; Exact mapped bytes E8 6D B0 FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x504e01
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c4h
        push 5c7650h
        ; Exact mapped bytes E8 04 FC 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504e01
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 AE: jne 0x504db5
        __asm _emit 0x75
        __asm _emit 0xae
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 43: jne 0x504e53
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 3A: je 0x504e53
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F5 CA 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 24h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 24h]
        push edx
        ; Exact mapped bytes E8 1B B0 FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb0
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x504e53
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c6h
        push 5c7650h
        ; Exact mapped bytes E8 B2 FB 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfb
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504e53
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 AE: jne 0x504e07
        __asm _emit 0x75
        __asm _emit 0xae
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 75 4C: jne 0x504eb8
        __asm _emit 0x75
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 14: je 0x504e89
        __asm _emit 0x74
        __asm _emit 0x14
        push 1cdh
        push 5c7650h
        ; Exact mapped bytes E8 7C FB 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504e89
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x504e6c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 68 85 FE FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 2ch], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x504edf
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x504ee6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 38h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx + 34h]
        cmp eax, dword ptr [edx + 34h]
        ; Exact mapped bytes 74 14: je 0x504f12
        __asm _emit 0x74
        __asm _emit 0x14
        push 1d7h
        push 5c7650h
        ; Exact mapped bytes E8 F3 FA 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504f12
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x504ef0
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x504f3f
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x504f46
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 34h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

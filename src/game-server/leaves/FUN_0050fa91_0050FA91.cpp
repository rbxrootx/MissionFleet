// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050FA91 .. +0x269 bytes.
extern "C" __declspec(naked) void FUN_0050fa91_0050FA91() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x50fab2
        __asm _emit 0x75
        __asm _emit 0x11
        push 6ch
        push 5c84b0h
        ; Exact mapped bytes E8 53 4F 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fab2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x50fa9b
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 7E 06: jle 0x50fac4
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 7F 11: jg 0x50fad5
        __asm _emit 0x7f
        __asm _emit 0x11
        push 6dh
        push 5c84b0h
        ; Exact mapped bytes E8 30 4F 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fad5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x50fab8
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 11: jne 0x50faf2
        __asm _emit 0x75
        __asm _emit 0x11
        push 6fh
        push 5c84b0h
        ; Exact mapped bytes E8 13 4F 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50faf2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x50fadb
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp + 1ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x50fb11
        __asm _emit 0x75
        __asm _emit 0x11
        push 70h
        push 5c84b0h
        ; Exact mapped bytes E8 F4 4E 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fb11
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x50faf8
        __asm _emit 0x75
        __asm _emit 0xe1
        mov edx, dword ptr [ebp + 20h]
        and edx, 40000000h
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x50fb35
        __asm _emit 0x75
        __asm _emit 0x11
        push 71h
        push 5c84b0h
        ; Exact mapped bytes E8 D0 4E 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fb35
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x50fb17
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp + 20h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 11: jne 0x50fb56
        __asm _emit 0x75
        __asm _emit 0x11
        push 72h
        push 5c84b0h
        ; Exact mapped bytes E8 AF 4E 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fb56
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DF: jne 0x50fb3b
        __asm _emit 0x75
        __asm _emit 0xdf
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7C 06: jl 0x50fb68
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 7E 11: jle 0x50fb79
        __asm _emit 0x7e
        __asm _emit 0x11
        push 75h
        push 5c84b0h
        ; Exact mapped bytes E8 8C 4E 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fb79
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x50fb5c
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 7C 06: jl 0x50fb8b
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 2
        ; Exact mapped bytes 7E 11: jle 0x50fb9c
        __asm _emit 0x7e
        __asm _emit 0x11
        push 76h
        push 5c84b0h
        ; Exact mapped bytes E8 69 4E 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fb9c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x50fb7f
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 7F 17: jg 0x50fbbf
        __asm _emit 0x7f
        __asm _emit 0x17
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7F 11: jg 0x50fbbf
        __asm _emit 0x7f
        __asm _emit 0x11
        push 77h
        push 5c84b0h
        ; Exact mapped bytes E8 46 4E 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fbbf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x50fba2
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 40h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 75 09: jne 0x50fbe9
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 6ch], 0
        ; Exact mapped bytes 74 11: je 0x50fbfa
        __asm _emit 0x74
        __asm _emit 0x11
        push 7bh
        push 5c84b0h
        ; Exact mapped bytes E8 0B 4E 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fbfa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x50fbd7
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], 1
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 02 00 00: call 0x50fe7c
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x50fc3b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x50fcf1
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 68h], 1
        ; Exact mapped bytes 75 09: jne 0x50fc4d
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6ch], 1
        ; Exact mapped bytes 74 11: je 0x50fc5e
        __asm _emit 0x74
        __asm _emit 0x11
        push 7fh
        push 5c84b0h
        ; Exact mapped bytes E8 A7 4D 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fc5e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x50fc3b
        __asm _emit 0x75
        __asm _emit 0xd7
        push 582b80h
        mov edx, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 B7 B7 FE FF: call 0x4fb42a
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50fc8b
        __asm _emit 0x75
        __asm _emit 0x14
        push 81h
        push 5c84b0h
        ; Exact mapped bytes E8 7A 4D 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fc8b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x50fc64
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 3ch], eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x50fcd4
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        xor eax, eax
        ; Exact mapped bytes EB 1D: jmp 0x50fcf1
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 4], edx
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

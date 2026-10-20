// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053F790 .. +0x138 bytes.
extern "C" __declspec(naked) void FUN_0053f790_0053F790() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x53f7b3
        __asm _emit 0x75
        __asm _emit 0x11
        push 6ch
        push 6739a4h
        ; Exact mapped bytes E8 92 95 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f7b3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x53f79c
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x53f7d0
        __asm _emit 0x75
        __asm _emit 0x11
        push 6dh
        push 6739a4h
        ; Exact mapped bytes E8 75 95 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f7d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x53f7b9
        __asm _emit 0x75
        __asm _emit 0xe3
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x53f87d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 20 FF FF FF: call 0x53f712
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 08: jne 0x53f803
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x53f8bf
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 4
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 4]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 9C B2 68 00: call dword ptr [0x68b29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 3F: jne 0x53f878
        __asm _emit 0x75
        __asm _emit 0x3f
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 74 11: je 0x53f850
        __asm _emit 0x74
        __asm _emit 0x11
        push 7bh
        push 6739a4h
        ; Exact mapped bytes E8 F5 94 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f850
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x53f839
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 74 11: je 0x53f86d
        __asm _emit 0x74
        __asm _emit 0x11
        push 7ch
        push 6739a4h
        ; Exact mapped bytes E8 D8 94 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f86d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x53f856
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 47: jmp 0x53f8bf
        __asm _emit 0xeb
        __asm _emit 0x47
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes EB 42: jmp 0x53f8bf
        __asm _emit 0xeb
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 94h], 0
        ; Exact mapped bytes 75 14: jne 0x53f89d
        __asm _emit 0x75
        __asm _emit 0x14
        push 83h
        push 6739a4h
        ; Exact mapped bytes E8 A8 94 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f89d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x53f87d
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 94h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 B0 B9 68 00: call dword ptr [0x68b9b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
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

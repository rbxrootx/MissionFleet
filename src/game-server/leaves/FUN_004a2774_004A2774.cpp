// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A2774 .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_004a2774_004A2774() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 77 14: ja 0x4a2798
        __asm _emit 0x77
        __asm _emit 0x14
        push 0b2eh
        push 5cbe8ch
        ; Exact mapped bytes E8 6D 22 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a2798
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4a277e
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4a27b8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b2fh
        push 5cbe8ch
        ; Exact mapped bytes E8 4D 22 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a27b8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a279e
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x4a27e5
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b32h
        push 5cbe8ch
        ; Exact mapped bytes E8 20 22 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a27e5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x4a27be
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        and ecx, 4000h
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4a2812
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b33h
        push 5cbe8ch
        ; Exact mapped bytes E8 F3 21 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a2812
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x4a27eb
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4a283d
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b34h
        push 5cbe8ch
        ; Exact mapped bytes E8 C8 21 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a283d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4a2818
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x4a2864
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b35h
        push 5cbe8ch
        ; Exact mapped bytes E8 A1 21 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a2864
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4a2843
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        cmp ecx, 1
        ; Exact mapped bytes 75 14: jne 0x4a288c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b36h
        push 5cbe8ch
        ; Exact mapped bytes E8 79 21 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a288c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4a286a
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 A9 0A 00: call 0x54d23b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        push edx
        ; Exact mapped bytes FF 15 A0 24 5E 00: call dword ptr [0x5e24a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x4a28c1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 EB D4 02 00: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        or ah, 20h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 A9 0A 00: call 0x54d2a8
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], eax
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

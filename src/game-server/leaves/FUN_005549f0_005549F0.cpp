// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005549F0 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_005549f0_005549F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 33eh
        push 5cfa08h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 51 67 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 14: je 0x554a2c
        __asm _emit 0x74
        __asm _emit 0x14
        push 33fh
        push 5cfa08h
        ; Exact mapped bytes E8 D9 FF FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554a2c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x554a0f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 14: je 0x554a4f
        __asm _emit 0x74
        __asm _emit 0x14
        push 340h
        push 5cfa08h
        ; Exact mapped bytes E8 B6 FF FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554a4f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x554a32
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        add edx, 38h
        push edx
        push 1
        push 0
        ; Exact mapped bytes FF 15 8C 2A 5E 00: call dword ptr [0x5e2a8c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x554a78
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 12 8A FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x554a95
        __asm _emit 0x75
        __asm _emit 0x14
        push 345h
        push 5cfa08h
        ; Exact mapped bytes E8 70 FF FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554a95
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x554a78
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        add eax, 34h
        push eax
        push 0
        push 1012h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 38h]
        push edx
        ; Exact mapped bytes FF 15 90 2A 5E 00: call dword ptr [0x5e2a90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 43: je 0x554b02
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x554ae9
        __asm _emit 0x74
        __asm _emit 0x14
        push 34bh
        push 5cfa08h
        ; Exact mapped bytes E8 1C FF FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554ae9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x554abf
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 38h], 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 88 89 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x554b1f
        __asm _emit 0x75
        __asm _emit 0x14
        push 34fh
        push 5cfa08h
        ; Exact mapped bytes E8 E6 FE FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x554b1f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x554b02
        __asm _emit 0x75
        __asm _emit 0xdd
        push 351h
        push 5cfa08h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 28 66 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x66
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

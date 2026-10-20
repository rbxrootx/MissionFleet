// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562797 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_00562797_00562797() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1C: je 0x5627c5
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 14: jne 0x5627c5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c6h
        push 5ce898h
        ; Exact mapped bytes E8 40 22 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5627c5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x5627a3
        __asm _emit 0x75
        __asm _emit 0xd8
        push 0
        push 0ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 7E D6 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd6
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5627f0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c7h
        push 5ce898h
        ; Exact mapped bytes E8 15 22 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5627f0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x5627cb
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x562821
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 4D D6 F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd6
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x562821
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c9h
        push 5ce898h
        ; Exact mapped bytes E8 E4 21 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562821
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x5627f6
        __asm _emit 0x75
        __asm _emit 0xcf
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 45 B3 FE FF: call 0x54db7e
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax], 10h
        ; Exact mapped bytes 75 3B: jne 0x56287f
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp + 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        cmp edx, 3
        ; Exact mapped bytes 74 2E: je 0x56287f
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 9
        ; Exact mapped bytes 74 21: je 0x56287f
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        cmp eax, 2
        ; Exact mapped bytes 74 14: je 0x56287f
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d7h
        push 5ce898h
        ; Exact mapped bytes E8 86 21 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x21
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56287f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 B7: jne 0x56283c
        __asm _emit 0x75
        __asm _emit 0xb7
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 10h], ecx
        push 1
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B8 FC FF FF: call 0x562556
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], eax
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00502C14 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_00502c14_00502C14() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 74 32: je 0x502c5c
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 83 3D 08 6E 68 00 00: cmp dword ptr [0x686e08], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 29: jne 0x502c5c
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        push edx
        ; Exact mapped bytes FF 15 78 B6 68 00: call dword ptr [0x68b678]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 7
        ; Exact mapped bytes 74 14: je 0x502c5c
        __asm _emit 0x74
        __asm _emit 0x14
        push 5abh
        push 675764h
        ; Exact mapped bytes E8 E9 60 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502c5c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BC: jne 0x502c1e
        __asm _emit 0x75
        __asm _emit 0xbc
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 74 2F: je 0x502c9a
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 74 23: je 0x502c9a
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x502c94
        __asm _emit 0x75
        __asm _emit 0x14
        push 5aeh
        push 675764h
        ; Exact mapped bytes E8 B1 60 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502c94
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x502c77
        __asm _emit 0x75
        __asm _emit 0xdd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

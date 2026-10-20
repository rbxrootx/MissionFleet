// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519A29 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_00519a29_00519A29() {
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
        ; Exact mapped bytes 74 32: je 0x519a71
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 83 3D F0 E8 5D 00 00: cmp dword ptr [0x5de8f0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 29: jne 0x519a71
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        push edx
        ; Exact mapped bytes FF 15 6C 21 5E 00: call dword ptr [0x5e216c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 7
        ; Exact mapped bytes 74 14: je 0x519a71
        __asm _emit 0x74
        __asm _emit 0x14
        push 5abh
        push 5c8c2ch
        ; Exact mapped bytes E8 94 AF 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519a71
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 BC: jne 0x519a33
        __asm _emit 0x75
        __asm _emit 0xbc
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], 0
        ; Exact mapped bytes 74 2F: je 0x519aaf
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 74 23: je 0x519aaf
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x519aa9
        __asm _emit 0x75
        __asm _emit 0x14
        push 5aeh
        push 5c8c2ch
        ; Exact mapped bytes E8 5C AF 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519aa9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x519a8c
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

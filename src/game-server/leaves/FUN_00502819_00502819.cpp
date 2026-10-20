// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00502819 .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_00502819_00502819() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x502842
        __asm _emit 0x75
        __asm _emit 0x14
        push 286h
        push 5c6db0h
        ; Exact mapped bytes E8 C3 21 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502842
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x502825
        __asm _emit 0x75
        __asm _emit 0xdd
        push 5c6f24h
        ; Exact mapped bytes FF 15 3C 24 5E 00: call dword ptr [0x5e243c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x502870
        __asm _emit 0x75
        __asm _emit 0x14
        push 289h
        push 5c6db0h
        ; Exact mapped bytes E8 95 21 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502870
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x502856
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 0ch], 0
        push 5c6f30h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x5028a4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x5028b3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov dword ptr [ebp - 0ch], 0ffffffffh
        push 78h
        ; Exact mapped bytes FF 15 7C 23 5E 00: call dword ptr [0x5e237c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

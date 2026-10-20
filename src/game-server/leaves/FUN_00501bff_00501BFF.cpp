// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00501BFF .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_00501bff_00501BFF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x501c28
        __asm _emit 0x75
        __asm _emit 0x14
        push 1a7h
        push 5c6db0h
        ; Exact mapped bytes E8 DD 2D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x501c28
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x501c0b
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 FC 39 03 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 74 3F: je 0x501c83
        __asm _emit 0x74
        __asm _emit 0x3f
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 90 20 5E 00: call dword ptr [0x5e2090]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x501c7d
        __asm _emit 0x75
        __asm _emit 0x14
        push 1abh
        push 5c6db0h
        ; Exact mapped bytes E8 88 2D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x501c7d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C1: jne 0x501c44
        __asm _emit 0x75
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 3F: je 0x501ccb
        __asm _emit 0x74
        __asm _emit 0x3f
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 90 20 5E 00: call dword ptr [0x5e2090]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x501cc5
        __asm _emit 0x75
        __asm _emit 0x14
        push 1adh
        push 5c6db0h
        ; Exact mapped bytes E8 40 2D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x501cc5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C1: jne 0x501c8c
        __asm _emit 0x75
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

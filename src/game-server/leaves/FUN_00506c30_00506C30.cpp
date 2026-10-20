// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00506C30 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_00506c30_00506C30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x506c53
        __asm _emit 0x75
        __asm _emit 0x11
        push 1ch
        push 5c93c0h
        ; Exact mapped bytes E8 B2 DD 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506c53
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x506c3c
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x506c70
        __asm _emit 0x75
        __asm _emit 0x11
        push 1dh
        push 5c93c0h
        ; Exact mapped bytes E8 95 DD 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x506c70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x506c59
        __asm _emit 0x75
        __asm _emit 0xe3
        push 100h
        lea edx, [ebp - 100h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B5 3F FF FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x506c93
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 75: jmp 0x506d08
        __asm _emit 0xeb
        __asm _emit 0x75
        push 0ah
        lea ecx, [ebp - 100h]
        push ecx
        ; Exact mapped bytes E8 3F 63 F8 FF: call 0x48cfe0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x63
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 104h], eax
        cmp dword ptr [ebp - 104h], 0
        ; Exact mapped bytes 74 3A: je 0x506ced
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 104h]
        add edx, 1
        push edx
        ; Exact mapped bytes E8 6E 29 FA FF: call 0x4a9630
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x29
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        push 48h
        ; Exact mapped bytes 8B 15 B4 E8 5D 00: mov edx, dword ptr [0x5de8b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 78 23 5E 00: call dword ptr [0x5e2378]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 104h]
        mov byte ptr [eax], 0
        push 20h
        lea ecx, [ebp - 100h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 1ch
        push edx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

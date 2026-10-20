// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B88B0 .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_004b88b0_004B88B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4b88dd
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c274h
        push 0
        push 41h
        push 58c8e4h
        push 2
        ; Exact mapped bytes E8 5C 82 FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b88dd
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4b88b9
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        push eax
        ; Exact mapped bytes E8 7B 76 00 00: call 0x4bff70
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4b8903
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FD 00 00 00: jmp 0x4b8a00
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 5d1b68h
        ; Exact mapped bytes 75 09: jne 0x4b8915
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 19: jmp 0x4b892e
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp dword ptr [ebp - 4], 5d1b88h
        ; Exact mapped bytes 75 09: jne 0x4b8927
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x4b892e
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x4b8a00
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D CC EE 5D 00: mov ecx, dword ptr [0x5deecc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 1
        ; Exact mapped bytes 89 0D CC EE 5D 00: mov dword ptr [0x5deecc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0xee
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        and eax, 10ch
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4b8953
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x4b8a00
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx*4 + 5deed0h], 0
        ; Exact mapped bytes 75 5A: jne 0x4b89ba
        __asm _emit 0x75
        __asm _emit 0x5a
        push 5eh
        push 58c8e4h
        push 2
        push 1000h
        ; Exact mapped bytes E8 BD 18 FF FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx*4 + 5deed0h], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax*4 + 5deed0h], 0
        ; Exact mapped bytes 75 2D: jne 0x4b89ba
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 18h], 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 2
        ; Exact mapped bytes EB 2F: jmp 0x4b89e9
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax*4 + 5deed0h]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 1000h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 1000h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        or edx, 1102h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], edx
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

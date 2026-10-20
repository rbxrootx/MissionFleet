// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B1780 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_004b1780_004B1780() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 72 07: jb 0x4b1793
        __asm _emit 0x72
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x4b1829
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 8C 02 5E 00 00: cmp dword ptr [0x5e028c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x4b17aa
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 7F: jmp 0x4b1829
        __asm _emit 0xeb
        __asm _emit 0x7f
        push 19h
        ; Exact mapped bytes E8 3F 3A 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        xor edx, edx
        mov dl, byte ptr [ecx + 5e03a1h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x4b17e5
        __asm _emit 0x74
        __asm _emit 0x12
        push 19h
        ; Exact mapped bytes E8 B6 3A 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        ; Exact mapped bytes EB 44: jmp 0x4b1829
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 77 18: ja 0x4b180e
        __asm _emit 0x77
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        xor ecx, ecx
        mov cl, byte ptr [eax + 5e03a1h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x4b180e
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB D7: jmp 0x4b17e5
        __asm _emit 0xeb
        __asm _emit 0xd7
        push 19h
        ; Exact mapped bytes E8 7B 3A 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp - 4]
        and edx, 1
        sub eax, edx
        mov esp, ebp
        pop ebp
        ret
    }
}

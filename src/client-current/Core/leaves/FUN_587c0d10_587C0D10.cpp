// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C0D10 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_587c0d10_587C0D10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, 0dh
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 1bh
        ; Exact mapped bytes 0F 87 B3 00 00 00: ja 0x587c0de8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 587c0e0ch]
        ; Exact mapped bytes FF 24 8D F4 0D 7C 58: jmp dword ptr [ecx*4 + 0x587c0df4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 38h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x587c0dee
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 05 00 00: call 0x587c12e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x587c0dee
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 04 00 00: call 0x587c11f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 7B: jmp 0x587c0dee
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [eax + 88h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 12: je 0x587c0da0
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x587c0da7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 42: jmp 0x587c0dee
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ecx + 88h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 74 12: je 0x587c0ddc
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 3ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x587c0de3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 06: jmp 0x587c0dee
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

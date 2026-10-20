// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58782BC0 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_58782bc0_58782BC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 4]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1a0h]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 15: jne 0x58782c11
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1a4h]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x58782cf1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 1a0h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 1a4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 3e8h]
        cdq
        idiv dword ptr [ecx + 3ech]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [eax + edx*8 + 1a8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3e8h]
        cdq
        idiv dword ptr [ecx + 3ech]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        mov dword ptr [eax + edx*8 + 1ach], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3e8h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3e8h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2B: je 0x58782cb5
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 19ch]
        cmp ecx, dword ptr [eax + 3ech]
        ; Exact mapped bytes 7D 15: jge 0x58782cb3
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 19ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 19ch], eax
        ; Exact mapped bytes EB 21: jmp 0x58782cd6
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 19ch], 0
        ; Exact mapped bytes 7E 15: jle 0x58782cd6
        __asm _emit 0x7e
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 19ch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 19ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 3e8h]
        sub edx, dword ptr [ecx + 19ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 198h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

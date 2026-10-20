// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58562B30 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_58562b30_58562B30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 2C: je 0x58562b6e
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 38h], 64h
        ; Exact mapped bytes 7E 0B: jle 0x58562b56
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 11: jmp 0x58562b67
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 34h], 64h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 38h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 07: jmp 0x58562b73
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB 05: jmp 0x58562b73
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 64h
        mov esp, ebp
    }
}

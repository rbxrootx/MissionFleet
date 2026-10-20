// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856062 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58856062_58856062() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0ch]
        nop
        shr eax, 0ch
        test al, 1
        ; Exact mapped bytes 74 14: je 0x58856088
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ecx]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 0C: jne 0x58856088
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 0ch]
        add dword ptr [ecx], eax
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes E9 E8 00 00 00: jmp 0x58856176
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CFE0 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5887cfe0_5887CFE0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, 5a4dh
        ; Exact mapped bytes 66 39 08: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        ; Exact mapped bytes 75 1D: jne 0x5887d00d
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [eax + 3ch]
        add ecx, eax
        cmp dword ptr [ecx], 4550h
        ; Exact mapped bytes 75 10: jne 0x5887d00d
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, 10bh
        xor eax, eax
        ; Exact mapped bytes 66 39 51 18: cmp word ptr [ecx + 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x18
        sete al
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}

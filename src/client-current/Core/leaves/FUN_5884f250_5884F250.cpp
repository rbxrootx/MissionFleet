// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F250 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_5884f250_5884F250() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 04: jne 0x5884f261
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        add ecx, 5
        add eax, 5
        mov dl, byte ptr [eax]
        cmp dl, byte ptr [ecx]
        ; Exact mapped bytes 75 18: jne 0x5884f285
        __asm _emit 0x75
        __asm _emit 0x18
        test dl, dl
        ; Exact mapped bytes 74 EC: je 0x5884f25d
        __asm _emit 0x74
        __asm _emit 0xec
        mov dl, byte ptr [eax + 1]
        cmp dl, byte ptr [ecx + 1]
        ; Exact mapped bytes 75 0C: jne 0x5884f285
        __asm _emit 0x75
        __asm _emit 0x0c
        add eax, 2
        add ecx, 2
        test dl, dl
        ; Exact mapped bytes 75 E4: jne 0x5884f267
        __asm _emit 0x75
        __asm _emit 0xe4
        ; Exact mapped bytes EB D8: jmp 0x5884f25d
        __asm _emit 0xeb
        __asm _emit 0xd8
        sbb eax, eax
        or eax, 1
        pop ebp
        ret
    }
}

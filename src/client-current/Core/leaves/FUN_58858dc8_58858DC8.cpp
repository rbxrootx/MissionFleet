// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858DC8 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58858dc8_58858DC8() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3B 08 00 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, eax
        xor eax, eax
        test edx, edx
        push 0ch
        mov dword ptr [ecx], edx
        pop ecx
        cmove eax, ecx
        pop ebp
        ret
    }
}

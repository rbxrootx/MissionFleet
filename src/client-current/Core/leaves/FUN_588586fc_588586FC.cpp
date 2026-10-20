// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588586FC .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_588586fc_588586FC() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C7 47 01 00: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x01
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

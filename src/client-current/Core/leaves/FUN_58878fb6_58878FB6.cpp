// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58878FB6 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58878fb6_58878FB6() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 20h]
        or eax, dword ptr [ebp + 24h]
        push 0
        push eax
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 80 43 89 58: call dword ptr [0x58894380]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886FA0D .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5886fa0d_5886FA0D() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        lea eax, [ebp - 4]
        push eax
        push 2
        push 80h
        push 5896a000h
        ; Exact mapped bytes FF 15 68 43 89 58: call dword ptr [0x58894368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        setne al
        leave
        ret
    }
}

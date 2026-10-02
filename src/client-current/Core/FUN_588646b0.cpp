// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588646B0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_588646b0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 8C 97 96 58: mov dword ptr [0x5896978c], eax
        __asm _emit 0xa3
        __asm _emit 0x8c
        __asm _emit 0x97
        __asm _emit 0x96
        __asm _emit 0x58
        pop ebp
        ret
    }
}

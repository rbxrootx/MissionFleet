// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873ED0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_58873ed0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 40 9C 96 58: mov dword ptr [0x58969c40], eax
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        pop ebp
        ret
    }
}

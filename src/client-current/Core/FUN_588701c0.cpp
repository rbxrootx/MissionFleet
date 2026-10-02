// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588701C0 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_588701c0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        wait
        fnstsw word ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A4F0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_0040a4f0_0040A4F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 48 5C: movsx ecx, byte ptr [eax + 0x5c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x5c
        xor eax, eax
        cmp ecx, 2fh
        sete al
        mov esp, ebp
        pop ebp
        ret
    }
}

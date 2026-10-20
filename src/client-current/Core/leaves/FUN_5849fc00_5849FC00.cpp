// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849FC00 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5849fc00_5849FC00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 44h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 38h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov esp, ebp
        pop ebp
        ret
    }
}

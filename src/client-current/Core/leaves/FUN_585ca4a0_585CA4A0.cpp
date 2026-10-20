// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585CA4A0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_585ca4a0_585CA4A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0bfch]
        xor eax, 55555555h
        mov esp, ebp
        pop ebp
        ret
    }
}

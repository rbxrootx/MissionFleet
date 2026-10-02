// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584958D0 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_584958d0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 1ch]
        sub eax, dword ptr [ecx + 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}

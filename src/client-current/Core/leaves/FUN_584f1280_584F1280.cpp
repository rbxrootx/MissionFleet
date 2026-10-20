// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F1280 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_584f1280_584F1280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx]
        cdq
        mov ecx, 128h
        idiv ecx
        mov esp, ebp
        pop ebp
        ret
    }
}

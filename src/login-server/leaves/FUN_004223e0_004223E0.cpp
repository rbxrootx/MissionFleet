// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004223E0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_004223e0_004223E0() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [ecx + 4]
        add eax, esi
        test edx, edx
        ; Exact mapped bytes 7C 0D: jl 0x422401
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov esi, dword ptr [edx + esi]
        mov ecx, dword ptr [ecx + 8]
        mov ecx, dword ptr [esi + ecx]
        add ecx, edx
        add eax, ecx
        pop esi
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F021 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5884f021_5884F021() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 8]
        push esi
        mov eax, dword ptr [ecx]
        mov esi, dword ptr [ecx + 4]
        add eax, edx
        test esi, esi
        ; Exact mapped bytes 78 0D: js 0x5884f043
        __asm _emit 0x78
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 8]
        mov edx, dword ptr [esi + edx]
        mov ecx, dword ptr [edx + ecx]
        add ecx, esi
        add eax, ecx
        pop esi
        pop ebp
        ret
    }
}

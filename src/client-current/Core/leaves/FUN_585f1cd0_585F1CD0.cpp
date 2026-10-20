// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F1CD0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_585f1cd0_585F1CD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2b0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2b4h], 0fah
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2f8h], 0
        ; Exact mapped bytes 75 0D: jne 0x585f1d0a
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2fch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}

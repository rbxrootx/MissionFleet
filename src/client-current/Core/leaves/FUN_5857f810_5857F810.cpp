// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857F810 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_5857f810_5857F810() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x5857f834
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], 0fah
        mov esp, ebp
        pop ebp
        ret
    }
}

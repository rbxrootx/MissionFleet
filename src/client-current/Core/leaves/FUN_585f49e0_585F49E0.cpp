// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F49E0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_585f49e0_585F49E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 21aa0h], ecx
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 21ab0h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F11D0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_585f11d0_585F11D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        shl eax, 0dh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 65ch]
        mov eax, dword ptr [ebp + 0ch]
        lea eax, [edx + eax*8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

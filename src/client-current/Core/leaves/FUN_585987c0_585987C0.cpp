// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585987C0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_585987c0_585987C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        imul ecx, dword ptr [eax + 0d0h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        lea ecx, [eax + ecx*4]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

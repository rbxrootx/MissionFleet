// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E6DC0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_585e6dc0_585E6DC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + ecx + 10e4h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

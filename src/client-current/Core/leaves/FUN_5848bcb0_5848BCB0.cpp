// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848BCB0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5848bcb0_5848BCB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        div dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov eax, dword ptr [ecx + edx*4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

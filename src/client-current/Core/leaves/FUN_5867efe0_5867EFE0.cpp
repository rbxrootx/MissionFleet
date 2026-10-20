// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867EFE0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5867efe0_5867EFE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b4h]
        or edx, eax
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0b4h], dl
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

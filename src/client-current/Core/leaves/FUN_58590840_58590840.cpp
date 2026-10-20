// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58590840 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58590840_58590840() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 10704h], ecx
        mov dword ptr [eax + 10708h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

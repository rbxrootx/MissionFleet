// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D03C .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0040d03c_0040D03C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 0b0h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cc8h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + eax + 48h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

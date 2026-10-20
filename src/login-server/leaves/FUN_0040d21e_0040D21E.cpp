// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D21E .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_0040d21e_0040D21E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cc8h]
        mov edx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [edx]
        mov dword ptr [eax + ecx + 0a0h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

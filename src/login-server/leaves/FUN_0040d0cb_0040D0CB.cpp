// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D0CB .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0040d0cb_0040D0CB() {
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
        mov eax, dword ptr [eax + ecx + 4ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

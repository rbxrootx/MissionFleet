// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848D010 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5848d010_5848D010() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 0c6ch]
        mov eax, dword ptr [ebp + 0ch]
        movzx eax, word ptr [edx + eax*2]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

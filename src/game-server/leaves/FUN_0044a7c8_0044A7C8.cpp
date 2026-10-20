// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044A7C8 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_0044a7c8_0044A7C8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 118h], cl
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B110 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5850b110_5850B110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [eax + 40h]
        mov byte ptr [ebp - 1], cl
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [ebp + 8]
        mov byte ptr [edx + 40h], al
        movzx eax, byte ptr [ebp - 1]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

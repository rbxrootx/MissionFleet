// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780CD0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58780cd0_58780CD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0A: jne 0x58780cec
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

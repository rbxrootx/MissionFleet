// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869C850 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5869c850_5869C850() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 2c8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2cch], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2d0h], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

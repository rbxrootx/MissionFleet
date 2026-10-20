// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868F040 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_5868f040_5868F040() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 49ch]
        mov edx, dword ptr [eax + 4a0h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

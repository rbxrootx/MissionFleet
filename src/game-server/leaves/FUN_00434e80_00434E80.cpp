// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434E80 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_00434e80_00434E80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 12h
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov edx, dword ptr [ebp + 8]
        imul edx, ecx
        add eax, edx
        cdq
        mov ecx, 14h
        idiv ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

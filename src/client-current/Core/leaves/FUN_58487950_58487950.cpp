// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487950 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58487950_58487950() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58894ccch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 57 5A 3C 00: call 0x5884d3c3
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x5a
        __asm _emit 0x3c
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}

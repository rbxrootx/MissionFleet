// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587352B0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_587352b0_587352B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b4774h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E 00 00 00: call 0x58735340
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}

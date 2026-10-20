// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CE9B0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_584ce9b0_584CE9B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 100h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        shl edx, 8
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 20h]
        push ecx
        ; Exact mapped bytes E8 AA 57 2E 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x57
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

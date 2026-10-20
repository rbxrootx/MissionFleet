// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786F80 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58786f80_58786F80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes A1 F8 04 96 58: mov eax, dword ptr [0x589604f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x58
        xor eax, 55555555h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

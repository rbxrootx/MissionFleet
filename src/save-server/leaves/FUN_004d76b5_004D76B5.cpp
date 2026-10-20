// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D76B5 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_004d76b5_004D76B5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        push -1
        ; Exact mapped bytes E8 AB A3 05 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

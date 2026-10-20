// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503435 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00503435_00503435() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        push 3
        push 0
        ; Exact mapped bytes E8 29 E6 02 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589813EE .. +0x22 bytes.
extern "C" __declspec(naked) void Unwind_589813ee() {
    __asm {
        mov eax, dword ptr [ebp - 0a4h]
        and eax, 1
        ; Exact mapped bytes 0F 84 12 00 00 00: je 0x5898140f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 0a4h], 0fffffffeh
        lea ecx, [ebp - 9ch]
        ; Exact mapped bytes E9 71 6D DC FF: jmp 0x58748180
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x6d
        __asm _emit 0xdc
        __asm _emit 0xff
        ret
    }
}

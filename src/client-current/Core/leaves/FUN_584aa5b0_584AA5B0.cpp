// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA5B0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_584aa5b0_584AA5B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C0 F0 FF FF: call 0x584a9680
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 27 C7 FD FF: call 0x58486cf0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

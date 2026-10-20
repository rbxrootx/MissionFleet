// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9070 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_584a9070_584A9070() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 30 E2 FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 08 00 00: call 0x584a9950
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

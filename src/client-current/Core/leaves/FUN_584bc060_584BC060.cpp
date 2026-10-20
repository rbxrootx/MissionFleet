// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BC060 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_584bc060_584BC060() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 40 E9 FF FF: call 0x584ba9b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 77 AC FC FF: call 0x58486cf0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xac
        __asm _emit 0xfc
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

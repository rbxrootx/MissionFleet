// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005333DF .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_005333df_005333DF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        push 0
        ; Exact mapped bytes FF 15 38 BD 68 00: call dword ptr [0x68bd38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE 58 FB FF: call 0x4e8cbe
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x58
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

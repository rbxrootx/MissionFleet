// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005379AD .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_005379ad_005379AD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 FF FF FF: call 0x5378d5
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 00 21 5E 00: call dword ptr [0x5e2100]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B 94 FC FF: call 0x500e67
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

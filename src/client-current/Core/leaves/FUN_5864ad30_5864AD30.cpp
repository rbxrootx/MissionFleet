// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864AD30 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5864ad30_5864AD30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 50 75 FF FF: call 0x58642290
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        ; Exact mapped bytes E8 A7 BF E3 FF: call 0x58486cf0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbf
        __asm _emit 0xe3
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

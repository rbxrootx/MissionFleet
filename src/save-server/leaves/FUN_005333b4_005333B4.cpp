// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005333B4 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_005333b4_005333B4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 E9 E6 FF FF: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 38 BD 68 00: call dword ptr [0x68bd38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 58 FB FF: call 0x4e8cbe
        __asm _emit 0xe8
        __asm _emit 0xe5
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

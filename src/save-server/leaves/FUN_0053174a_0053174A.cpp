// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053174A .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_0053174a_0053174A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 53 03 00 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

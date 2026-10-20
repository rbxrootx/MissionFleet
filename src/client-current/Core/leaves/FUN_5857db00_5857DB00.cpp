// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857DB00 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_5857db00_5857DB00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6E 36 2D 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x36
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 0
        push 80013201h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 EE 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xee
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2100 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_584a2100_584A2100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 1]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        movzx eax, byte ptr [ebp - 2]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BC EE FF FF: call 0x584a0fe0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 0F 00 00: call 0x584a3040
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

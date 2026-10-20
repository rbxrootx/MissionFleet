// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520B70 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58520b70_58520B70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 90 E8 FF FF: call 0x5851f410
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 F9 FF FF: call 0x58520550
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

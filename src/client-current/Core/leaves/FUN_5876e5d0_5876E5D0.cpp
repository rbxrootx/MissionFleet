// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876E5D0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_5876e5d0_5876E5D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2f8h]
        mov dword ptr [ebp - 8], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EE 77 D1 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x77
        __asm _emit 0xd1
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

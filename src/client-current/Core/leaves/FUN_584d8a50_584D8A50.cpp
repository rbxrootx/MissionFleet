// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D8A50 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_584d8a50_584D8A50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF D4 FA FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd4
        __asm _emit 0xfa
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

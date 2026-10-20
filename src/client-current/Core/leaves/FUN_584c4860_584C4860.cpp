// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C4860 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_584c4860_584C4860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A2 10 FC FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x10
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

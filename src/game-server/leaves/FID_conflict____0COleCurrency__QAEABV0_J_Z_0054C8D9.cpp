// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054C8D9 .. +0x2B bytes.
extern "C" __declspec(naked) void FID_conflict____0COleCurrency__QAEABV0_J_Z_0054C8D9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C6 2B F5 FF: call 0x49f4b8
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2b
        __asm _emit 0xf5
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4D 22 F5 FF: call 0x49eb48
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x22
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

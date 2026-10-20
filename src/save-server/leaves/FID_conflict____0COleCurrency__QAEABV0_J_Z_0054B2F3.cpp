// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B2F3 .. +0x2B bytes.
extern "C" __declspec(naked) void FID_conflict____0COleCurrency__QAEABV0_J_Z_0054B2F3() {
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
        ; Exact mapped bytes E8 F6 02 F1 FF: call 0x45b602
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0xf1
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 53 FE F0 FF: call 0x45b168
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xf0
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

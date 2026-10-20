// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2D9A .. +0x28 bytes.
extern "C" __declspec(naked) void _GetSafeOwner_CWnd__SGPAV1_PAV1_PAPAUHWND_____Z_004D2D9A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 02 88 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 34 3E 02 00: call 0x4f6be4
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 F3 CA FF FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

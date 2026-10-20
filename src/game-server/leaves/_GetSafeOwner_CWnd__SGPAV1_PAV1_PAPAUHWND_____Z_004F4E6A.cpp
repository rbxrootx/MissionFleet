// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4E6A .. +0x28 bytes.
extern "C" __declspec(naked) void _GetSafeOwner_CWnd__SGPAV1_PAV1_PAPAUHWND_____Z_004F4E6A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 6C 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 04 8B 01 00: call 0x50d984
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 F3 CA FF FF: call 0x4f197f
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

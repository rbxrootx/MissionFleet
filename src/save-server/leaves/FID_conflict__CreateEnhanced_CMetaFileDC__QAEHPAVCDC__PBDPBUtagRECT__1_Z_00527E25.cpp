// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527E25 .. +0x31 bytes.
extern "C" __declspec(naked) void FID_conflict__CreateEnhanced_CMetaFileDC__QAEHPAVCDC__PBDPBUtagRECT__1_Z_00527E25() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 ED BE 00 00: call 0x533d2d
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 B0 B6 68 00: call dword ptr [0x68b6b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F7 DF FB FF: call 0x4e5e47
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

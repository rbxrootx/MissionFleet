// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053406B .. +0x31 bytes.
extern "C" __declspec(naked) void FID_conflict__CreateEnhanced_CMetaFileDC__QAEHPAVCDC__PBDPBUtagRECT__1_Z_0053406B() {
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
        ; Exact mapped bytes E8 4F 38 00 00: call 0x5378d5
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 48 20 5E 00: call dword ptr [0x5e2048]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 CD FC FF: call 0x500e67
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

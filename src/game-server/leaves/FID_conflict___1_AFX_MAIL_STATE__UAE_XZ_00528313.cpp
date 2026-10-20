// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528313 .. +0x32 bytes.
extern "C" __declspec(naked) void FID_conflict___1_AFX_MAIL_STATE__UAE_XZ_00528313() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 585e4ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 0D: je 0x528339
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 E4 20 5E 00: call dword ptr [0x5e20e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F 54 F6 FF: call 0x48d7c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x54
        __asm _emit 0xf6
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}

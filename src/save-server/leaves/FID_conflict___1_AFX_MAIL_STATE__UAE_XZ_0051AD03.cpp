// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051AD03 .. +0x32 bytes.
extern "C" __declspec(naked) void FID_conflict___1_AFX_MAIL_STATE__UAE_XZ_0051AD03() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 63901ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 0D: je 0x51ad29
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 30 B6 68 00: call dword ptr [0x68b630]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F F0 F2 FF: call 0x449db0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0xf2
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}

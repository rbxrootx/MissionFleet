// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9C30 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_584a9c30_584A9C30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 95 FF FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 E2 FD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BB F7 FF FF: call 0x584a9410
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

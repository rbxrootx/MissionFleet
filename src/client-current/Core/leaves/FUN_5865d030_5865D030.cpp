// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5865D030 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5865d030_5865D030() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 F1 FF FF: call 0x5865c1a0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x5865d058
        __asm _emit 0x74
        __asm _emit 0x11
        push 18ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 DF 3F 1D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x3f
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5855F6C0 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5855f6c0_5855F6C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 FB FF FF: call 0x5855f210
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x5855f6e8
        __asm _emit 0x74
        __asm _emit 0x11
        push 430h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 4F 19 2D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x19
        __asm _emit 0x2d
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

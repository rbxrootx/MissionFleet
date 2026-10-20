// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58741FB0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58741fb0_58741FB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 FE FF FF: call 0x58741dd0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x58741fd5
        __asm _emit 0x74
        __asm _emit 0x0e
        push 70h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 62 F0 0E 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xf0
        __asm _emit 0x0e
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

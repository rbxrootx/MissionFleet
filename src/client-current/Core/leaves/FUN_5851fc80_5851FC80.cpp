// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851FC80 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5851fc80_5851FC80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 FE FF FF: call 0x5851fb00
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x5851fca5
        __asm _emit 0x74
        __asm _emit 0x0e
        push 8
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 92 13 31 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x13
        __asm _emit 0x31
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

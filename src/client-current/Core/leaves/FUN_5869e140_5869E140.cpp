// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869E140 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5869e140_5869E140() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 FC FF FF: call 0x5869ddb0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x5869e168
        __asm _emit 0x74
        __asm _emit 0x11
        push 294h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 CF 2E 19 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x2e
        __asm _emit 0x19
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

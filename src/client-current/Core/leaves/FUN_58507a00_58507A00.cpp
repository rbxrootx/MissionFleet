// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507A00 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58507a00_58507A00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 F4 FF FF: call 0x58506e50
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x58507a25
        __asm _emit 0x74
        __asm _emit 0x0e
        push 48h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 12 96 32 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x96
        __asm _emit 0x32
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

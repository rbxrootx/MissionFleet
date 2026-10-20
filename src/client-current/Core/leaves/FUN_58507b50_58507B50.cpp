// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507B50 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_58507b50_58507B50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 68h
        ; Exact mapped bytes E8 4E FE FF FF: call 0x585079b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 14: je 0x58507b7e
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b0h
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 68h
        push ecx
        ; Exact mapped bytes E8 B9 94 32 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x94
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        sub eax, 68h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

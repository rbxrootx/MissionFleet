// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851DC40 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5851dc40_5851DC40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 50h
        ; Exact mapped bytes E8 BE FF FF FF: call 0x5851dc10
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 14: je 0x5851dc6e
        __asm _emit 0x74
        __asm _emit 0x14
        push 98h
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 50h
        push ecx
        ; Exact mapped bytes E8 C9 33 31 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x33
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        sub eax, 50h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

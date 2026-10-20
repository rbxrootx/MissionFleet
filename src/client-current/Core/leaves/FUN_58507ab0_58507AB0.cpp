// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507AB0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58507ab0_58507AB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 8
        ; Exact mapped bytes E8 BE FE FF FF: call 0x58507980
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x58507adb
        __asm _emit 0x74
        __asm _emit 0x11
        push 50h
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 8
        push ecx
        ; Exact mapped bytes E8 5C 95 32 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x95
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        sub eax, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

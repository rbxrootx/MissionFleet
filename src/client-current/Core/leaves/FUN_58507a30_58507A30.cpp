// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507A30 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58507a30_58507A30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 20h
        ; Exact mapped bytes E8 DE FE FF FF: call 0x58507920
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x58507a5b
        __asm _emit 0x74
        __asm _emit 0x11
        push 68h
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 20h
        push ecx
        ; Exact mapped bytes E8 DC 95 32 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x95
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        sub eax, 20h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

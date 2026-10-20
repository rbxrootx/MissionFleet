// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507A70 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58507a70_58507A70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 18h
        ; Exact mapped bytes E8 CE FE FF FF: call 0x58507950
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x58507a9b
        __asm _emit 0x74
        __asm _emit 0x11
        push 60h
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 18h
        push ecx
        ; Exact mapped bytes E8 9C 95 32 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x95
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        sub eax, 18h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00457F0E .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_00457f0e_00457F0E() {
    __asm {
        push ebp
        mov ebp, esp
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A4 FF FF FF: call 0x457ec0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x457f34
        __asm _emit 0x74
        __asm _emit 0x11
        push -1
        push 0
        push 0b1h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 05 37 0D 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x37
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF E9 07 00: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

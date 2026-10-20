// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58715900 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58715900_58715900() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0D: je 0x5871591a
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 06 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x06
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0B: jmp 0x58715925
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C 06 D7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 128h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

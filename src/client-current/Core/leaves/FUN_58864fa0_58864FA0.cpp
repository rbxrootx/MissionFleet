// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864FA0 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_58864fa0_58864FA0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        ; Exact mapped bytes 74 17: je 0x58864fc4
        __asm _emit 0x74
        __asm _emit 0x17
        sub eax, 1
        ; Exact mapped bytes 74 05: je 0x58864fb7
        __asm _emit 0x74
        __asm _emit 0x05
        sub eax, 1
        ; Exact mapped bytes 75 18: jne 0x58864fcf
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 B3 D4 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 22h
        pop ebp
        ret
        ; Exact mapped bytes E8 A6 D4 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 21h
        pop ebp
        ret
    }
}

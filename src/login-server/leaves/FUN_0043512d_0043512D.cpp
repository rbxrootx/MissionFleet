// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043512D .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_0043512d_0043512D() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 05: je 0x43513d
        __asm _emit 0x74
        __asm _emit 0x05
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes EB 05: jmp 0x435142
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 10h]
        push dword ptr [ecx]
        push 0f110h
        push 43d6e8h
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 68 FF FF FF: call 0x4350bd
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

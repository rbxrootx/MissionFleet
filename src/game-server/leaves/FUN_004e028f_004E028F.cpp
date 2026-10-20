// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E028F .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_004e028f_004E028F() {
    __asm {
        push ebp
        mov ebp, esp
        push 58e540h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 20 C4 FB FF: call 0x49c6c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x4e02bc
        __asm _emit 0x75
        __asm _emit 0x15
        push 58e928h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 0B C4 FB FF: call 0x49c6c0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4e02c8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4e02cd
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 80004002h
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A1C3 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5886a1c3_5886A1C3() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], 2
        ; Exact mapped bytes 74 04: je 0x5886a1d5
        __asm _emit 0x74
        __asm _emit 0x04
        xor al, al
        pop ebp
        ret
        push dword ptr [eax + 4]
        push dword ptr [eax]
        mov eax, dword ptr [ebp + 8]
        add eax, 100h
        push 10h
        push eax
        ; Exact mapped bytes E8 86 BD FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5886a1f5
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        pop ebp
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 D8 6D FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}

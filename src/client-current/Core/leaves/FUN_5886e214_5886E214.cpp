// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886E214 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5886e214_5886E214() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push 2
        ; Exact mapped bytes E8 40 BA FE FF: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 28: je 0x5886e24e
        __asm _emit 0x74
        __asm _emit 0x28
        push 1
        ; Exact mapped bytes E8 33 BA FE FF: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 17: jne 0x5886e24a
        __asm _emit 0x75
        __asm _emit 0x17
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B EA FF FF: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 BA CF 00 00: call 0x5887b1fb
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        pop ecx
        setne al
        pop ebp
        ret
        xor al, al
        pop ebp
        ret
        mov al, 1
        pop ebp
        ret
    }
}

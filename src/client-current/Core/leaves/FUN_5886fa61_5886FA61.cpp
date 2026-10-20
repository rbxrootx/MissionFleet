// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886FA61 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_5886fa61_5886FA61() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp byte ptr [ebp + 8], 0
        ; Exact mapped bytes 75 27: jne 0x5886fa93
        __asm _emit 0x75
        __asm _emit 0x27
        push esi
        mov esi, 58969bb8h
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 10: je 0x5886fa87
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [esi], -1
        ; Exact mapped bytes 74 08: je 0x5886fa84
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [esi]
        ; Exact mapped bytes FF 15 E8 42 89 58: call dword ptr [0x588942e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [esi], 0
        add esi, 4
        cmp esi, 58969c14h
        ; Exact mapped bytes 75 E0: jne 0x5886fa72
        __asm _emit 0x75
        __asm _emit 0xe0
        pop esi
        mov al, 1
        pop ebp
        ret
    }
}

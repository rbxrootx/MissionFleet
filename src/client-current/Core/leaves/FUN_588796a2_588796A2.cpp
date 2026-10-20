// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588796A2 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_588796a2_588796A2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 74 25: je 0x588796d4
        __asm _emit 0x74
        __asm _emit 0x25
        push ebx
        lea ebx, [esi + 0e00h]
        push edi
        mov edi, esi
        cmp esi, ebx
        ; Exact mapped bytes 74 0E: je 0x588796cb
        __asm _emit 0x74
        __asm _emit 0x0e
        push edi
        ; Exact mapped bytes FF 15 18 42 89 58: call dword ptr [0x58894218]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        add edi, 38h
        cmp edi, ebx
        ; Exact mapped bytes 75 F2: jne 0x588796bd
        __asm _emit 0x75
        __asm _emit 0xf2
        push esi
        ; Exact mapped bytes E8 3F 35 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop edi
        pop ebx
        pop esi
        pop ebp
        ret
    }
}

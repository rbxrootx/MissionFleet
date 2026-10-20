// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004351AE .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_004351ae_004351AE() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        cmp dword ptr [edi + 1ch], 0
        ; Exact mapped bytes 75 3B: jne 0x4351f5
        __asm _emit 0x75
        __asm _emit 0x3b
        mov esi, dword ptr [esp + 0ch]
        push dword ptr [esp + 10h]
        mov ecx, esi
        ; Exact mapped bytes E8 EB FD FF FF: call 0x434fb4
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 E1 C6 FF FF: call 0x4318b2
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4351dc
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 60 7B FF FF: call 0x42cd3a
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x4351f5
        __asm _emit 0xeb
        __asm _emit 0x19
        push dword ptr [edi + 1ch]
        mov esi, dword ptr [esi + 4]
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp dword ptr [esi + 1ch], eax
        ; Exact mapped bytes 74 08: je 0x4351f5
        __asm _emit 0x74
        __asm _emit 0x08
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 42 92 FF FF: call 0x42e437
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x92
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042213D .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_0042213d_0042213D() {
    __asm {
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [esi - 4], eax
        ; Exact mapped bytes E8 7B 03 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 6ch], ecx
        ; Exact mapped bytes E8 70 03 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 70h], ecx
        cmp dword ptr [edi], 0e06d7363h
        ; Exact mapped bytes 75 29: jne 0x42218a
        __asm _emit 0x75
        __asm _emit 0x29
        cmp dword ptr [edi + 10h], 3
        ; Exact mapped bytes 75 23: jne 0x42218a
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [edi + 14h], 19930520h
        ; Exact mapped bytes 75 1A: jne 0x42218a
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 14: jne 0x42218a
        __asm _emit 0x75
        __asm _emit 0x14
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 0E: je 0x42218a
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes E8 9D C5 FF FF: call 0x41e71e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push edi
        ; Exact mapped bytes E8 F1 01 00 00: call 0x422379
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ret
    }
}

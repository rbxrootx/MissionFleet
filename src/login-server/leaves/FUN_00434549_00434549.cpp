// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434549 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00434549_00434549() {
    __asm {
        mov eax, 43abe3h
        ; Exact mapped bytes E8 B5 B0 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        and dword ptr [ebp - 4], 0
        cmp dword ptr [esi + 20h], 0
        ; Exact mapped bytes 74 0B: je 0x43456f
        __asm _emit 0x74
        __asm _emit 0x0b
        test byte ptr [esi + 14h], 2
        ; Exact mapped bytes 75 05: jne 0x43456f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 62 00 00 00: call 0x4345d1
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 19 00 00 00: call 0x43458f
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [esi + 10h]
        ; Exact mapped bytes E8 29 96 FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}

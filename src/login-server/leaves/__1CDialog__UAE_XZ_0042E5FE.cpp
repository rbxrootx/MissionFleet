// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E5FE .. +0x3E bytes.
extern "C" __declspec(naked) void __1CDialog__UAE_XZ_0042E5FE() {
    __asm {
        mov eax, 43a830h
        ; Exact mapped bytes E8 00 10 FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43d81ch
        and dword ptr [ebp - 4], 0
        cmp dword ptr [esi + 1ch], 0
        ; Exact mapped bytes 74 05: je 0x42e624
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 E4 14 00 00: call 0x42fb08
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 1B 13 00 00: call 0x42f94a
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
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

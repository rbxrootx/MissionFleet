// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043539C .. +0x4C bytes.
extern "C" __declspec(naked) void __1CMemFile__UAE_XZ_0043539C() {
    __asm {
        mov eax, 43b068h
        ; Exact mapped bytes E8 62 A2 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43efc0h
        xor edi, edi
        cmp dword ptr [esi + 20h], edi
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes 74 05: je 0x4353c3
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 C0 01 00 00: call 0x435583
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 1ch], edi
        ; Exact mapped bytes E8 B2 DB FF FF: call 0x432f8c
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
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

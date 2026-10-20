// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432F8C .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_00432f8c_00432F8C() {
    __asm {
        mov eax, 43b123h
        ; Exact mapped bytes E8 72 C6 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43f134h
        cmp dword ptr [esi + 4], -1
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 0B: je 0x432fbb
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 74 05: je 0x432fbb
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 A9 02 00 00: call 0x433264
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and byte ptr [ebp - 4], 0
        lea ecx, [esi + 0ch]
        ; Exact mapped bytes E8 E4 AB FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xab
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

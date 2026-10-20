// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A7560 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_100a7560_100A7560() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 20c0h]
        cmp eax, -1
        ; Exact mapped bytes 74 24: je 0x100a7592
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push eax
        mov eax, dword ptr [esi + 648h]
        push eax
        push 8001020eh
        ; Exact mapped bytes E8 C4 49 0C 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x49
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        ret
    }
}

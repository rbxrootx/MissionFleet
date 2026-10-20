// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E5B4 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_5882e5b4_5882E5B4() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 4B 00 00 00: call 0x5882e607
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 58480000h
        mov dword ptr [esi], 38h
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 0ch], 0e00h
        mov dword ptr [esi + 10h], 588be838h
        ; Exact mapped bytes E8 ED 1E F5 FF: call 0x587804d0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x1e
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 79 1C: jns 0x5882e603
        __asm _emit 0x79
        __asm _emit 0x1c
        ; Exact mapped bytes FF 15 94 43 89 58: call dword ptr [0x58894394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x5882e5fc
        __asm _emit 0x74
        __asm _emit 0x0b
        push 588be848h
        ; Exact mapped bytes FF 15 98 43 89 58: call dword ptr [0x58894398]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes C6 05 90 5E 96 58 01: mov byte ptr [0x58965e90], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        mov eax, esi
        pop esi
        ret
    }
}

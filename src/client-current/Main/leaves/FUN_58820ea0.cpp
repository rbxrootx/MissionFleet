// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58820EA0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_58820ea0() {
    __asm {
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 4D 89 02 00: call 0x58849800
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, esi
        ; Exact mapped bytes 74 09: je 0x58820ec0
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 30h]
        push esi
        ; Exact mapped bytes E8 60 99 02 00: call 0x5884a820
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esi + 58h], 0dch
        ; Exact mapped bytes E8 92 F6 FF FF: call 0x58820560
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 05: jne 0x58820edc
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 66 83 4E 24 04: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0e1ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 100h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        ret
    }
}

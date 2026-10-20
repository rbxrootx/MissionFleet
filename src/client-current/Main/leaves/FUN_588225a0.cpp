// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588225A0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_588225a0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 00 F3 FF: call 0x58752680
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp eax, esi
        ; Exact mapped bytes 74 09: je 0x588225bb
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 30h]
        push esi
        ; Exact mapped bytes E8 95 06 F3 FF: call 0x58752c50
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0xff
        push 0
        push 0
        mov ecx, esi
        mov dword ptr [esi + 58h], 0dch
        ; Exact mapped bytes E8 A3 F6 FF FF: call 0x58821c70
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 05: jne 0x588225da
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
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e1ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ret
    }
}

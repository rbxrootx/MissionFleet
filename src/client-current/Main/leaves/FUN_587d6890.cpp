// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D6890 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_587d6890() {
    __asm {
        push esi
        mov esi, ecx
        movzx eax, word ptr [esi + 60h]
        ; Exact mapped bytes 66 8B 96 54 0D 00 00: mov dx, word ptr [esi + 0xd54]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0a9h
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 75 15: jne 0x587d68bd
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, 0ff10h
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        ; Exact mapped bytes 66 83 CA 10: or dx, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 96 54 0D 00 00: mov word ptr [esi + 0xd54], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x587d68e0
        __asm _emit 0xeb
        __asm _emit 0x23
        and eax, 0f00h
        mov ecx, 1000h
        ; Exact mapped bytes 66 0B C1: or ax, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc1
        mov ecx, 0ff10h
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 86 54 0D 00 00: mov word ptr [esi + 0xd54], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esi + 0a4h], eax
        mov dword ptr [esi + 0ach], eax
        mov dword ptr [esi + 0b0h], eax
        mov dword ptr [esi + 348h], eax
        mov dword ptr [esi + 34ch], eax
        mov dword ptr [esi + 47ch], eax
        mov dword ptr [esi + 480h], eax
        mov dword ptr [esi + 0d84h], eax
        mov dword ptr [esi + 0d88h], eax
        mov dword ptr [esi + 0d8ch], eax
        mov dword ptr [esi + 0d90h], eax
        mov dword ptr [esi + 0d94h], eax
        mov dword ptr [esi + 0d98h], eax
        mov dword ptr [esi + 0d9ch], eax
        mov dword ptr [esi + 0da4h], eax
        mov dword ptr [esi + 0da0h], eax
        ; Exact mapped bytes 89 35 80 45 A2 58: mov dword ptr [0x58a24580], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 04: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x04
        mov dword ptr [esi + 0e04h], eax
        ; Exact mapped bytes 8B 15 84 45 A2 58: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A3 5C 45 A2 58: mov dword ptr [0x58a2455c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edx + 30h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 18h]
        push 1
        push 66h
        push esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, esi
        ; Exact mapped bytes E8 AA FC FF FF: call 0x587d6630
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ecx, esi
        pop esi
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
    }
}

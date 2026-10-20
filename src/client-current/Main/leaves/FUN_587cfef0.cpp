// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CFEF0 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_587cfef0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 89 35 80 45 A2 58: mov dword ptr [0x58a24580], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
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
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        mov eax, 0edffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 0d00h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 0ac0h], 0
        ; Exact mapped bytes 8B 15 84 45 A2 58: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
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
        lea eax, [esi + 0abch]
        push eax
        push 0
        push esi
        push 587cfe50h
        push 0
        push 0
        ; Exact mapped bytes FF 15 30 C1 98 58: call dword ptr [0x5898c130]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push 2
        push eax
        mov dword ptr [esi + 0ab8h], eax
        ; Exact mapped bytes FF 15 B4 C1 98 58: call dword ptr [0x5898c1b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        pop esi
        ret
    }
}

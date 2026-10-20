// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885CF90 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_5885cf90() {
    __asm {
        push esi
        push edi
        mov edx, dword ptr [ecx + 0f8h]
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 10ch]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 110h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [edx + 50h], eax
        movzx edx, word ptr [ecx + 24h]
        mov esi, 0fffdh
        ; Exact mapped bytes 66 23 D6: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd6
        mov esi, eax
        and esi, 1
        add esi, esi
        ; Exact mapped bytes 66 0B D6: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd6
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 71 24: mov si, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x24
        movzx edx, dx
        ; Exact mapped bytes 66 83 E2 02: and dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x02
        mov edi, 0fffbh
        ; Exact mapped bytes 66 23 F7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xf7
        ; Exact mapped bytes 66 03 D2: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 66 0B D6: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd6
        pop edi
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov dword ptr [ecx + 120h], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

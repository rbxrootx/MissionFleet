// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C7D30 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_587c7d30() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov esi, ecx
        movzx ebx, word ptr [esi + 24h]
        ; Exact mapped bytes 66 C1 EB 02: shr bx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0x02
        mov dword ptr [esi + 0bch], eax
        mov dword ptr [esi + 50h], 0
        ; Exact mapped bytes 66 83 4E 24 04: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 0bch]
        and ebx, 1
        cmp ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 74 17: je 0x587c7d7a
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 0bch]
        cmp ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes 75 E9: jne 0x587c7d63
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and bl, 1
        ; Exact mapped bytes 66 0F B6 D3: movzx dx, bl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd3
        ; Exact mapped bytes 66 03 D2: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd2
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 03 D2: add dx, dx
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0xd2
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 50h], 40000000h
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

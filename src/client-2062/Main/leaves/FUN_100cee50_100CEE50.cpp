// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100CEE50 .. +0x114 bytes.
extern "C" __declspec(naked) void FUN_100cee50_100CEE50() {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ebx, 2
        push edi
        mov eax, 3
        ; Exact mapped bytes 66 83 BE 14 02 00 00 04: cmp word ptr [esi + 0x214], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        mov dword ptr [esi + 21ch], ebx
        ; Exact mapped bytes 75 08: jne 0x100cee78
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esi + 220h], ebx
        ; Exact mapped bytes EB 06: jmp 0x100cee7e
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esi + 220h], eax
        mov ecx, dword ptr [esi + 0b0h]
        push ebx
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 0b0h]
        mov dword ptr [edx + 54h], eax
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 84 08 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4h]
        push 30h
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 0b4h]
        mov dword ptr [ecx + 54h], 80h
        mov ecx, dword ptr [esi + 0b4h]
        ; Exact mapped bytes E8 61 08 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 C0 58 1C 10: mov eax, dword ptr [0x101c58c0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor dl, dl
        mov byte ptr [esp + 0ch], dl
        mov edi, 20h
        mov ecx, dword ptr [eax + 30h]
        add ecx, 83ch
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x100ceeec
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 60h]
        shr eax, 4
        xor al, 0aah
        cmp al, dl
        ; Exact mapped bytes 76 02: jbe 0x100ceeec
        __asm _emit 0x76
        __asm _emit 0x02
        mov dl, al
        add ecx, 4
        dec edi
        ; Exact mapped bytes 75 E6: jne 0x100ceed8
        __asm _emit 0x75
        __asm _emit 0xe6
        mov ecx, dword ptr [esi + 0c0h]
        mov byte ptr [esp + 0ch], dl
        mov edi, dword ptr [esp + 0ch]
        push 1
        mov dword ptr [ecx + 50h], 1
        mov edx, dword ptr [esi + 0c0h]
        and edi, 0ffh
        mov dword ptr [edx + 54h], edi
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 FD 07 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        push 78h
        mov dword ptr [eax + 50h], edi
        mov ecx, dword ptr [esi + 0c4h]
        mov dword ptr [ecx + 54h], 78h
        mov ecx, dword ptr [esi + 0c4h]
        ; Exact mapped bytes E8 DA 07 03 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [esi + 1a0h]
        mov edx, ebx
        mov esi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100cef53
        __asm _emit 0x75
        __asm _emit 0xf4
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}

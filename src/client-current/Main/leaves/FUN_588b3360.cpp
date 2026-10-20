// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B3360 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_588b3360() {
    __asm {
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [eax + 170h], 2fh
        mov esi, ecx
        ; Exact mapped bytes 7E 16: jle 0x588b338a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], edi
        ; Exact mapped bytes 74 0E: je 0x588b338a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes EB 02: jmp 0x588b338c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 F8 45 05 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 2fh
        ; Exact mapped bytes 7E 16: jle 0x588b33bc
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 194h], edi
        ; Exact mapped bytes 74 0E: je 0x588b33bc
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes EB 02: jmp 0x588b33be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 0e8h], edi
        mov dword ptr [esi + 104h], edi
        mov dword ptr [esi + 0ech], edi
        mov dword ptr [esi + 108h], edi
        mov dword ptr [esi + 0f0h], edi
        mov dword ptr [esi + 10ch], edi
        mov dword ptr [esi + 0f4h], edi
        mov dword ptr [esi + 110h], edi
        mov dword ptr [esi + 0f8h], edi
        mov dword ptr [esi + 114h], edi
        mov dword ptr [esi + 0fch], edi
        mov dword ptr [esi + 118h], edi
        mov dword ptr [esi + 100h], edi
        mov dword ptr [esi + 11ch], edi
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 0e4ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov edx, dword ptr [esi + 0d8h]
        mov eax, 400h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0d4h]
        mov dword ptr [esi + 124h], edi
        mov dword ptr [esi + 120h], edi
        pop edi
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 54h], edx
        pop esi
        ret
    }
}

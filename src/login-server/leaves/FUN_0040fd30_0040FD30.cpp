// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FD30 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_0040fd30_0040FD30() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov eax, 8000h
        xor ebx, ebx
        push edi
        ; Exact mapped bytes 66 89 86 C4 00 00 00: mov word ptr [esi + 0xc4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E C6 00 00 00: mov word ptr [esi + 0xc6], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], 43d424h
        mov dword ptr [esi + 4], 0ffffffffh
        mov dword ptr [esi + 8], 1
        push eax
        mov dword ptr [esi + 20h], ebx
        mov dword ptr [esi + 24h], ebx
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 2ch], ebx
        mov dword ptr [esi + 30h], ebx
        mov dword ptr [esi + 3ch], ebx
        mov dword ptr [esi + 40h], ebx
        mov dword ptr [esi + 38h], eax
        ; Exact mapped bytes E8 70 DB 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, dword ptr [esp + 14h]
        add esp, 4
        mov dword ptr [esi + 34h], eax
        mov eax, dword ptr [esp + 14h]
        lea ecx, [esp + 14h]
        mov byte ptr [esi + 6ch], bl
        push ecx
        mov dword ptr [esi + 44h], eax
        mov dword ptr [esi + 48h], edi
        mov dword ptr [esi + 4ch], ebx
        mov dword ptr [esi + 54h], ebx
        mov dword ptr [esi + 58h], ebx
        ; Exact mapped bytes E8 7C CE 01 00: call 0x42cc22
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [esi + 5ch], edx
        ; Exact mapped bytes FF 15 80 C5 43 00: call dword ptr [0x43c580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        cmp edi, ebx
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], eax
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 50h], ebx
        ; Exact mapped bytes 74 2D: je 0x40fdf4
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [edi + 40h]
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 20h]
        mov dword ptr [esi + 0b0h], eax
        mov dword ptr [esi + 0b8h], ecx
        mov dword ptr [esi + 0bch], edx
        ; Exact mapped bytes 66 C7 86 C0 00 00 00 01 00: mov word ptr [esi + 0xc0], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E C2 00 00 00: mov word ptr [esi + 0xc2], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 800h
        mov dword ptr [esi + 0ch], 1
        mov dword ptr [esi + 14h], ebx
        mov dword ptr [esi + 18h], 100h
        ; Exact mapped bytes E8 DD DA 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2ch]
        mov dword ptr [esi + 1ch], eax
        mov eax, dword ptr [esp + 28h]
        add esp, 4
        mov dword ptr [esi + 0d4h], eax
        mov dword ptr [esi + 10h], ebx
        mov dword ptr [esi + 0c8h], ebx
        mov dword ptr [esi + 0cch], ebx
        mov dword ptr [esi + 0e0h], ecx
        mov dword ptr [esi + 0d0h], ebx
        mov dword ptr [esi + 0d8h], ebx
        mov dword ptr [esi + 0dch], ebx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}

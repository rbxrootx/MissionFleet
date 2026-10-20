// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014650 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_10014650_10014650() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        push 40000000h
        mov eax, dword ptr [ecx]
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi + 6ch], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 70h], eax
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 64h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 68h], edx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 F9 66 05 00: call 0x1006ad80
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        mov ecx, dword ptr [esi + 64h]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 3b4h]
        mov dword ptr [esi + 0ach], 20h
        mov dword ptr [esi + 3b8h], 0
        ; Exact mapped bytes E8 22 A6 0E 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [esi + 0b0h]
        mov edx, 20h
        mov eax, dword ptr [ecx]
        add ecx, 4
        or byte ptr [eax + 24h], 1
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100146b9
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi + 50h]
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x10014701
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 64h]
        cmp edx, eax
        ; Exact mapped bytes 75 0A: jne 0x100146e0
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 68h]
        cmp eax, ecx
        ; Exact mapped bytes 74 21: je 0x10014701
        __asm _emit 0x74
        __asm _emit 0x21
        mov esi, dword ptr [esi + 3b4h]
        mov dword ptr [esi + 28h], 0
        mov dword ptr [esi + 84h], 100h
        mov dword ptr [esi + 8ch], 40000000h
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

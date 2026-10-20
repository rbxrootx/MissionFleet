// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029730 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_10029730_10029730() {
    __asm {
        push -1
        push 1016dac8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 1ch]
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov ecx, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 20h]
        push edi
        push edi
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 20h], esi
        ; Exact mapped bytes E8 43 52 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x52
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        mov dword ptr [esi], 101751f8h
        cmp eax, edi
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x100297aa
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [esi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 40h]
        mov dword ptr [esp + 14h], edi
        cmp ecx, edi
        mov dword ptr [esi], 1017568ch
        ; Exact mapped bytes 66 C7 46 26 FF FF: mov word ptr [esi + 0x26], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 06: je 0x100297c7
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 D9 57 0D 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, edi
        ; Exact mapped bytes 74 06: je 0x100297d4
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 2C 57 0D 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [esi + 58h], edi
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

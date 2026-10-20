// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883061B .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_5883061b_5883061B() {
    __asm {
        push 4
        mov eax, 5889278fh
        ; Exact mapped bytes E8 11 1F 00 00: call 0x58832538
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        lea ecx, [ebp - 10h]
        push esi
        ; Exact mapped bytes E8 F4 FD FF FF: call 0x58830426
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 3D 14 62 96 58: mov edi, dword ptr [0x58966214]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x62
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4], esi
        test edi, edi
        ; Exact mapped bytes 75 42: jne 0x58830681
        __asm _emit 0x75
        __asm _emit 0x42
        push esi
        ; Exact mapped bytes E8 3A 01 00 00: call 0x5883077f
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        push edi
        ; Exact mapped bytes E8 55 01 00 00: call 0x588307a2
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        push 588c1a04h
        lea ecx, [edi + 18h]
        mov dword ptr [edi + 10h], 3fh
        ; Exact mapped bytes E8 1A FF FF FF: call 0x5883057d
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        mov esi, dword ptr [ecx + 4]
        mov ecx, esi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 89 3D 08 62 96 58: mov dword ptr [0x58966208], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x62
        __asm _emit 0x96
        __asm _emit 0x58
        nop
        ; Exact mapped bytes 89 3D EC 61 96 58: mov dword ptr [0x589661ec], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x61
        __asm _emit 0x96
        __asm _emit 0x58
        cmp byte ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x58830698
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [edi]
        mov esi, dword ptr [eax + 4]
        mov ecx, esi
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DE FD FF FF: call 0x5883047e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, edi
        ; Exact mapped bytes E8 6E 1E 00 00: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}

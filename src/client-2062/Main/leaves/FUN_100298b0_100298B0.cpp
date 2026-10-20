// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100298B0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_100298b0_100298B0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esi + 58h], eax
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x100298ef
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
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 5ch], ecx
        ; Exact mapped bytes 8B 3D D4 92 1C 10: mov edi, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 F5 55 0D 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x55
        __asm _emit 0x0d
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 8D 56 0D 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

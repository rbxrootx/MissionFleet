// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004F530 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_1004f530_1004F530() {
    __asm {
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 10h]
        push 40h
        push 0
        push 0
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 61 F4 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [esi], 101751f8h
        test eax, eax
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x1004f590
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
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov dword ptr [esi], 10175bb8h
        and ecx, 0e5ffh
        mov dword ptr [esi + 58h], 0
        or ch, 5
        mov dword ptr [esi + 50h], 0
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

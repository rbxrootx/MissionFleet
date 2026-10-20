// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000D7F0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_1000d7f0_1000D7F0() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 14h]
        push eax
        mov eax, dword ptr [esp + 0ch]
        push 0
        push 0
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 9E 11 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x11
        __asm _emit 0x0f
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [esi], 1017523ch
        test eax, eax
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 74 29: je 0x1000d84c
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        add eax, 18h
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
        mov dword ptr [esi], 101752c4h
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

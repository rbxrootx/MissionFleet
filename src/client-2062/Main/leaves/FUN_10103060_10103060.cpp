// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103060 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_10103060_10103060() {
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
        ; Exact mapped bytes E8 2E B9 FF FF: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 0ch]
        mov dword ptr [esi], 101751f8h
        test eax, eax
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x101030c3
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
        mov dword ptr [esi], 101767b4h
        mov dword ptr [esi + 50h], 1
        mov dword ptr [esi + 58h], 5
        mov dword ptr [esi + 5ch], 3b9aca00h
        mov dword ptr [esi + 60h], 2
        mov dword ptr [esi + 68h], 0
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1310 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_100f1310_100F1310() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edx, edx
        lea edi, [esi + 83ch]
        mov ecx, 20h
        xor eax, eax
        mov dword ptr [esi], 101765dch
        mov dword ptr [esi + 0b6ch], edx
        mov dword ptr [esi + 0b70h], edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 0b0h], edx
        mov edx, dword ptr [esp + 0ch]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 DD 04 00 00: call 0x100f1830
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

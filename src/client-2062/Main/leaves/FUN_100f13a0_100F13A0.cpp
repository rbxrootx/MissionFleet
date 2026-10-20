// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F13A0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_100f13a0_100F13A0() {
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
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 0ch]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esi + 0b0h], edx
        ; Exact mapped bytes E8 41 01 00 00: call 0x100f1520
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

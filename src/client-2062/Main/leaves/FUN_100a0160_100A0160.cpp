// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A0160 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_100a0160_100A0160() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        mov esi, ecx
        mov eax, edi
        mov ecx, dword ptr [esi + ebx*4 + 9d4h]
        xor eax, 0aah
        push eax
        ; Exact mapped bytes E8 9F F5 05 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf5
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [esi + ebx*4 + 838h], edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

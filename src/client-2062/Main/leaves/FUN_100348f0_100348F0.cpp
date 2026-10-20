// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100348F0 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_100348f0_100348F0() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 1ch]
        push edi
        mov edi, dword ptr [esp + 18h]
        push eax
        mov eax, dword ptr [esp + 14h]
        push ecx
        push edx
        push edi
        push ebx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 96 A0 0C 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        lea ecx, [esi + 50h]
        xor eax, eax
        mov dword ptr [esi], 10175838h
        mov byte ptr [ecx], al
        mov edx, dword ptr [esi + 28h]
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi + 78h], edi
        mov dword ptr [esi + 80h], eax
        mov dword ptr [esi + 7ch], eax
        mov dword ptr [esi + 74h], ebx
        mov dword ptr [esi + 84h], edx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

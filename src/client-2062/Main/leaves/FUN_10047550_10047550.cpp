// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10047550 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_10047550_10047550() {
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
        ; Exact mapped bytes E8 36 74 0B 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x74
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, 1
        mov edx, dword ptr [esi + 4]
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], eax
        mov eax, dword ptr [esi + 8]
        or byte ptr [esi + 24h], 20h
        xor ecx, ecx
        mov dword ptr [esi + 70h], edi
        lea eax, [eax + eax*4]
        mov dword ptr [esi], 10175a7ch
        mov dword ptr [esi + 5ch], ecx
        mov dword ptr [esi + 68h], 2
        lea eax, [eax + eax*4]
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 54h], edx
        mov dword ptr [esi + 74h], ecx
        lea eax, [eax + eax*4]
        mov dword ptr [esi + 78h], ecx
        shl eax, 3
        mov dword ptr [esi + 58h], eax
        or eax, 0ffffffffh
        mov dword ptr [esi + 7ch], eax
        mov dword ptr [esi + 80h], eax
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

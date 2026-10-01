// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58907FD0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58907fd0() {
    __asm {
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 14h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push esi
        push edi
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 20h]
        push edi
        push ebx
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 28h]
        push edx
        mov edx, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F7 96 E2 FF: call 0x58731700
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x96
        __asm _emit 0xe2
        __asm _emit 0xff
        xor eax, eax
        mov dword ptr [esi + 70h], edi
        mov dword ptr [esi + 78h], eax
        mov dword ptr [esi + 7ch], eax
        mov dword ptr [esi + 80h], eax
        mov dword ptr [esi + 84h], eax
        mov dword ptr [esi + 88h], eax
        mov dword ptr [esi + 74h], eax
        pop edi
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi], 589a29cch
        mov dword ptr [esi + 8ch], 0ffffh
        mov eax, esi
        pop esi
        pop ebx
        ret 24h
    }
}

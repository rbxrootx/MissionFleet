// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10023580 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_10023580_10023580() {
    __asm {
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 18h]
        push eax
        mov eax, dword ptr [esp + 14h]
        push ecx
        mov ecx, dword ptr [esp + 14h]
        push edx
        mov edx, dword ptr [esp + 14h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 08 B4 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0x00
        mov al, byte ptr [esp + 1ch]
        or byte ptr [esi + 24h], 20h
        mov cl, byte ptr [esp + 1ch]
        mov byte ptr [esi + 58h], al
        xor eax, eax
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], eax
        mov byte ptr [esi + 68h], cl
        mov dword ptr [esi + 6ch], eax
        mov dword ptr [esi + 70h], eax
        mov dword ptr [esi + 74h], eax
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 7ch], eax
        mov dword ptr [esi + 80h], eax
        mov dword ptr [esi + 84h], eax
        mov dword ptr [esi], 1017562ch
        mov dword ptr [esi + 78h], 2710h
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

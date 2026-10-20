// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CC8B0 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_584cc8b0_584CC8B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push -1
        movzx eax, word ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 0D 0A 00: call 0x5856d600
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 58898680h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 74h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

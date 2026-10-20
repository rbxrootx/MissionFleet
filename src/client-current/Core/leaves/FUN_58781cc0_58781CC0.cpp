// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781CC0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_58781cc0_58781CC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 06 D0 FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x06
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 588b5ddch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70h], 4bh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}

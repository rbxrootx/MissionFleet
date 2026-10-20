// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58482470 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_58482470_58482470() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 40h
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 24 33 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x24
        __asm _emit 0x33
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 58894c3ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 50h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 24h]
        mov dword ptr [ecx + 64h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 28h]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 10h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58482270 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_58482270() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 00 00 00: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58894c00h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 50h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 100h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret 18h
    }
}

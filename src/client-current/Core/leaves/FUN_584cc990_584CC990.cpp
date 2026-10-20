// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CC990 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_584cc990_584CC990() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 02: jne 0x584cc99f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 36: jmp 0x584cc9d5
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 60h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 64h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 6ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [eax + 70h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 68h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

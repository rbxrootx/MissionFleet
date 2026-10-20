// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464FE0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_00464fe0_00464FE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cld
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 5F 95 00 00: call 0x46e570
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413630 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_00413630_00413630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 73 08: jae 0x41365c
        __asm _emit 0x73
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 06: jmp 0x413662
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

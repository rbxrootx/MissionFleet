// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584822D0 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_584822d0() {
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
        ; Exact mapped bytes E8 98 26 33 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x26
        __asm _emit 0x33
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58894be0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 20: or dx, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret 18h
    }
}

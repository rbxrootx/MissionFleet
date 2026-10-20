// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014D20 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_10014d20_10014D20() {
    __asm {
        mov eax, dword ptr [ecx + 4]
        push esi
        mov esi, dword ptr [esp + 8]
        xor edx, edx
        cmp eax, esi
        ; Exact mapped bytes 7E 06: jle 0x10014d34
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [ecx + 7ch], edx
        mov dword ptr [ecx + 74h], edx
        cmp eax, edx
        ; Exact mapped bytes 7D 06: jge 0x10014d3e
        __asm _emit 0x7d
        __asm _emit 0x06
        mov dword ptr [ecx + 74h], esi
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ecx + 8]
        mov esi, dword ptr [esp + 0ch]
        cmp eax, esi
        ; Exact mapped bytes 7E 09: jle 0x10014d52
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ecx + 80h], edx
        mov dword ptr [ecx + 78h], edx
        cmp eax, edx
        ; Exact mapped bytes 7D 09: jge 0x10014d5f
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ecx + 78h], esi
        mov dword ptr [ecx + 80h], edx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

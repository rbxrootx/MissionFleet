// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BCE10 .. +0x3F bytes.
extern "C" __declspec(naked) void __get_fname_004BCE10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4bce26
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1bh
        ; Exact mapped bytes 7D 1D: jge 0x4bce49
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx*8 + 5d2040h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0C: jne 0x4bce47
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax*8 + 5d2044h]
        ; Exact mapped bytes EB 04: jmp 0x4bce4b
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D4: jmp 0x4bce1d
        __asm _emit 0xeb
        __asm _emit 0xd4
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}

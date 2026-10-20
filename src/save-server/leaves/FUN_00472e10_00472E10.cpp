// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472E10 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_00472e10_00472E10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        ; Exact mapped bytes A1 7C 89 68 00: mov eax, dword ptr [0x68897c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        imul eax, eax, 14h
        ; Exact mapped bytes 8B 0D 80 89 68 00: mov ecx, dword ptr [0x688980]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 8B 15 80 89 68 00: mov edx, dword ptr [0x688980]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 25: jae 0x472e5f
        __asm _emit 0x73
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        sub edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 100000h
        ; Exact mapped bytes 73 05: jae 0x472e54
        __asm _emit 0x73
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 0D: jmp 0x472e61
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 8]
        add eax, 14h
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D3: jmp 0x472e32
        __asm _emit 0xeb
        __asm _emit 0xd3
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}

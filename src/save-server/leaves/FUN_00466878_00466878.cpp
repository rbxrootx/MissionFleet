// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00466878 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00466878_00466878() {
    __asm {
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 06: jne 0x466884
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x466889
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 16: jmp 0x46689f
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 EE B9 00 00: call 0x472280
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x46689d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x46689f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 94: jmp 0x466833
        __asm _emit 0xeb
        __asm _emit 0x94
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

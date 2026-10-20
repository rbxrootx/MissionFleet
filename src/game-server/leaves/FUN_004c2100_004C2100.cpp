// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C2100 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_004c2100_004C2100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 5e03a1h]
        and edx, dword ptr [ebp + 10h]
        test edx, edx
        ; Exact mapped bytes 75 31: jne 0x4c2154
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 15: je 0x4c213e
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 45 86 16 5D 00: mov cx, word ptr [eax*2 + 0x5d1686]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x45
        __asm _emit 0x86
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        and ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x4c2145
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x4c2154
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x4c215b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}

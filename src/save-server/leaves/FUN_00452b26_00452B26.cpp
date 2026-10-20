// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00452B26 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_00452b26_00452B26() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 2D: je 0x452b65
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 75 07: jne 0x452b48
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x452bca
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 50h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x452b58
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 72: jmp 0x452bca
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 6D 2F 00 00: call 0x455ad0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 65: jmp 0x452bca
        __asm _emit 0xeb
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 75 04: jne 0x452b72
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 58: jmp 0x452bca
        __asm _emit 0xeb
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 20h], 1
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 6410ech
        push 1
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov esp, ebp
        pop ebp
        ret
    }
}

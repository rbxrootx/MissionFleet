// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004378F0 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_004378f0_004378F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 77 72: ja 0x43797b
        __asm _emit 0x77
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 4E: je 0x437979
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 08: jne 0x437948
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 17: jmp 0x43795f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 07 E3 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 8]
        sub eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 1B: jmp 0x437996
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        sub edx, ecx
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2A 93 00 00: call 0x440cc0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

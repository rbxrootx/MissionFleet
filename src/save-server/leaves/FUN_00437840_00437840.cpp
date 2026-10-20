// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437840 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_00437840_00437840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 77 72: ja 0x4378cb
        __asm _emit 0x77
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 4E: je 0x4378c9
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 08: jne 0x437898
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 17: jmp 0x4378af
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 B7 E3 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 1D: jmp 0x4378e8
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov dl, byte ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        sub eax, edx
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D8 93 00 00: call 0x440cc0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

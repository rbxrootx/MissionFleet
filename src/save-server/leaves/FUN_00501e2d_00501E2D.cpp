// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00501E2D .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_00501e2d_00501E2D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 4D: jne 0x501e87
        __asm _emit 0x75
        __asm _emit 0x4d
        mov eax, dword ptr [ebp + 10h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x501e87
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 75 39: jne 0x501e87
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp + 10h]
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 75 0A: jne 0x501e62
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 10h]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x501e87
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 8
        push ecx
        mov edx, dword ptr [ebp + 10h]
        and edx, 1
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 17: jmp 0x501e9e
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 F7 FF FF: call 0x501610
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

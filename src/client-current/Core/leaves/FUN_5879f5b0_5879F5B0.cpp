// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F5B0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_5879f5b0_5879F5B0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        test dword ptr [ebx + 120h], 20000000h
        mov eax, dword ptr [ebx + 78h]
        ; Exact mapped bytes 74 0E: je 0x5879f5d2
        __asm _emit 0x74
        __asm _emit 0x0e
        and eax, 300h
        cmp eax, 300h
        ; Exact mapped bytes 74 47: je 0x5879f617
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes EB 07: jmp 0x5879f5d9
        __asm _emit 0xeb
        __asm _emit 0x07
        test eax, 800h
        ; Exact mapped bytes 75 3E: jne 0x5879f617
        __asm _emit 0x75
        __asm _emit 0x3e
        push esi
        mov esi, dword ptr [esp + 14h]
        test esi, esi
        ; Exact mapped bytes 74 34: je 0x5879f616
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebx + 13ch]
        push edi
        mov edi, dword ptr [esp + 14h]
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 75 10: jne 0x5879f604
        __asm _emit 0x75
        __asm _emit 0x10
        push -1
        push edi
        push eax
        ; Exact mapped bytes E8 73 05 01 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        dec edi
        inc esi
        ; Exact mapped bytes EB EC: jmp 0x5879f5f0
        __asm _emit 0xeb
        __asm _emit 0xec
        push esi
        push edi
        push eax
        ; Exact mapped bytes E8 64 05 01 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebx + 13ch], eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}

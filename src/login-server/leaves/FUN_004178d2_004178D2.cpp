// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004178D2 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_004178d2_004178D2() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, ecx
        and dword ptr [edi + 8], 0
        ; Exact mapped bytes 66 C7 07 08 00: mov word ptr [edi], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x08
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 57: je 0x417941
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 66 83 7D 0C 0E: cmp word ptr [ebp + 0xc], 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x0e
        push esi
        ; Exact mapped bytes 75 10: jne 0x417902
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 54 C3 43 00: call dword ptr [0x43c354]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x417935
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        inc esi
        lea eax, [esi + esi]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 E8 75 00 00: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, esp
        push esi
        push ebx
        push -1
        push dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        push eax
        push eax
        ; Exact mapped bytes FF 15 90 C2 43 00: call dword ptr [0x43c290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes FF 15 50 C3 43 00: call dword ptr [0x43c350]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [edi + 8], eax
        ; Exact mapped bytes 75 05: jne 0x417941
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 E0 53 01 00: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        lea esp, [ebp - 0ch]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863B50 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_58863b50_58863B50() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 1B: je 0x58863b78
        __asm _emit 0x74
        __asm _emit 0x1b
        push -20h
        xor edx, edx
        pop eax
        div esi
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 0F: jae 0x58863b78
        __asm _emit 0x73
        __asm _emit 0x0f
        ; Exact mapped bytes E8 01 E9 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0ch
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x58863bba
        __asm _emit 0xeb
        __asm _emit 0x42
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push edi
        test ebx, ebx
        ; Exact mapped bytes 74 0B: je 0x58863b8c
        __asm _emit 0x74
        __asm _emit 0x0b
        push ebx
        ; Exact mapped bytes E8 D9 F8 00 00: call 0x58873460
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58863b8e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        imul esi, dword ptr [ebp + 10h]
        push esi
        push ebx
        ; Exact mapped bytes E8 17 F9 00 00: call 0x588734b0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        pop ecx
        pop ecx
        test ebx, ebx
        ; Exact mapped bytes 74 15: je 0x58863bb6
        __asm _emit 0x74
        __asm _emit 0x15
        cmp edi, esi
        ; Exact mapped bytes 73 11: jae 0x58863bb6
        __asm _emit 0x73
        __asm _emit 0x11
        sub esi, edi
        lea eax, [ebx + edi]
        push esi
        push 0
        push eax
        ; Exact mapped bytes E8 5D 92 FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        mov eax, ebx
        pop ebx
        pop esi
        pop ebp
        ret
    }
}

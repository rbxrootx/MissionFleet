// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F4DD .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_5886f4dd_5886F4DD() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 10h]
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 37: jmp 0x5886f525
        __asm _emit 0xeb
        __asm _emit 0x37
        mov eax, dword ptr [edi]
        lea ebx, [eax*4 + 58969bb8h]
        mov esi, dword ptr [ebx]
        nop
        test esi, esi
        ; Exact mapped bytes 74 0A: je 0x5886f508
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp esi, ecx
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x5886f596
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x5886f522
        __asm _emit 0xeb
        __asm _emit 0x1a
        push dword ptr [eax*4 + 588c5958h]
        ; Exact mapped bytes E8 96 00 00 00: call 0x5886f5aa
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 6C: jne 0x5886f587
        __asm _emit 0x75
        __asm _emit 0x6c
        or ecx, 0ffffffffh
        mov eax, ecx
        xchg dword ptr [ebx], eax
        add edi, 4
        cmp edi, dword ptr [ebp + 14h]
        ; Exact mapped bytes 75 C4: jne 0x5886f4ee
        __asm _emit 0x75
        __asm _emit 0xc4
        xor esi, esi
        push 0eh
        ; Exact mapped bytes E8 E9 46 FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        lea eax, [ebp - 4]
        mov edi, 80h
        push eax
        push 4
        push edi
        mov ebx, 5896a000h
        push ebx
        ; Exact mapped bytes FF 15 68 43 89 58: call dword ptr [0x58894368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 54: je 0x5886f5a4
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp + 8]
        test esi, esi
        push -1
        pop edx
        lea ecx, [eax*4 + 5896a000h]
        mov eax, esi
        cmove eax, edx
        xchg dword ptr [ecx], eax
        lea eax, [ebp - 4]
        push eax
        push 2
        push edi
        push ebx
        ; Exact mapped bytes FF 15 68 43 89 58: call dword ptr [0x58894368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x5886f5a4
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0eh
        ; Exact mapped bytes E8 E5 46 FF FF: call 0x58863c64
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
        mov eax, esi
        xchg dword ptr [ebx], eax
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5886f596
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 E8 42 89 58: call dword ptr [0x588942e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes FF 15 DC 42 89 58: call dword ptr [0x588942dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        ; Exact mapped bytes EB 88: jmp 0x5886f52c
        __asm _emit 0xeb
        __asm _emit 0x88
        ; Exact mapped bytes E8 67 31 FF FF: call 0x58862710
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863E4C .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_58863e4c_58863E4C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 0ch], 0
        push esi
        ; Exact mapped bytes 75 0E: jne 0x58863e67
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 58 00 00: call 0x588696f9
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 72: jmp 0x58863ed9
        __asm _emit 0xeb
        __asm _emit 0x72
        push edi
        push 7fffffffh
        push dword ptr [ebp + 0ch]
        xor edi, edi
        lea eax, [ebp - 4]
        push edi
        push edi
        push eax
        ; Exact mapped bytes E8 9D F1 00 00: call 0x5887301a
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58863e8e
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 16h
        ; Exact mapped bytes 74 53: je 0x58863edc
        __asm _emit 0x74
        __asm _emit 0x53
        cmp eax, 22h
        ; Exact mapped bytes 74 4E: je 0x58863edc
        __asm _emit 0x74
        __asm _emit 0x4e
        push 2
        push dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 B3 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 2F: je 0x58863ecf
        __asm _emit 0x74
        __asm _emit 0x2f
        push -1
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp - 4]
        push esi
        push edi
        ; Exact mapped bytes E8 6B F1 00 00: call 0x5887301a
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58863ec2
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp eax, 16h
        ; Exact mapped bytes 74 21: je 0x58863edc
        __asm _emit 0x74
        __asm _emit 0x21
        cmp eax, 22h
        ; Exact mapped bytes 74 1C: je 0x58863edc
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes EB 0D: jmp 0x58863ecf
        __asm _emit 0xeb
        __asm _emit 0x0d
        push esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E 58 00 00: call 0x588696f9
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov edi, eax
        push esi
        ; Exact mapped bytes E8 3B 8D 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, edi
        pop edi
        pop esi
        leave
        ret
        push edi
        push edi
        push edi
        push edi
        push edi
        ; Exact mapped bytes E8 F3 D0 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887576F .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_5887576f_5887576F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 75 05: jne 0x58875783
        __asm _emit 0x75
        __asm _emit 0x05
        xor eax, eax
        pop edi
        leave
        ret
        xor edx, edx
        mov eax, edi
        mov ecx, edx
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [edi], edx
        ; Exact mapped bytes 74 08: je 0x58875798
        __asm _emit 0x74
        __asm _emit 0x08
        lea eax, [eax + 4]
        inc ecx
        cmp dword ptr [eax], edx
        ; Exact mapped bytes 75 F8: jne 0x58875790
        __asm _emit 0x75
        __asm _emit 0xf8
        push esi
        lea eax, [ecx + 1]
        push 4
        push eax
        ; Exact mapped bytes E8 6C 9A FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 6F: je 0x5887581b
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 58: je 0x5887580a
        __asm _emit 0x74
        __asm _emit 0x58
        push ebx
        mov ebx, esi
        sub ebx, edi
        lea edx, [ecx + 2]
        ; Exact mapped bytes 66 8B 01: mov ax, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 3B 45 FC: cmp ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 75 F4: jne 0x588757ba
        __asm _emit 0x75
        __asm _emit 0xf4
        sub ecx, edx
        sar ecx, 1
        push 2
        lea eax, [ecx + 1]
        push eax
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 38 9A FF FF: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebx + edi], eax
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 2D 74 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebx + edi], 0
        ; Exact mapped bytes 74 2F: je 0x5887581b
        __asm _emit 0x74
        __asm _emit 0x2f
        push dword ptr [edi]
        push dword ptr [ebp - 8]
        push dword ptr [ebx + edi]
        ; Exact mapped bytes E8 87 17 FF FF: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x58875820
        __asm _emit 0x75
        __asm _emit 0x20
        add edi, 4
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 75 AE: jne 0x588757b7
        __asm _emit 0x75
        __asm _emit 0xae
        pop ebx
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 FE 73 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, esi
        pop esi
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x58875780
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 F0 CE FE FF: call 0x58862710
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 AD B7 FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C040 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_5887c040_5887C040() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 0ch]
        and ecx, 0fff7ffffh
        mov eax, edx
        and eax, ecx
        push esi
        mov esi, dword ptr [ebp + 8]
        test eax, 0fcf0fce0h
        ; Exact mapped bytes 74 2A: je 0x5887c08a
        __asm _emit 0x74
        __asm _emit 0x2a
        test esi, esi
        ; Exact mapped bytes 74 0E: je 0x5887c072
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        push 0
        ; Exact mapped bytes E8 33 08 00 00: call 0x5887c8a0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 F8 63 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 29 4F FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 16h
        pop esi
        pop ebp
        ret
        push ecx
        push edx
        test esi, esi
        ; Exact mapped bytes 74 0F: je 0x5887c09f
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes E8 0B 08 00 00: call 0x5887c8a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi], eax
        xor eax, eax
        pop esi
        pop ebp
        ret
        ; Exact mapped bytes E8 FC 07 00 00: call 0x5887c8a0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        xor eax, eax
        pop esi
        pop ebp
        ret
    }
}

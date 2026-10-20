// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830BAA .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_58830baa_58830BAA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887dc90h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ecx
        push 0
        ; Exact mapped bytes E8 60 FF FF FF: call 0x58830b37
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 28h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x58830bf0
        __asm _emit 0x74
        __asm _emit 0x12
        mov esi, dword ptr [eax]
        push 10h
        push eax
        ; Exact mapped bytes E8 4C 04 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 EE: jne 0x58830bde
        __asm _emit 0x75
        __asm _emit 0xee
        mov eax, dword ptr [edi + 2ch]
        mov dword ptr [edi + 28h], 0
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x58830c10
        __asm _emit 0x74
        __asm _emit 0x12
        mov esi, dword ptr [eax]
        push 0ch
        push eax
        ; Exact mapped bytes E8 2C 04 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 EE: jne 0x58830bfe
        __asm _emit 0x75
        __asm _emit 0xee
        mov dword ptr [edi + 2ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        leave
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588734B0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_588734b0_588734B0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 75 0B: jne 0x588734c8
        __asm _emit 0x75
        __asm _emit 0x0b
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0B 9A FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 24: jmp 0x588734ec
        __asm _emit 0xeb
        __asm _emit 0x24
        push esi
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 75 09: jne 0x588734d9
        __asm _emit 0x75
        __asm _emit 0x09
        push edi
        ; Exact mapped bytes E8 3A 97 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 10: jmp 0x588734e9
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp esi, -20h
        ; Exact mapped bytes 76 25: jbe 0x58873503
        __asm _emit 0x76
        __asm _emit 0x25
        ; Exact mapped bytes E8 8C EF FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0ch
        xor eax, eax
        pop esi
        pop edi
        pop ebp
        ret
        ; Exact mapped bytes E8 6C 65 00 00: call 0x58879a60
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 E6: je 0x588734de
        __asm _emit 0x74
        __asm _emit 0xe6
        push esi
        ; Exact mapped bytes E8 72 11 FF FF: call 0x58864670
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 DB: je 0x588734de
        __asm _emit 0x74
        __asm _emit 0xdb
        push esi
        push edi
        push 0
        ; Exact mapped bytes FF 35 70 9C 96 58: push dword ptr [0x58969c70]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 60 41 89 58: call dword ptr [0x58894160]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 D8: je 0x588734ef
        __asm _emit 0x74
        __asm _emit 0xd8
        ; Exact mapped bytes EB D2: jmp 0x588734eb
        __asm _emit 0xeb
        __asm _emit 0xd2
    }
}

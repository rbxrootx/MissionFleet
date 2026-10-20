// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588497A3 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_588497a3_588497A3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        ; Exact mapped bytes E8 80 EF 01 00: call 0x5886872e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, 4078h
        push edi
        ; Exact mapped bytes E8 4B 78 FE FF: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x588497cc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, eax
        ; Exact mapped bytes E8 BF F7 FF FF: call 0x58848f87
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x588497ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push dword ptr [ebp + 10h]
        mov ecx, esi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 77 FE FF FF: call 0x58849655
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A3 90 95 96 58: mov dword ptr [0x58969590], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x588497f8
        __asm _emit 0x74
        __asm _emit 0x11
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x588497f4
        __asm _emit 0x74
        __asm _emit 0x09
        push edi
        push esi
        ; Exact mapped bytes E8 42 78 FE FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        pop ecx
        xor eax, eax
        ; Exact mapped bytes EB 11: jmp 0x58849809
        __asm _emit 0xeb
        __asm _emit 0x11
        push 8
        ; Exact mapped bytes E8 05 78 FE FF: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [eax], 2
        mov dword ptr [eax + 4], esi
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}

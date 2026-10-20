// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887503F .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_5887503f_5887503F() {
    __asm {
        push 0ch
        push 588ed670h
        ; Exact mapped bytes E8 15 D7 FB FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xd7
        __asm _emit 0xfb
        __asm _emit 0xff
        xor esi, esi
        mov dword ptr [ebp - 1ch], esi
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes A1 04 78 90 58: mov eax, dword ptr [0x58907804]
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x90
        __asm _emit 0x58
        test dword ptr [edi + 350h], eax
        ; Exact mapped bytes 74 0E: je 0x5887506e
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [edi + 4ch], esi
        ; Exact mapped bytes 74 09: je 0x5887506e
        __asm _emit 0x74
        __asm _emit 0x09
        mov esi, dword ptr [edi + 48h]
        test esi, esi
        ; Exact mapped bytes 74 6D: je 0x588750d9
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes EB 59: jmp 0x588750c7
        __asm _emit 0xeb
        __asm _emit 0x59
        push 5
        ; Exact mapped bytes E8 A7 EB FE FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 4], esi
        mov esi, dword ptr [edi + 48h]
        mov dword ptr [ebp - 1ch], esi
        mov ebx, dword ptr [ebp + 0ch]
        cmp esi, dword ptr [ebx]
        ; Exact mapped bytes 74 27: je 0x588750ad
        __asm _emit 0x74
        __asm _emit 0x27
        test esi, esi
        ; Exact mapped bytes 74 18: je 0x588750a2
        __asm _emit 0x74
        __asm _emit 0x18
        or eax, 0ffffffffh
        ; Exact mapped bytes F0 0F C1 06: lock xadd dword ptr [esi], eax
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x06
        ; Exact mapped bytes 75 0F: jne 0x588750a2
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp esi, 58907808h
        ; Exact mapped bytes 74 07: je 0x588750a2
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes E8 6F 7B FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov esi, dword ptr [ebx]
        mov dword ptr [edi + 48h], esi
        mov dword ptr [ebp - 1ch], esi
        ; Exact mapped bytes F0 FF 06: lock inc dword ptr [esi]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x06
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 05 00 00 00: call 0x588750be
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB AD: jmp 0x58875068
        __asm _emit 0xeb
        __asm _emit 0xad
        mov esi, dword ptr [ebp - 1ch]
        push 5
    }
}

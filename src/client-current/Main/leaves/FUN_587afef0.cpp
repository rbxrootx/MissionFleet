// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFEF0 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_587afef0() {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 83 BB 64 01 00 00 00: cmp word ptr [ebx + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 44h]
        push edi
        ; Exact mapped bytes 76 2A: jbe 0x587aff30
        __asm _emit 0x76
        __asm _emit 0x2a
        xor ecx, 0aaaaaaaah
        mov dword ptr [esp + 0ch], ecx
        ; Exact mapped bytes DB 44 24 0C: fild dword ptr [esp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 7D 06: jge 0x587aff1e
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 50 9E 99 58: fmul qword ptr [0x58999e50]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x9e
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 CD 1C 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xcd
        __asm _emit 0x1c
        __asm _emit 0x00
        xor eax, 0aaaaaaaah
        mov ecx, eax
        mov edi, dword ptr [esi + 34h]
        mov eax, 51eb851fh
        test edi, edi
        ; Exact mapped bytes 7C 1C: jl 0x587aff58
        __asm _emit 0x7c
        __asm _emit 0x1c
        xor ecx, 0aaaaaaaah
        imul ecx, edi
        mul ecx
        shr edx, 5
        xor edx, 0aaaaaaaah
        mov dword ptr [esi + 4ch], edx
        mov dword ptr [esi + 54h], edx
        ; Exact mapped bytes EB 1D: jmp 0x587aff75
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor ecx, 0aaaaaaaah
        imul ecx, edi
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        xor eax, 0aaaaaaaah
        mov dword ptr [esi + 4ch], eax
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ebx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 19: jne 0x587aff99
        __asm _emit 0x75
        __asm _emit 0x19
        cmp edi, 87h
        ; Exact mapped bytes 7C 05: jl 0x587aff8d
        __asm _emit 0x7c
        __asm _emit 0x05
        mov edi, 87h
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 E7 39 0A 00: call 0x58853980
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x39
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}

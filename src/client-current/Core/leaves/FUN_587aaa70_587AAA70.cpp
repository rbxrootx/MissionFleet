// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AAA70 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_587aaa70_587AAA70() {
    __asm {
        push edi
        mov edi, dword ptr [esp + 8]
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 74 53: je 0x587aaacd
        __asm _emit 0x74
        __asm _emit 0x53
        push esi
        xor esi, esi
        cmp dword ptr [edi + 8], esi
        ; Exact mapped bytes 76 3A: jbe 0x587aaabc
        __asm _emit 0x76
        __asm _emit 0x3a
        push ebx
        push ebp
        ; Exact mapped bytes 8B 2D 14 42 89 58: mov ebp, dword ptr [0x58894214]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x14
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + esi*4]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x587aaab4
        __asm _emit 0x74
        __asm _emit 0x1b
        push eax
        push 0
        push 5ah
        ; Exact mapped bytes FF 15 58 43 89 58: call dword ptr [0x58894358]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 0A: je 0x587aaab4
        __asm _emit 0x74
        __asm _emit 0x0a
        push ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        push ebx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        inc esi
        cmp esi, dword ptr [edi + 8]
        ; Exact mapped bytes 72 D6: jb 0x587aaa90
        __asm _emit 0x72
        __asm _emit 0xd6
        pop ebp
        pop ebx
        push dword ptr [edi]
        push 0
        ; Exact mapped bytes FF 35 C8 5E 96 58: push dword ptr [0x58965ec8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 64 41 89 58: call dword ptr [0x58894164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        pop esi
        pop edi
        ret
    }
}

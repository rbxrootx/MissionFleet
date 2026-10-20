// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005738FF .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_005738ff_005738FF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 16fh
        push 5cbcc4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 44 78 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x573939
        __asm _emit 0x75
        __asm _emit 0x14
        push 170h
        push 5cbcc4h
        ; Exact mapped bytes E8 CC 10 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x573939
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x57391c
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x57394d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 86 FD FF: call 0x54bf67
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        push 58d5d0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA 86 FD FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

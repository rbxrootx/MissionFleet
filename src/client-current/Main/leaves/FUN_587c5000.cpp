// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5000 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_587c5000() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        mov edi, ecx
        mov dword ptr [edi], 0
        test esi, esi
        ; Exact mapped bytes 74 29: je 0x587c5040
        __asm _emit 0x74
        __asm _emit 0x29
        test ebx, ebx
        ; Exact mapped bytes 74 25: je 0x587c5040
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [esi + 18h]
        lea eax, [esi + 4]
        cmp edx, 10h
        ; Exact mapped bytes 72 04: jb 0x587c502a
        __asm _emit 0x72
        __asm _emit 0x04
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x587c502c
        __asm _emit 0xeb
        __asm _emit 0x02
        mov ecx, eax
        cmp ecx, ebx
        ; Exact mapped bytes 77 10: ja 0x587c5040
        __asm _emit 0x77
        __asm _emit 0x10
        cmp edx, 10h
        ; Exact mapped bytes 72 02: jb 0x587c5037
        __asm _emit 0x72
        __asm _emit 0x02
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esi + 14h]
        add ecx, eax
        cmp ebx, ecx
        ; Exact mapped bytes 76 05: jbe 0x587c5045
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 2D 7C 1B 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7c
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [edi], esi
        mov dword ptr [edi + 4], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

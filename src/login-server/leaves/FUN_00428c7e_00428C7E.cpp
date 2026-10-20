// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428C7E .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_00428c7e_00428C7E() {
    __asm {
        push edi
        mov edi, dword ptr [esp + 8]
        xor ecx, ecx
        test edi, edi
        ; Exact mapped bytes 75 04: jne 0x428c8d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop edi
        ret
        cmp dword ptr [edi], 0
        lea eax, [edi + 4]
        ; Exact mapped bytes 74 0A: je 0x428c9f
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [eax]
        inc ecx
        add eax, 4
        test edx, edx
        ; Exact mapped bytes 75 F6: jne 0x428c95
        __asm _emit 0x75
        __asm _emit 0xf6
        push ebx
        push ebp
        lea eax, [ecx*4 + 4]
        push esi
        push eax
        ; Exact mapped bytes E8 35 67 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        test esi, esi
        mov ebp, esi
        ; Exact mapped bytes 75 08: jne 0x428cc0
        __asm _emit 0x75
        __asm _emit 0x08
        push 9
        ; Exact mapped bytes E8 78 63 FF FF: call 0x41f037
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, dword ptr [edi]
        mov ebx, edi
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x428cdb
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        add ebx, 4
        ; Exact mapped bytes E8 6B 84 FF FF: call 0x42113c
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi], eax
        mov eax, dword ptr [ebx]
        pop ecx
        add esi, 4
        ; Exact mapped bytes EB E9: jmp 0x428cc4
        __asm _emit 0xeb
        __asm _emit 0xe9
        and dword ptr [esi], 0
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        pop edi
        ret
    }
}

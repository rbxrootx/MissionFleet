// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004F270 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_1004f270_1004F270() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ebp, 1
        lea ecx, [esi + 7ch]
        xor eax, eax
        mov dword ptr [esi + 50h], 40000000h
        mov dword ptr [esi + 90h], edi
        mov dword ptr [esi + 9ch], edi
        mov dword ptr [esi + 0a0h], ebp
        mov dword ptr [ecx], eax
        xor edx, edx
        mov dword ptr [ecx + 4], eax
        mov dword ptr [ecx + 8], eax
        mov dword ptr [ecx + 0ch], eax
        lea eax, [esi + 6ch]
        xor ecx, ecx
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], edx
        mov dword ptr [eax + 8], edx
        mov dword ptr [eax + 0ch], edx
        lea edx, [esi + 5ch]
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [edx], ecx
        push eax
        mov dword ptr [edx + 4], ecx
        mov dword ptr [edx + 8], ecx
        mov dword ptr [edx + 0ch], ecx
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 18h]
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 74 00 00 00: call 0x1004f350
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 0ach]
        mov ebx, 4
        cmp dword ptr [esp + 20h], edi
        ; Exact mapped bytes 74 13: je 0x1004f300
        __asm _emit 0x74
        __asm _emit 0x13
        mov dword ptr [esi + 8ch], edi
        mov dword ptr [esi + 94h], ebp
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 50h], edi
        ; Exact mapped bytes EB 1B: jmp 0x1004f31b
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [esi + 0a8h]
        mov dword ptr [esi + 94h], 0ffffffffh
        mov dword ptr [esi + 8ch], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edx + 50h], ecx
        add eax, 4
        dec ebx
        ; Exact mapped bytes 75 C6: jne 0x1004f2e7
        __asm _emit 0x75
        __asm _emit 0xc6
        mov eax, dword ptr [esp + 24h]
        xor ecx, ecx
        cmp eax, edi
        mov dword ptr [esi + 58h], eax
        ; Exact mapped bytes 7E 17: jle 0x1004f345
        __asm _emit 0x7e
        __asm _emit 0x17
        lea edx, [esi + 0ach]
        mov eax, dword ptr [edx]
        add edx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 58h]
        inc ecx
        cmp ecx, eax
        ; Exact mapped bytes 7C EF: jl 0x1004f334
        __asm _emit 0x7c
        __asm _emit 0xef
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

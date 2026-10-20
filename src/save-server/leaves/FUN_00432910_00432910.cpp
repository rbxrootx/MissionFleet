// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432910 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_00432910_00432910() {
    __asm {
        push -1
        push 58ba80h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push ebp
        push edi
        mov edi, ecx
        xor ebp, ebp
        mov dword ptr [esp + 10h], edi
        mov dword ptr [edi], ebp
        mov dword ptr [edi + 4], ebp
        mov dword ptr [edi + 8], ebp
        push 685094h
        mov dword ptr [esp + 20h], ebp
        ; Exact mapped bytes E8 B7 FC FF FF: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes A1 58 50 68 00: mov eax, dword ptr [0x685058]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, ebp
        ; Exact mapped bytes 74 0A: je 0x432964
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 89 0D 58 50 68 00: mov dword ptr [0x685058], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 4D: jmp 0x4329b1
        __asm _emit 0xeb
        __asm _emit 0x4d
        lea edx, [esp + 0ch]
        mov dword ptr [esp + 0ch], 14h
        push edx
        push 10h
        ; Exact mapped bytes E8 E8 2E 00 00: call 0x435860
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 14h]
        add esp, 8
        cmp ebx, 1
        ; Exact mapped bytes 74 2D: je 0x4329b1
        __asm _emit 0x74
        __asm _emit 0x2d
        lea ecx, [eax + 10h]
        push esi
        ; Exact mapped bytes 89 0D 58 50 68 00: mov dword ptr [0x685058], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, ecx
        add ecx, 10h
        mov esi, 1
        dec ebx
        cmp ebx, esi
        ; Exact mapped bytes 74 11: je 0x4329ae
        __asm _emit 0x74
        __asm _emit 0x11
        mov dword ptr [edx], ecx
        mov ebx, dword ptr [esp + 10h]
        mov edx, ecx
        inc esi
        add ecx, 10h
        dec ebx
        cmp ebx, esi
        ; Exact mapped bytes 75 EF: jne 0x43299d
        __asm _emit 0x75
        __asm _emit 0xef
        mov dword ptr [edx], ebp
        pop esi
        ; Exact mapped bytes 89 2D 94 50 68 00: mov dword ptr [0x685094], ebp
        __asm _emit 0x89
        __asm _emit 0x2d
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [eax + 10h]
        mov dword ptr [edi], eax
        mov dword ptr [edi + 4], eax
        mov dword ptr [edi + 8], ecx
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 89 28: mov word ptr [eax], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x28
        mov eax, edi
        pop edi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ret
    }
}

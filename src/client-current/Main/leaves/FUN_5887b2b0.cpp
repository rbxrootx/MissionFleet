// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B2B0 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_5887b2b0() {
    __asm {
        sub esp, 30h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 2ch], eax
        push esi
        mov esi, dword ptr [esp + 38h]
        push edi
        push esi
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov edi, eax
        mov eax, 55555556h
        imul edi
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        lea edx, [eax + edi]
        lea eax, [eax + eax*2]
        mov ecx, edi
        sub ecx, eax
        mov dword ptr [esp + 0ch], edx
        ; Exact mapped bytes 75 05: jne 0x5887b2f4
        __asm _emit 0x75
        __asm _emit 0x05
        dec edx
        mov dword ptr [esp + 0ch], edx
        cmp dword ptr [esp + 40h], edx
        ; Exact mapped bytes 0F 8C 8C 00 00 00: jl 0x5887b38a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 40h
        ; Exact mapped bytes 0F 8F 83 00 00 00: jg 0x5887b38a
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        push ebp
        xor ebp, ebp
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 2ch], eax
        mov dword ptr [esp + 30h], eax
        ; Exact mapped bytes 66 89 44 24 34: mov word ptr [esp + 0x34], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        test edi, edi
        ; Exact mapped bytes 7E 46: jle 0x5887b377
        __asm _emit 0x7e
        __asm _emit 0x46
        lea ecx, [esp + edx + 17h]
        lea edx, [esi + edi - 1]
        mov dword ptr [esp + 0ch], edx
        push ebx
        mov edi, edi
        mov edx, dword ptr [esp + 10h]
        mov dl, byte ptr [edx]
        lea esi, [eax + 1]
        mov byte ptr [ecx], dl
        mov eax, esi
        cdq
        mov ebx, 3
        idiv ebx
        inc ebp
        dec ecx
        test edx, edx
        mov edx, dword ptr [esp + 14h]
        ; Exact mapped bytes 75 09: jne 0x5887b368
        __asm _emit 0x75
        __asm _emit 0x09
        cmp ebp, edx
        ; Exact mapped bytes 74 05: je 0x5887b368
        __asm _emit 0x74
        __asm _emit 0x05
        mov byte ptr [ecx], 2ch
        inc ebp
        dec ecx
        dec dword ptr [esp + 10h]
        mov eax, esi
        cmp eax, edi
        ; Exact mapped bytes 7C CE: jl 0x5887b340
        __asm _emit 0x7c
        __asm _emit 0xce
        mov esi, dword ptr [esp + 18h]
        pop ebx
        lea eax, [esp + 18h]
        mov byte ptr [esp + edx + 18h], 0
        push eax
        inc edx
        push edx
        push esi
        ; Exact mapped bytes E8 D7 67 EB FF: call 0x58731b60
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x67
        __asm _emit 0xeb
        __asm _emit 0xff
        pop ebp
        mov ecx, dword ptr [esp + 34h]
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 43 18 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 30h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

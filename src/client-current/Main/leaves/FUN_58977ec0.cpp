// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58977EC0 .. +0x1E3 bytes.
extern "C" __declspec(naked) void FUN_58977ec0() {
    __asm {
        sub esp, 30h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 40h]
        push edi
        xor ebx, ebx
        mov eax, dword ptr [esi + 0e4h]
        mov edi, dword ptr [esi + 148h]
        test eax, eax
        mov dword ptr [esp + 24h], edi
        ; Exact mapped bytes 7E 5A: jle 0x58977f3b
        __asm _emit 0x7e
        __asm _emit 0x5a
        lea eax, [esp + 30h]
        lea ecx, [esi + 0e8h]
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 10h], ecx
        mov edx, dword ptr [esp + 10h]
        mov ebp, dword ptr [edi + 8]
        push 0
        mov eax, dword ptr [edx]
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 0ch]
        mov eax, dword ptr [eax + 4]
        imul ebp, ecx
        push ecx
        mov ecx, dword ptr [edi + eax*4 + 40h]
        push ebp
        push ecx
        push esi
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov ecx, dword ptr [esp + 2ch]
        mov ebp, dword ptr [esp + 24h]
        add esp, 14h
        inc ebx
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esi + 0e4h]
        add ebp, 4
        add ecx, 4
        cmp ebx, eax
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 7C B8: jl 0x58977ef3
        __asm _emit 0x7c
        __asm _emit 0xb8
        mov eax, dword ptr [edi + 10h]
        mov ecx, dword ptr [edi + 14h]
        cmp eax, ecx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8D 28 01 00 00: jge 0x58978075
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [edi + 0ch]
        mov ecx, dword ptr [esi + 0f8h]
        cmp ebp, ecx
        mov dword ptr [esp + 28h], ebp
        ; Exact mapped bytes 0F 83 FC 00 00 00: jae 0x5897805e
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e4h]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 0F 8E BC 00 00 00: jle 0x58978032
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 30h]
        lea eax, [esi + 0e8h]
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 14h], eax
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esp + 1ch], 0
        mov edi, dword ptr [ecx]
        mov ecx, dword ptr [edi + 34h]
        mov edx, dword ptr [edi + 38h]
        mov eax, ecx
        imul eax, ebp
        test edx, edx
        ; Exact mapped bytes 7E 59: jle 0x58977ffe
        __asm _emit 0x7e
        __asm _emit 0x59
        mov edx, dword ptr [esp + 18h]
        shl eax, 7
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [edx]
        mov edx, dword ptr [esp + 10h]
        lea ebp, [eax + edx*4]
        mov eax, dword ptr [ebp]
        mov edx, dword ptr [esp + 2ch]
        add eax, edx
        xor edx, edx
        test ecx, ecx
        ; Exact mapped bytes 7E 1F: jle 0x58977fe7
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov ecx, dword ptr [esp + 24h]
        lea esi, [ecx + ebx*4 + 18h]
        mov dword ptr [esi], eax
        mov ecx, dword ptr [edi + 34h]
        inc ebx
        add esi, 4
        add eax, 80h
        inc edx
        cmp edx, ecx
        ; Exact mapped bytes 7C ED: jl 0x58977fd0
        __asm _emit 0x7c
        __asm _emit 0xed
        mov esi, dword ptr [esp + 44h]
        mov eax, dword ptr [esp + 1ch]
        mov edx, dword ptr [edi + 38h]
        inc eax
        add ebp, 4
        cmp eax, edx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 7C BF: jl 0x58977fb9
        __asm _emit 0x7c
        __asm _emit 0xbf
        mov ebp, dword ptr [esp + 28h]
        mov edi, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 20h]
        mov ecx, 4
        add edi, ecx
        add edx, ecx
        mov ecx, dword ptr [esi + 0e4h]
        inc eax
        cmp eax, ecx
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes 0F 8C 5A FF FF FF: jl 0x58977f88
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 24h]
        mov edx, dword ptr [esi + 15ch]
        lea eax, [edi + 18h]
        push eax
        push esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        add esp, 8
        test al, al
        ; Exact mapped bytes 74 48: je 0x5897808f
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [esi + 0f8h]
        inc ebp
        cmp ebp, eax
        mov dword ptr [esp + 28h], ebp
        ; Exact mapped bytes 0F 82 08 FF FF FF: jb 0x58977f62
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [edi + 14h]
        inc eax
        cmp eax, ecx
        mov dword ptr [edi + 0ch], 0
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 8C D8 FE FF FF: jl 0x58977f4d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [edi + 8]
        push esi
        inc edx
        mov dword ptr [edi + 8], edx
        ; Exact mapped bytes E8 3E F9 FF FF: call 0x589779c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov al, 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 30h
        ret
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [edi + 0ch], ebp
        mov dword ptr [edi + 10h], ecx
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 30h
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D769 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_5886d769_5886D769() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 18h]
        xor eax, eax
        lea edi, [ebp - 10h]
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        lea eax, [ebp - 10h]
        mov edi, dword ptr [ebp + 1ch]
        push eax
        mov eax, dword ptr [ebp + 8]
        push 0
        push edi
        push dword ptr [eax + 4]
        push dword ptr [eax]
        ; Exact mapped bytes E8 B0 C4 00 00: call 0x58879c49
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 2ch]
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        push dword ptr [ebp + 28h]
        cmp dword ptr [ebp - 10h], 2dh
        mov ebx, dword ptr [ebp + 0ch]
        push eax
        sete dl
        lea eax, [ebp - 10h]
        push eax
        mov eax, dword ptr [ebp + 10h]
        dec ecx
        sub eax, edx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 10h], -1
        lea esi, [edx + ebx]
        push edi
        cmove eax, dword ptr [ebp + 10h]
        push eax
        push esi
        ; Exact mapped bytes E8 81 C3 00 00: call 0x58879b50
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 38h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5886d7db
        __asm _emit 0x74
        __asm _emit 0x05
        mov byte ptr [ebx], 0
        ; Exact mapped bytes EB 50: jmp 0x5886d82b
        __asm _emit 0xeb
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 0ch]
        dec eax
        cmp eax, -4
        ; Exact mapped bytes 7C 2B: jl 0x5886d80f
        __asm _emit 0x7c
        __asm _emit 0x2b
        cmp eax, edi
        ; Exact mapped bytes 7D 27: jge 0x5886d80f
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 0A: jge 0x5886d7f7
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov al, byte ptr [esi]
        inc esi
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x5886d7ed
        __asm _emit 0x75
        __asm _emit 0xf9
        mov byte ptr [esi - 2], al
        push dword ptr [ebp + 2ch]
        lea eax, [ebp - 10h]
        push 1
        push eax
        push edi
        push dword ptr [ebp + 10h]
        push ebx
        ; Exact mapped bytes E8 7F FE FF FF: call 0x5886d689
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        ; Exact mapped bytes EB 1C: jmp 0x5886d82b
        __asm _emit 0xeb
        __asm _emit 0x1c
        push dword ptr [ebp + 2ch]
        lea eax, [ebp - 10h]
        push 1
        push eax
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push edi
        push dword ptr [ebp + 10h]
        push ebx
        ; Exact mapped bytes E8 95 FC FF FF: call 0x5886d4bd
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}

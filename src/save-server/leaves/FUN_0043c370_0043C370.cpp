// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C370 .. +0x162 bytes.
extern "C" __declspec(naked) void FUN_0043c370_0043C370() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 77 10: ja 0x43c39b
        __asm _emit 0x77
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 14h], edx
        ; Exact mapped bytes 76 0D: jbe 0x43c3a8
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 FB 99 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 73 08: jae 0x43c3da
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 4]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x43c3e0
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp + 18h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 08: jae 0x43c3f6
        __asm _emit 0x73
        __asm _emit 0x08
        lea edx, [ebp - 8]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB 06: jmp 0x43c3fc
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 0ch]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 10h]
        add edx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], edx
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 2ch]
        sub eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7D 08: jge 0x43c45a
        __asm _emit 0x7d
        __asm _emit 0x08
        lea eax, [ebp - 18h]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 06: jmp 0x43c460
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [ebp - 14h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp - 24h]
        mov edi, dword ptr [ebp - 30h]
        mov esi, dword ptr [ebp - 28h]
        xor edx, edx
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes F3 A6: repe cmpsb byte ptr [esi], byte ptr es:[edi]
        __asm _emit 0xf3
        __asm _emit 0xa6
        ; Exact mapped bytes 74 08: je 0x43c488
        __asm _emit 0x74
        __asm _emit 0x08
        sbb eax, eax
        sbb eax, -1
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 08: je 0x43c4a2
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 25: jmp 0x43c4c7
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7D 09: jge 0x43c4b3
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 0ffffffffh
        ; Exact mapped bytes EB 0E: jmp 0x43c4c1
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        cmp edx, dword ptr [ebp - 18h]
        setg al
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 50h], ecx
        mov eax, dword ptr [ebp - 50h]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

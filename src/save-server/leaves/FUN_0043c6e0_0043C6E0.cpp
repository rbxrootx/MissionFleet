// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043C6E0 .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_0043c6e0_0043C6E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x43c708
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 9B 96 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 08: jae 0x43c729
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 4]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x43c72f
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp + 0ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        add edx, dword ptr [eax]
        mov dword ptr [ebp - 24h], edx
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 14h]
        sub ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 08: jge 0x43c775
        __asm _emit 0x7d
        __asm _emit 0x08
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 06: jmp 0x43c77b
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [ebp - 0ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        mov edi, dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp - 20h]
        xor edx, edx
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes F3 A6: repe cmpsb byte ptr [esi], byte ptr es:[edi]
        __asm _emit 0xf3
        __asm _emit 0xa6
        ; Exact mapped bytes 74 08: je 0x43c7a3
        __asm _emit 0x74
        __asm _emit 0x08
        sbb eax, eax
        sbb eax, -1
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 08: je 0x43c7bd
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 25: jmp 0x43c7e2
        __asm _emit 0xeb
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 09: jge 0x43c7ce
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 0ffffffffh
        ; Exact mapped bytes EB 0E: jmp 0x43c7dc
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        cmp edx, dword ptr [ebp - 10h]
        setg al
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp - 3ch]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043BCF0 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_0043bcf0_0043BCF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        mov dword ptr [ebp - 4ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 73 0C: jae 0x43bd35
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dword ptr [ebp - 48h], 0ffffffffh
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x43be01
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 40h]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 73 08: jae 0x43bd56
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 40h]
        mov dword ptr [ebp - 50h], ecx
        ; Exact mapped bytes EB 06: jmp 0x43bd5c
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 14h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 2ch]
        lea ecx, [eax + edx + 1]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push ecx
        push esp
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 28 BA FF FF: call 0x4377c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov ecx, esp
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 3C A4 00 00: call 0x4461e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A3 A5 00 00: call 0x446350
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        cmp ecx, dword ptr [ebp - 28h]
        sete dl
        and edx, 0ffh
        neg edx
        sbb edx, edx
        inc edx
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x43bdf4
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        sub edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 54h], edx
        ; Exact mapped bytes EB 07: jmp 0x43bdfb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0ffffffffh
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

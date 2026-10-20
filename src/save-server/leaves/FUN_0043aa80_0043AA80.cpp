// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043AA80 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_0043aa80_0043AA80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 44h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 73 0C: jae 0x43aac5
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dword ptr [ebp - 40h], 0ffffffffh
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x43ab83
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 08: jae 0x43aae6
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 38h]
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes EB 06: jmp 0x43aaec
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 10h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 24h]
        lea ecx, [eax + edx + 1]
        mov dword ptr [ebp - 8], ecx
        mov dl, byte ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        add eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        push ecx
        push esp
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 A6 CC FF FF: call 0x4377c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov ecx, esp
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 5A 57 00 00: call 0x440280
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 51 B7 00 00: call 0x446280
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        cmp ecx, dword ptr [ebp - 20h]
        sete dl
        and edx, 0ffh
        neg edx
        sbb edx, edx
        inc edx
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x43ab76
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        sub edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes EB 07: jmp 0x43ab7d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0ffffffffh
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

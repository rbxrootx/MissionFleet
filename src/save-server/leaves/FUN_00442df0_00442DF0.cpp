// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442DF0 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_00442df0_00442DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 73 08: jae 0x442e15
        __asm _emit 0x73
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x442ed1
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 73 08: jae 0x442e36
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp + 0ch]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x442e3c
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 14h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 28h]
        lea ecx, [eax + edx + 1]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        mov al, byte ptr [ebp + 8]
        mov byte ptr [ebp - 18h], al
        mov cl, byte ptr [ebp - 18h]
        push ecx
        push ecx
        push esp
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 55 49 FF FF: call 0x4377c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov ecx, esp
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 69 33 00 00: call 0x4461e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 90 34 00 00: call 0x446310
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        cmp ecx, dword ptr [ebp - 24h]
        sete dl
        and edx, 0ffh
        neg edx
        sbb edx, edx
        inc edx
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x442ec7
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        sub edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB 07: jmp 0x442ece
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0ffffffffh
        mov eax, dword ptr [ebp - 40h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

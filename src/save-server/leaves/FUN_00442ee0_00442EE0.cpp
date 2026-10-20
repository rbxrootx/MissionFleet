// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442EE0 .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_00442ee0_00442EE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 73 08: jae 0x442f05
        __asm _emit 0x73
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x442fce
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 73 08: jae 0x442f26
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp + 0ch]
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 06: jmp 0x442f2c
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 14h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 2ch]
        lea ecx, [eax + edx + 1]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push ecx
        push esp
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 58 48 FF FF: call 0x4377c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov ecx, esp
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 6C 32 00 00: call 0x4461e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 D3 33 00 00: call 0x446350
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov ecx, dword ptr [ebp - 3ch]
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
        ; Exact mapped bytes 74 16: je 0x442fc4
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        sub edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes EB 07: jmp 0x442fcb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0ffffffffh
        mov eax, dword ptr [ebp - 44h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

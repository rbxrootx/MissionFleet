// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043AB90 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_0043ab90_0043AB90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push edi
        mov dword ptr [ebp - 40h], ecx
        mov edi, dword ptr [ebp + 8]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 73 0C: jae 0x43abd2
        __asm _emit 0x73
        __asm _emit 0x0c
        mov dword ptr [ebp - 3ch], 0ffffffffh
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x43ac8e
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 34h]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 08: jae 0x43abf3
        __asm _emit 0x73
        __asm _emit 0x08
        lea edx, [ebp - 34h]
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes EB 06: jmp 0x43abf9
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 8], edx
        mov al, byte ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push ecx
        push esp
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 99 CB FF FF: call 0x4377c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov ecx, esp
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 4D 56 00 00: call 0x440280
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 44 B6 00 00: call 0x446280
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        cmp edx, dword ptr [ebp - 20h]
        sete al
        and eax, 0ffh
        neg eax
        sbb eax, eax
        inc eax
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x43ac81
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        sub eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x43ac88
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0ffffffffh
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 3ch], ecx
        mov eax, dword ptr [ebp - 3ch]
        pop edi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

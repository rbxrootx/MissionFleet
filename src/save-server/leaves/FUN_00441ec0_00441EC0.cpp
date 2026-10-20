// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00441EC0 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_00441ec0_00441EC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 73 08: jae 0x441ee5
        __asm _emit 0x73
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x441f9b
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 08: jae 0x441f06
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp + 0ch]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes EB 06: jmp 0x441f0c
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 10h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 24h]
        lea ecx, [eax + edx + 1]
        mov dword ptr [ebp - 8], ecx
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ebp - 14h], dl
        mov al, byte ptr [ebp - 14h]
        push eax
        push ecx
        push esp
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 8B 58 FF FF: call 0x4377c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov ecx, esp
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 3F E3 FF FF: call 0x440280
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F6 42 00 00: call 0x446240
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 34h]
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
        ; Exact mapped bytes 74 16: je 0x441f91
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        sub edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 07: jmp 0x441f98
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0ffffffffh
        mov eax, dword ptr [ebp - 3ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

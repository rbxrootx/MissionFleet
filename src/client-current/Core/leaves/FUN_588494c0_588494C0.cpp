// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588494C0 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_588494c0_588494C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        mov esi, ecx
        xor edx, edx
        push edi
        mov dword ptr [ebp - 4], edx
        mov bl, 1
        mov edi, dword ptr [esi + 28h]
        mov eax, dword ptr [esi + 10h]
        mov dword ptr [ebp - 8], eax
        test edi, edi
        ; Exact mapped bytes 74 6B: je 0x5884954a
        __asm _emit 0x74
        __asm _emit 0x6b
        test bl, bl
        ; Exact mapped bytes 74 1C: je 0x588494ff
        __asm _emit 0x74
        __asm _emit 0x1c
        push esi
        push 5884c800h
        push edi
        ; Exact mapped bytes E8 07 26 00 00: call 0x5884baf6
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        xor ecx, ecx
        add esp, 0ch
        movzx ebx, bl
        test eax, eax
        cmovne ebx, ecx
        mov ecx, dword ptr [edi + 24h]
        add ecx, dword ptr [edi + 20h]
        mov eax, dword ptr [edi + 18h]
        add eax, 2eh
        add eax, ecx
        add dword ptr [esi + 10h], eax
        inc edx
        mov eax, dword ptr [edi + 35ch]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [edi + 140h]
        mov dword ptr [ebp - 4], edx
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5884952e
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes E8 1E 7B FE FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        push 360h
        push edi
        ; Exact mapped bytes E8 FB 7A FE FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov edi, eax
        mov edx, dword ptr [ebp - 4]
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 98: jne 0x588494df
        __asm _emit 0x75
        __asm _emit 0x98
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [esi + 10h]
        sub ecx, eax
        test bl, bl
        ; Exact mapped bytes 74 31: je 0x58849584
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [esi + 8]
        add eax, dword ptr [ebp - 8]
        push esi
        push 5884c800h
        push 0
        push 0
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 CB 28 00 00: call 0x5884be36
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        movzx ecx, bl
        add esp, 1ch
        test eax, eax
        cmovne ecx, edx
        add dword ptr [esi + 10h], 16h
        test cl, cl
        ; Exact mapped bytes 74 04: je 0x58849584
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58849589
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 400h
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

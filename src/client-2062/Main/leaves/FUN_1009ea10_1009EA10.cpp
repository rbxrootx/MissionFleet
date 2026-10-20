// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009EA10 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_1009ea10_1009EA10() {
    __asm {
        push -1
        push 10170f83h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 1ch]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 30h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 30h]
        push ebp
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 FB 8A FA FF: call 0x10047550
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8a
        __asm _emit 0xfa
        __asm _emit 0xff
        xor ebx, ebx
        push 54h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10175f94h
        ; Exact mapped bytes E8 38 DD 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xdd
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 20: je 0x1009ea9a
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 28h]
        push ebp
        push ebx
        push ebx
        push edx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 21 FF 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x1009ea9c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 24h]
        mov dword ptr [esi + 84h], edi
        mov dword ptr [esi + 88h], ecx
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 89 9E 90 00 00 00: mov word ptr [esi + 0x90], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 92 00 00 00: mov word ptr [esi + 0x92], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 94 00 00 00: mov word ptr [esi + 0x94], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 9ch], ebx
        mov dword ptr [esi + 0a0h], ebx
        ; Exact mapped bytes 66 89 9E A4 00 00 00: mov word ptr [esi + 0xa4], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E A6 00 00 00: mov word ptr [esi + 0xa6], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

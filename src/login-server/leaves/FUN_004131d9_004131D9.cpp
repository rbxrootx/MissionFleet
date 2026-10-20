// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004131D9 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_004131d9_004131D9() {
    __asm {
        mov eax, 43a638h
        ; Exact mapped bytes E8 25 C4 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 14h], esi
        test byte ptr [esi + 2dh], 20h
        ; Exact mapped bytes 74 11: je 0x413208
        __asm _emit 0x74
        __asm _emit 0x11
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ret
        mov eax, dword ptr [esi + 108h]
        mov ecx, dword ptr [esi + 0ch]
        and dword ptr [ebp - 4], 0
        lea edi, [esi + 108h]
        lea ebx, [esi + 0ch]
        push eax
        push ecx
        ; Exact mapped bytes E8 B0 B6 00 00: call 0x41e8d5
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x4132b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10ch]
        mov ecx, dword ptr [esi + 10h]
        push eax
        push ecx
        ; Exact mapped bytes E8 96 B6 00 00: call 0x41e8d5
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 6C: jne 0x4132b1
        __asm _emit 0x75
        __asm _emit 0x6c
        xor ebx, ebx
        push ebx
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 14 93 01 00: call 0x42c564
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [esi + 4]
        mov ecx, esi
        mov dword ptr [esi + 90h], ebx
        ; Exact mapped bytes E8 52 1B 00 00: call 0x414db2
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 50 93 01 00: call 0x42c5b8
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 66 83 FF 02: cmp di, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 F0: je 0x413260
        __asm _emit 0x74
        __asm _emit 0xf0
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        cmp eax, ebx
        ; Exact mapped bytes 75 09: jne 0x413285
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        push 1
        mov ecx, esi
        pop edi
        mov dword ptr [esi + 90h], edi
        ; Exact mapped bytes E8 C2 0D 00 00: call 0x414057
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push edi
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov eax, dword ptr [esi + 0c8h]
        mov dword ptr [esi + 0c4h], eax
        mov eax, edi
        ; Exact mapped bytes E9 48 FF FF FF: jmp 0x4131f9
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 2B AA 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [esi + 10h]
        lea ecx, [esi + 10ch]
        push eax
        ; Exact mapped bytes E8 1C AA 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov eax, dword ptr [esi + 104h]
        cmp dword ptr [eax - 8], 0
        ; Exact mapped bytes 75 17: jne 0x4132f2
        __asm _emit 0x75
        __asm _emit 0x17
        push dword ptr [esi + 2ch]
        mov eax, dword ptr [esi]
        mov ecx, esi
        push 0
        push dword ptr [esi + 88h]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes E9 07 FF FF FF: jmp 0x4131f9
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 2ch]
        mov edx, dword ptr [esi]
        mov ecx, esi
        push eax
        push dword ptr [esi + 88h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        ; Exact mapped bytes E9 F1 FE FF FF: jmp 0x4131f9
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}

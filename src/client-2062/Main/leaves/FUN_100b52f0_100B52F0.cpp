// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B52F0 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_100b52f0_100B52F0() {
    __asm {
        push -1
        push 10171deeh
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
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 1ch]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 2ch]
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [esp + 30h]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ebp
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        push eax
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes E8 5B DF F6 FF: call 0x10023290
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdf
        __asm _emit 0xf6
        __asm _emit 0xff
        xor ebx, ebx
        mov dword ptr [edi], 101761a4h
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [edi + 84h], 6
        lea esi, [edi + 0b4h]
        push 0fch
        ; Exact mapped bytes E8 45 74 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x74
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 2F: je 0x100b539a
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100b5385
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x100b5387
        __asm _emit 0x75
        __asm _emit 0x02
        xor edx, edx
        mov ecx, dword ptr [esp + 30h]
        push ebp
        push ecx
        push 3
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 F8 9E 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b539c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi - 4], eax
        ; Exact mapped bytes E8 F2 73 0B 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x73
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 32: je 0x100b53f0
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 98 57 1C 10: mov ecx, dword ptr [0x101c5798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 160h]
        test edx, edx
        ; Exact mapped bytes 7E 0A: jle 0x100b53d8
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 75 02: jne 0x100b53da
        __asm _emit 0x75
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 30h]
        push ebp
        add edx, 1eh
        push edx
        push 2
        push ecx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 A2 9E 04 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100b53f2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi], eax
        mov ecx, dword ptr [esi - 4]
        push 101h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 5A 9D 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 101h
        ; Exact mapped bytes E8 4E 9D 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi - 4]
        mov ecx, 7fffh
        add ebp, 10h
        add esi, 8
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi - 8]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [edi + 84h]
        inc ebx
        cmp ebx, eax
        ; Exact mapped bytes 0F 8C 17 FF FF FF: jl 0x100b5351
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, edi
        ; Exact mapped bytes E8 EF 02 00 00: call 0x100b5730
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov eax, edi
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

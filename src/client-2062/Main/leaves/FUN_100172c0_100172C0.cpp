// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100172C0 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_100172c0_100172C0() {
    __asm {
        push -1
        push 1016d4d3h
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
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 1ch]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 2ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 38h]
        mov esi, ecx
        push eax
        mov ecx, dword ptr [esp + 34h]
        push edi
        push ebp
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes E8 60 BD 0E 00: call 0x10103060
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xbd
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esi + 28h]
        xor ebx, ebx
        mov dword ptr [esi + 80h], edx
        mov edx, dword ptr [esp + 28h]
        mov dword ptr [esi + 8ch], edx
        mov edx, dword ptr [esp + 24h]
        mov ecx, 1
        mov eax, 2
        push 58h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 101754a0h
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 5ch], 3b9aca00h
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 68h], ebx
        mov dword ptr [esi + 84h], ebp
        mov dword ptr [esi + 88h], edi
        mov dword ptr [esi + 90h], edx
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 74h], eax
        mov dword ptr [esi + 78h], ebx
        mov dword ptr [esi + 6ch], 10h
        mov dword ptr [esi + 7ch], ebx
        mov dword ptr [esi + 9ch], ecx
        mov dword ptr [esi + 98h], ebx
        ; Exact mapped bytes E8 28 54 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x54
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 5A: je 0x100173e4
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov ebp, dword ptr [esi + 98h]
        push -1
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0A 76 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x76
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100173e0
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x100173e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 94h], ecx
        ; Exact mapped bytes E8 66 7D 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, dword ptr [esp + 14h]
        pop edi
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, esi
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014B40 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_10014b40_10014B40() {
    __asm {
        push -1
        push 1016d303h
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
        mov edx, dword ptr [esp + 18h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 30h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 2ch]
        push edi
        push ebp
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push ebx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 6B FD 01 00: call 0x100348f0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        mov al, byte ptr [esi + 50h]
        push 58h
        or al, 1
        mov dword ptr [esp + 20h], 0
        mov dword ptr [esi], 101753cch
        mov byte ptr [esi + 50h], al
        ; Exact mapped bytes E8 FE 7B 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7b
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 23: je 0x10014bd7
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [esp + 28h]
        push ebp
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E9 9D 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x0e
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], eax
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes EB 02: jmp 0x10014bd9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 8ch], edi
        ; Exact mapped bytes 66 81 67 24 FF 7F: and word ptr [edi + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 8ch]
        push 101h
        mov byte ptr [esp + 20h], 0
        ; Exact mapped bytes E8 66 A5 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xa5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 88h], 12ch
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

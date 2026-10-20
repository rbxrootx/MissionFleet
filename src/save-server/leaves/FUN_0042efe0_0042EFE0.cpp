// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EFE0 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_0042efe0_0042EFE0() {
    __asm {
        push -1
        push 58b923h
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
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], edi
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 8], edi
        push 685094h
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes E8 EA 35 00 00: call 0x432600
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov byte ptr [esp + 14h], 1
        ; Exact mapped bytes A1 58 50 68 00: mov eax, dword ptr [0x685058]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 74 0A: je 0x42f031
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 89 0D 58 50 68 00: mov dword ptr [0x685058], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x42f03b
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 10h
        ; Exact mapped bytes E8 48 59 00 00: call 0x434980
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 89 3D 94 50 68 00: mov dword ptr [0x685094], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        lea edx, [eax + 10h]
        mov dword ptr [esi], eax
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], edx
        ; Exact mapped bytes 66 89 38: mov word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x38
        mov eax, esi
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
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

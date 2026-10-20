// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10052C20 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_10052c20_10052C20() {
    __asm {
        push -1
        push 1016ecc6h
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
        mov esi, ecx
        push 198h
        mov dword ptr [esi + 0a68h], 0
        ; Exact mapped bytes E8 53 9B 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x9b
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 10: je 0x10052c70
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push 101aab10h
        mov ecx, eax
        ; Exact mapped bytes E8 52 CE 0A 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xce
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10052c72
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 24ch
        mov dword ptr [esp + 14h], 0ffffffffh
        mov dword ptr [esi + 12ch], eax
        ; Exact mapped bytes E8 16 9B 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x9b
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 1
        ; Exact mapped bytes 74 1D: je 0x10052cba
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 0F BF 4E 26: movsx ecx, word ptr [esi + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4e
        __asm _emit 0x26
        push 40h
        add ecx, 1388h
        push 0
        push ecx
        push 32h
        push 32h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 18 73 07 00: call 0x100c9fd0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x73
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10052cbc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi + 9a4h], eax
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
        ret
    }
}

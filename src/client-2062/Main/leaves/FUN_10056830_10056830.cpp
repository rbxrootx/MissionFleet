// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10056830 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_10056830_10056830() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016ee2eh
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 104h
        push esi
        mov esi, dword ptr [esp + 118h]
        mov eax, dword ptr [esi*4 + 101c4df0h]
        test eax, eax
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x100568e4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        mov ecx, 0ah
        cdq
        idiv ecx
        mov eax, esi
        mov ecx, 64h
        push edx
        cdq
        idiv ecx
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        push edx
        imul esi
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        push edx
        lea edx, [esp + 14h]
        push 101aab6ch
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push 198h
        ; Exact mapped bytes E8 EB 5E 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 110h], 0
        ; Exact mapped bytes 74 10: je 0x100568db
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [esp + 8]
        push 0
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 E7 91 0A 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100568dd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi*4 + 101c4df0h], eax
        mov ecx, dword ptr [esp + 108h]
        mov eax, dword ptr [esi*4 + 101c4df0h]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 110h
        ret
    }
}

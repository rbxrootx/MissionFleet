// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10016050 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_10016050_10016050() {
    __asm {
        push -1
        push 1016d44bh
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
        push edi
        mov ecx, 8
        xor eax, eax
        lea edi, [esi + 4]
        mov dword ptr [esi], 1017546ch
        push 98h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        xor edi, edi
        mov dword ptr [esi + 2ch], edi
        ; Exact mapped bytes E8 15 67 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x67
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 8], eax
        cmp eax, edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 74 0F: je 0x100160a9
        __asm _emit 0x74
        __asm _emit 0x0f
        push edi
        push 1000h
        mov ecx, eax
        ; Exact mapped bytes E8 59 C7 0C 00: call 0x100e2800
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100160ab
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [esi + 30h], eax
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
        ret
    }
}

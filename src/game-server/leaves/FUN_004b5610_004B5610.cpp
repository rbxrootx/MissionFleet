// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5610 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_004b5610_004B5610() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 90 1A 5D 00: cmp eax, dword ptr [0x5d1a90]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 77 2E: ja 0x4b564d
        __asm _emit 0x77
        __asm _emit 0x2e
        push 9
        ; Exact mapped bytes E8 CA FB FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 0E 0C 00 00: call 0x4b6240
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        push 9
        ; Exact mapped bytes E8 51 FC FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 05: je 0x4b564d
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 2C: jmp 0x4b5679
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4b565a
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 1
        mov edx, dword ptr [ebp + 8]
        add edx, 0fh
        and edx, 0fffffff0h
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 5C 02 5E 00: mov ecx, dword ptr [0x5e025c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 7C 22 5E 00: call dword ptr [0x5e227c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

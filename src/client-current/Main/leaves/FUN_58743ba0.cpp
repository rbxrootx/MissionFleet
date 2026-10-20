// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58743BA0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58743ba0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898ca9ch
        cmp dword ptr [esi + 24h], 10h
        ; Exact mapped bytes 72 0C: jb 0x58743bbb
        __asm _emit 0x72
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 10h]
        push eax
        ; Exact mapped bytes E8 8A 90 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        mov dword ptr [esi + 24h], 0fh
        mov dword ptr [esi + 20h], eax
        mov ecx, esi
        mov byte ptr [esi + 10h], al
        ; Exact mapped bytes E8 9B 90 23 00: call 0x5897cc6c
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58743be1
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 64 90 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x90
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
    }
}

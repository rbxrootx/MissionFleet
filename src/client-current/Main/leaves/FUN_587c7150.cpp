// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C7150 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587c7150() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5899af00h
        ; Exact mapped bytes E8 42 FD 13 00: call 0x58906ea0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0x13
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587c716e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 D7 5A 1B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5a
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}

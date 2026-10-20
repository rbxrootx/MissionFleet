// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4CE0 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_587c4ce0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 14h]
        mov dword ptr [esi], 5899adc8h
        test eax, eax
        ; Exact mapped bytes 7E 0B: jle 0x587c4cfb
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 10h]
        push eax
        ; Exact mapped bytes E8 9D 82 1B 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x82
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x587c4d06
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 7D 0C: jge 0x587c4d09
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 10h]
        push ecx
        ; Exact mapped bytes E8 20 81 1B 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x81
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        test byte ptr [esp + 8], 1
        mov dword ptr [esi], 5899ad84h
        ; Exact mapped bytes 74 09: je 0x587c4d1f
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 26 7F 1B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x7f
        __asm _emit 0x1b
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}

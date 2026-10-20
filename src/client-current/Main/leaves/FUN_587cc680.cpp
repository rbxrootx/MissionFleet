// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CC680 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_587cc680() {
    __asm {
        ; Exact mapped bytes F6 44 24 04 01: test byte ptr [esp + 4], 1
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes C7 06 A4 B2 99 58: mov dword ptr [esi], 0x5899b2a4
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xa4
        __asm _emit 0xb2
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes 74 09: je 0x587cc699
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 AC 05 1B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x05
        __asm _emit 0x1b
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
    }
}

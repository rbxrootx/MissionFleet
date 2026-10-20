// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850D92 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_58850d92() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 83 3E 00: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x58850da5
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes E8 AB FF FF FF: call 0x58850d4c
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 04: je 0x58850da9
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes E8 62 19 01 00: call 0x58862710
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A377 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_5883a377_5883A377() {
    __asm {
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 75 03: jne 0x5883a384
        __asm _emit 0x75
        __asm _emit 0x03
        xor eax, eax
        ret
        push ebx
        push esi
        ; Exact mapped bytes E8 90 A4 FF FF: call 0x5883481b
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 35 EC 83 96 58: mov esi, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        mov bl, al
        test esi, esi
        ; Exact mapped bytes 74 14: je 0x5883a3ab
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, esi
        ; Exact mapped bytes E8 EC 87 FF FF: call 0x58832b8a
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        push 5bdch
        push esi
        ; Exact mapped bytes E8 8B 6C FF FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        ; Exact mapped bytes 83 25 EC 83 96 58 00: and dword ptr [0x589683ec], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        pop esi
        movzx eax, bl
        pop ebx
        ret
    }
}

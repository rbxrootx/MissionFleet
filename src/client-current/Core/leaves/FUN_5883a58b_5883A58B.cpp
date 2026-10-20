// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A58B .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_5883a58b_5883A58B() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 AC 1C 00 00: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 83 96 58: mov ecx, dword ptr [0x589683ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, esi
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x5883a5b0
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [ebp + 8], esi
        ; Exact mapped bytes 74 0B: je 0x5883a5b0
        __asm _emit 0x74
        __asm _emit 0x0b
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 76 F6 FF FF: call 0x58839c23
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        movzx esi, al
        ; Exact mapped bytes E8 A5 1C 00 00: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}

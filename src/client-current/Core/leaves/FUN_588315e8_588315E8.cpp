// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588315E8 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_588315e8_588315E8() {
    __asm {
        mov ecx, edx
        bts edx, 14h
        shr ecx, 14h
        and edx, 1fffffh
        sub ecx, 433h
        ; Exact mapped bytes 7D 19: jge 0x58831618
        __asm _emit 0x7d
        __asm _emit 0x19
        neg ecx
        push ebx
        xor ebx, ebx
        shrd ebx, eax, cl
        ; Exact mapped bytes 74 08: je 0x58831611
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes F3 0F 2C 1D AC 1C 8C 58: cvttss2si ebx, dword ptr [0x588c1cac]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0x1d
        __asm _emit 0xac
        __asm _emit 0x1c
        __asm _emit 0x8c
        __asm _emit 0x58
        pop ebx
        shrd eax, edx, cl
        shr edx, cl
        ret
        shld edx, eax, cl
        shl eax, cl
        ret
    }
}

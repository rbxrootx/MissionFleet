// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CA390 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_584ca390_584CA390() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E C6 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 50h]
        ; Exact mapped bytes 74 13: je 0x584ca3bd
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B C6 FB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xc6
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 54h]
        ; Exact mapped bytes 75 09: jne 0x584ca3c6
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 08 00 00: call 0x584cacb0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

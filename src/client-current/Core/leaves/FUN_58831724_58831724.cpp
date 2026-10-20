// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831724 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_58831724_58831724() {
    __asm {
        push esi
        ; Exact mapped bytes E8 03 0F 00 00: call 0x5883262d
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5883174e
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 64 A1 18 00 00 00: mov eax, dword ptr fs:[0x18]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, 589666e8h
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes EB 04: jmp 0x58831742
        __asm _emit 0xeb
        __asm _emit 0x04
        cmp edx, eax
        ; Exact mapped bytes 74 10: je 0x58831752
        __asm _emit 0x74
        __asm _emit 0x10
        xor eax, eax
        mov ecx, edx
        ; Exact mapped bytes F0 0F B1 0E: lock cmpxchg dword ptr [esi], ecx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0x0e
        test eax, eax
        ; Exact mapped bytes 75 F0: jne 0x5883173e
        __asm _emit 0x75
        __asm _emit 0xf0
        xor al, al
        pop esi
        ret
        mov al, 1
        pop esi
        ret
    }
}

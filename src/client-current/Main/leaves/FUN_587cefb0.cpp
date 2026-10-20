// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CEFB0 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_587cefb0() {
    __asm {
        movzx edx, word ptr [ecx + 0a06h]
        ; Exact mapped bytes 66 83 3C 55 42 30 9C 58 00: cmp word ptr [edx*2 + 0x589c3042], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x55
        __asm _emit 0x42
        __asm _emit 0x30
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 3C: je 0x587ceffe
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [edx*8 + 589c3ef8h]
        cmp eax, -1
        ; Exact mapped bytes 74 12: je 0x587cefe0
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ecx + 90h], eax
        ; Exact mapped bytes 75 0A: jne 0x587cefe0
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ecx + 0ech], 1
        mov edx, dword ptr [edx*8 + 589c3efch]
        cmp edx, -1
        ; Exact mapped bytes 74 12: je 0x587ceffe
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ecx + 94h], edx
        ; Exact mapped bytes 75 0A: jne 0x587ceffe
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ecx + 0ech], 1
        ret
    }
}

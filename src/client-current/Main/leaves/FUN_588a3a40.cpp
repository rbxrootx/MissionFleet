// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588A3A40 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_588a3a40() {
    __asm {
        ; Exact mapped bytes 83 7C 24 08 02: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        ; Exact mapped bytes 75 14: jne 0x588a3a5b
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 3B 41 78: cmp eax, dword ptr [ecx + 0x78]
        __asm _emit 0x3b
        __asm _emit 0x41
        __asm _emit 0x78
        ; Exact mapped bytes 75 0B: jne 0x588a3a5b
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 D0 0C 00: call 0x58970ae0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

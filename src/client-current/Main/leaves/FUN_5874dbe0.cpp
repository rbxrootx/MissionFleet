// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874DBE0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5874dbe0() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 30h]
        cmp dword ptr [ecx + 0cc0h], 0
        ; Exact mapped bytes 75 04: jne 0x5874dbf8
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 11 DC FF FF: call 0x5874b810
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 F1: je 0x5874dbf4
        __asm _emit 0x74
        __asm _emit 0xf1
        push 2
        push 3
        push 8
        mov ecx, esi
        ; Exact mapped bytes E8 00 DB FF FF: call 0x5874b710
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        setne al
        pop esi
        ret
    }
}

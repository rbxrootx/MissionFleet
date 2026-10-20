// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588317BB .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_588317bb_588317BB() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes E8 6A 0E 00 00: call 0x5883262d
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x588317e0
        __asm _emit 0x75
        __asm _emit 0x19
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 13: jne 0x588317e0
        __asm _emit 0x75
        __asm _emit 0x13
        push dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 14h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 F4 38 03 00: call 0x588650df
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x38
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        pop ecx
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885EA50 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5885ea50() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0f0h]
        ; Exact mapped bytes E8 A2 B0 0A 00: call 0x58909b00
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb0
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0f0h]
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5885ea71
        __asm _emit 0x75
        __asm _emit 0x09
        push 1
        ; Exact mapped bytes E8 31 53 F3 FF: call 0x58793da0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0xff
        pop esi
        ret
        ; Exact mapped bytes E8 8A B0 0A 00: call 0x58909b00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb0
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0D: jne 0x5885ea88
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0f0h]
        push 0
        ; Exact mapped bytes E8 18 53 F3 FF: call 0x58793da0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0xff
        pop esi
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881E720 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_5881e720() {
    __asm {
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0dch]
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        ; Exact mapped bytes E8 2A 49 02 00: call 0x58843060
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0d8h]
        push esi
        ; Exact mapped bytes E8 C8 AA 02 00: call 0x58849210
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B0 45 A2 58: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 AC 38 F3 FF: call 0x58752000
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x38
        __asm _emit 0xf3
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

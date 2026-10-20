// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885EB60 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5885eb60() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        lea esi, [ecx + eax*4 + 5f4h]
        mov ecx, dword ptr [esi]
        xor ecx, 0aah
        ; Exact mapped bytes 7D 17: jge 0x5885eb8d
        __asm _emit 0x7d
        __asm _emit 0x17
        push 0aah
        mov dword ptr [esi], 0aah
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 53 2A F4 FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x2a
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

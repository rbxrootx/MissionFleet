// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885ED50 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5885ed50() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        lea esi, [ecx + eax*4 + 604h]
        mov ecx, dword ptr [esi]
        push ecx
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 D5 28 F4 FF: call 0x587a1640
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x28
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        xor eax, 0aah
        dec eax
        xor eax, 0aah
        push eax
        mov dword ptr [esi], eax
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 59 28 F4 FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x28
        __asm _emit 0xf4
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

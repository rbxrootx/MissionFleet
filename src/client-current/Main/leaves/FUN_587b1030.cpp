// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B1030 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_587b1030() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 88h]
        lea eax, [esi + 104h]
        mov dword ptr [eax], 0aaaaaaaah
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 75 11: jne 0x587b1061
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 7F 05 FF FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 8]
        sub eax, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 79 02: jns 0x587b106f
        __asm _emit 0x79
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        neg ecx
        sbb ecx, ecx
        and ecx, 40000000h
        mov dword ptr [esi + 0f8h], ecx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

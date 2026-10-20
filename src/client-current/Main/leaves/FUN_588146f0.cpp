// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588146F0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_588146f0() {
    __asm {
        cmp dword ptr [esp + 8], 2
        push esi
        mov esi, ecx
        ; Exact mapped bytes 75 43: jne 0x5881473d
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 75 21: jne 0x58814727
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 7C 06 00: call 0x5887c390
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        mov dword ptr [esi + 58h], 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 75 0E: jne 0x5881473d
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esi + 58h], 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

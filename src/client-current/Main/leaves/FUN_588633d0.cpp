// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588633D0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_588633d0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 22 67 0A 00: call 0x58909b00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x588633f7
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, 1
        ; Exact mapped bytes 66 89 86 A4 00 00 00: mov word ptr [esi + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes EB 1A: jmp 0x58863411
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes E8 04 67 0A 00: call 0x58909b00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 15: jne 0x58863416
        __asm _emit 0x75
        __asm _emit 0x15
        xor ecx, ecx
        ; Exact mapped bytes 66 89 8E A4 00 00 00: mov word ptr [esi + 0xa4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [esi + 0b0h]
        ; Exact mapped bytes E8 8A 09 F3 FF: call 0x58793da0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x09
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0b8h]
        push edx
        ; Exact mapped bytes E8 68 45 0A 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ret
    }
}

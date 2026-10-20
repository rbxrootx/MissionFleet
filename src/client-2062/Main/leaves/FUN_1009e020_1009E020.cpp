// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009E020 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_1009e020_1009E020() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        cmp eax, 40000000h
        mov esi, ecx
        ; Exact mapped bytes 75 3C: jne 0x1009e06a
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 298h]
        ; Exact mapped bytes E8 87 45 F9 FF: call 0x100325c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x1009e04a
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 298h]
        push 1
        ; Exact mapped bytes E8 56 44 F9 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 29ch]
        ; Exact mapped bytes E8 6B 45 F9 FF: call 0x100325c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 4F: jne 0x1009e0a8
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 29ch]
        push 1
        ; Exact mapped bytes E8 3A 44 F9 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 3A: jne 0x1009e0a8
        __asm _emit 0x75
        __asm _emit 0x3a
        mov ecx, dword ptr [esi + 298h]
        ; Exact mapped bytes E8 47 45 F9 FF: call 0x100325c0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 0D: jne 0x1009e08b
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 298h]
        push 0
        ; Exact mapped bytes E8 15 44 F9 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 29ch]
        ; Exact mapped bytes E8 2A 45 F9 FF: call 0x100325c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 0D: jne 0x1009e0a8
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 29ch]
        push 0
        ; Exact mapped bytes E8 F8 43 F9 FF: call 0x100324a0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

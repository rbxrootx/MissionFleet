// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434E94 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_00434e94_00434E94() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        push 2
        ; Exact mapped bytes E8 04 21 00 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 0ch]
        add dword ptr [esi + 0a0h], edi
        mov eax, dword ptr [esi + 0a0h]
        test eax, eax
        ; Exact mapped bytes 7E 21: jle 0x434ed4
        __asm _emit 0x7e
        __asm _emit 0x21
        ; Exact mapped bytes FF 35 C4 FB 44 00: push dword ptr [0x44fbc4]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 E0 C3 43 00: call dword ptr [0x43c3e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 7E 24: jle 0x434ee7
        __asm _emit 0x7e
        __asm _emit 0x24
        cmp dword ptr [esi + 0a0h], 1
        ; Exact mapped bytes 75 1B: jne 0x434ee7
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes EB 13: jmp 0x434ee7
        __asm _emit 0xeb
        __asm _emit 0x13
        push dword ptr [esi + 0a4h]
        and dword ptr [esi + 0a0h], 0
        ; Exact mapped bytes FF 15 E0 C3 43 00: call dword ptr [0x43c3e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes E8 25 21 00 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

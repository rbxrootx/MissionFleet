// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10025950 .. +0x1B9 bytes.
extern "C" __declspec(naked) void FUN_10025950_10025950() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        push 0ceh
        lea eax, [esi + 8]
        lea ecx, [esi + 14h]
        push eax
        lea edx, [esi + 154h]
        push ecx
        push edx
        push 0
        push 10181640h
        push 1017f490h
        mov ecx, esi
        ; Exact mapped bytes E8 B5 FC FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        lea eax, [esi + 1ch]
        push 368h
        lea ecx, [esi + 28h]
        push eax
        lea edx, [esi + 214h]
        push ecx
        push edx
        push 1
        push 10181618h
        push 1017f4a0h
        mov ecx, esi
        ; Exact mapped bytes E8 8C FC FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, eax
        lea eax, [esi + 30h]
        push 0ach
        lea ecx, [esi + 3ch]
        push eax
        lea edx, [esi + 2d4h]
        push ecx
        push edx
        push 0
        push 101815f0h
        push 1017f484h
        mov ecx, esi
        ; Exact mapped bytes E8 63 FC FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, eax
        lea eax, [esi + 44h]
        push 0a4h
        lea ecx, [esi + 50h]
        push eax
        lea edx, [esi + 394h]
        push ecx
        push edx
        push 0
        push 101815c8h
        push 1017f478h
        mov ecx, esi
        ; Exact mapped bytes E8 3A FC FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, eax
        lea eax, [esi + 6ch]
        push 0b4h
        lea ecx, [esi + 78h]
        push eax
        lea edx, [esi + 454h]
        push ecx
        push edx
        push 0
        push 101815a0h
        push 1017f46ch
        mov ecx, esi
        ; Exact mapped bytes E8 11 FC FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, eax
        lea eax, [esi + 80h]
        push 0a8h
        lea ecx, [esi + 8ch]
        push eax
        lea edx, [esi + 514h]
        push ecx
        push edx
        push 0
        push 10181578h
        push 1017f45ch
        mov ecx, esi
        ; Exact mapped bytes E8 E2 FB FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, eax
        lea eax, [esi + 0e4h]
        push 0ach
        lea ecx, [esi + 0f0h]
        push eax
        lea edx, [esi + 5d4h]
        push ecx
        push edx
        push 0
        push 10181550h
        push 1017f44ch
        mov ecx, esi
        ; Exact mapped bytes E8 B3 FB FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, eax
        lea eax, [esi + 0f8h]
        push 0b4h
        lea ecx, [esi + 104h]
        push eax
        lea edx, [esi + 694h]
        push ecx
        push edx
        push 0
        push 10181528h
        push 1017f43ch
        mov ecx, esi
        ; Exact mapped bytes E8 84 FB FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, eax
        lea eax, [esi + 10ch]
        push 0d4h
        lea ecx, [esi + 118h]
        push eax
        lea edx, [esi + 754h]
        push ecx
        push edx
        push 0
        push 10181500h
        push 1017f42ch
        mov ecx, esi
        ; Exact mapped bytes E8 55 FB FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, eax
        lea eax, [esi + 58h]
        push 9ch
        lea ecx, [esi + 64h]
        push eax
        lea edx, [esi + 814h]
        push ecx
        push edx
        push 0
        push 101814d8h
        push 1017f420h
        mov ecx, esi
        ; Exact mapped bytes E8 2C FB FF FF: call 0x10025630
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, edi
        pop edi
        pop esi
        ret
    }
}

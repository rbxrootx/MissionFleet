// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10092FC0 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_10092fc0_10092FC0() {
    __asm {
        sub esp, 60h
        push esi
        mov esi, dword ptr [esp + 68h]
        push edi
        mov edi, ecx
        mov al, byte ptr [esi]
        test al, al
        ; Exact mapped bytes 75 35: jne 0x10093006
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esi + 1]
        push edx
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 3B 1A 00 00: call 0x10094a20
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 8]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 7F 2A F8 FF: call 0x10015a70
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0xff
        lea edx, [esp + 8]
        push esi
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 82 F8 FF FF: call 0x10092880
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 60h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 75 2D: jne 0x10093037
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        lea edx, [esi + 1]
        push edx
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 42 1A 00 00: call 0x10094a60
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 8]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 46 2A F8 FF: call 0x10015a70
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0xff
        lea edx, [esp + 8]
        push esi
        push edx
        mov ecx, edi
        ; Exact mapped bytes E8 49 F8 FF FF: call 0x10092880
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 60h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

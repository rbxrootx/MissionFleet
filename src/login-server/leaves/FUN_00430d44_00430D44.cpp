// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430D44 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00430d44_00430D44() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 67 4F 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x430d63
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [eax + 1ch], esi
        ; Exact mapped bytes 75 0B: jne 0x430d63
        __asm _emit 0x75
        __asm _emit 0x0b
        push dword ptr [esp + 8]
        mov ecx, eax
        ; Exact mapped bytes E8 BB 11 00 00: call 0x431f1e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 88 D4 FF FF: call 0x42e1f2
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, 40000000h
        ; Exact mapped bytes 75 1A: jne 0x430d8b
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 94 E4 FF FF: call 0x42f20a
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 1
        push dword ptr [eax + 0ch]
        push dword ptr [eax + 8]
        push dword ptr [eax + 4]
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes E8 97 FB FF FF: call 0x430922
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

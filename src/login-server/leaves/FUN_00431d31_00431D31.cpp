// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431D31 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00431d31_00431D31() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        xor ecx, ecx
        cmp dword ptr [esp + 0ch], edi
        mov eax, dword ptr [esi]
        setne cl
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp dword ptr [esi + 0ch], edi
        ; Exact mapped bytes 74 35: je 0x431d82
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [esi + 10h], edi
        ; Exact mapped bytes 75 30: jne 0x431d82
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 39 3D D8 FB 44 00: cmp dword ptr [0x44fbd8], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x431d67
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 87 41 00 00: call 0x435ee6
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 3D D8 FB 44 00: cmp dword ptr [0x44fbd8], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 1B: je 0x431d82
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes FF 35 D8 FB 44 00: push dword ptr [0x44fbd8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        push edi
        push 400h
        push dword ptr [esi + 8]
        push dword ptr [eax + 4]
        ; Exact mapped bytes FF 15 F4 C3 43 00: call dword ptr [0x43c3f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

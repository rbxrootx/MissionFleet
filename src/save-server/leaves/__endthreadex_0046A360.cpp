// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046A360 .. +0x45 bytes.
extern "C" __declspec(naked) void __endthreadex_0046A360() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 94 DA 67 00 00: cmp dword ptr [0x67da94], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x46a373
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes FF 15 94 DA 67 00: call dword ptr [0x67da94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 88 4F 00 00: call 0x46f300
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0A: jne 0x46a38b
        __asm _emit 0x75
        __asm _emit 0x0a
        push 10h
        ; Exact mapped bytes E8 08 C0 FF FF: call 0x466390
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 0C 50 00 00: call 0x46f3a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 B4 B8 68 00: call dword ptr [0x68b8b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

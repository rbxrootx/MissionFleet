// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00566982 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_00566982_00566982() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 58e540h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 56 FE FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 0C 2A 5E 00: call dword ptr [0x5e2a0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 33: je 0x5669de
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 D6 A5 FC FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x5669de
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E F9 FF FF: call 0x566330
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 DB A5 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 F0 00 00 00: call dword ptr [eax + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

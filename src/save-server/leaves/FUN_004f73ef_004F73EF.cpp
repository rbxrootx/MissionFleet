// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F73EF .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_004f73ef_004F73EF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 14: jne 0x4f7412
        __asm _emit 0x75
        __asm _emit 0x14
        push 672f2ch
        push 672f68h
        ; Exact mapped bytes E8 08 92 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x92
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 49: jmp 0x4f745b
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 2E: je 0x4f7449
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 94 BE 68 00: call dword ptr [0x68be94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 16: je 0x4f7447
        __asm _emit 0x74
        __asm _emit 0x16
        push -1
        push 0
        push 0b1h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x4f745b
        __asm _emit 0xeb
        __asm _emit 0x12
        push 672f6ch
        push 672fach
        ; Exact mapped bytes E8 BD 91 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 34 21 FF FF: call 0x4e9594
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}

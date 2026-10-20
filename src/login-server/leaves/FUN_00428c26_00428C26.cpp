// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428C26 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_00428c26_00428C26() {
    __asm {
        push esi
        ; Exact mapped bytes 8B 35 D8 FC 44 00: mov esi, dword ptr [0x44fcd8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        push edi
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x428c61
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edi, dword ptr [esp + 10h]
        push edi
        push eax
        push dword ptr [esp + 14h]
        ; Exact mapped bytes E8 5B F7 FF FF: call 0x42839e
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x428c57
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [esi]
        mov al, byte ptr [eax + edi]
        cmp al, 3dh
        ; Exact mapped bytes 74 1E: je 0x428c71
        __asm _emit 0x74
        __asm _emit 0x1e
        test al, al
        ; Exact mapped bytes 74 1A: je 0x428c71
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [esi + 4]
        add esi, 4
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x428c38
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, esi
        ; Exact mapped bytes 2B 05 D8 FC 44 00: sub eax, dword ptr [0x44fcd8]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        sar eax, 2
        neg eax
        pop edi
        pop esi
        ret
        mov eax, esi
        ; Exact mapped bytes 2B 05 D8 FC 44 00: sub eax, dword ptr [0x44fcd8]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x00
        sar eax, 2
        ; Exact mapped bytes EB F0: jmp 0x428c6e
        __asm _emit 0xeb
        __asm _emit 0xf0
    }
}

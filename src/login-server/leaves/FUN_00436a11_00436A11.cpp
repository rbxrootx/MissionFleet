// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436A11 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_00436a11_00436A11() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi]
        cmp eax, -1
        ; Exact mapped bytes 74 07: je 0x436a23
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes FF 15 30 C1 43 00: call dword ptr [0x43c130]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esi + 14h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x436a3d
        __asm _emit 0x74
        __asm _emit 0x13
        mov edi, dword ptr [eax + 4]
        push 0
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 8A 02 00 00: call 0x436cc1
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        mov eax, edi
        ; Exact mapped bytes 75 ED: jne 0x436a2a
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esi + 10h]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x436a5b
        __asm _emit 0x74
        __asm _emit 0x17
        push eax
        ; Exact mapped bytes FF 15 B8 C1 43 00: call dword ptr [0x43c1b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        push edi
        ; Exact mapped bytes FF 15 24 C2 43 00: call dword ptr [0x43c224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 15 78 C2 43 00: call dword ptr [0x43c278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        add esi, 1ch
        push esi
        ; Exact mapped bytes FF 15 BC C1 43 00: call dword ptr [0x43c1bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BEF60 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_100bef60_100BEF60() {
    __asm {
        push -1
        push 101723b8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 10176260h
        mov eax, dword ptr [esi + 68h]
        xor edi, edi
        push eax
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes FF 15 38 50 17 10: call dword ptr [0x10175038]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 588h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100befaa
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 588h], edi
        mov ecx, dword ptr [esi + 58ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100befc0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 58ch], edi
        mov ecx, dword ptr [esi + 590h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100befd6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 590h], edi
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 BB 3E 04 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}

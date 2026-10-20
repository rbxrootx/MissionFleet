// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F3F0 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_0040f3f0_0040F3F0() {
    __asm {
        push -1
        push 43a332h
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
        mov dword ptr [esi], 43d340h
        mov ecx, dword ptr [esi + 40c50h]
        mov dword ptr [esp + 14h], 3
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x40f436
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 40c50h], 0
        mov ecx, dword ptr [esi + 40c54h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x40f450
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 40c54h], 0
        mov edi, dword ptr [esi + 0c28h]
        test edi, edi
        ; Exact mapped bytes 74 16: je 0x40f470
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, edi
        mov edi, dword ptr [edi + 0c84h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x40f46c
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        test edi, edi
        ; Exact mapped bytes 75 EA: jne 0x40f45a
        __asm _emit 0x75
        __asm _emit 0xea
        mov eax, dword ptr [esi + 40c6ch]
        mov byte ptr [esp + 14h], 2
        push eax
        mov dword ptr [esi + 40c58h], 43d41ch
        ; Exact mapped bytes E8 8A E4 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 40c44h]
        mov byte ptr [esp + 18h], 1
        push eax
        mov dword ptr [esi + 40c30h], 43d420h
        ; Exact mapped bytes E8 6F E4 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 8
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 92 04 02 00: call 0x42f94a
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x02
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

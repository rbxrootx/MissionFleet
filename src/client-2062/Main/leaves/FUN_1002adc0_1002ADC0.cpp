// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002ADC0 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_1002adc0_1002ADC0() {
    __asm {
        push -1
        push 1016dbe8h
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
        mov dword ptr [esi], 10175734h
        mov eax, dword ptr [esi + 0d0h]
        xor edi, edi
        cmp eax, edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 74 0F: je 0x1002ae03
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 8A 19 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x19
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0d0h], edi
        mov ecx, dword ptr [esi + 0cch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1002ae19
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0cch], edi
        mov ecx, dword ptr [esi + 0c8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1002ae2f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c8h], edi
        mov ecx, dword ptr [esi + 0dch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1002ae45
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0dch], edi
        mov ecx, dword ptr [esi + 0c4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1002ae5b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c4h], edi
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 36 35 FE FF: call 0x1000e3a0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
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

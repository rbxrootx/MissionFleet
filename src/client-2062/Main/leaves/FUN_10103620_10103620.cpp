// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10103620 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_10103620_10103620() {
    __asm {
        push -1
        push 10174938h
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
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 101767e4h
        ; Exact mapped bytes A1 48 93 1C 10: mov eax, dword ptr [0x101c9348]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 10h], 0
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x1010365d
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes A1 4C 93 1C 10: mov eax, dword ptr [0x101c934c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x10103685
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10103671
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [esi + 1ch], 0
        mov eax, dword ptr [esi + 18h]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x10103685
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [esi + 18h], 0
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        ; Exact mapped bytes E8 1C 47 06 00: call 0x10167db0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x47
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
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

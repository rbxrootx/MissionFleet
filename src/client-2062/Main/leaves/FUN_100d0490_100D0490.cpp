// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D0490 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_100d0490_100D0490() {
    __asm {
        push -1
        push 10172f78h
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
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 0ch], edi
        mov dword ptr [edi], 101763e8h
        mov ecx, dword ptr [edi + 7ch]
        mov dword ptr [esp + 18h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x100d04d1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 7ch], 0
        lea esi, [edi + 5ch]
        mov ebx, 8
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100d04eb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 E8: jne 0x100d04d9
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, edi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 90 E6 02 00: call 0x100feb90
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebx
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

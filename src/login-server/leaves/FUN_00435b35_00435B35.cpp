// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435B35 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_00435b35_00435B35() {
    __asm {
        mov eax, 43a80ah
        ; Exact mapped bytes E8 C9 9A FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43d6f8h
        mov ecx, dword ptr [esi + 1044h]
        mov dword ptr [ebp - 4], 1
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x435b64
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 106ch]
        lea edi, [esi + 106ch]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x435b8d
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ecx]
        lea edx, [esi + 1048h]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x435b8d
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        and byte ptr [ebp - 4], 0
        lea ecx, [esi + 1070h]
        ; Exact mapped bytes E8 8E 12 00 00: call 0x436e2a
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
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
        leave
        ret
    }
}

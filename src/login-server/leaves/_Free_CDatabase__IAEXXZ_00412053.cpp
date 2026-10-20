// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00412053 .. +0x64 bytes.
extern "C" __declspec(naked) void _Free_CDatabase__IAEXXZ_00412053() {
    __asm {
        mov eax, 43a4ach
        ; Exact mapped bytes E8 AB D5 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ecx
        mov eax, dword ptr [ecx]
        and dword ptr [ebp - 4], 0
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        or dword ptr [ebp - 4], 0ffffffffh
        push 4359afh
        mov ecx, 44dc10h
        ; Exact mapped bytes E8 C7 4D 02 00: call 0x436e48
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4d
        __asm _emit 0x02
        __asm _emit 0x00
        push 0fh
        mov esi, eax
        ; Exact mapped bytes E8 19 4F 02 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x4120a1
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 75 0A: jne 0x4120a1
        __asm _emit 0x75
        __asm _emit 0x0a
        push eax
        ; Exact mapped bytes E8 E5 A4 01 00: call 0x42c582
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        and dword ptr [esi + 4], 0
        push 0fh
        ; Exact mapped bytes E8 6B 4F 02 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x4f
        __asm _emit 0x02
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
        pop ebx
        leave
        ret
    }
}

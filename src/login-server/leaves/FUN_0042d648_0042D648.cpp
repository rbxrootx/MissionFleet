// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D648 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_0042d648_0042D648() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x42d65e
        __asm _emit 0x74
        __asm _emit 0x0b
        push eax
        ; Exact mapped bytes E8 BC 02 00 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [esi + 4], 0
        pop ecx
        cmp dword ptr [esp + 10h], 0
        mov ebx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 74 1C: je 0x42d685
        __asm _emit 0x74
        __asm _emit 0x1c
        push edi
        mov edi, ebx
        shl edi, 2
        push edi
        ; Exact mapped bytes E8 77 02 00 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 0
        push eax
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes E8 5F 14 FF FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop edi
        mov dword ptr [esi + 8], ebx
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

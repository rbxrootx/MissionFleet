// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1220 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_100f1220_100F1220() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov ebx, 20h
        mov dword ptr [esi + 5c50h], 0
        mov dword ptr [esi + 5c54h], 1
        mov dword ptr [esi + 7ch], eax
        lea edi, [esi + 21ch]
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x100f125a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esi + 7ch]
        push edx
        ; Exact mapped bytes E8 16 47 F5 FF: call 0x10045970
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0xff
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EB: jne 0x100f124b
        __asm _emit 0x75
        __asm _emit 0xeb
        lea eax, [esi + 332h]
        push 101ad0e8h
        push eax
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x100f1287
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [esi + 5ca8h], 1
        ; Exact mapped bytes 66 89 86 AC 5C 00 00: mov word ptr [esi + 0x5cac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xac
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

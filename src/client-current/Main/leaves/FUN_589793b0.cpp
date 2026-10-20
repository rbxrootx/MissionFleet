// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589793B0 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_589793b0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 38h]
        test eax, eax
        ; Exact mapped bytes 76 6D: jbe 0x58979429
        __asm _emit 0x76
        __asm _emit 0x6d
        push edi
        xor edi, edi
        sar eax, 1
        ; Exact mapped bytes 74 21: je 0x589793e4
        __asm _emit 0x74
        __asm _emit 0x21
        inc edi
        sar eax, 1
        ; Exact mapped bytes 75 FB: jne 0x589793c3
        __asm _emit 0x75
        __asm _emit 0xfb
        cmp edi, 0eh
        ; Exact mapped bytes 7E 17: jle 0x589793e4
        __asm _emit 0x7e
        __asm _emit 0x17
        mov eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 14h], 28h
        mov eax, dword ptr [esi + 20h]
        push eax
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov ecx, dword ptr [esi + 34h]
        mov eax, edi
        shl eax, 4
        push eax
        push ecx
        push esi
        ; Exact mapped bytes E8 9C FE FF FF: call 0x58979290
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 74 0E: je 0x58979409
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 38h]
        push edi
        push edx
        push esi
        ; Exact mapped bytes E8 6A FD FF FF: call 0x58979170
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [esi + 3ch]
        mov ecx, dword ptr [esi + 40h]
        push eax
        push ecx
        push esi
        mov dword ptr [esi + 38h], 0
        ; Exact mapped bytes E8 12 00 00 00: call 0x58979430
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [esi + 3ch], 0
        pop edi
        pop esi
        ret
    }
}

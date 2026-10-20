// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004284C8 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_004284c8_004284C8() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        ; Exact mapped bytes 3B 1D 80 11 45 00: cmp ebx, dword ptr [0x451180]
        __asm _emit 0x3b
        __asm _emit 0x1d
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes 73 72: jae 0x428549
        __asm _emit 0x73
        __asm _emit 0x72
        mov eax, ebx
        sar eax, 5
        lea edi, [eax*4 + 451080h]
        mov eax, ebx
        and eax, 1fh
        lea esi, [eax + eax*8]
        mov eax, dword ptr [edi]
        shl esi, 2
        test byte ptr [eax + esi + 4], 1
        ; Exact mapped bytes 74 52: je 0x428549
        __asm _emit 0x74
        __asm _emit 0x52
        push ebx
        ; Exact mapped bytes E8 63 F3 FF FF: call 0x427860
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        pop ecx
        test byte ptr [eax + esi + 4], 1
        ; Exact mapped bytes 74 29: je 0x428530
        __asm _emit 0x74
        __asm _emit 0x29
        push ebx
        ; Exact mapped bytes E8 11 F3 FF FF: call 0x42781e
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 04 C1 43 00: call dword ptr [0x43c104]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x428523
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x428525
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        test esi, esi
        ; Exact mapped bytes 74 15: je 0x42853e
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes E8 B5 96 FF FF: call 0x421be3
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 A5 96 FF FF: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        or esi, 0ffffffffh
        push ebx
        ; Exact mapped bytes E8 7B F3 FF FF: call 0x4278bf
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, esi
        ; Exact mapped bytes EB 0E: jmp 0x428557
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes E8 8C 96 FF FF: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051EF60 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_0051ef60_0051EF60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes 75 11: jne 0x51ef90
        __asm _emit 0x75
        __asm _emit 0x11
        push 27h
        push 6792bch
        ; Exact mapped bytes E8 B5 9D 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51ef90
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x51ef73
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0b4h]
        ; Exact mapped bytes E8 45 B4 FB FF: call 0x4da3e9
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x51efb2
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 2A 3F F8 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x3f
        __asm _emit 0xf8
        __asm _emit 0xff
        push 63a868h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 B1 FB FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb1
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51efd4
        __asm _emit 0x75
        __asm _emit 0x11
        push 2bh
        push 6792bch
        ; Exact mapped bytes E8 71 9D 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51efd4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x51efb2
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 FC 00 00 00: call dword ptr [edx + 0xfc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x51eff9
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 7E A5 FC FF: call 0x4e9577
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

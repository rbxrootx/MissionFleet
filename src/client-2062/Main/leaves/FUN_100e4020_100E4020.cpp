// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E4020 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_100e4020_100E4020() {
    __asm {
        mov eax, ecx
        mov ecx, dword ptr [esp + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 4F: je 0x100e4079
        __asm _emit 0x74
        __asm _emit 0x4f
        push esi
        push edi
        lea esi, [ecx + 50h]
        mov edx, dword ptr [eax + 74h]
        lea edi, [eax + 41ch]
        mov ecx, 0dfh
        mov dword ptr [eax + 90h], 1
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [eax + 42ch]
        pop edi
        shr ecx, 0ch
        and ecx, 0fh
        pop esi
        mov dword ptr [edx + 50h], ecx
        lea ecx, [eax + 4c8h]
        mov eax, dword ptr [eax + 68h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x100e4083
        __asm _emit 0x74
        __asm _emit 0x19
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x100e4083
        __asm _emit 0x74
        __asm _emit 0x15
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [eax + 90h], 0
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

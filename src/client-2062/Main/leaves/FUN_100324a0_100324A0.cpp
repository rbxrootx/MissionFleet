// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100324A0 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_100324a0_100324A0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        test eax, eax
        mov dword ptr [esi + 5ch], 2
        ; Exact mapped bytes 74 15: je 0x100324c7
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [esi + 58h], 1
        test ecx, ecx
        ; Exact mapped bytes 74 36: je 0x100324f6
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes EB 13: jmp 0x100324da
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [esi + 58h], 0ffffffffh
        test ecx, ecx
        ; Exact mapped bytes 74 21: je 0x100324f6
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        mov ecx, 12ch
        sub eax, 190h
        sub ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 64h]
        push eax
        ; Exact mapped bytes E8 9A 64 01 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

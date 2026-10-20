// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FE80 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_0040fe80_0040FE80() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        mov dword ptr [esi], 43d424h
        cmp eax, -1
        ; Exact mapped bytes 74 2E: je 0x40febf
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 4ch]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x40fe9e
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 48h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x40feae
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esi + 4]
        push edx
        ; Exact mapped bytes E8 02 FA FF FF: call 0x40f8b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4]
        push eax
        ; Exact mapped bytes FF 15 B0 C5 43 00: call dword ptr [0x43c5b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esi + 4], 0ffffffffh
        mov eax, dword ptr [esi + 34h]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x40fed6
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 49 DA 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 34h], 0
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x40feed
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 32 DA 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 1ch], 0
        pop esi
        ret
    }
}

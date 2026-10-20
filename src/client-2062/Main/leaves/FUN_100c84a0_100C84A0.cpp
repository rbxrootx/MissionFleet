// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C84A0 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_100c84a0_100C84A0() {
    __asm {
        sub esp, 100h
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 7ch]
        mov eax, dword ptr [ecx + 84h]
        test eax, eax
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x100c854e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        test edx, edx
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x100c854e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100c84d0
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x100c84d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push ecx
        push 101a7c9ch
        lea eax, [esp + 0ch]
        push 101ab844h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 10h
        lea ecx, [esp + 4]
        push ecx
        ; Exact mapped bytes FF 15 C8 50 17 10: call dword ptr [0x101750c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x100c8542
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes E8 7E BA 03 00: call 0x10103f80
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 73 BA 03 00: call 0x10103f80
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 68 BA 03 00: call 0x10103f80
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes E8 5D BA 03 00: call 0x10103f80
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        ; Exact mapped bytes E8 52 BA 03 00: call 0x10103f80
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        add esp, 100h
        ret
        push 101a7c9ch
        mov ecx, esi
        ; Exact mapped bytes E8 32 FB FF FF: call 0x100c8080
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        add esp, 100h
        ret
    }
}

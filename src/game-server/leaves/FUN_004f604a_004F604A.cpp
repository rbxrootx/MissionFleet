// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F604A .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004f604a_004F604A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 EB F3 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 32: jne 0x4f6093
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, 5de894h
        ; Exact mapped bytes E8 55 C4 04 00: call 0x5424c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 46 37 00 00: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4f6093
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes E8 3D 37 00 00: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 1ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0F: jne 0x4f6093
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 06: je 0x4f6093
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes C7 05 F8 CB 5D 00 00 00 00 00: mov dword ptr [0x5dcbf8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4D 01 00 00: call 0x4f61f6
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

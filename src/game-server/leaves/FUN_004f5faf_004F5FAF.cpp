// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F5FAF .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_004f5faf_004F5FAF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E8 43 F5 03 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 15: je 0x4f5fdb
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 0A: jne 0x4f5fdb
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, 5de898h
        ; Exact mapped bytes E8 55 75 00 00: call 0x4fd530
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 63 F4 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        mov dl, byte ptr [eax + 14h]
        test edx, edx
        ; Exact mapped bytes 75 32: jne 0x4f601b
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes E8 CB 37 00 00: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x4f601b
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes E8 C2 37 00 00: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1ch]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 1C: jne 0x4f601b
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, 5de894h
        ; Exact mapped bytes E8 B7 C4 04 00: call 0x5424c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc4
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 06: je 0x4f601b
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DB 8D FF FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4f603e
        __asm _emit 0x75
        __asm _emit 0x12
        push 1
        push 1
        push 0
        push 0
        push 15h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 45 67 04 00: call 0x53c783
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2C B8 FF FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}

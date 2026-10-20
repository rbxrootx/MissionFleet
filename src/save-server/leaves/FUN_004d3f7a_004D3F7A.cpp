// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3F7A .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004d3f7a_004D3F7A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 DB C6 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc6
        __asm _emit 0x06
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 32: jne 0x4d3fc3
        __asm _emit 0x75
        __asm _emit 0x32
        mov ecx, 686da8h
        ; Exact mapped bytes E8 15 97 06 00: call 0x53d6b0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x97
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 B6 48 00 00: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4d3fc3
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes E8 AD 48 00 00: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 1ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0F: jne 0x4d3fc3
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 06: je 0x4d3fc3
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes C7 05 10 51 68 00 00 00 00 00: mov dword ptr [0x685110], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x51
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4D 01 00 00: call 0x4d4126
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA570 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_587ba570() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 8]
        cmp eax, 10000h
        ; Exact mapped bytes 74 29: je 0x587ba5a7
        __asm _emit 0x74
        __asm _emit 0x29
        cmp eax, 1000000h
        ; Exact mapped bytes 75 41: jne 0x587ba5c6
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 89 0D 60 45 A2 58: mov dword ptr [0x58a24560], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes C7 05 68 45 A2 58 01 00 00 00: mov dword ptr [0x58a24568], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 64 45 A2 58: mov dword ptr [0x58a24564], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 89 0D 60 45 A2 58: mov dword ptr [0x58a24560], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes C7 05 68 45 A2 58 00 00 00 00: mov dword ptr [0x58a24568], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 64 45 A2 58: mov dword ptr [0x58a24564], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F5C80 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_585f5c80_585F5C80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 0D E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B5 64 E9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x64
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 42: jne 0x585f5ce2
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        or ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 0D E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 19 7E 17 00: call 0x5876dae0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x7e
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 174h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F1 D3 10 00: call 0x587030d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd3
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1D: jmp 0x585f5cff
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CF E2 F2 FF: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe2
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 62 7D 17 00: call 0x5876da60
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x7d
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CB 00 E9 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 300h], 190h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

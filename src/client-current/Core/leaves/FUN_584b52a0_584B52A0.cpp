// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B52A0 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_584b52a0_584B52A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 64h], -1
        ; Exact mapped bytes 75 16: jne 0x584b52d1
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 92 19 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3A: jmp 0x584b530b
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D5 F7 FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 56 19 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 80h], -1
        ; Exact mapped bytes 75 16: jne 0x584b5336
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2D 19 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3D: jmp 0x584b5373
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 80h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6D F7 FC FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EE 18 FD FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b4h], 1
        ; Exact mapped bytes 74 17: je 0x584b5396
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 F6 07 00 00: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        ; Exact mapped bytes E8 EB 07 00 00: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 1
        mov esp, ebp
        pop ebp
        ret
    }
}

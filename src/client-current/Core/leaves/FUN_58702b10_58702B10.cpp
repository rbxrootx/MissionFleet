// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58702B10 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_58702b10_58702B10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 184h]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E1 33 D8 FF: call 0x58485f10
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x33
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 184h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 184h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 8
        ; Exact mapped bytes 74 58: je 0x58702bb0
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 9
        ; Exact mapped bytes 74 49: je 0x58702bb0
        __asm _emit 0x74
        __asm _emit 0x49
        push 0fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 1F D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x1f
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 34 92 0B 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x92
        __asm _emit 0x0b
        __asm _emit 0x00
        push 0fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 1E D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x1e
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 15ch]
        ; Exact mapped bytes E8 32 F9 FF FF: call 0x587024f0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 3D D8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 A3 D8 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 87 06 00 00: call 0x58703260
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

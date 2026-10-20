// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868A2C0 .. +0x29C bytes.
extern "C" __declspec(naked) void FUN_5868a2c0_5868A2C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 120h], 0
        ; Exact mapped bytes 0F 84 7D 02 00 00: je 0x5868a556
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 8], edx
        imul eax, dword ptr [ebp + 8], 25h
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 46 55 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x55
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f0h]
        mov dword ptr [ebp - 0ch], eax
        imul eax, dword ptr [ebp + 0ch], 25h
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 25 55 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x55
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 10h], eax
        imul eax, dword ptr [ebp + 8], 25h
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 04 55 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x55
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 14h], eax
        imul eax, dword ptr [ebp + 0ch], 25h
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E3 54 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x54
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0d8h]
        mov dword ptr [ebp - 18h], edx
        imul eax, dword ptr [ebp + 8], 2eh
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B9 54 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x54
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d8h]
        mov dword ptr [ebp - 1ch], ecx
        imul eax, dword ptr [ebp + 8], 2eh
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8F 54 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x54
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e0h]
        mov dword ptr [ebp - 20h], edx
        imul eax, dword ptr [ebp + 8], 2eh
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 65 54 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x54
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e0h]
        mov dword ptr [ebp - 24h], ecx
        imul eax, dword ptr [ebp + 8], 2eh
        cdq
        mov ecx, 384h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3B 54 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x54
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 28h], edx
        imul eax, dword ptr [ebp + 10h], 48h
        cdq
        mov ecx, 0e10h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 11 54 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x54
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b8h]
        mov dword ptr [ebp - 2ch], ecx
        imul eax, dword ptr [ebp + 10h], 48h
        cdq
        mov ecx, 0e10h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E7 53 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x53
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c8h]
        mov dword ptr [ebp - 30h], edx
        imul eax, dword ptr [ebp + 14h], 48h
        cdq
        mov ecx, 0e10h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 BD 53 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x53
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c8h]
        mov dword ptr [ebp - 34h], ecx
        imul eax, dword ptr [ebp + 14h], 48h
        cdq
        mov ecx, 0e10h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 93 53 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x53
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c0h]
        mov dword ptr [ebp - 38h], edx
        imul eax, dword ptr [ebp + 10h], 48h
        cdq
        mov ecx, 0e10h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 69 53 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x53
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0c0h]
        mov dword ptr [ebp - 3ch], ecx
        imul eax, dword ptr [ebp + 10h], 48h
        cdq
        mov ecx, 0e10h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 3F 53 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x53
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0d0h]
        mov dword ptr [ebp - 40h], edx
        imul eax, dword ptr [ebp + 14h], 48h
        cdq
        mov ecx, 0e10h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 15 53 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x53
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0d0h]
        mov dword ptr [ebp - 44h], ecx
        imul eax, dword ptr [ebp + 14h], 48h
        cdq
        mov ecx, 0e10h
        idiv ecx
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 EB 52 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x52
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

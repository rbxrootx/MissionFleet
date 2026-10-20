// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5869D450 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_5869d450_5869D450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 2cch]
        cmp edx, dword ptr [ecx + 2c8h]
        ; Exact mapped bytes 0F 8F 9A 00 00 00: jg 0x5869d515
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 2
        imul ecx, eax, 0
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 6
        ; Exact mapped bytes 73 02: jae 0x5869d48e
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x5869d494
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 16 3D 19 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3d
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        xor edx, edx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 89 54 05 F4: mov word ptr [ebp + eax - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xf4
        mov dword ptr [ebp - 18h], 2
        cmp dword ptr [ebp - 18h], 6
        ; Exact mapped bytes 73 02: jae 0x5869d4ad
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 06: jmp 0x5869d4b3
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes E8 F7 3C 19 00: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x3c
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        xor ecx, ecx
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 4C 15 F4: mov word ptr [ebp + edx - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x15
        __asm _emit 0xf4
        mov eax, 2
        shl eax, 1
        mov ecx, 0ah
        ; Exact mapped bytes 66 89 4C 05 F4: mov word ptr [ebp + eax - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0xf4
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 24ch]
        ; Exact mapped bytes E8 94 5E E2 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x5e
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 6
        lea ecx, [ebp - 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 1ch]
        push edx
        push 8001020ch
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 F4 18 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf4
        __asm _emit 0x18
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CE 88 DE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x88
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x5869d51e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 03 FF FF FF: call 0x5869d420
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 28 3B 19 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x3b
        __asm _emit 0x19
        __asm _emit 0x00
        mov esp, ebp
    }
}

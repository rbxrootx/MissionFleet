// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587900A0 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_587900a0_587900A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AE 2D 00 00: call 0x58792e70
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x587900d0
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x58790158
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 A9 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [eax + 9]
        mov byte ptr [ebp - 10h], cl
        cmp byte ptr [ebp - 10h], 2
        ; Exact mapped bytes 74 02: je 0x587900e6
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4B: jmp 0x58790131
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 70 06 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 A9 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 34h]
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 A8 FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 8]
        mov dword ptr [ebp - 18h], eax
        push 0
        push 8
        lea ecx, [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 80017105h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 C8 09 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 27: jmp 0x58790158
        __asm _emit 0xeb
        __asm _emit 0x27
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 25 06 00 00: call 0x58790760
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 8
        lea ecx, [ebp + 8]
        push ecx
        push 0
        push 0
        push 80015105h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 C8 09 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc8
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

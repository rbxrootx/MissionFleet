// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B0070 .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_585b0070_585B0070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 21: jne 0x585b00a0
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 14: je 0x585b0099
        __asm _emit 0x74
        __asm _emit 0x14
        push 0ffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2E FF FF FF: call 0x585affc0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x585b0126
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x585b00a0
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x585b0126
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A8 96 F7 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x96
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx eax, ax
        and eax, 0ff00h
        sar eax, 8
        mov byte ptr [ebp - 1], al
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB BF ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xbf
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x585b00d5
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DE BF ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xbf
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 32: je 0x585b010d
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FD 48 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x48
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 35ch]
        movzx edx, byte ptr [ebp - 1]
        cmp ecx, edx
        ; Exact mapped bytes 75 19: jne 0x585b010b
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 66 49 ED FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x49
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 08: jne 0x585b010b
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x585b010d
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BD: jmp 0x585b00ca
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 1A 45 F3 FF: call 0x584e4630
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x45
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x585b0124
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 04: jmp 0x585b0126
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x585b0126
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}

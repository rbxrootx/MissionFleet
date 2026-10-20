// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585AFFC0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_585affc0_585AFFC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        movzx eax, byte ptr [ebp + 8]
        cmp eax, 0ffh
        ; Exact mapped bytes 75 19: jne 0x585affed
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 74 97 F7 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x97
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx ecx, ax
        and ecx, 0ff00h
        sar ecx, 8
        mov byte ptr [ebp - 1], cl
        ; Exact mapped bytes EB 06: jmp 0x585afff3
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ebp - 1], dl
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB C0 ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc0
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x585b005c
        __asm _emit 0x74
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C C0 ED FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xc0
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x585b0024
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F 69 ED FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x69
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 32: je 0x585b005c
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AE 49 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x49
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 35ch]
        movzx ecx, byte ptr [ebp - 1]
        cmp eax, ecx
        ; Exact mapped bytes 75 19: jne 0x585b005a
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 17 4A ED FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4a
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 08: jne 0x585b005a
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x585b005c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BD: jmp 0x585b0019
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

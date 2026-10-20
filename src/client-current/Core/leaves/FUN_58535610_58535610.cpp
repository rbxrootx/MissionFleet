// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58535610 .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_58535610_58535610() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 75 7D: jne 0x585356a2
        __asm _emit 0x75
        __asm _emit 0x7d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 38: je 0x58535673
        __asm _emit 0x74
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6D 67 28 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x67
        __asm _emit 0x28
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 26: je 0x585356a2
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 18h], eax
        push 0
        push 3
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 75 4F: jne 0x585356fa
        __asm _emit 0x75
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7ch], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 74 39: je 0x585356fa
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 75 30: jne 0x585356fa
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [eax + 54h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 47 A1 F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xa1
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

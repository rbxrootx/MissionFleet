// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B5540 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_587b5540() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 28h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3B: je 0x587b559c
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 0E: shr dx, 0xe
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x587b5584
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BD FF FF FF: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 02: jne 0x587b559a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x587b559c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BF: jmp 0x587b555b
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov esp, ebp
        pop ebp
        ret 4
    }
}

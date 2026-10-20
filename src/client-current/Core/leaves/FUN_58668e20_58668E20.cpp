// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58668E20 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_58668e20_58668E20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 74 17: je 0x58668e55
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 75 06: jne 0x58668e5b
        __asm _emit 0x75
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 1E: jmp 0x58668e77
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes EB 1C: jmp 0x58668e77
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 DC 00 00 00: movsx ecx, word ptr [eax + 0xdc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x58668e72
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x58668e77
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB 05: jmp 0x58668e77
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 2
        mov esp, ebp
    }
}

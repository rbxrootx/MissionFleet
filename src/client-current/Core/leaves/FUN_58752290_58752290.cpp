// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752290 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_58752290_58752290() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 78: je 0x5875231a
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        movzx eax, byte ptr [edx + 35ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 77 62: ja 0x5875231a
        __asm _emit 0x77
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 8D 28 23 75 58: jmp dword ptr [ecx*4 + 0x58752328]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x28
        __asm _emit 0x23
        __asm _emit 0x75
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 1ch], 1
        ; Exact mapped bytes 74 09: je 0x587522d4
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 1ch], 2
        ; Exact mapped bytes 75 04: jne 0x587522d8
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 47: jmp 0x5875231f
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes EB 40: jmp 0x5875231a
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 1ch], 1
        ; Exact mapped bytes 75 06: jne 0x587522e9
        __asm _emit 0x75
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 38: jmp 0x5875231f
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes EB 10: jmp 0x587522f9
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 1ch], 2
        ; Exact mapped bytes 75 07: jne 0x587522f9
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 26: jmp 0x5875231f
        __asm _emit 0xeb
        __asm _emit 0x26
        ; Exact mapped bytes EB 1F: jmp 0x5875231a
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 1ch], 1
        ; Exact mapped bytes 75 09: jne 0x5875230d
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 2
        ; Exact mapped bytes EB 14: jmp 0x5875231f
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes EB 0D: jmp 0x5875231a
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 1ch], 2
        ; Exact mapped bytes 75 04: jne 0x5875231a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5875231f
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 2
        mov esp, ebp
    }
}

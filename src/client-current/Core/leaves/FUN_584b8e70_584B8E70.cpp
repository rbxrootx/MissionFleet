// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B8E70 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_584b8e70_584B8E70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 0F 8E C1 00 00 00: jle 0x584b8f4a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x584b8f4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x584b8f4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 BB FC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 31: je 0x584b8ef2
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x584b8ee4
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584b8eeb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x584b8f15
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 75 30: jne 0x584b8f45
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 78h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 88h], 0
        ; Exact mapped bytes EB 05: jmp 0x584b8f4a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x584b8ea3
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}

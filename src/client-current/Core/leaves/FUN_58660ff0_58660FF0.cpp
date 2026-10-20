// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58660FF0 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_58660ff0_58660FF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 134h]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 10h], 0
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x586610e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 2B: jne 0x5866104a
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 134h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 130h], 0
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 FA 00 00 00: mov word ptr [eax + 0xfa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x586610e8
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6E 39 E2 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x39
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 31: je 0x5866108c
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x5866107e
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
        ; Exact mapped bytes EB 07: jmp 0x58661085
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x586610b0
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 FA 00 00 00: movsx edx, word ptr [ecx + 0xfa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 75 33: jne 0x586610e3
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 144h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 134h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 130h], 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 FA 00 00 00: mov word ptr [ecx + 0xfa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 24 FF FF FF: jmp 0x5866100c
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}

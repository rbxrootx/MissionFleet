// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FDFF0 .. +0x1C4 bytes.
extern "C" __declspec(naked) void FUN_585fdff0_585FDFF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585fe00b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 7D 7B: jge 0x585fe08f
        __asm _emit 0x7d
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0d4h], 0
        ; Exact mapped bytes 74 66: je 0x585fe08a
        __asm _emit 0x74
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 0d4h], 0
        ; Exact mapped bytes 74 45: je 0x585fe079
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0d4h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x585fe061
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
        ; Exact mapped bytes EB 07: jmp 0x585fe068
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*4 + 0d4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0d4h], 0
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x585fe002
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585fe0a1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 74h]
        ; Exact mapped bytes 7D 7B: jge 0x585fe127
        __asm _emit 0x7d
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*4 + 2d4h], 0
        ; Exact mapped bytes 74 66: je 0x585fe122
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 2d4h], 0
        ; Exact mapped bytes 74 45: je 0x585fe111
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 2d4h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x585fe0f9
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x585fe100
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 2d4h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 2d4h], 0
        ; Exact mapped bytes E9 71 FF FF FF: jmp 0x585fe098
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 80h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0d0h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 74h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 70h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 84h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 7ch], 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 78h], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0d0h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585fe195
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 15: jge 0x585fe1b0
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 2f4h]
        ; Exact mapped bytes E8 D3 82 13 00: call 0x58736480
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x82
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x585fe18c
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov esp, ebp
        pop ebp
        ret
    }
}

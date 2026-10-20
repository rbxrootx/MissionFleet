// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585985E0 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_585985e0_585985E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        xor edx, edx
        mov ecx, 5
        div ecx
        test edx, edx
        ; Exact mapped bytes 74 25: je 0x58598625
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 58948c60h]
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [eax + ecx + 0fbh]
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x58598625
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x585986a8
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 4
        xor edx, edx
        mov ecx, 5
        div ecx
        test edx, edx
        ; Exact mapped bytes 74 22: je 0x5859865a
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 58948c60h]
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [eax + ecx + 0fdh]
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x5859865a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 4E: jmp 0x585986a8
        __asm _emit 0xeb
        __asm _emit 0x4e
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 76 22: jbe 0x58598682
        __asm _emit 0x76
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 58948c60h]
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [ecx + edx + 0f7h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58598682
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 26: jmp 0x585986a8
        __asm _emit 0xeb
        __asm _emit 0x26
        cmp dword ptr [ebp + 0ch], 14h
        ; Exact mapped bytes 73 20: jae 0x585986a8
        __asm _emit 0x73
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 58948c60h]
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [edx + eax + 101h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x585986a8
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

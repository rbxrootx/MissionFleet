// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F84EE .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_004f84ee_004F84EE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 10h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x4f8594
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 14: je 0x4f851e
        __asm _emit 0x74
        __asm _emit 0x14
        push 270h
        push 672eech
        ; Exact mapped bytes E8 27 08 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f851e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4f8502
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EE ED FF FF: call 0x4f731e
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 CB D3 FD FF: call 0x4d590a
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xd3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x4f856d
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x4f8560
        __asm _emit 0x74
        __asm _emit 0x14
        push 276h
        push 672eech
        ; Exact mapped bytes E8 E5 07 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8560
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4f8543
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 8E A9 FA FF: call 0x4a2ef9
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa9
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 27: jmp 0x4f8594
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [esi + 1ch], eax
        ; Exact mapped bytes 74 0F: je 0x4f8594
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 C2 E6 FD FF: call 0x4d6c56
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

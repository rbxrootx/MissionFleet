// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056258A .. +0x125 bytes.
extern "C" __declspec(naked) void FUN_0056258a_0056258A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 305h
        push 67c6f0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 B7 7C F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x7c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 75 14: jne 0x5625c6
        __asm _emit 0x75
        __asm _emit 0x14
        push 306h
        push 67c6f0h
        ; Exact mapped bytes E8 7F 67 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5625c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5625a9
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x5625ec
        __asm _emit 0x75
        __asm _emit 0x14
        push 307h
        push 67c6f0h
        ; Exact mapped bytes E8 59 67 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5625ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x5625cc
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 4], edx
        push 30bh
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 4F 7C F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x7c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 1B: je 0x562635
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [edx + 60h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 1ch], eax
        ; Exact mapped bytes 74 02: je 0x562635
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 71: jmp 0x5626a6
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5C 4E FD FF: call 0x537499
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 F4 00 00 00: call dword ptr [edx + 0xf4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 78 C2 68 00: call dword ptr [0x68c278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 38: je 0x5626a6
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 4], ecx
        push 31bh
        push 67c6f0h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 D3 7B F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7b
        __asm _emit 0xf7
        __asm _emit 0xff
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 78 C2 68 00: call dword ptr [0x68c278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
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

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005461B5 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_005461b5_005461B5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 99h
        push 5c8b74h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 8C 4F FB FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x4f
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x5461e0
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x5461f4
        __asm _emit 0x7d
        __asm _emit 0x14
        push 9ah
        push 5c8b74h
        ; Exact mapped bytes E8 11 E8 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5461f4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x5461d4
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 5ch], 0
        ; Exact mapped bytes 75 1D: jne 0x546220
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 14: je 0x546220
        __asm _emit 0x74
        __asm _emit 0x14
        push 9bh
        push 5c8b74h
        ; Exact mapped bytes E8 E5 E7 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546220
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x5461fa
        __asm _emit 0x75
        __asm _emit 0xd4
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7E 3D: jle 0x546270
        __asm _emit 0x7e
        __asm _emit 0x3d
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 14: jg 0x54624d
        __asm _emit 0x7f
        __asm _emit 0x14
        push 0a1h
        push 5c8b74h
        ; Exact mapped bytes E8 B8 E7 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54624d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x546233
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C0 43 F6 FF: call 0x4aa620
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x546270
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 26: jmp 0x546296
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 5ch]
        push eax
        ; Exact mapped bytes E8 04 4A F6 FF: call 0x4aac80
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4a
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], ecx
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

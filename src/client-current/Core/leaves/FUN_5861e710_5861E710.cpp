// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861E710 .. +0x26A bytes.
extern "C" __declspec(naked) void FUN_5861e710_5861E710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588ae790h
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5861e734
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 57: jge 0x5861e791
        __asm _emit 0x7d
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0c64h], 0
        ; Exact mapped bytes 74 45: je 0x5861e78f
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0c64h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x5861e777
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e77e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 0c64h], 0
        ; Exact mapped bytes EB 9A: jmp 0x5861e72b
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5861e7a3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 57: jge 0x5861e800
        __asm _emit 0x7d
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 0c6ch], 0
        ; Exact mapped bytes 74 45: je 0x5861e7fe
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0c6ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x5861e7e6
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e7ed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0c6ch], 0
        ; Exact mapped bytes EB 9A: jmp 0x5861e79a
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c74h], 0
        ; Exact mapped bytes 74 3D: je 0x5861e849
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c74h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x5861e835
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e83c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c74h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c7ch], 0
        ; Exact mapped bytes 74 3D: je 0x5861e892
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c7ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x5861e87e
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e885
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c7ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c80h], 0
        ; Exact mapped bytes 74 3D: je 0x5861e8db
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c80h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 17: je 0x5861e8c7
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e8ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c80h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c84h], 0
        ; Exact mapped bytes 74 3D: je 0x5861e924
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c84h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 17: je 0x5861e910
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 50h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 B0: call dword ptr [ebp - 0x50]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb0
        mov dword ptr [ebp - 54h], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e917
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 54h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c84h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c88h], 0
        ; Exact mapped bytes 74 3D: je 0x5861e96d
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c88h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 17: je 0x5861e959
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 58h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 A8: call dword ptr [ebp - 0x58]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa8
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5861e960
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c88h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3B 6F 19 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x6f
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

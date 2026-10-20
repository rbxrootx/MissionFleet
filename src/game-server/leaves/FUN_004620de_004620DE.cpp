// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004620DE .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_004620de_004620DE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 00 F2 F9 FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x462110
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 F1 F9 FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x462124
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 02: je 0x462124
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB E1: jmp 0x462105
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 41 18 FA FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 7C 0D: jl 0x462141
        __asm _emit 0x7c
        __asm _emit 0x0d
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x462141
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 3A: jmp 0x46217b
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 24 18 FA FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x462179
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 0b2h]
        shr cl, 5
        and cl, 1
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x462179
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x46217b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 5B 66 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

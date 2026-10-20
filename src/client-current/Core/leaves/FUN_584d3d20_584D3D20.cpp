// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D3D20 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_584d3d20_584D3D20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 8D DE 00 00 00: jge 0x584d3e0f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], -2
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x584d3dc5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 2
        ; Exact mapped bytes 7C 17: jl 0x584d3d5e
        __asm _emit 0x7c
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        sub edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 84h], edx
        ; Exact mapped bytes EB 65: jmp 0x584d3dc3
        __asm _emit 0xeb
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 38: je 0x584d3da2
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8ch], 0
        ; Exact mapped bytes 74 2C: je 0x584d3da2
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8ch], ecx
        ; Exact mapped bytes EB 21: jmp 0x584d3dc3
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8ch], 2
        ; Exact mapped bytes 7C 15: jl 0x584d3dc3
        __asm _emit 0x7c
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        sub edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ch], edx
        ; Exact mapped bytes EB 4A: jmp 0x584d3e0f
        __asm _emit 0xeb
        __asm _emit 0x4a
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 75 44: jne 0x584d3e0f
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8ch], 0
        ; Exact mapped bytes 74 17: je 0x584d3dee
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], eax
        ; Exact mapped bytes EB 21: jmp 0x584d3e0f
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 15: je 0x584d3e0f
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 84h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

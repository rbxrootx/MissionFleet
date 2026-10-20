// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00457F40 .. +0x57 bytes.
extern "C" __declspec(naked) void __AfxGetChildControl__YGPAVCWnd__PAV1_0_Z_00457F40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 3D: je 0x457f8e
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 3D 00 00 00: call 0x457f97
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x457f8e
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 25: je 0x457f8e
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 22 4B 0D 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x4b
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 4D 00 00 00: call 0x457fd0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x457f8c
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x457f8e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BD: jmp 0x457f4b
        __asm _emit 0xeb
        __asm _emit 0xbd
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

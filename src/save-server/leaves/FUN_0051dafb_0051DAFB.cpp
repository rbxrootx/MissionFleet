// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051DAFB .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_0051dafb_0051DAFB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 87 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x51db53
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes 83 3D 14 6E 68 00 00: cmp dword ptr [0x686e14], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x51db26
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 1C FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x1c
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 46: jmp 0x51db6c
        __asm _emit 0xeb
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 1D: je 0x51db51
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 0c4h], eax
        push 0
        push 0
        push 85h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 DA 00 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x51db67
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x51db67
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x51db6c
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

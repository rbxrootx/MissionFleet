// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C4450 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_586c4450_586C4450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 94h], 1
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x586c4522
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        movzx eax, word ptr [edx + 2]
        cmp eax, 0ddh
        ; Exact mapped bytes 74 22: je 0x586c449c
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        movzx eax, word ptr [edx + 2]
        cmp eax, 0deh
        ; Exact mapped bytes 74 11: je 0x586c449c
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        movzx eax, word ptr [edx + 2]
        cmp eax, 0dfh
        ; Exact mapped bytes 75 53: jne 0x586c44ef
        __asm _emit 0x75
        __asm _emit 0x53
        lea ecx, [ebp - 8]
        push ecx
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 13 DD FF: call 0x58495850
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x13
        __asm _emit 0xdd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC F4 FF FF: call 0x586c39a0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 2
        shl edx, 0
        movzx eax, word ptr [ebp + edx - 8]
        push eax
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [ebp + edx - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        add ecx, 4
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 A9 EB FF: call 0x5857ee40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa9
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 24: jmp 0x586c4513
        __asm _emit 0xeb
        __asm _emit 0x24
        push 0ffh
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        add edx, 4
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E A9 EB FF: call 0x5857ee40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa9
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, 7dh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 92 00 00 00: mov word ptr [ecx + 0x92], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

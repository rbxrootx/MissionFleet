// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C39A0 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_586c39a0_586C39A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx + 60h]
        ; Exact mapped bytes E8 23 68 DE FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x68
        __asm _emit 0xde
        __asm _emit 0xff
        add eax, 1
        mov ecx, 2
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 04 11: mov word ptr [ecx + edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 2]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0ddh
        ; Exact mapped bytes 74 14: je 0x586c39f6
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 4], 0deh
        ; Exact mapped bytes 74 1E: je 0x586c3a09
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 4], 0dfh
        ; Exact mapped bytes 74 15: je 0x586c3a09
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes EB 39: jmp 0x586c3a2f
        __asm _emit 0xeb
        __asm _emit 0x39
        mov ecx, 2
        shl ecx, 0
        xor edx, edx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        ; Exact mapped bytes EB 26: jmp 0x586c3a2f
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx + 60h]
        ; Exact mapped bytes E8 C3 67 DE FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x67
        __asm _emit 0xde
        __asm _emit 0xff
        add eax, 1
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 89 04 0A: mov word ptr [edx + ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0a
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850D590 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_5850d590_5850D590() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 40: mov word ptr [ecx + 0x40], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 50: je 0x5850d5fb
        __asm _emit 0x74
        __asm _emit 0x50
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5850d5bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 38: jge 0x5850d5fb
        __asm _emit 0x7d
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [edx + eax*4 + 60h]
        test ecx, ecx
        ; Exact mapped bytes 74 24: je 0x5850d5f9
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, word ptr [eax + ecx*4 + 62h]
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x5850d5f9
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 40: mov cx, word ptr [eax + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 40: mov word ptr [edx + 0x40], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x40
        ; Exact mapped bytes EB B9: jmp 0x5850d5b4
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov eax, dword ptr [ebp - 4]
        movzx eax, word ptr [eax + 40h]
        mov esp, ebp
        pop ebp
        ret
    }
}

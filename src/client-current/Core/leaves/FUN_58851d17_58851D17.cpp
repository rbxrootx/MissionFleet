// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851D17 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_58851d17_58851D17() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        dec eax
        sub eax, 1
        ; Exact mapped bytes 74 1F: je 0x58851d44
        __asm _emit 0x74
        __asm _emit 0x1f
        sub eax, 1
        ; Exact mapped bytes 74 16: je 0x58851d40
        __asm _emit 0x74
        __asm _emit 0x16
        sub eax, 9
        ; Exact mapped bytes 74 11: je 0x58851d40
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp + 14h], 0dh
        ; Exact mapped bytes 74 0F: je 0x58851d44
        __asm _emit 0x74
        __asm _emit 0x0f
        mov al, byte ptr [ebp + 10h]
        cmp al, 63h
        ; Exact mapped bytes 74 08: je 0x58851d44
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 73h
        ; Exact mapped bytes 74 04: je 0x58851d44
        __asm _emit 0x74
        __asm _emit 0x04
        mov al, 1
        pop ebp
        ret
        xor al, al
        pop ebp
        ret
    }
}

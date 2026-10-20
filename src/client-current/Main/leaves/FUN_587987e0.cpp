// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587987E0 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_587987e0() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        push edi
        lea edi, [ecx + 1ach]
        mov ebx, 3
        mov eax, dword ptr [edi]
        cmp ebp, 1
        ; Exact mapped bytes 75 07: jne 0x58798801
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        ; Exact mapped bytes EB 3F: jmp 0x58798840
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x58798835
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, 5898c922h
        mov esi, 80h
        lea ecx, [esi + 7fffff7eh]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5879882d
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5879882d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x58798812
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x58798831
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x58798832
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        mov byte ptr [eax], 0
        mov eax, dword ptr [edi]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 AB: jne 0x587987f3
        __asm _emit 0x75
        __asm _emit 0xab
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

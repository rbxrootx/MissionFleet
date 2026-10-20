// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884E980 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_5884e980_5884E980() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        push ebx
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x5884e9db
        __asm _emit 0x74
        __asm _emit 0x52
        mov edx, dword ptr [esp + 8]
        xor ebx, ebx
        mov bl, byte ptr [esp + 0ch]
        test edx, 3
        ; Exact mapped bytes 74 16: je 0x5884e9b1
        __asm _emit 0x74
        __asm _emit 0x16
        mov cl, byte ptr [edx]
        add edx, 1
        xor cl, bl
        ; Exact mapped bytes 74 72: je 0x5884ea16
        __asm _emit 0x74
        __asm _emit 0x72
        sub eax, 1
        ; Exact mapped bytes 74 32: je 0x5884e9db
        __asm _emit 0x74
        __asm _emit 0x32
        test edx, 3
        ; Exact mapped bytes 75 EA: jne 0x5884e99b
        __asm _emit 0x75
        __asm _emit 0xea
        sub eax, 4
        ; Exact mapped bytes 72 12: jb 0x5884e9c8
        __asm _emit 0x72
        __asm _emit 0x12
        push edi
        mov edi, ebx
        shl ebx, 8
        add ebx, edi
        mov edi, ebx
        shl ebx, 10h
        add ebx, edi
        ; Exact mapped bytes EB 1B: jmp 0x5884e9e2
        __asm _emit 0xeb
        __asm _emit 0x1b
        pop edi
        add eax, 4
        ; Exact mapped bytes 74 0E: je 0x5884e9db
        __asm _emit 0x74
        __asm _emit 0x0e
        mov cl, byte ptr [edx]
        add edx, 1
        xor cl, bl
        ; Exact mapped bytes 74 40: je 0x5884ea16
        __asm _emit 0x74
        __asm _emit 0x40
        sub eax, 1
        ; Exact mapped bytes 75 F2: jne 0x5884e9cd
        __asm _emit 0x75
        __asm _emit 0xf2
        pop ebx
        ret
        sub eax, 4
        ; Exact mapped bytes 72 E5: jb 0x5884e9c7
        __asm _emit 0x72
        __asm _emit 0xe5
        mov ecx, dword ptr [edx]
        xor ecx, ebx
        mov edi, 7efefeffh
        add edi, ecx
        xor ecx, 0ffffffffh
        xor ecx, edi
        add edx, 4
        and ecx, 81010100h
        ; Exact mapped bytes 74 E0: je 0x5884e9dd
        __asm _emit 0x74
        __asm _emit 0xe0
        mov ecx, dword ptr [edx - 4]
        xor cl, bl
        ; Exact mapped bytes 74 23: je 0x5884ea27
        __asm _emit 0x74
        __asm _emit 0x23
        xor ch, bl
        ; Exact mapped bytes 74 19: je 0x5884ea21
        __asm _emit 0x74
        __asm _emit 0x19
        shr ecx, 10h
        xor cl, bl
        ; Exact mapped bytes 74 0C: je 0x5884ea1b
        __asm _emit 0x74
        __asm _emit 0x0c
        xor ch, bl
        ; Exact mapped bytes 74 02: je 0x5884ea15
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB C8: jmp 0x5884e9dd
        __asm _emit 0xeb
        __asm _emit 0xc8
        pop edi
        lea eax, [edx - 1]
        pop ebx
        ret
        lea eax, [edx - 2]
        pop edi
        pop ebx
        ret
        lea eax, [edx - 3]
        pop edi
        pop ebx
        ret
        lea eax, [edx - 4]
        pop edi
        pop ebx
        ret
    }
}

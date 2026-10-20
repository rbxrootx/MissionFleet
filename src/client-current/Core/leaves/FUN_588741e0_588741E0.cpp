// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588741E0 .. +0x242 bytes.
extern "C" __declspec(naked) void FUN_588741e0_588741E0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov eax, edi
        shr eax, 0eh
        mov edx, edi
        shr edx, 10h
        and eax, 300h
        and edx, 3fh
        or edx, eax
        mov eax, edi
        and eax, 4000h
        ; Exact mapped bytes 74 11: je 0x5887421c
        __asm _emit 0x74
        __asm _emit 0x11
        xor ecx, ecx
        mov ebx, 1000h
        cmp eax, 4000h
        cmovne ebx, ecx
        ; Exact mapped bytes EB 02: jmp 0x5887421e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, edi
        and eax, 3000h
        ; Exact mapped bytes 74 19: je 0x58874240
        __asm _emit 0x74
        __asm _emit 0x19
        cmp eax, 1000h
        ; Exact mapped bytes 74 09: je 0x58874237
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 10: jmp 0x58874247
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 200h
        ; Exact mapped bytes EB 07: jmp 0x58874247
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 300h
        mov eax, edx
        and eax, 300h
        cmp eax, 200h
        ; Exact mapped bytes 77 1B: ja 0x58874270
        __asm _emit 0x77
        __asm _emit 0x1b
        ; Exact mapped bytes 74 12: je 0x58874269
        __asm _emit 0x74
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x58874277
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 100h
        ; Exact mapped bytes 75 15: jne 0x58874277
        __asm _emit 0x75
        __asm _emit 0x15
        mov esi, 400h
        ; Exact mapped bytes EB 17: jmp 0x58874280
        __asm _emit 0xeb
        __asm _emit 0x17
        mov esi, 800h
        ; Exact mapped bytes EB 10: jmp 0x58874280
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp eax, 300h
        ; Exact mapped bytes 74 04: je 0x5887427b
        __asm _emit 0x74
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 05: jmp 0x58874280
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 0c00h
        mov eax, edx
        mov dword ptr [ebp - 0ch], 0
        and eax, 1
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        neg eax
        ; Exact mapped bytes 66 0F D6 45 EC: movq qword ptr [ebp - 0x14], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F 11 45 DC: movups xmmword ptr [ebp - 0x24], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xdc
        sbb eax, eax
        and eax, 20h
        mov ecx, eax
        mov eax, edx
        and eax, 2
        neg eax
        sbb eax, eax
        and eax, 10h
        or ecx, eax
        mov eax, edx
        and eax, 4
        neg eax
        sbb eax, eax
        and eax, 8
        or ecx, eax
        mov eax, edx
        and eax, 8
        neg eax
        sbb eax, eax
        and eax, 4
        or ecx, eax
        test edx, 10h
        mov eax, 0
        setne al
        and edx, 20h
        or ecx, eax
        neg edx
        sbb edx, edx
        and edx, 2
        or ecx, edx
        or esi, ecx
        or esi, dword ptr [ebp - 4]
        or esi, ebx
        ; Exact mapped bytes D9 75 DC: fnstenv [ebp - 0x24]
        __asm _emit 0xd9
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 24h]
        and esi, 1f3fh
        and ecx, 0ffffe0c0h
        or ecx, esi
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes D9 65 DC: fldenv [ebp - 0x24]
        __asm _emit 0xd9
        __asm _emit 0x65
        __asm _emit 0xdc
        mov eax, edi
        mov esi, edi
        shr esi, 18h
        and edi, 0c00h
        shr eax, 16h
        and esi, 3fh
        and eax, 300h
        or esi, eax
        cmp edi, 400h
        ; Exact mapped bytes 74 21: je 0x5887434b
        __asm _emit 0x74
        __asm _emit 0x21
        cmp edi, 800h
        ; Exact mapped bytes 74 12: je 0x58874344
        __asm _emit 0x74
        __asm _emit 0x12
        xor eax, eax
        mov ebx, 8000h
        cmp edi, 0c00h
        cmovne ebx, eax
        ; Exact mapped bytes EB 13: jmp 0x58874357
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ebx, 40h
        ; Exact mapped bytes EB 0C: jmp 0x58874357
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [ebp - 8], 8040h
        mov ebx, 8040h
        mov eax, esi
        and eax, 300h
        cmp eax, 200h
        ; Exact mapped bytes 77 1B: ja 0x58874380
        __asm _emit 0x77
        __asm _emit 0x1b
        ; Exact mapped bytes 74 12: je 0x58874379
        __asm _emit 0x74
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x58874387
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 100h
        ; Exact mapped bytes 75 15: jne 0x58874387
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, 2000h
        ; Exact mapped bytes EB 17: jmp 0x58874390
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, 4000h
        ; Exact mapped bytes EB 10: jmp 0x58874390
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp eax, 300h
        ; Exact mapped bytes 74 04: je 0x5887438b
        __asm _emit 0x74
        __asm _emit 0x04
        xor edx, edx
        ; Exact mapped bytes EB 05: jmp 0x58874390
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edx, 6000h
        mov eax, esi
        and eax, 1
        neg eax
        pop edi
        sbb eax, eax
        and eax, 1000h
        mov ecx, eax
        mov eax, esi
        and eax, 2
        neg eax
        sbb eax, eax
        and eax, 800h
        or ecx, eax
        mov eax, esi
        and eax, 4
        neg eax
        sbb eax, eax
        and eax, 400h
        or ecx, eax
        mov eax, esi
        and eax, 8
        neg eax
        sbb eax, eax
        and eax, 200h
        or ecx, eax
        mov eax, esi
        and eax, 10h
        neg eax
        sbb eax, eax
        and esi, 20h
        and eax, 80h
        or ecx, eax
        neg esi
        sbb esi, esi
        and esi, 100h
        or ecx, esi
        or edx, ecx
        or edx, ebx
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        pop esi
        pop ebx
        ; Exact mapped bytes 7C 1F: jl 0x5887441e
        __asm _emit 0x7c
        __asm _emit 0x1f
        ; Exact mapped bytes 0F AE 5D FC: stmxcsr dword ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x5d
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 4]
        and edx, 0ffc0h
        and ecx, 0ffff003fh
        movzx eax, dx
        or ecx, eax
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F AE 55 FC: ldmxcsr dword ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x55
        __asm _emit 0xfc
        mov esp, ebp
        pop ebp
        ret
    }
}

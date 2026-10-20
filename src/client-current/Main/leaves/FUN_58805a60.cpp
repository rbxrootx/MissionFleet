// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58805A60 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_58805a60() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        mov ecx, ebx
        shr ecx, 10h
        mov eax, ecx
        and eax, 0ff00h
        mov edx, 800h
        push ebp
        mov ebp, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x58805b0f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp cl, 1
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x58805b0f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2000h
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 78: je 0x58805b0f
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [esp + 10h]
        and edx, 0ffff0000h
        cmp edx, 10000h
        ; Exact mapped bytes 75 66: jne 0x58805b0f
        __asm _emit 0x75
        __asm _emit 0x66
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        push ebp
        ; Exact mapped bytes E8 DA 46 F8 FF: call 0x5878a190
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x46
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 52: je 0x58805b0e
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, edi
        ; Exact mapped bytes E8 1D 0C 0D 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0c
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x58805b0e
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [edi + 8]
        push esi
        mov esi, dword ptr [eax + 4]
        imul ecx, ecx
        sub esi, dword ptr [edi + 4]
        add ecx, ecx
        add ecx, ecx
        mov eax, 38e38e39h
        imul ecx
        sar edx, 1
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov edx, esi
        imul edx, esi
        add ecx, edx
        cmp ecx, 9c400h
        pop esi
        ; Exact mapped bytes 7D 0B: jge 0x58805b0e
        __asm _emit 0x7d
        __asm _emit 0x0b
        lea eax, [ebp + 30h]
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 42 12 0D 00: call 0x588d6d50
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x12
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        mov ecx, dword ptr [esp + 10h]
        push 1
        push ebp
        push ecx
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        ; Exact mapped bytes E8 5D E3 08 00: call 0x58893e80
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

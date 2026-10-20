// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10074830 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_10074830_10074830() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        mov ebx, dword ptr [esp + 10h]
        mov eax, ebp
        push edi
        shr eax, 10h
        and eax, 0ff00h
        cmp eax, 800h
        ; Exact mapped bytes 74 68: je 0x100748b4
        __asm _emit 0x74
        __asm _emit 0x68
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 A8 79 FB FF: call 0x1002c200
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 56: je 0x100748b4
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, edi
        ; Exact mapped bytes E8 6B 9D 07 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9d
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x100748b4
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [edi + 4]
        mov esi, dword ptr [eax + 4]
        sub esi, ecx
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [edi + 8]
        sub ecx, eax
        mov eax, 38e38e39h
        imul ecx, ecx
        shl ecx, 2
        imul ecx
        mov ecx, esi
        imul ecx, esi
        sar edx, 1
        mov eax, edx
        pop esi
        shr eax, 1fh
        add edx, eax
        add edx, ecx
        cmp edx, 9c400h
        ; Exact mapped bytes 7D 0B: jge 0x100748b4
        __asm _emit 0x7d
        __asm _emit 0x0b
        lea edx, [ebx + 30h]
        mov ecx, edi
        push edx
        ; Exact mapped bytes E8 0C AF 07 00: call 0x100ef7c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xaf
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebp
        ; Exact mapped bytes E8 EF 7E 04 00: call 0x100bc7b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

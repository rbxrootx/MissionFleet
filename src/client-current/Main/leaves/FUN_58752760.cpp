// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752760 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58752760() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 84h]
        cmp esi, dword ptr [edi + 88h]
        ; Exact mapped bytes 76 05: jbe 0x58752779
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 F9 A4 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x00
        mov ebx, dword ptr [edi + 78h]
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ebp, dword ptr [edi + 88h]
        cmp dword ptr [edi + 84h], ebp
        ; Exact mapped bytes 76 05: jbe 0x58752793
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 DF A4 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [edi + 78h]
        test ebx, ebx
        ; Exact mapped bytes 74 04: je 0x5875279e
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ebx, eax
        ; Exact mapped bytes 74 05: je 0x587527a3
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 CF A4 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x00
        cmp esi, ebp
        ; Exact mapped bytes 74 7F: je 0x58752826
        __asm _emit 0x74
        __asm _emit 0x7f
        test ebx, ebx
        ; Exact mapped bytes 75 33: jne 0x587527de
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes E8 C2 A4 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x587527bc
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 B6 A4 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        cmp dword ptr [esi], eax
        ; Exact mapped bytes 74 22: je 0x587527e6
        __asm _emit 0x74
        __asm _emit 0x22
        test ebx, ebx
        ; Exact mapped bytes 75 1A: jne 0x587527e2
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 A5 A4 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x587527d9
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 99 A4 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x00
        add esi, 4
        ; Exact mapped bytes EB A2: jmp 0x58752780
        __asm _emit 0xeb
        __asm _emit 0xa2
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes EB D0: jmp 0x587527b2
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes EB E9: jmp 0x587527cf
        __asm _emit 0xeb
        __asm _emit 0xe9
        mov eax, dword ptr [edi + 88h]
        lea ecx, [esi + 4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        ; Exact mapped bytes 7E 10: jle 0x58752808
        __asm _emit 0x7e
        __asm _emit 0x10
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push esi
        ; Exact mapped bytes E8 4F A4 22 00: call 0x5897cc54
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 10h
        add dword ptr [edi + 88h], -4
        mov eax, dword ptr [edi + 88h]
        cmp dword ptr [edi + 84h], esi
        ; Exact mapped bytes 77 04: ja 0x58752821
        __asm _emit 0x77
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 76 05: jbe 0x58752826
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 4C A4 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x00
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

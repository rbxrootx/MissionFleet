// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004260B2 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_004260b2_004260B2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        mov ebx, dword ptr [ebp + 8]
        sub ebx, 76ch
        cmp ebx, 46h
        ; Exact mapped bytes 0F 8C A3 00 00 00: jl 0x42616e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, 8ah
        ; Exact mapped bytes 0F 8F 97 00 00 00: jg 0x42616e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov esi, dword ptr [edi*4 + 44d14ch]
        add esi, dword ptr [ebp + 10h]
        test bl, 3
        ; Exact mapped bytes 75 06: jne 0x4260f1
        __asm _emit 0x75
        __asm _emit 0x06
        cmp edi, 2
        ; Exact mapped bytes 7E 01: jle 0x4260f1
        __asm _emit 0x7e
        __asm _emit 0x01
        inc esi
        ; Exact mapped bytes E8 FA F9 FF FF: call 0x425af0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, ebx
        lea ecx, [ebx - 1]
        imul eax, eax, 16dh
        sar ecx, 2
        mov edx, esi
        mov dword ptr [ebp - 8], esi
        add edx, ecx
        mov dword ptr [ebp - 10h], ebx
        add eax, edx
        mov edx, dword ptr [ebp + 1ch]
        lea ecx, [eax + eax*2]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [eax + ecx*8]
        imul ecx, ecx, 3ch
        add ecx, dword ptr [ebp + 18h]
        imul ecx, ecx, 3ch
        ; Exact mapped bytes 03 0D 68 D0 44 00: add ecx, dword ptr [0x44d068]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        dec edi
        cmp dword ptr [ebp + 20h], 1
        mov dword ptr [ebp - 14h], edi
        pop edi
        pop esi
        lea ecx, [ecx + edx + 7c558180h]
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 74 20: je 0x426164
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 20h], -1
        ; Exact mapped bytes 75 20: jne 0x42616a
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes 83 3D 6C D0 44 00 00: cmp dword ptr [0x44d06c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x42616a
        __asm _emit 0x74
        __asm _emit 0x17
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 49 FC FF FF: call 0x425da5
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x42616a
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 03 0D 70 D0 44 00: add ecx, dword ptr [0x44d070]
        __asm _emit 0x03
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, ecx
        ; Exact mapped bytes EB 03: jmp 0x426171
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop ebx
        leave
        ret
    }
}

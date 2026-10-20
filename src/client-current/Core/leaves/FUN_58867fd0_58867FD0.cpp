// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867FD0 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_58867fd0_58867FD0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        and dword ptr [ebp - 0ch], 0
        push edi
        mov edi, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes E8 D8 A4 FF FF: call 0x588624be
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 1
        mov edx, dword ptr [ebp + 14h]
        pop ecx
        mov cl, al
        mov byte ptr [ebp - 1], cl
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x58868098
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx*4 + 588c60b8h]
        mov dword ptr [ebp - 8], eax
        push ebx
        lea ebx, [edx*4 + 588c60ech]
        push esi
        test cl, cl
        ; Exact mapped bytes 74 05: je 0x58868015
        __asm _emit 0x74
        __asm _emit 0x05
        mov esi, dword ptr [ebx - 4]
        ; Exact mapped bytes EB 06: jmp 0x5886801b
        __asm _emit 0xeb
        __asm _emit 0x06
        mov esi, dword ptr [eax - 4]
        mov dword ptr [ebp - 8], eax
        push edi
        inc esi
        ; Exact mapped bytes E8 62 A4 FF FF: call 0x58862484
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, esi
        pop ecx
        imul ecx, edi, 16dh
        push 7
        add ecx, 0ffff9c36h
        add eax, ecx
        cdq
        pop ecx
        idiv ecx
        imul eax, dword ptr [ebp + 18h], 7
        sub eax, edx
        add eax, esi
        add eax, dword ptr [ebp + 1ch]
        cmp edx, dword ptr [ebp + 1ch]
        lea esi, [eax - 7]
        cmovg esi, eax
        cmp byte ptr [ebp - 1], 0
        mov edx, esi
        cmove ebx, dword ptr [ebp - 8]
        cmp dword ptr [ebp + 18h], 5
        ; Exact mapped bytes 75 07: jne 0x58868064
        __asm _emit 0x75
        __asm _emit 0x07
        cmp esi, dword ptr [ebx]
        ; Exact mapped bytes 7E 03: jle 0x58868064
        __asm _emit 0x7e
        __asm _emit 0x03
        lea edx, [esi - 7]
        pop esi
        pop ebx
        imul eax, dword ptr [ebp + 24h], 3ch
        add eax, dword ptr [ebp + 28h]
        imul eax, eax, 3ch
        add eax, dword ptr [ebp + 2ch]
        imul ecx, eax, 3e8h
        mov eax, dword ptr [ebp + 30h]
        add eax, ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 2D: jne 0x588680b1
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 89 15 44 74 90 58: mov dword ptr [0x58907444], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A3 48 74 90 58: mov dword ptr [0x58907448], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 89 3D 40 74 90 58: mov dword ptr [0x58907440], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        pop edi
        leave
        ret
        test cl, cl
        ; Exact mapped bytes 74 09: je 0x588680a5
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [edx*4 + 588c60e8h]
        ; Exact mapped bytes EB 07: jmp 0x588680ac
        __asm _emit 0xeb
        __asm _emit 0x07
        mov edx, dword ptr [edx*4 + 588c60b4h]
        add edx, dword ptr [ebp + 20h]
        ; Exact mapped bytes EB B5: jmp 0x58868066
        __asm _emit 0xeb
        __asm _emit 0xb5
        ; Exact mapped bytes A3 54 74 90 58: mov dword ptr [0x58907454], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes 89 15 50 74 90 58: mov dword ptr [0x58907450], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 93 00 00: call 0x58871447
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 41: jne 0x5886810b
        __asm _emit 0x75
        __asm _emit 0x41
        imul ecx, dword ptr [ebp - 0ch], 3e8h
        ; Exact mapped bytes A1 54 74 90 58: mov eax, dword ptr [0x58907454]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        add eax, ecx
        ; Exact mapped bytes A3 54 74 90 58: mov dword ptr [0x58907454], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 79 0D: jns 0x588680ec
        __asm _emit 0x79
        __asm _emit 0x0d
        add eax, 5265c00h
        ; Exact mapped bytes FF 0D 50 74 90 58: dec dword ptr [0x58907450]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes EB 12: jmp 0x588680fe
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp eax, 5265c00h
        ; Exact mapped bytes 7C 10: jl 0x58868103
        __asm _emit 0x7c
        __asm _emit 0x10
        add eax, 0fad9a400h
        ; Exact mapped bytes FF 05 50 74 90 58: inc dword ptr [0x58907450]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes A3 54 74 90 58: mov dword ptr [0x58907454], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 89 3D 4C 74 90 58: mov dword ptr [0x5890744c], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes EB 8A: jmp 0x58868095
        __asm _emit 0xeb
        __asm _emit 0x8a
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 BF 8E FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}

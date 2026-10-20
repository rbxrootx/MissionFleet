// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865A28 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_58865a28_58865A28() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [ebp - 0ch], edi
        mov eax, dword ptr [edi]
        mov esi, dword ptr [eax]
        test esi, esi
        ; Exact mapped bytes 0F 84 EF 00 00 00: je 0x58865b33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        mov ecx, eax
        mov edx, dword ptr [esi]
        and ecx, 1fh
        mov ebx, dword ptr [esi + 4]
        xor edx, eax
        mov esi, dword ptr [esi + 8]
        xor ebx, eax
        xor esi, eax
        ror edx, cl
        ror ebx, cl
        ror esi, cl
        mov dword ptr [ebp - 4], edx
        cmp ebx, esi
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x58865af5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, edx
        mov eax, 200h
        sar esi, 2
        cmp esi, eax
        mov edi, esi
        push 20h
        cmova edi, eax
        add edi, esi
        pop eax
        cmove edi, eax
        cmp edi, esi
        ; Exact mapped bytes 72 1F: jb 0x58865aa9
        __asm _emit 0x72
        __asm _emit 0x1f
        push 4
        push edi
        push edx
        ; Exact mapped bytes E8 BD E0 FF FF: call 0x58863b50
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        push 0
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes E8 71 71 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test ebx, ebx
        ; Exact mapped bytes 75 22: jne 0x58865ac8
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        push 4
        lea edi, [esi + 4]
        push edi
        push edx
        ; Exact mapped bytes E8 9B E0 FF FF: call 0x58863b50
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ebx, eax
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 4F 71 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test ebx, ebx
        ; Exact mapped bytes 74 6B: je 0x58865b33
        __asm _emit 0x74
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ebx
        lea ebx, [ebx + esi*4]
        lea esi, [eax + edi*4]
        xor eax, eax
        mov ecx, esi
        sub ecx, ebx
        add ecx, 3
        shr ecx, 2
        cmp ebx, esi
        cmova ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x58865af2
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        mov edi, ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edi + 4]
        push dword ptr [eax]
        ; Exact mapped bytes E8 AE EC FF FF: call 0x588647ad
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 4]
        mov dword ptr [ebx], eax
        ; Exact mapped bytes E8 A4 EC FF FF: call 0x588647ad
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        mov ecx, dword ptr [ecx]
        mov dword ptr [ecx], eax
        lea eax, [ebx + 4]
        push eax
        ; Exact mapped bytes E8 95 EC FF FF: call 0x588647ad
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        push esi
        mov ecx, dword ptr [ecx]
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes E8 88 EC FF FF: call 0x588647ad
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        add esp, 10h
        mov ecx, dword ptr [ecx]
        mov dword ptr [ecx + 8], eax
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x58865b36
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}

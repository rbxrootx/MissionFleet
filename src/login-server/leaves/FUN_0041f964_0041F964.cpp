// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F964 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_0041f964_0041F964() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        xor ebx, ebx
        ; Exact mapped bytes 39 1D AC 11 45 00: cmp dword ptr [0x4511ac], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes 75 0F: jne 0x41f983
        __asm _emit 0x75
        __asm _emit 0x0f
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 4D 00 00: call 0x424720
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 52: jmp 0x41f9d5
        __asm _emit 0xeb
        __asm _emit 0x52
        push dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B2 F1 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, esi
        push esi
        sub edi, eax
        ; Exact mapped bytes E8 A8 F1 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        add edi, eax
        pop ecx
        cmp byte ptr [esi], bl
        ; Exact mapped bytes 74 33: je 0x41f9d3
        __asm _emit 0x74
        __asm _emit 0x33
        cmp esi, edi
        ; Exact mapped bytes 77 2F: ja 0x41f9d3
        __asm _emit 0x77
        __asm _emit 0x2f
        cmp byte ptr [esi], bl
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 15: je 0x41f9c0
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, esi
        sub edx, eax
        mov cl, byte ptr [eax]
        cmp cl, bl
        ; Exact mapped bytes 74 0B: je 0x41f9c0
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp byte ptr [edx + eax], cl
        ; Exact mapped bytes 75 06: jne 0x41f9c0
        __asm _emit 0x75
        __asm _emit 0x06
        inc eax
        cmp byte ptr [edx + eax], bl
        ; Exact mapped bytes 75 EF: jne 0x41f9af
        __asm _emit 0x75
        __asm _emit 0xef
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 74 0B: je 0x41f9cf
        __asm _emit 0x74
        __asm _emit 0x0b
        push esi
        ; Exact mapped bytes E8 23 FE FF FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov esi, eax
        ; Exact mapped bytes EB CD: jmp 0x41f99c
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, esi
        ; Exact mapped bytes EB 02: jmp 0x41f9d5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}

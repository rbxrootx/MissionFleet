// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430480 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00430480_00430480() {
    __asm {
        push ebx
        push esi
        push edi
        mov ebx, dword ptr [esp + 10h]
        mov edi, ecx
        mov eax, dword ptr [edi + 4]
        mov esi, dword ptr [edi]
        sub eax, esi
        sar eax, 1
        cmp ebx, eax
        ; Exact mapped bytes 76 0D: jbe 0x4304a3
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 00 59 00 00: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [edi + 4]
        mov edx, dword ptr [edi]
        mov esi, dword ptr [esp + 14h]
        mov eax, ecx
        sub eax, edx
        sar eax, 1
        sub eax, ebx
        mov dword ptr [esp + 10h], eax
        cmp eax, esi
        lea eax, [esp + 10h]
        ; Exact mapped bytes 72 04: jb 0x4304c4
        __asm _emit 0x72
        __asm _emit 0x04
        lea eax, [esp + 14h]
        push ebp
        mov ebp, dword ptr [eax]
        mov esi, ebx
        lea ebx, [edx + ebx*2]
        add esi, ebp
        pop ebp
        lea esi, [edx + esi*2]
        cmp ebx, esi
        ; Exact mapped bytes 74 24: je 0x4304fa
        __asm _emit 0x74
        __asm _emit 0x24
        sub ecx, esi
        sar ecx, 1
        inc ecx
        ; Exact mapped bytes 74 0D: je 0x4304ea
        __asm _emit 0x74
        __asm _emit 0x0d
        add ecx, ecx
        push ecx
        push esi
        push ebx
        ; Exact mapped bytes E8 79 57 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [edi + 4]
        sub esi, ebx
        sar esi, 1
        neg esi
        shl esi, 1
        add eax, esi
        mov dword ptr [edi + 4], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

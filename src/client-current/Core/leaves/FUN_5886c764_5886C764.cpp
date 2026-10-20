// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886C764 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_5886c764_5886C764() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        ; Exact mapped bytes 8B 1D 14 96 96 58: mov ebx, dword ptr [0x58969614]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x14
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        push esi
        push edi
        ; Exact mapped bytes 8B 3D 18 96 96 58: mov edi, dword ptr [0x58969618]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        add edi, 0ch
        add ebx, -3
        lea ebx, [edi + ebx*4]
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes EB 42: jmp 0x5886c7c9
        __asm _emit 0xeb
        __asm _emit 0x42
        mov esi, dword ptr [edi]
        test esi, esi
        ; Exact mapped bytes 74 52: je 0x5886c7df
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [esi + 0ch]
        nop
        shr eax, 0dh
        test al, 1
        ; Exact mapped bytes 75 2E: jne 0x5886c7c6
        __asm _emit 0x75
        __asm _emit 0x2e
        push esi
        ; Exact mapped bytes E8 64 D5 FE FF: call 0x58859d02
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        lea edx, [esi + 0ch]
        mov ebx, 2000h
        mov eax, dword ptr [edx]
        mov ecx, eax
        or ecx, ebx
        ; Exact mapped bytes F0 0F B1 0A: lock cmpxchg dword ptr [edx], ecx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xb1
        __asm _emit 0x0a
        ; Exact mapped bytes 75 F6: jne 0x5886c7a9
        __asm _emit 0x75
        __asm _emit 0xf6
        mov ebx, dword ptr [ebp - 4]
        shr eax, 0dh
        not al
        test al, 1
        ; Exact mapped bytes 75 19: jne 0x5886c7d8
        __asm _emit 0x75
        __asm _emit 0x19
        push esi
        ; Exact mapped bytes E8 51 D5 FE FF: call 0x58859d16
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        add edi, 4
        cmp edi, ebx
        ; Exact mapped bytes 75 BA: jne 0x5886c787
        __asm _emit 0x75
        __asm _emit 0xba
        mov eax, dword ptr [ebp + 8]
        and dword ptr [eax], 0
        pop edi
        pop esi
        pop ebx
        leave
        ret
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], esi
        ; Exact mapped bytes EB F4: jmp 0x5886c7d3
        __asm _emit 0xeb
        __asm _emit 0xf4
        push 38h
        push 1
        ; Exact mapped bytes E8 28 2A 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 1F 04 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 D3: je 0x5886c7cd
        __asm _emit 0x74
        __asm _emit 0xd3
        or dword ptr [eax + 10h], 0ffffffffh
        mov eax, dword ptr [edi]
        push 0
        push 0fa0h
        add eax, 20h
        push eax
        ; Exact mapped bytes E8 23 30 00 00: call 0x5886f833
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [edi]
        mov ecx, 2000h
        lea eax, [esi + 0ch]
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        push esi
        ; Exact mapped bytes E8 DF D4 FE FF: call 0x58859d02
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB B2: jmp 0x5886c7d8
        __asm _emit 0xeb
        __asm _emit 0xb2
    }
}

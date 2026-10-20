// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042685D .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_0042685d_0042685D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 4C FF 44 00 00: cmp dword ptr [0x44ff4c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 75 1D: jne 0x42688a
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 8]
        cmp eax, 41h
        ; Exact mapped bytes 0F 8C AA 00 00 00: jl 0x426923
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 5ah
        ; Exact mapped bytes 0F 8F A1 00 00 00: jg 0x426923
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 20h
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x426923
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 8]
        mov edi, 100h
        push 1
        cmp ebx, edi
        pop esi
        ; Exact mapped bytes 7D 25: jge 0x4268be
        __asm _emit 0x7d
        __asm _emit 0x25
        ; Exact mapped bytes 39 35 CC AE 44 00: cmp dword ptr [0x44aecc], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 7E 0B: jle 0x4268ac
        __asm _emit 0x7e
        __asm _emit 0x0b
        push esi
        push ebx
        ; Exact mapped bytes E8 5C BE FF FF: call 0x422704
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 0A: jmp 0x4268b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes A1 C0 AC 44 00: mov eax, dword ptr [0x44acc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        mov al, byte ptr [eax + ebx*2]
        and eax, esi
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x4268be
        __asm _emit 0x75
        __asm _emit 0x04
        mov eax, ebx
        ; Exact mapped bytes EB 65: jmp 0x426923
        __asm _emit 0xeb
        __asm _emit 0x65
        ; Exact mapped bytes 8B 15 C0 AC 44 00: mov edx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        mov eax, ebx
        sar eax, 8
        movzx ecx, al
        test byte ptr [edx + ecx*2 + 1], 80h
        ; Exact mapped bytes 74 0F: je 0x4268e2
        __asm _emit 0x74
        __asm _emit 0x0f
        and byte ptr [ebp + 0ah], 0
        push 2
        mov byte ptr [ebp + 8], al
        mov byte ptr [ebp + 9], bl
        pop eax
        ; Exact mapped bytes EB 09: jmp 0x4268eb
        __asm _emit 0xeb
        __asm _emit 0x09
        and byte ptr [ebp + 9], 0
        mov byte ptr [ebp + 8], bl
        mov eax, esi
        push esi
        push 0
        lea ecx, [ebp - 4]
        push 3
        push ecx
        push eax
        lea eax, [ebp + 8]
        push eax
        push edi
        ; Exact mapped bytes FF 35 4C FF 44 00: push dword ptr [0x44ff4c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 A5 DF FF FF: call 0x4248aa
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 74 AE: je 0x4268ba
        __asm _emit 0x74
        __asm _emit 0xae
        cmp eax, esi
        ; Exact mapped bytes 75 06: jne 0x426916
        __asm _emit 0x75
        __asm _emit 0x06
        movzx eax, byte ptr [ebp - 4]
        ; Exact mapped bytes EB 0D: jmp 0x426923
        __asm _emit 0xeb
        __asm _emit 0x0d
        movzx eax, byte ptr [ebp - 3]
        movzx ecx, byte ptr [ebp - 4]
        shl eax, 8
        or eax, ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}

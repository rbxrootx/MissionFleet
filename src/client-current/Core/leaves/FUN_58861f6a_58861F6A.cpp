// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861F6A .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_58861f6a_58861F6A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 10h]
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 74 51: je 0x58861fd9
        __asm _emit 0x74
        __asm _emit 0x51
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 4B: jbe 0x58861fd9
        __asm _emit 0x76
        __asm _emit 0x4b
        xor ecx, ecx
        cmp dword ptr [ebp + 0ch], 1ah
        mov byte ptr [edi], cl
        ; Exact mapped bytes 72 41: jb 0x58861fd9
        __asm _emit 0x72
        __asm _emit 0x41
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x58861fd9
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [eax + 4], ecx
        ; Exact mapped bytes 7F 12: jg 0x58861fb3
        __asm _emit 0x7f
        __asm _emit 0x12
        ; Exact mapped bytes 7C 04: jl 0x58861fa7
        __asm _emit 0x7c
        __asm _emit 0x04
        cmp dword ptr [eax], ecx
        ; Exact mapped bytes 73 0C: jae 0x58861fb3
        __asm _emit 0x73
        __asm _emit 0x0c
        ; Exact mapped bytes E8 C3 04 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes EB 35: jmp 0x58861fe8
        __asm _emit 0xeb
        __asm _emit 0x35
        push eax
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 9F 90 FF FF: call 0x5885b05c
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 23: jne 0x58861fe8
        __asm _emit 0x75
        __asm _emit 0x23
        lea eax, [ebp - 28h]
        push eax
        push dword ptr [ebp + 0ch]
        push edi
        ; Exact mapped bytes E8 0A 06 01 00: call 0x588725dc
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov esi, eax
        ; Exact mapped bytes EB 0F: jmp 0x58861fe8
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes E8 91 04 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 C3 EF FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, esi
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 5A F0 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}

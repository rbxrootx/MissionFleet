// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A0615 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_004a0615_004A0615() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 208h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D D4 6C 68 00 00: cmp dword ptr [0x686cd4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd4
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x4a062f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x4a06d0
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp - 204h], eax
        mov ecx, dword ptr [ebp - 204h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 200h
        lea eax, [ebp - 200h]
        push eax
        ; Exact mapped bytes E8 7C 84 FC FF: call 0x468ad0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 208h], eax
        cmp dword ptr [ebp - 208h], 0
        ; Exact mapped bytes 7D 11: jge 0x4a0677
        __asm _emit 0x7d
        __asm _emit 0x11
        push 34h
        push 6711e0h
        ; Exact mapped bytes E8 CE 86 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a0677
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a065d
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 15 D0 6C 68 00: mov edx, dword ptr [0x686cd0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 2B: je 0x4a06b5
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes E8 E1 13 09 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x13
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x4a06b5
        __asm _emit 0x74
        __asm _emit 0x22
        push 6711ech
        ; Exact mapped bytes E8 D3 13 09 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x13
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8ch]
        push eax
        mov ecx, 686cd8h
        ; Exact mapped bytes E8 9D 81 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 96 81 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [ebp - 200h]
        push ecx
        mov ecx, 686cd8h
        ; Exact mapped bytes E8 85 81 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 204h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

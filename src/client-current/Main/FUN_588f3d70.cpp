// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F3D70 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_588f3d70() {
    __asm {
        push -1
        push 58989e48h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 10h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 0ch], esi
        mov edi, dword ptr [esp + 20h]
        push 0
        push edi
        ; Exact mapped bytes E8 3B 30 01 00: call 0x58906de0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esp + 18h], 0
        mov dword ptr [esi], 589a1980h
        test edi, edi
        ; Exact mapped bytes 74 6C: je 0x588f3e23
        __asm _emit 0x74
        __asm _emit 0x6c
        cmp dword ptr [esi + 164h], 0
        ; Exact mapped bytes 7E 0E: jle 0x588f3dce
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x588f3dce
        __asm _emit 0x74
        __asm _emit 0x04
        mov edx, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x588f3dd0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        cmp dword ptr [esi + 160h], 0
        ; Exact mapped bytes 7E 0E: jle 0x588f3de7
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x588f3de7
        __asm _emit 0x74
        __asm _emit 0x04
        mov ecx, eax
        ; Exact mapped bytes EB 02: jmp 0x588f3de9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        cmp dword ptr [esi + 170h], 0
        ; Exact mapped bytes 7E 0E: jle 0x588f3e00
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 194h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x588f3e00
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x588f3e02
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test edx, edx
        ; Exact mapped bytes 75 1D: jne 0x588f3e23
        __asm _emit 0x75
        __asm _emit 0x1d
        test ecx, ecx
        ; Exact mapped bytes 75 19: jne 0x588f3e23
        __asm _emit 0x75
        __asm _emit 0x19
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x588f3e23
        __asm _emit 0x75
        __asm _emit 0x15
        cmp dword ptr [esp + 28h], 1
        ; Exact mapped bytes 75 0E: jne 0x588f3e23
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D F0 47 A2 58: mov ecx, dword ptr [0x58a247f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 2
        push edi
        ; Exact mapped bytes E8 8D 12 E8 FF: call 0x587750b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x12
        __asm _emit 0xe8
        __asm _emit 0xff
        mov eax, esi
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        add esp, 10h
        ret 0ch
    }
}

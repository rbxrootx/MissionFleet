// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748CE0 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_58748ce0() {
    __asm {
        push -1
        push 5897e338h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
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
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esi], 5898cf98h
        xor ebx, ebx
        mov dword ptr [esp + 20h], ebx
        lea edi, [esi + 0bch]
        lea ebp, [ebx + 0ah]
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0A: je 0x58748d30
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [edi], ebx
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x58748d20
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x58748d50
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b0h], ebx
        mov ecx, dword ptr [esi + 0a0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x58748d68
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0a0h], ebx
        mov eax, dword ptr [esi + 80h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x58748d81
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 CA 3E 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x3e
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 80h], ebx
        mov ecx, dword ptr [esi + 0ach]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0E: je 0x58748d99
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0ach], ebx
        mov ecx, esi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 A8 A6 1B 00: call 0x58903450
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa6
        __asm _emit 0x1b
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

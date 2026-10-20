// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EF08A .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_004ef08a_004EF08A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 04 2B 04 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 55 FE FF FF: call 0x4eeeff
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4ch
        ; Exact mapped bytes E8 59 2C 04 00: call 0x531d26
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B4 F7 FF FF: call 0x4ee89a
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 14h]
        xor eax, eax
        cmp dword ptr [edx], 0
        setg al
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0B: jne 0x4ef112
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], 0
        ; Exact mapped bytes EB 15: jmp 0x4ef127
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 0F: je 0x4ef127
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx + 4]
        add eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 14h]
        xor eax, eax
        cmp dword ptr [edx + 4], 0
        setg al
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x4ef148
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx + 4], 0
        ; Exact mapped bytes EB 13: jmp 0x4ef15b
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x4ef15b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 44: je 0x4ef1a5
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 3E: jne 0x4ef1a5
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp + 14h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 7E 36: jle 0x4ef1a5
        __asm _emit 0x7e
        __asm _emit 0x36
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4ef189
        __asm _emit 0x75
        __asm _emit 0x14
        push 246h
        push 677c28h
        ; Exact mapped bytes E8 BC 9B 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ef189
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ef16f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 0ch], 1
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 7E 16: jle 0x4ef1c3
        __asm _emit 0x7e
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 7C 0A: jl 0x4ef1c3
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 14h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 7E 1A: jle 0x4ef1e6
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 7C 0C: jl 0x4ef1e6
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

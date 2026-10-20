// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056D681 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_0056d681_0056D681() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 8]
        sub eax, 0a8h
        mov dword ptr [ebp - 18h], eax
        push 2f8h
        push 67d450h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 BB CB F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xcb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], 0
        push 641188h
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 D8 B6 EE FF: call 0x458db0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb6
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x56d6e9
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 8000ffffh
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x56d790
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x56d6fe
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 35: jmp 0x56d733
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea eax, [eax + eax + 2]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 84 88 EF FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], esp
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 A0 B6 EE FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xb6
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3D: je 0x56d78b
        __asm _emit 0x74
        __asm _emit 0x3d
        push 306h
        push 67d450h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 FF CA F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xca
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 34h], 0
        ; Exact mapped bytes 74 21: je 0x56d78b
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x56d790
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 800401edh
        lea esp, [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

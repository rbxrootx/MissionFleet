// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004089D0 .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_004089d0_004089D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58a949h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 5ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 68h]
        mov ecx, 17h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 6330cch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 148h]
        ; Exact mapped bytes E8 9F D0 0B 00: call 0x4c5abf
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 14ch]
        ; Exact mapped bytes E8 91 D0 0B 00: call 0x4c5abf
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 148h], 0
        ; Exact mapped bytes 74 47: je 0x408a81
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 148h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1B: je 0x408a6d
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 88 C3 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x408a74
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 148h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 14ch], 0
        ; Exact mapped bytes 74 47: je 0x408ad4
        __asm _emit 0x74
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 14ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1B: je 0x408ac0
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 35 C3 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x408ac7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 14ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 15 8D FF FF: call 0x4017f8
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 68h
        cmp ebp, esp
        ; Exact mapped bytes E8 F6 C2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

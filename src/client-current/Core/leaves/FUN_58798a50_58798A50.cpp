// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798A50 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58798a50_58798A50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891690h
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
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi + 0ch], 0
        mov ebx, dword ptr [ebp + 8]
        push ebx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 7E 15 00 00: call 0x5879a010
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + 0ch]
        push eax
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F1 FA FF FF: call 0x58798590
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [eax]
        mov dword ptr [eax], 0
        mov edi, dword ptr [esi + 0ch]
        mov dword ptr [esi + 0ch], ecx
        test edi, edi
        ; Exact mapped bytes 74 22: je 0x58798ad6
        __asm _emit 0x74
        __asm _emit 0x22
        push 584a9d30h
        push 3
        push 18h
        push edi
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 32 92 09 00: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        push 48h
        push edi
        mov byte ptr [ebp - 4], 0
        ; Exact mapped bytes E8 61 85 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 74 1E: je 0x58798afb
        __asm _emit 0x74
        __asm _emit 0x1e
        push 584a9d30h
        push 3
        push 18h
        push edi
        mov byte ptr [ebp - 4], 2
        ; Exact mapped bytes E8 09 92 09 00: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        push 48h
        push edi
        ; Exact mapped bytes E8 3C 85 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebx + 10h]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ebx + 14h]
        mov dword ptr [esi + 14h], eax
        mov eax, esi
        mov ecx, dword ptr [ebp - 0ch]
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
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F83F1 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_004f83f1_004F83F1() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ca7ch
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
        sub esp, 24h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 7D 14: jge 0x4f8429
        __asm _emit 0x7d
        __asm _emit 0x14
        push 257h
        push 672eech
        ; Exact mapped bytes E8 1C 09 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x09
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8429
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f840f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 7A: je 0x4f84b1
        __asm _emit 0x74
        __asm _emit 0x7a
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 21 C9 02 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7E 6D: jle 0x4f84b1
        __asm _emit 0x7e
        __asm _emit 0x6d
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 673164h
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 A5 C8 02 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 2ch]
        push ecx
        push 0f114h
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 14 CA 00 00: call 0x504e8f
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f114h
        push 30h
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 20 C9 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc9
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 51 E6 FF FF: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 BA 42 FD FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F EF FF FF: call 0x4f73ef
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 3D 44 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 2A: jmp 0x4f84db
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 74 21: je 0x4f84db
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 18: je 0x4f84db
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0c5h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004087E0 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_004087e0_004087E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58a91dh
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
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6F 8C FF FF: call 0x40148d
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 6330cch
        ; Exact mapped bytes 0F BF 15 E4 81 65 00: movsx edx, word ptr [0x6581e4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x00
        add edx, 2
        push edx
        push 658174h
        push 1ch
        ; Exact mapped bytes E8 BA 38 0C 00: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0F: je 0x408861
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ah
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E4 D0 0B 00: call 0x4c5940
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x408868
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 148h], edx
        ; Exact mapped bytes 0F BF 05 E4 81 65 00: movsx eax, word ptr [0x6581e4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x00
        add eax, 3
        push eax
        push 658174h
        push 1ch
        ; Exact mapped bytes E8 6A 38 0C 00: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0F: je 0x4088b1
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ah
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 94 D0 0B 00: call 0x4c5940
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x4088b8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 1ch], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 14ch], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 150h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 154h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes E8 E7 C4 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc4
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

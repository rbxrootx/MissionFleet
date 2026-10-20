// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410AD0 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_00410ad0_00410AD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 54h]
        mov ecx, 15h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        mov dword ptr [ebp - 8], 1014h
        mov eax, dword ptr [ebp - 8]
        push eax
        push 633e28h
        ; Exact mapped bytes E8 DD 5F 0E 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 6
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x410b9b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 83 D2 01 00: call 0x42dd9b
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 E0 D2 01 00: call 0x42de03
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        ; Exact mapped bytes E8 41 05 FF FF: call 0x401073
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 34 BA 68 00: call dword ptr [0x68ba34]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B0 42 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 74 41: je 0x410b8a
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1B: je 0x410b79
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 7C 42 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x410b80
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 0
        mov esi, esp
        push 0
        ; Exact mapped bytes FF 15 C0 BF 68 00: call dword ptr [0x68bfc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 55 42 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 54h
        cmp ebp, esp
        ; Exact mapped bytes E8 48 42 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

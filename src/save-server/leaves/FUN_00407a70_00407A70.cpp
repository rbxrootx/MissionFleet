// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407A70 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_00407a70_00407A70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a0h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 0a0h]
        mov ecx, 28h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 0c0000000h
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 26 D3 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd3
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x407bac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0ffffffffh
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F7 D2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 60h]
        push eax
        push 50h
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D8 D2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 4ch
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BA D2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 60h]
        push edx
        push 4
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9B D2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        add edx, 50h
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7D D2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea ecx, [ebp - 60h]
        push ecx
        push 4
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5E D2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4B D2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x407bae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 0a0h
        cmp ebp, esp
        ; Exact mapped bytes E8 32 D2 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

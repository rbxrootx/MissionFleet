// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004065E0 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_004065e0_004065E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 4ch]
        mov ecx, 13h
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
        push 40000000h
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
        ; Exact mapped bytes E8 BC E7 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 34: je 0x406671
        __asm _emit 0x74
        __asm _emit 0x34
        mov esi, esp
        push 2
        push 0
        push 0
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
        ; Exact mapped bytes E8 9A E7 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov esi, esp
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 84 E7 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 03: jmp 0x406674
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 6F E7 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe7
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

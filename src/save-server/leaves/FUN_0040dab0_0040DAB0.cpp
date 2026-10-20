// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040DAB0 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_0040dab0_0040DAB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        push 401a5ah
        ; Exact mapped bytes FF 15 F8 B7 68 00: call dword ptr [0x68b7f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0F 73 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x73
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A3 9C 4B 68 00: mov dword ptr [0x684b9c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x4b
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, esp
        push 104h
        push 684ba0h
        push 0
        ; Exact mapped bytes FF 15 F4 B7 68 00: call dword ptr [0x68b7f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EF 72 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        push 2eh
        push 684ba0h
        ; Exact mapped bytes E8 FA 37 FF FF: call 0x401307
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2B: je 0x40db44
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 15 7C 05 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        cmp eax, 3
        ; Exact mapped bytes 72 11: jb 0x40db44
        __asm _emit 0x72
        __asm _emit 0x11
        push 6333cch
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 2F 7E 05 00: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 9C 72 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

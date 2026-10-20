// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C3E3 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_0047c3e3_0047C3E3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 43: je 0x47c44d
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47c425
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 7D 1F: jge 0x47c44d
        __asm _emit 0x7d
        __asm _emit 0x1f
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x47c44d
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 D5 FC FF: call 0x449972
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 98 A2 FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa2
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB CF: jmp 0x47c41c
        __asm _emit 0xeb
        __asm _emit 0xcf
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 89 C3 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

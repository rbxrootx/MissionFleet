// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C613 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_0047c613_0047C613() {
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
        ; Exact mapped bytes 74 43: je 0x47c67d
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47c655
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 7D 1F: jge 0x47c67d
        __asm _emit 0x7d
        __asm _emit 0x1f
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x47c67d
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 DF FC FF: call 0x44a625
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xdf
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 68 A0 FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB CF: jmp 0x47c64c
        __asm _emit 0xeb
        __asm _emit 0xcf
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 59 C1 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc1
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

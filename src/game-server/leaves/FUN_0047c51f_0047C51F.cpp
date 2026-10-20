// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C51F .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_0047c51f_0047C51F() {
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
        ; Exact mapped bytes 74 43: je 0x47c589
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47c561
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 80h
        ; Exact mapped bytes 7D 1F: jge 0x47c589
        __asm _emit 0x7d
        __asm _emit 0x1f
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x47c589
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 33 E0 FC FF: call 0x44a5af
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5C A1 FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB CF: jmp 0x47c558
        __asm _emit 0xeb
        __asm _emit 0xcf
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 4D C2 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xc2
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

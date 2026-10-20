// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C1590 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_587c1590_587C1590() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 41: je 0x587c15e0
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 14: jmp 0x587c15be
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E 66 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x66
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        mov dword ptr [ebp + 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7E 08: jle 0x587c15cc
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x587c15cc
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x587c15aa
        __asm _emit 0xeb
        __asm _emit 0xde
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x587c15de
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 88h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x587c15ed
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 88h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

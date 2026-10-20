// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C1710 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_587c1710_587C1710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 14: jmp 0x587c1738
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 64 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x64
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        mov dword ptr [ebp + 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7E 08: jle 0x587c1746
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x587c1746
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x587c1724
        __asm _emit 0xeb
        __asm _emit 0xde
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x587c1759
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 2D D6 FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2d
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C1460 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_587c1460_587C1460() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 0B: jmp 0x587c147f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 67 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x67
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 08: jle 0x587c148d
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x587c148d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB E7: jmp 0x587c1474
        __asm _emit 0xeb
        __asm _emit 0xe7
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x587c14a0
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 DF CD FF: call 0x5849f480
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xdf
        __asm _emit 0xcd
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

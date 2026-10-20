// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C0B60 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_587c0b60_587C0B60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 14: jmp 0x587c0b88
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 94 70 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x70
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        sub edx, 1
        mov dword ptr [ebp + 8], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7E 08: jle 0x587c0b96
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x587c0b96
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x587c0b74
        __asm _emit 0xeb
        __asm _emit 0xde
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0D: je 0x587c0ba9
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C B5 CC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb5
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x587c0bb0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ffffffffh
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C147 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_0040c147_0040C147() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 E5 02 00 00: call 0x40c440
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BE 02 00 00: call 0x40c420
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x40c172
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 91 02 00 00: call 0x40c400
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x40c19b
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 19: je 0x40c199
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80016003h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 3E 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x40c19b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CC: jmp 0x40c167
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov esp, ebp
        pop ebp
        ret
    }
}

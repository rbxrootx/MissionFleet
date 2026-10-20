// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A7060 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_586a7060_586A7060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 0F BF 45 0C: movsx eax, word ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x586a7084
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 25: je 0x586a70a1
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 74 3C: je 0x586a70be
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes EB 55: jmp 0x586a70d9
        __asm _emit 0xeb
        __asm _emit 0x55
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 2b8h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A2 87 DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x87
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 38: jmp 0x586a70d9
        __asm _emit 0xeb
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 2b8h]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 85 87 DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x586a70d9
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 2b8h]
        mov dword ptr [ebp - 14h], eax
        push 2
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 68 87 DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x87
        __asm _emit 0xdf
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

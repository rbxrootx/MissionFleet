// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051AA80 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0051aa80_0051AA80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 4A 01 00 00: call 0x51abd3
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x51aa8f
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 55: jmp 0x51aae4
        __asm _emit 0xeb
        __asm _emit 0x55
        push 1
        ; Exact mapped bytes E8 D9 00 00 00: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D5 6F 01 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2B: je 0x51aacf
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 22: je 0x51aacf
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes E8 79 BD FB FF: call 0x4d6831
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xbd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x51aacd
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 1ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 60: call dword ptr [eax + 0x60]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x60
        ; Exact mapped bytes EB 15: jmp 0x51aae4
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes E8 8F 5B 02 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x51aae4
        __asm _emit 0x75
        __asm _emit 0x07
        push 0
        ; Exact mapped bytes E8 91 E7 06 00: call 0x589275
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

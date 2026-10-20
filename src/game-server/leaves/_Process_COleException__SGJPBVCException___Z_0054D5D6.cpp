// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054D5D6 .. +0x64 bytes.
extern "C" __declspec(naked) void _Process_COleException__SGJPBVCException___Z_0054D5D6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 588860h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 DA FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x54d5f6
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 3B: jmp 0x54d631
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 584838h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D DA FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x54d610
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 8007000eh
        ; Exact mapped bytes EB 21: jmp 0x54d631
        __asm _emit 0xeb
        __asm _emit 0x21
        push 584820h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 DA FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x54d62a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 80004001h
        ; Exact mapped bytes EB 07: jmp 0x54d631
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 8000ffffh
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

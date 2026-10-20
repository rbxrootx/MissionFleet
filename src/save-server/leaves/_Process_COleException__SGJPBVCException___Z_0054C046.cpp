// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054C046 .. +0x64 bytes.
extern "C" __declspec(naked) void _Process_COleException__SGJPBVCException___Z_0054C046() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 63ae88h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 E1 F8 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe1
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x54c066
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 3B: jmp 0x54c0a1
        __asm _emit 0xeb
        __asm _emit 0x3b
        push 636e08h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D E1 F8 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe1
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x54c080
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 8007000eh
        ; Exact mapped bytes EB 21: jmp 0x54c0a1
        __asm _emit 0xeb
        __asm _emit 0x21
        push 636df0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 E1 F8 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xe1
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x54c09a
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 80004001h
        ; Exact mapped bytes EB 07: jmp 0x54c0a1
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

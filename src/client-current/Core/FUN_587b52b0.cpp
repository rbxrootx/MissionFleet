// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B52B0 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_587b52b0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5B 02 00 00: call 0x587b5520
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3B: je 0x587b530f
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 0D: shr cx, 0xd
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0d
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x587b52f7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA FF FF FF: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes 75 02: jne 0x587b530d
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x587b530f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB BF: jmp 0x587b52ce
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov esp, ebp
        pop ebp
        ret 4
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58711450 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_58711450_58711450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 74 58: je 0x587114c7
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 2474h]
        xor edx, edx
        mov ecx, 0fh
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 2D: jne 0x587114b2
        __asm _emit 0x75
        __asm _emit 0x2d
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58711497
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 15: jge 0x587114b2
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 8ch]
        ; Exact mapped bytes E8 D1 E3 D8 FF: call 0x5849f880
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe3
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB DC: jmp 0x5871148e
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2474h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2474h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}

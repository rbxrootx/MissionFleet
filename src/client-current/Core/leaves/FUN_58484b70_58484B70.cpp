// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58484B70 .. +0x186 bytes.
extern "C" __declspec(naked) void FUN_58484b70_58484B70() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 E2 FF FF: call 0x58482db0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 E1 FF FF: call 0x58482cf0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 24 01 00 00: mov word ptr [ecx + 0x124], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 22 01 00 00: mov word ptr [eax + 0x122], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 20 01 00 00: mov word ptr [edx + 0x120], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 130h], 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 12ah]
        cmp edx, 4
        ; Exact mapped bytes 75 41: jne 0x58484c08
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 128h]
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x58484be0
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 0A 00 00: call 0x58485600
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 23: jmp 0x58484c03
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 128h]
        cmp eax, 2
        ; Exact mapped bytes 75 0B: jne 0x58484bfa
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 08 00 00: call 0x584854b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x58484c03
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE 00 00 00: call 0x58484d00
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x58484cf2
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 12ah]
        cmp edx, 1
        ; Exact mapped bytes 75 41: jne 0x58484c58
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 128h]
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x58484c30
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 09 00 00: call 0x58485600
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 23: jmp 0x58484c53
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 128h]
        cmp eax, 2
        ; Exact mapped bytes 75 0B: jne 0x58484c4a
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 08 00 00: call 0x584854b0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x58484c53
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE 04 00 00: call 0x58485110
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x58484cf2
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 12ah]
        cmp edx, 6
        ; Exact mapped bytes 75 3E: jne 0x58484ca5
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 128h]
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x58484c80
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 09 00 00: call 0x58485600
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 23: jmp 0x58484ca3
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 128h]
        cmp eax, 2
        ; Exact mapped bytes 75 0B: jne 0x58484c9a
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 08 00 00: call 0x584854b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x58484ca3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E 06 00 00: call 0x584852e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4D: jmp 0x58484cf2
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 128h]
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x58484cbe
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 09 00 00: call 0x58485600
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 34: jmp 0x58484cf2
        __asm _emit 0xeb
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 128h]
        cmp ecx, 1
        ; Exact mapped bytes 75 0B: jne 0x58484cd8
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 02 00 00: call 0x58484ef0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1A: jmp 0x58484cf2
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 128h]
        cmp eax, 3
        ; Exact mapped bytes 75 02: jne 0x58484ce9
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 09: jmp 0x58484cf2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF 07 00 00: call 0x584854b0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

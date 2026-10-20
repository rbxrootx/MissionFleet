// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873DAF0 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_5873daf0_5873DAF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5873db0b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0fh
        ; Exact mapped bytes 7D 2D: jge 0x5873db3e
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 1B: je 0x5873db3c
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 55 84 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C4: jmp 0x5873db02
        __asm _emit 0xeb
        __asm _emit 0xc4
        movzx eax, word ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 10h
        ; Exact mapped bytes 77 52: ja 0x5873db9d
        __asm _emit 0x77
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 8D A4 DB 73 58: jmp dword ptr [ecx*4 + 0x5873dba4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0xdb
        __asm _emit 0x73
        __asm _emit 0x58
        movzx edx, word ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 588b47f0h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 14h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 19 84 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 23: jmp 0x5873db9d
        __asm _emit 0xeb
        __asm _emit 0x23
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 588b47f0h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F4 83 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x83
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

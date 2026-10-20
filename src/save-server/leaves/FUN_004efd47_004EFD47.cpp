// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EFD47 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_004efd47_004EFD47() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 DE FF FF: call 0x4edb6e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 9
        ; Exact mapped bytes 77 37: ja 0x4efdaa
        __asm _emit 0x77
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [ecx + 4efddch]
        ; Exact mapped bytes FF 24 85 D4 FD 4E 00: jmp dword ptr [eax*4 + 0x4efdd4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0x4e
        __asm _emit 0x00
        ; Exact mapped bytes EB 46: jmp 0x4efdcd
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x4efda4
        __asm _emit 0x74
        __asm _emit 0x14
        push 415h
        push 677c28h
        ; Exact mapped bytes E8 A1 8F 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4efda4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4efd87
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4efdc7
        __asm _emit 0x74
        __asm _emit 0x14
        push 417h
        push 677c28h
        ; Exact mapped bytes E8 7E 8F 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4efdc7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4efdaa
        __asm _emit 0x75
        __asm _emit 0xdd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

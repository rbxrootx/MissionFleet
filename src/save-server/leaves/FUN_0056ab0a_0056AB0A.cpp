// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056AB0A .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_0056ab0a_0056AB0A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 41: je 0x56ab6e
        __asm _emit 0x74
        __asm _emit 0x41
        push 63d0d0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 F6 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xf6
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56ab52
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b9h
        push 67d38ch
        ; Exact mapped bytes E8 F3 E1 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe1
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56ab52
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x56ab2d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 58 F8 FF: call 0x4f03ee
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 84 00 00 00: call dword ptr [edx + 0x84]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0dch], 0
        ; Exact mapped bytes 74 0E: je 0x56ab88
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes E8 98 9A FA FF: call 0x514620
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0e0h], 0
        ; Exact mapped bytes 74 0E: je 0x56aba2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0e0h]
        ; Exact mapped bytes E8 7E 9A FA FF: call 0x514620
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x9a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 66 83 FA FF: call 0x512f10
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}

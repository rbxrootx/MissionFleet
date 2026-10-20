// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BAA60 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_587baa60_587BAA60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588bdf8ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0f4h], 0
        ; Exact mapped bytes 74 39: je 0x587baab7
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 13: je 0x587baaa3
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x587baaaa
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f4h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0f0h], 0
        ; Exact mapped bytes 74 39: je 0x587baafc
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x587baae8
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x587baaef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f0h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C A0 FF FF: call 0x587b4b60
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

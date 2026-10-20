// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879AC2 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_58879ac2_58879AC2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 0B: jne 0x58879ad8
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        cmp byte ptr [eax], 35h
        setge al
        pop ebp
        ret
        ; Exact mapped bytes E8 03 87 FF FF: call 0x588721e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x58879b0e
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [ebp + 0ch]
        mov al, byte ptr [edx]
        cmp al, 35h
        ; Exact mapped bytes 7F 20: jg 0x58879b0a
        __asm _emit 0x7f
        __asm _emit 0x20
        ; Exact mapped bytes 7C 60: jl 0x58879b4c
        __asm _emit 0x7c
        __asm _emit 0x60
        push dword ptr [ebp + 14h]
        lea eax, [edx + 1]
        push eax
        ; Exact mapped bytes E8 A7 FF FF FF: call 0x58879a9f
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 75 0C: jne 0x58879b0a
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 49: je 0x58879b4c
        __asm _emit 0x74
        __asm _emit 0x49
        mov al, byte ptr [edx - 1]
        and al, 1
        pop ebp
        ret
        mov al, 1
        pop ebp
        ret
        cmp eax, 200h
        ; Exact mapped bytes 75 19: jne 0x58879b2e
        __asm _emit 0x75
        __asm _emit 0x19
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7F FF FF FF: call 0x58879a9f
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 26: je 0x58879b4c
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp + 10h], 2dh
        ; Exact mapped bytes 74 20: je 0x58879b4c
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes EB DC: jmp 0x58879b0a
        __asm _emit 0xeb
        __asm _emit 0xdc
        cmp eax, 100h
        ; Exact mapped bytes 75 17: jne 0x58879b4c
        __asm _emit 0x75
        __asm _emit 0x17
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5F FF FF FF: call 0x58879a9f
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 06: je 0x58879b4c
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 2dh
        ; Exact mapped bytes 74 BE: je 0x58879b0a
        __asm _emit 0x74
        __asm _emit 0xbe
        xor al, al
        pop ebp
        ret
    }
}

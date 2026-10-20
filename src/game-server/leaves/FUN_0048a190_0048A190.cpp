// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048A190 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_0048a190_0048A190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 198h
        push esi
        push edi
        lea edi, [ebp - 198h]
        mov ecx, 66h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 09: jne 0x48a1bc
        __asm _emit 0x75
        __asm _emit 0x09
        lea eax, [ebp - 190h]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 66 C7 85 68 FE FF FF 02 00: mov word ptr [ebp - 0x198], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 66 8B 95 68 FE FF FF: mov dx, word ptr [ebp - 0x198]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push edx
        ; Exact mapped bytes FF 15 1C 29 5E 00: call dword ptr [0x5e291c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 00 E6 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 194h], eax
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 74 04: je 0x48a1f3
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4B: jmp 0x48a23e
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp ecx, 2
        ; Exact mapped bytes 75 19: jne 0x48a218
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        sar eax, 8
        and eax, 0ffh
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x48a239
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        push 0
        push 5c489ch
        ; Exact mapped bytes E8 5B 36 08 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 48 29 5E 00: call dword ptr [0x5e2948]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AB E5 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x48a23e
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        add esp, 198h
        cmp ebp, esp
        ; Exact mapped bytes E8 93 E5 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

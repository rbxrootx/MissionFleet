// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042C540 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_0042c540_0042C540() {
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
        ; Exact mapped bytes 75 09: jne 0x42c56c
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
        ; Exact mapped bytes FF 15 74 C1 68 00: call dword ptr [0x68c174]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 60 88 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 194h], eax
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 74 04: je 0x42c5a3
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4B: jmp 0x42c5ee
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        cmp ecx, 2
        ; Exact mapped bytes 75 19: jne 0x42c5c8
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
        ; Exact mapped bytes 74 21: je 0x42c5e9
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        push 0
        push 6708dch
        ; Exact mapped bytes E8 0B A5 0C 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa5
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 64 C1 68 00: call dword ptr [0x68c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0B 88 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x42c5ee
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        add esp, 198h
        cmp ebp, esp
        ; Exact mapped bytes E8 F3 87 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

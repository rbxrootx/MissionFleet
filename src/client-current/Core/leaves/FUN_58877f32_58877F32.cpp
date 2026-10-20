// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877F32 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_58877f32_58877F32() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        ; Exact mapped bytes E8 61 0C FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 8]
        mov edi, eax
        push 2
        lea eax, [ebp - 4]
        mov ecx, esi
        push eax
        and ecx, 3ffh
        push 20000001h
        or ecx, 400h
        push ecx
        ; Exact mapped bytes FF 15 AC 41 89 58: call dword ptr [0x588941ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 39: je 0x58877fa1
        __asm _emit 0x74
        __asm _emit 0x39
        cmp esi, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 2F: je 0x58877f9c
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 29: je 0x58877f9c
        __asm _emit 0x74
        __asm _emit 0x29
        mov esi, dword ptr [edi + 50h]
        lea ecx, [esi + 2]
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        add esi, 2
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 F5: jne 0x58877f79
        __asm _emit 0x75
        __asm _emit 0xf5
        push dword ptr [edi + 50h]
        sub esi, ecx
        sar esi, 1
        ; Exact mapped bytes E8 F7 FA FF FF: call 0x58877a87
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        xor ecx, ecx
        cmp eax, esi
        setne cl
        mov eax, ecx
        ; Exact mapped bytes EB 07: jmp 0x58877fa3
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x58877fa3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        leave
        ret
    }
}

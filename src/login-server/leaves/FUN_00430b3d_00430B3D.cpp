// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430B3D .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_00430b3d_00430B3D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov edx, 111h
        cmp eax, edx
        push esi
        ; Exact mapped bytes 77 6C: ja 0x430bbc
        __asm _emit 0x77
        __asm _emit 0x6c
        ; Exact mapped bytes 74 42: je 0x430b94
        __asm _emit 0x74
        __asm _emit 0x42
        cmp eax, 2bh
        ; Exact mapped bytes 0F 82 8C 00 00 00: jb 0x430be7
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2fh
        ; Exact mapped bytes 76 71: jbe 0x430bd1
        __asm _emit 0x76
        __asm _emit 0x71
        cmp eax, 39h
        ; Exact mapped bytes 74 6C: je 0x430bd1
        __asm _emit 0x74
        __asm _emit 0x6c
        cmp eax, 4eh
        ; Exact mapped bytes 75 7D: jne 0x430be7
        __asm _emit 0x75
        __asm _emit 0x7d
        mov eax, dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 8], esi
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [eax + 8]
        xor esi, esi
        lea eax, [ebp - 8]
        push esi
        push eax
        movzx eax, dx
        or eax, 0bc4e0000h
        push eax
        push esi
        ; Exact mapped bytes E8 E9 0E 00 00: call 0x431a78
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x430c20
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor esi, esi
        shr eax, 10h
        push esi
        or eax, 0bd110000h
        push esi
        push eax
        push esi
        ; Exact mapped bytes E8 CE 0E 00 00: call 0x431a78
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x430c1e
        __asm _emit 0x74
        __asm _emit 0x70
        mov ecx, dword ptr [ebp + 14h]
        push 1
        cmp ecx, esi
        pop eax
        ; Exact mapped bytes 74 68: je 0x430c20
        __asm _emit 0x74
        __asm _emit 0x68
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 64: jmp 0x430c20
        __asm _emit 0xeb
        __asm _emit 0x64
        cmp eax, 114h
        ; Exact mapped bytes 72 24: jb 0x430be7
        __asm _emit 0x72
        __asm _emit 0x24
        cmp eax, 115h
        ; Exact mapped bytes 76 07: jbe 0x430bd1
        __asm _emit 0x76
        __asm _emit 0x07
        cmp eax, 210h
        ; Exact mapped bytes 75 16: jne 0x430be7
        __asm _emit 0x75
        __asm _emit 0x16
        push dword ptr [ebp + 14h]
        add eax, 0bc00h
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 36 F5 FF FF: call 0x43011b
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 39: jmp 0x430c20
        __asm _emit 0xeb
        __asm _emit 0x39
        cmp eax, 132h
        ; Exact mapped bytes 72 30: jb 0x430c1e
        __asm _emit 0x72
        __asm _emit 0x30
        cmp eax, 138h
        ; Exact mapped bytes 77 29: ja 0x430c1e
        __asm _emit 0x77
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 0ch]
        add eax, 0fffffeceh
        push edi
        mov edi, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 0ch]
        push edi
        xor esi, esi
        push eax
        push esi
        push 0bc19h
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E8 02 F5 FF FF: call 0x43011b
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [edi], esi
        pop edi
        ; Exact mapped bytes 75 02: jne 0x430c20
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        pop esi
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}

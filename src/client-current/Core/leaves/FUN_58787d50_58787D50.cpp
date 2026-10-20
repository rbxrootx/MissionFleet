// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58787D50 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58787d50_58787D50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x58787d7d
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x58787e16
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp + 8]
        mov byte ptr [edx + 6bh], al
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 74 09: je 0x58787d95
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ebp + 0ch]
        mov byte ptr [ecx + 6ah], dl
        mov eax, dword ptr [ebp + 8]
        sub eax, 1
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 17 EC CF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xec
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, eax
        mov eax, dword ptr [ebp + 8]
        cdq
        mov esi, 6
        idiv esi
        imul edx, edx, 47h
        add ecx, edx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 E7 42 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x42
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 14: je 0x58787de6
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 6
        idiv ecx
        imul edx, eax, 53h
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E 76 D1 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x76
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 AC E4 FF: call 0x585d2a10
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xac
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 6ah]
        cmp eax, edx
        ; Exact mapped bytes 74 0B: je 0x58787e14
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD E0 CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xe0
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov al, 1
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

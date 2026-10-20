// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585901C0 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_585901c0_585901C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 0ch], cl
        imul edx, dword ptr [ebp + 0ch], 3ch
        imul eax, edx, 19h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 15: je 0x585901fd
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 51 0E 2A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0e
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        movzx eax, byte ptr [eax + 0ch]
        mov ecx, 3
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 29 0E 2A 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0e
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0ch]
        imul ecx, eax, 3
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 CF CB 2B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xcb
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58590256
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 0ch]
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 74 11: je 0x58590273
        __asm _emit 0x74
        __asm _emit 0x11
        imul ecx, dword ptr [ebp - 8], 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov byte ptr [eax + ecx + 2], 0feh
        ; Exact mapped bytes EB DA: jmp 0x5859024d
        __asm _emit 0xeb
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 15: je 0x58590291
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 BD 0D 2A 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x0d
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        push 20h
        ; Exact mapped bytes E8 AA 0D 2A 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 8], eax
        push 20h
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 59 CB 2B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xcb
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

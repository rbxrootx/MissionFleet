// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054A830 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_0054a830_0054A830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x54a848
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 4ch
        ; Exact mapped bytes 73 29: jae 0x54a877
        __asm _emit 0x73
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx*8 + 63a528h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7E E4 F0 FF: call 0x458ce0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xe4
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x54a875
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx*8 + 63a52ch]
        ; Exact mapped bytes EB 7B: jmp 0x54a8f0
        __asm _emit 0xeb
        __asm _emit 0x7b
        ; Exact mapped bytes EB C8: jmp 0x54a83f
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov edx, dword ptr [ebp + 8]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        push eax
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        push 678f24h
        push 6870d0h
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x54a8b6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 2F: jge 0x54a8eb
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 8]
        push ecx
        push 678f38h
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 8]
        push eax
        push 6870d0h
        ; Exact mapped bytes FF 15 E0 B9 68 00: call dword ptr [0x68b9e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB C2: jmp 0x54a8ad
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov eax, 6870d0h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

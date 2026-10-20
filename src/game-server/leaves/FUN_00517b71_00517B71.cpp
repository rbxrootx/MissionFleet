// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517B71 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_00517b71_00517B71() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 297h
        push 5c8c2ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 D0 35 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x517bb5
        __asm _emit 0x75
        __asm _emit 0x14
        push 298h
        push 5c8c2ch
        ; Exact mapped bytes E8 50 CE 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517bb5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x517b90
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F4 FA FF FF: call 0x5176bf
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0bh]
        and eax, 0ffh
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffh
        cmp eax, ecx
        ; Exact mapped bytes 75 1D: jne 0x517bfd
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 0ch]
        and edx, 0ffh
        mov eax, dword ptr [ebp + 0ch]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffh
        cmp edx, eax
        ; Exact mapped bytes 74 32: je 0x517c2f
        __asm _emit 0x74
        __asm _emit 0x32
        mov cl, byte ptr [ebp + 0ch]
        mov byte ptr [ebp - 0bh], cl
        mov edx, dword ptr [ebp + 0ch]
        shr edx, 10h
        and edx, 0ffffh
        mov byte ptr [ebp - 0ch], dl
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 00 FB FF FF: call 0x517722
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 84h], 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}

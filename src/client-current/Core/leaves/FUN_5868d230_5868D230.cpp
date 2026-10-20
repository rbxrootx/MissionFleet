// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868D230 .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_5868d230_5868D230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 6B FF FF: call 0x58683e00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 100h
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x5868d36c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 1
        movzx eax, byte ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF 45 00 00: call 0x58691840
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + ecx*4 + 5d0h]
        and al, 1fh
        mov cl, byte ptr [ebp - 8]
        and cl, 0e0h
        or cl, al
        mov byte ptr [ebp - 8], cl
        mov dl, byte ptr [ebp - 8]
        and dl, 1fh
        mov byte ptr [ebp - 8], dl
        mov al, byte ptr [ebp + 8]
        mov byte ptr [ebp - 6], al
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 184h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 184h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        imul eax, edx, 0
        mov cl, byte ptr [ecx + eax]
        mov byte ptr [ebp - 7], cl
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        xor ecx, 0a0e6b2d0h
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov dword ptr [edx + eax], ecx
        push 4
        lea eax, [ebp - 8]
        push eax
        push 16h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD 9A F5 FF: call 0x585e6e20
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x9a
        __asm _emit 0xf5
        __asm _emit 0xff
        push 1bh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 77 DF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x77
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 78 EA 12 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xea
        __asm _emit 0x12
        __asm _emit 0x00
        push 1bh
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 77 DF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x77
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

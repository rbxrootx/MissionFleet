// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B4D0 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_5879b4d0_5879B4D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888082dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov eax, ecx
        mov dword ptr [ebp - 14h], 0fh
        shr eax, 8
        cmp dword ptr [ebp - 14h], 0fh
        movzx esi, cl
        lea ecx, [ebp - 28h]
        movzx edx, al
        mov eax, 20202020h
        cmova ecx, eax
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 11 45 D8: movups xmmword ptr [ebp - 0x28], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        mov dword ptr [ebp - 28h], eax
        movzx eax, byte ptr [edx*2 + 588b70f8h]
        mov dword ptr [ebp - 18h], 4
        mov byte ptr [ebp - 24h], 0
        mov byte ptr [ecx], al
        lea ecx, [ebp - 28h]
        cmp dword ptr [ebp - 14h], 0fh
        movzx eax, byte ptr [edx*2 + 588b70f9h]
        lea edx, [ebp - 28h]
        cmova ecx, dword ptr [ebp - 28h]
        mov byte ptr [ecx + 1], al
        lea ecx, [ebp - 28h]
        cmp dword ptr [ebp - 14h], 0fh
        movzx eax, byte ptr [esi*2 + 588b70f8h]
        cmova ecx, dword ptr [ebp - 28h]
        mov byte ptr [ecx + 2], al
        cmp dword ptr [ebp - 14h], 0fh
        movzx eax, byte ptr [esi*2 + 588b70f9h]
        cmova edx, dword ptr [ebp - 28h]
        mov byte ptr [edx + 3], al
        push 2
        push 588b7384h
        mov ecx, edi
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 09 A7 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa7
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0fh
        lea ecx, [ebp - 28h]
        push dword ptr [ebp - 18h]
        cmova ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 F3 A6 D2 FF: call 0x584c5ca0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xa6
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, 0fh
        ; Exact mapped bytes 76 28: jbe 0x5879b5dd
        __asm _emit 0x76
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 28h]
        inc ecx
        mov eax, edx
        cmp ecx, 1000h
        ; Exact mapped bytes 72 10: jb 0x5879b5d3
        __asm _emit 0x72
        __asm _emit 0x10
        mov edx, dword ptr [eax - 4]
        add ecx, 23h
        sub eax, edx
        add eax, -4
        cmp eax, 1fh
        ; Exact mapped bytes 77 25: ja 0x5879b5f8
        __asm _emit 0x77
        __asm _emit 0x25
        push ecx
        push edx
        ; Exact mapped bytes E8 5A 5A 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 5C 5A 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 D2 59 0B 00: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0x00
    }
}

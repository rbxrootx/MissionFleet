// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AE340 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_586ae340_586AE340() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x586ae408
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 66 DD FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x66
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 66 DD FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x66
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 14h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 F9 20 E2 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x20
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

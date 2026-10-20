// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58714C20 .. +0x1B9 bytes.
extern "C" __declspec(naked) void FUN_58714c20_58714C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
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
        mov edx, 0fffdh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A9 AB D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xab
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 33 11 D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x11
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 9ch]
        mov dword ptr [ebp - 14h], eax
        push 6
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7D AB D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xab
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 07 11 D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x11
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 51 AB D8 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xab
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DB 10 D7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x10
        __asm _emit 0xd7
        __asm _emit 0xff
        push 1f2h
        push 2edh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 6B E5 FF: call 0x5856b870
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6b
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 98h]
        ; Exact mapped bytes E8 9A FC D6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 75 28: jne 0x58714d53
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        nop
        ; Exact mapped bytes EB 39: jmp 0x58714d8c
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 5F FC D6 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 75 26: jne 0x58714d8c
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 30h], eax
        push 1
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        nop
        push 32h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 FC D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0F 70 0A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0x0a
        __asm _emit 0x00
        push 32h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 FC D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfc
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 C4: call dword ptr [ebp - 0x3c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc4
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

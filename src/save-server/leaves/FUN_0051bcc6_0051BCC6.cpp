// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051BCC6 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_0051bcc6_0051BCC6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 8], 0ffffffffh
        mov ecx, 68709ch
        ; Exact mapped bytes E8 27 83 02 00: call 0x544010
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9A A5 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 210h
        cmp eax, 10h
        ; Exact mapped bytes 75 56: jne 0x51bd54
        __asm _emit 0x75
        __asm _emit 0x56
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C3 2D 01 00: call 0x52eacb
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 ED 25 01 00: call 0x52e300
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, eax
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 7D 31: jge 0x51bd4f
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 26 28 01 00: call 0x52e54c
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ebp + 0ch]
        cdq
        idiv dword ptr [ebp - 0ch]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 2
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 0D: jge 0x51bd4f
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x51bdd8
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F0 27 01 00: call 0x52e54c
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 09: jmp 0x51bd6a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8E 25 01 00: call 0x52e300
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 61: jge 0x51bdd8
        __asm _emit 0x7d
        __asm _emit 0x61
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 48 64 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B7 29 01 00: call 0x52e746
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 8B 66 01 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x51bdd6
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 20h]
        lea eax, [edx + ecx + 2]
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 0D: jge 0x51bdd4
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 02: jmp 0x51bdd8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 89: jmp 0x51bd61
        __asm _emit 0xeb
        __asm _emit 0x89
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

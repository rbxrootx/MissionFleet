// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585081F0 .. +0x1BC bytes.
extern "C" __declspec(naked) void FUN_585081f0_585081F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888072dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 B3 F0 FB FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5850824f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8ch]
        add eax, 1
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 8ch], 5
        ; Exact mapped bytes 0F 8D 0A 01 00 00: jge 0x58508366
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        lea edx, [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 64 FB FF FF: call 0x58507dd0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 8ch]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 BD 03 00 00: call 0x58508640
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 AE AB FF FF: call 0x58502e40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 4E: jne 0x585082e7
        __asm _emit 0x75
        __asm _emit 0x4e
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 3F C7 F7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 76 33: jbe 0x585082d8
        __asm _emit 0x76
        __asm _emit 0x33
        push 588a3af4h
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 70h]
        push ecx
        ; Exact mapped bytes E8 59 ED FB FF: call 0x584c7010
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 94h], eax
        mov edx, dword ptr [ebp - 94h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 51 D0 FB FF: call 0x584c5320
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xff
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 59 1A FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        lea eax, [ebp - 58h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 3C 9E FF FF: call 0x58502120
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 61: jmp 0x58508348
        __asm _emit 0xeb
        __asm _emit 0x61
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 51 AB FF FF: call 0x58502e40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 52: jne 0x58508348
        __asm _emit 0x75
        __asm _emit 0x52
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E2 C6 F7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xc6
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 76 39: jbe 0x5850833b
        __asm _emit 0x76
        __asm _emit 0x39
        push 588a3afch
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 88h]
        push eax
        ; Exact mapped bytes E8 F9 EC FB FF: call 0x584c7010
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xec
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F1 CF FB FF: call 0x584c5320
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 F6 19 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        lea edx, [ebp - 40h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D9 9D FF FF: call 0x58502120
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 DC 19 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 D0 19 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DA FE FF FF: jmp 0x58508240
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E CF FB FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 90h]
        or ecx, 1
        mov dword ptr [ebp - 90h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A0 19 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 A8 8C 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

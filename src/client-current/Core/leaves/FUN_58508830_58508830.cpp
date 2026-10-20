// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58508830 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_58508830_58508830() {
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
        sub esp, 28h
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
        mov dword ptr [ebp - 34h], 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 79 EA FB FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xea
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58508880
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 2
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 28: jge 0x585088b0
        __asm _emit 0x7d
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 2ch]
        movzx eax, byte ptr [edx + 1]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 65 F0 FF FF: call 0x58507900
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 2ch]
        movzx edx, byte ptr [ecx]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 53 F0 FF FF: call 0x58507900
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C7: jmp 0x58508877
        __asm _emit 0xeb
        __asm _emit 0xc7
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 88 A5 FF FF: call 0x58502e40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x585088da
        __asm _emit 0x75
        __asm _emit 0x1b
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 49 18 00 00: call 0x5850a110
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 20h
        ; Exact mapped bytes 75 0B: jne 0x585088da
        __asm _emit 0x75
        __asm _emit 0x0b
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 39 31 00 00: call 0x5850ba10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB D6: jmp 0x585088b0
        __asm _emit 0xeb
        __asm _emit 0xd6
        push 0
        push 20h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7A 28 00 00: call 0x5850b160
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], -1
        ; Exact mapped bytes 74 0F: je 0x585088fe
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 30h]
        push edx
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 73 27 00 00: call 0x5850b070
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 C9 FB FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xc9
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 34h]
        or ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 0E 14 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x14
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
        ; Exact mapped bytes E8 16 87 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x87
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

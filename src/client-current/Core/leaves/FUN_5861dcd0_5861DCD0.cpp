// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861DCD0 .. +0x11F bytes.
extern "C" __declspec(naked) void FUN_5861dcd0_5861DCD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0cch], 0
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x5861ddeb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0d1ch], 0
        ; Exact mapped bytes 75 09: jne 0x5861dcfe
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 07: jmp 0x5861dd05
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0d1ch], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0d1ch], 0
        ; Exact mapped bytes 74 68: je 0x5861dd85
        __asm _emit 0x74
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d14h]
        mov dword ptr [ebp - 18h], eax
        push 588ae68ch
        ; Exact mapped bytes E8 BD 42 F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x42
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 10101h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 50 97 E9 FF: call 0x584b74a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x97
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5861dd63
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 1A: jge 0x5861dd83
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 54h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 60 81 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x81
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x5861dd5a
        __asm _emit 0xeb
        __asm _emit 0xd7
        ; Exact mapped bytes EB 66: jmp 0x5861ddeb
        __asm _emit 0xeb
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d14h]
        mov dword ptr [ebp - 24h], ecx
        push 588ae6b0h
        ; Exact mapped bytes E8 55 42 F0 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x42
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 10101h
        push 0
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E8 96 E9 FF: call 0x584b74a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5861ddcb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 1A: jge 0x5861ddeb
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 54h]
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F8 80 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x80
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x5861ddc2
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov esp, ebp
        pop ebp
        ret
    }
}

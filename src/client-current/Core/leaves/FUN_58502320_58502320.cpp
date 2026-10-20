// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502320 .. +0x20D bytes.
extern "C" __declspec(naked) void FUN_58502320_58502320() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588800f6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1bch
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
        push 104h
        push 0
        lea eax, [ebp - 114h]
        push eax
        ; Exact mapped bytes E8 B2 AA 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xaa
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        push 104h
        lea ecx, [ebp - 114h]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 E4 42 89 58: call dword ptr [0x588942e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 588a3890h
        lea edx, [ebp - 114h]
        push edx
        lea ecx, [ebp - 15ch]
        ; Exact mapped bytes E8 43 77 FA FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x77
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        mov eax, dword ptr [ebp - 164h]
        mov dword ptr [ebp - 168h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 168h]
        push ecx
        push 588a3894h
        lea edx, [ebp - 144h]
        push edx
        ; Exact mapped bytes E8 C2 ED FF FF: call 0x58501180
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 16ch], eax
        mov eax, dword ptr [ebp - 16ch]
        mov dword ptr [ebp - 170h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        lea edx, [ebp - 12ch]
        push edx
        ; Exact mapped bytes E8 76 C7 FC FF: call 0x584ceb60
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 144h]
        ; Exact mapped bytes E8 34 79 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x79
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 15ch]
        ; Exact mapped bytes E8 25 79 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x79
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2C 0A 00 00: call 0x58502e40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x5850243b
        __asm _emit 0x75
        __asm _emit 0x20
        push 588a3898h
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 B5 C9 FC FF: call 0x584cede0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 E6 FC FF FF: call 0x58502120
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 44h
        push 0
        lea edx, [ebp - 1c8h]
        push edx
        ; Exact mapped bytes E8 C5 A9 34 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa9
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        mov dword ptr [ebp - 184h], eax
        mov dword ptr [ebp - 180h], eax
        mov dword ptr [ebp - 17ch], eax
        mov dword ptr [ebp - 178h], eax
        mov dword ptr [ebp - 1c8h], 44h
        lea ecx, [ebp - 184h]
        push ecx
        lea edx, [ebp - 1c8h]
        push edx
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 27 FB FF FF: call 0x58501fc0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 0
        ; Exact mapped bytes FF 15 08 42 89 58: call dword ptr [0x58894208]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 174h], eax
        cmp dword ptr [ebp - 174h], 0
        ; Exact mapped bytes 75 21: jne 0x585024d2
        __asm _emit 0x75
        __asm _emit 0x21
        mov byte ptr [ebp - 15dh], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 66 78 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0xff
        mov al, byte ptr [ebp - 15dh]
        ; Exact mapped bytes EB 42: jmp 0x58502514
        __asm _emit 0xeb
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 180h]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 184h]
        push ecx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes FF 15 0C 42 89 58: call dword ptr [0x5889420c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov byte ptr [ebp - 15eh], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 12ch]
        ; Exact mapped bytes E8 22 78 FA FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x78
        __asm _emit 0xfa
        __asm _emit 0xff
        mov al, byte ptr [ebp - 15eh]
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
        ; Exact mapped bytes E8 27 EB 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xeb
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

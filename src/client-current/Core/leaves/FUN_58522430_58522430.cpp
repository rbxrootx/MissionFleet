// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58522430 .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_58522430_58522430() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888192dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 6ch
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
        push 588a42c4h
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 6B 76 F8 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 68h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 FA EC FD FF: call 0x58501180
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 9B 78 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E8 F5 F8 FF FF: call 0x58521d90
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 58h]
        push ecx
        ; Exact mapped bytes E8 BC D8 FF FF: call 0x5851fd60
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 70h], edx
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 70h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 60 FC FD FF: call 0x58502120
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 64 78 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        push 588a42c8h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 06 C9 FA FF: call 0x584cede0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc9
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E8 B1 F8 FF FF: call 0x58521d90
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 12 DA FF FF: call 0x5851ff00
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 09: jle 0x585224fb
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 60h], 1
        ; Exact mapped bytes EB 07: jmp 0x58522502
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 60h], 0
        mov dl, byte ptr [ebp - 60h]
        mov byte ptr [ebp - 59h], dl
        movzx eax, byte ptr [ebp - 59h]
        mov dword ptr [ebp - 78h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 12 78 F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 78h]
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
        ; Exact mapped bytes E8 1A EB 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xeb
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

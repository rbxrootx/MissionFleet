// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C5900 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_584c5900_584C5900() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ebfbh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 174h
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
        push 58895b74h
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 95 41 FE FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 104h
        push 0
        lea eax, [ebp - 120h]
        push eax
        ; Exact mapped bytes E8 BB 74 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x74
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        push 104h
        lea ecx, [ebp - 120h]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 E4 42 89 58: call dword ptr [0x588942e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 5ch
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes E8 E6 03 00 00: call 0x584c5d60
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        add eax, 1
        mov dword ptr [ebp - 170h], eax
        mov eax, dword ptr [ebp - 170h]
        mov byte ptr [eax], 0
        lea ecx, [ebp - 138h]
        push ecx
        lea edx, [ebp - 120h]
        push edx
        lea ecx, [ebp - 168h]
        ; Exact mapped bytes E8 28 41 FE FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        mov eax, dword ptr [ebp - 174h]
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 178h]
        push ecx
        lea edx, [ebp - 150h]
        push edx
        ; Exact mapped bytes E8 5F F7 FF FF: call 0x584c5130
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 17ch], eax
        mov eax, dword ptr [ebp - 17ch]
        push eax
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 34 F9 FF FF: call 0x584c5320
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 150h]
        ; Exact mapped bytes E8 39 43 FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 168h]
        ; Exact mapped bytes E8 2A 43 FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        xor ecx, ecx
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 22 03 00 00: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 8
        lea edx, [ebp - 1ch]
        push edx
        push 58895b88h
        push 58895b8ch
        push 58895b9ch
        ; Exact mapped bytes FF 15 BC 42 89 58: call dword ptr [0x588942bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0ah
        push 0
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 2B 1C 39 00: call 0x58857672
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x1c
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 180h], eax
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 74 09: je 0x584c5a62
        __asm _emit 0x74
        __asm _emit 0x09
        mov byte ptr [ebp - 169h], 1
        ; Exact mapped bytes EB 07: jmp 0x584c5a69
        __asm _emit 0xeb
        __asm _emit 0x07
        mov byte ptr [ebp - 169h], 0
        mov cl, byte ptr [ebp - 169h]
        mov byte ptr [ebp - 16ah], cl
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 A9 42 FE FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, byte ptr [ebp - 16ah]
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
        ; Exact mapped bytes E8 AD B5 36 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xb5
        __asm _emit 0x36
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF727 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_004ff727_004FF727() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d71fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 38h
        mov dword ptr [ebp - 44h], ecx
        mov eax, dword ptr [ebp - 44h]
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 08 90 FE FF: call 0x4e8759
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 67 2A 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 5A 2C 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 EA C3 02 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 4E 2A 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 41 2C 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 85 C3 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 30 2C 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 B2 81 FE FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        neg edx
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 C3 2D 03 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 0B 2C 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 D8 79 FE FF: call 0x4e7198
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        neg ecx
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 9E 2D 03 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D4 07 00 00: call 0x4fffb8
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 D6 2B 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 EB 7A FE FF: call 0x4e72e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 14h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 34 BE 02 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xbe
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 B6 0A 00 00: call 0x5002cb
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 E7 8F FE FF: call 0x4e880b
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

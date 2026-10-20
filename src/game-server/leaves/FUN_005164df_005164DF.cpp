// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005164DF .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_005164df_005164DF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57dbbfh
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
        ; Exact mapped bytes E8 9C D2 FE FF: call 0x5037a5
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 39 F8 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 4A FA 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D2 5B 02 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 20 F8 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 31 FA 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 6D 5B 02 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 20 FA 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 1A C4 FE FF: call 0x50296d
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        neg edx
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 B3 FB 01 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 FB F9 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 40 BC FE FF: call 0x5021b8
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        neg ecx
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 8E FB 01 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 EB 07 00 00: call 0x516d87
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C6 F9 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 53 BD FE FF: call 0x502300
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 14h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 1C 56 02 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 CD 0A 00 00: call 0x51709a
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 7B D2 FE FF: call 0x503857
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xd2
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

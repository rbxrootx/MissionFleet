// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00410D00 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_00410d00_00410D00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58acd9h
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
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 5ch]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 CD 3F 11 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3f
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 14h]
        push eax
        push 3eah
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6D 03 0C 00: call 0x4d10bf
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 3E 08 FF FF: call 0x40159b
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F1 03 FF FF: call 0x401159
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x410d78
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 19 06 FF FF: call 0x40138e
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2C: je 0x410daa
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D8 3F 11 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x3f
        __asm _emit 0x11
        __asm _emit 0x00
        add eax, 1
        push eax
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 02 C3 0B 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc3
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 80020efch
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7A 93 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB C3: jmp 0x410d6d
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 33 BB 0B 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xbb
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 5ch
        cmp ebp, esp
        ; Exact mapped bytes E8 20 40 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}

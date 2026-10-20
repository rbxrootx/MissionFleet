// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CEF70 .. +0x156 bytes.
extern "C" __declspec(naked) void FUN_586cef70_586CEF70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B1 08 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9B 08 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x08
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 85 08 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6F 08 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 59 08 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x08
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E3 6D DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x6d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 CD 6D DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x6d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B7 6D DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x6d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A1 6D DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x6d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8B 6D DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x6d
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 10000h
        ; Exact mapped bytes 74 02: je 0x586cf067
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 59: jmp 0x586cf0c0
        __asm _emit 0xeb
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C3 07 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x07
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 4D 6D DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x6d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 97 07 DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 21 6D DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x6d
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

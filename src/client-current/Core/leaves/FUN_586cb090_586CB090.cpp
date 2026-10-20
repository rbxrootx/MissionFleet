// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CB090 .. +0x125 bytes.
extern "C" __declspec(naked) void FUN_586cb090_586CB090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        cmp eax, 2
        ; Exact mapped bytes 7E 05: jle 0x586cb0a7
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x586cb1af
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 55 08: mov dx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 91 E0 00 00 00: mov word ptr [ecx + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0e0h]
        cmp ecx, 1
        ; Exact mapped bytes 75 5C: jne 0x586cb120
        __asm _emit 0x75
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 8], edx
        push 43h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 40 9A DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x9a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 41 AE DB FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xae
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 14h], ecx
        push 44h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 15 9A DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x9a
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 16 AE DB FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xae
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x586cb1af
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0e0h]
        cmp ecx, 2
        ; Exact mapped bytes 75 59: jne 0x586cb188
        __asm _emit 0x75
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 20h], edx
        push 45h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D5 99 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x99
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D6 AD DB FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xad
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 2ch], ecx
        push 46h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 AA 99 DB FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x99
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AB AD DB FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xad
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 27: jmp 0x586cb1af
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 95 AD DB FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xad
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 82 AD DB FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xad
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

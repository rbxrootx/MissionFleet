// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58708F80 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_58708f80_58708F80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 02: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 68 86 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58709004
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7D 22: jge 0x5870902e
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 39 86 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0xff
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 2B 86 DC FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [eax + edx], 0
        ; Exact mapped bytes EB CD: jmp 0x58708ffb
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 C7 74 DC FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x74
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 1ech
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 DD DA FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xdd
        __asm _emit 0xda
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 CA FC FF: call 0x586d5b20
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB B9 D7 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb9
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 14h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

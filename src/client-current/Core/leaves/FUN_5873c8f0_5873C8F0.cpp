// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873C8F0 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_5873c8f0_5873C8F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 1E FA FF: call 0x586de780
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0c4h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 68h
        push eax
        ; Exact mapped bytes E8 F9 04 11 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 0ch
        push 50h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 12ch
        push ecx
        ; Exact mapped bytes E8 E3 04 11 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2a8h], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 48 60: mov word ptr [eax + 0x60], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 45 0C: mov ax, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 42 62: mov word ptr [edx + 0x62], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x62
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1c8h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 18 E8 07 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1c8h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 62h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F3 E7 07 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe7
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 64h], ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 258h]
        push eax
        ; Exact mapped bytes 8B 0D 78 06 96 58: mov ecx, dword ptr [0x58960678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 EC DF FF: call 0x5853b610
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xec
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 264h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 04 95 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 264h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E5 94 D4 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x94
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 60h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 12 00 00: call 0x5873dc40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}

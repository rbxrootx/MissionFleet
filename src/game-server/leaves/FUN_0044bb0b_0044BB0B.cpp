// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044BB0B .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_0044bb0b_0044BB0B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 0ch], 31h
        mov dword ptr [ebp - 10h], 0
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 49 A3 FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x44bb52
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7F: jmp 0x44bbd1
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16bdch]
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x44bb80
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 46: jge 0x44bbcc
        __asm _emit 0x7d
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0ah
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 8C 10 2E 01 00 00: mov cx, word ptr [eax + edx + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 5
        ; Exact mapped bytes 75 24: jne 0x44bbca
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0ah
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 8C 10 30 01 00 00: mov cx, word ptr [eax + edx + 0x130]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 0bh
        ; Exact mapped bytes 74 04: je 0x44bbca
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 07: jmp 0x44bbd1
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes EB AB: jmp 0x44bb77
        __asm _emit 0xeb
        __asm _emit 0xab
        mov eax, 1
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 05 CC 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

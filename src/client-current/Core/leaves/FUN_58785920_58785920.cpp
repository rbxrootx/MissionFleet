// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785920 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_58785920_58785920() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 62h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 17: je 0x5878594d
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes E8 65 08 00 00: call 0x587861a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 76 03 00 00: call 0x58785cc0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 72: jmp 0x587859bf
        __asm _emit 0xeb
        __asm _emit 0x72
        movzx edx, word ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 35: je 0x5878598f
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 74 08: je 0x58785968
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 74 02: je 0x58785968
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 57: jmp 0x587859bf
        __asm _emit 0xeb
        __asm _emit 0x57
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 14h], edx
        movzx eax, word ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 44 F9 FF FF: call 0x587852d0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 30: jmp 0x587859bf
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 18h]
        add ecx, 0b8h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 32 FA FF FF: call 0x587853f0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

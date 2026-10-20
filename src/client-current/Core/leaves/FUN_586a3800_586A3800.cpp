// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A3800 .. +0x1B5 bytes.
extern "C" __declspec(naked) void FUN_586a3800_586A3800() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 88h]
        cmp edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 75 5A: jne 0x586a3877
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 218h]
        mov dword ptr [eax + 88h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4B 27 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x27
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 218h]
        mov dword ptr [ebp - 0ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 35 27 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x27
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2a4h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1F 27 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x27
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 3A 01 00 00: jmp 0x586a39b1
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 88h]
        cmp edx, dword ptr [ecx + 218h]
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x586a395c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        ; Exact mapped bytes E8 D3 FA E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfa
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 64h]
        and edx, 10000000h
        ; Exact mapped bytes 74 57: je 0x586a3905
        __asm _emit 0x74
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2a4h]
        mov dword ptr [eax + 88h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BA 26 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x26
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 218h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A4 26 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x26
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2a4h]
        mov dword ptr [ebp - 20h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8E 26 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x26
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 55: jmp 0x586a395a
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [eax + 88h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 24h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 63 26 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x26
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 218h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 4D 26 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x26
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2a4h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 37 26 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x26
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 55: jmp 0x586a39b1
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov dword ptr [eax + 88h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 30h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0C 26 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x26
        __asm _emit 0xde
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 218h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F6 25 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x25
        __asm _emit 0xde
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2a4h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E0 25 DE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x25
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055CC96 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_0055cc96_0055CC96() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A6 CA FF FF: call 0x55974f
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        push edx
        push 5cf224h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E 7E FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6F 80 FD FF: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 5cf238h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 7E FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 81 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 5cf24ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 7E FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D1 7F FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 5cf260h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 7E FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 7E FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        push 5cf278h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F2 7D FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 80 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        push 5cf28ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 7D FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 80 7F FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        push 5cf2a0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC 7D FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8E 80 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        push 5cf2b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9E 7D FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 47 7F FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 559690h
        ; Exact mapped bytes 75 0F: jne 0x55cd9f
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5cf2cch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7E 7D FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x55cdac
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5cf300h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6F 7D FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push 5cf334h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 58 7D FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2A 80 FD FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        push eax
        push 5cf34ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A 7D FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F 7F FD FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        push edx
        push 5cf364h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C 7D FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 61 7F FD FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        push ecx
        push 5cf378h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 7C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 43 7F FD FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        push 5cf390h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 7C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 7F FD FF: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        push 5cf3a0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC 7C FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878ACB0 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_5878acb0_5878ACB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b4h]
        ; Exact mapped bytes E8 80 E9 D5 FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 0fh
        ; Exact mapped bytes 75 5D: jne 0x5878ad35
        __asm _emit 0x75
        __asm _emit 0x5d
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b4h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 99 B2 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b4h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7A B2 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b4h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5C B2 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0c0h]
        ; Exact mapped bytes E8 04 E9 D5 FF: call 0x584e9650
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 0fh
        ; Exact mapped bytes 75 5D: jne 0x5878adb1
        __asm _emit 0x75
        __asm _emit 0x5d
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c0h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1D B2 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb2
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c0h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FE B1 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb1
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c0h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E0 B1 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb1
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a0h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C9 B1 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb1
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B3 B1 CF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb1
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}

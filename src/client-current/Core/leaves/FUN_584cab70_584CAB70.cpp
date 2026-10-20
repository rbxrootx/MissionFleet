// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CAB70 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_584cab70_584CAB70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 68h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8E 2D 2A 00: call 0x5876d930
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x2d
        __asm _emit 0x2a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 10h], edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 79 2D 2A 00: call 0x5876d930
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x2d
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 95 B3 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 79 B3 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5D B3 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 41 B3 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584cac62
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 7D 31: jge 0x584cac99
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 18h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 11 B3 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 34h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FA B2 FB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb2
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C0: jmp 0x584cac59
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 07 00 00: call 0x584cb3f0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
